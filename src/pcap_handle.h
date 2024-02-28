#include <pcap.h>

void pcap_hanler(const char *user, pcap_header_t *header, int len, const char *data);

int setup_pcap(void);
int start_pcap_loop(void);
int clean_up_pcap();

