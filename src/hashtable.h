#ifndef HASHTABLE_H
#define HASHTABle_H

#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define HT_INITIAL_TABLE_SIZE 	64
#define FNV_OFFSET_BASIS	    14695981039346656037UL
#define FNV_PRIME		        1099511628211UL

typedef struct ht_entry{
    char *key;
    char *value;
} ht_entry_t;

typedef struct ht_table
{
    uint32_t    capacity,
                size;
    ht_entry_t  *entry;
} ht_table_t;

ht_table_t *ht_create()
{
	ht_table_t *table = (ht_table_t *)malloc(
			sizeof(ht_table_t));
	table->entry = (ht_entry_t *)malloc(
			sizeof(ht_entry_t) * HT_INITIAL_TABLE_SIZE);
	memset(table->entry, 0, sizeof(ht_entry_t)* table->capacity);
	table->capacity = HT_INITIAL_TABLE_SIZE;
	return table;
}

void ht_destroy(ht_table_t *table)
{
	free(table->entry);
	free(table);
}

uint64_t ht_hash(char *key)
{
	uint64_t hash = FNV_OFFSET_BASIS;
	for(char *c = key; *c; c++)
	{
		hash *= FNV_PRIME;
		hash ^= (uint64_t)(unsigned char)c;
	}
	return hash;
}

int
ht_insert(ht_table_t *table, char *key, char *value)
{
	uint32_t index = ht_hash(key) % table->capacity;
	while(table->entry[index].key != 0)
		index++;
    table->entry[index].key = key;
    table->entry[index].value = value;
    table->size += 1;

    if(table->size > (table->capacity/2))
        ht_expand(table);
}

int
ht_expand(ht_table_t *table)
{
    table->capacity *= 2;
    table->entry = (ht_entry_t *)realloc(table->entry, table->capacity);
    return 1;
}

ht_entry_t *
ht_find(ht_table_t *table, char *key)
{
	uint32_t index = ht_hash(key) % table
#endif
