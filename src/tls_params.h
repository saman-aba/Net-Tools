#define TLS_1_2			0x0303
;jjkbljbljhb
//-----------------------Content-Type-------------------------//
//Unassigned (Requires coordination; see [RFC9443])     0x00-0x13 //[RFC5764][RFC9443]
#define TLS_TYP_CHANGE_CIPHER_SPEC       	            0x14 //[RFC8446]
#define TLS_TYP_ALERT        	                        0x15 //[RFC8446]
#define TLS_TYP_HANDSHAKE        	                    0x16 //[RFC8446]
#define TLS_TYP_APPLICATION_DATA         	            0x17 //[RFC8446]
#define TLS_TYP_HEARTBEAT        	                    0x18 //[RFC6520]
#define TLS_TYP_TLS12_CID        	                    0x19 //[RFC9146]
#define TLS_TYP_ACK      	                            0x1a //[RFC9147]
#define TLS_TYP_RETURN_ROUTABILITY_CHECK                0x1b //[draft-ietf-tls-dtls-rrc-10] (TEMPORARY - registered 2023-11-28, expires 2024-11-28)
//Unassigned                                            0x1c-0x1f
//Reserved                                              0x10-0x3f//[RFC9147]
//Unassigned (Requires coordination; see [RFC9443])    	0x10-0xff//[RFC5764][RFC9443]

//----------------------Handshake-Type------------------------//

#define HS_TYP_HELLO_REQUEST_RESERVED                   0x00 //[RFC8446] Used in TLS versions prior to 1.3.
#define HS_TYP_CLIENT_HELLO                             0x01 //[RFC8446]
#define HS_TYP_SERVER_HELLO                             0x02 //[RFC8446]
#define HS_TYP_HELLO_VERIFY_REQUEST_RESERVED            0x03 //[RFC6347][RFC8446] Assigned for interim draft, but the functionality was moved to a different message.
#define HS_TYP_NEW_SESSION_TICKET                       0x04 //[RFC4507][RFC8446][RFC8447] (renamed from "NewSessionTicket")
#define HS_TYP_END_OF_EARLY_DATA                        0x05 //[RFC8446]
#define HS_TYP_HELLO_RETRY_REQUEST_RESERVED             0x06 //[RFC8446] Assigned for interim draft, but the functionality was moved to an extension.
//Unassigned 			                                0x07
#define HS_TYP_ENCRYPTED_EXTENSIONS                  	0x08 //[RFC8446]
#define HS_TYP_REQUEST_CONNECTION_ID                    0x09 //[RFC9147] 	
#define HS_TYP_NEW_CONNECTION_ID 	                    0x0a //[RFC9147]
#define HS_TYP_CERTIFICATE                              0x0b //[RFC8446]
#define HS_TYP_SERVER_KEY_EXCHANGE_RESERVED             0x0c //[RFC8446] 	Used in TLS versions prior to 1.3.
#define HS_TYP_CERTIFICATE_REQUEST                      0x0d //[RFC8446]
#define HS_TYP_SERVER_HELLO_DONE_RESERVED               0x0e //[RFC8446] Used in TLS versions prior to 1.3.
#define HS_TYP_CERTIFICATE_VERIFY                       0x0f //[RFC8446] 	
#define HS_TYP_CLIENT_KEY_EXCHANGE_RESERVED             0x10 //[RFC8446] Used in TLS versions prior to 1.3.
#define HS_TYP_CLIENT_CERTIFICATE_REQUEST               0x11 //[RFC9261] Used in TLS versions prior to 1.3.
//Unassigned             			                    0x12-0x13
#define HS_TYP_FINISHED 	                            0x14 //[RFC8446]
#define HS_TYP_CERTIFICATE_URL_RESERVED                 0x15 //[RFC6066][RFC8446] Used in TLS versions prior to 1.3.
#define HS_TYP_CERTIFICATE_STATUS_RESERVED              0x16 //[RFC6066][RFC8446] Used in TLS versions prior to 1.3.
#define HS_TYP_SUPPLEMENTAL_DATA_RESERVED               0x17 //[RFC4680][RFC8446] Used in TLS versions prior to 1.3.
#define HS_TYP_KEY_UPDATE    	                        0x18 //[RFC8446]
#define HS_TYP_COMPRESSED_CERTIFICATE                   0x19 //[RFC8879]
#define HS_TYP_EKT_KEY 	                                0x1a //[RFC8870] 	
//Unassigned         			                        0x1b-0xfd
#define HS_TYP_MESSAGE_HASH                             0xfe//[RFC8446] 	
//Unassigned                                            0xff

//------------------------Cipher-Suites-----------------------//

#define TLS_NULL_WITH_NULL_NULL 						0x0000 //[RFC5246]
#define TLS_RSA_WITH_NULL_MD5 	 						0x0001 //[RFC5246]
#define TLS_RSA_WITH_NULL_SHA 	 						0x0002 //[RFC5246]
#define TLS_RSA_EXPORT_WITH_RC4_40_MD5 	 				0x0003 //[RFC6347][RFC4346]
#define TLS_RSA_WITH_RC4_128_MD5 	 					0x0004 //[RFC6347][RFC5246]
#define TLS_RSA_WITH_RC4_128_SHA 	 					0x0005 //[RFC6347][RFC5246]
#define TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5 	 			0x0006 //[RFC4346]
#define TLS_RSA_WITH_IDEA_CBC_SHA 	 					0x0007 //[RFC8996]
#define TLS_RSA_EXPORT_WITH_DES40_CBC_SHA 	 			0x0008 //[RFC4346]
#define TLS_RSA_WITH_DES_CBC_SHA 	 					0x0009 //[RFC8996]
#define TLS_RSA_WITH_3DES_EDE_CBC_SHA 	 				0x000A //[RFC5246]
#define TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA 	 		0x000B //[RFC4346]
#define TLS_DH_DSS_WITH_DES_CBC_SHA 	 				0x000C //[RFC8996]
#define TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA 	 			0x000D //[RFC5246]
#define TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA 	 		0x000E //[RFC4346]
#define TLS_DH_RSA_WITH_DES_CBC_SHA 	 				0x000F //[RFC8996]
#define TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA 	 			0x0010 //[RFC5246]
#define TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA 	 		0x0011 //[RFC4346]
#define TLS_DHE_DSS_WITH_DES_CBC_SHA 	 				0x0012 //[RFC8996]
#define TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA 	 			0x0013 //[RFC5246]
#define TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA 	 		0x0014 //[RFC4346]
#define TLS_DHE_RSA_WITH_DES_CBC_SHA 	 				0x0015 //[RFC8996]
#define TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA 	 			0x0016 //[RFC5246]
#define TLS_DH_anon_EXPORT_WITH_RC4_40_MD5 	 			0x0017 //[RFC6347][RFC4346]
#define TLS_DH_anon_WITH_RC4_128_MD5 	 				0x0018 //[RFC6347][RFC5246]
#define TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA 	 		0x0019 //[RFC4346]
#define TLS_DH_anon_WITH_DES_CBC_SHA 	 				0x001a //[RFC8996]
#define TLS_DH_anon_WITH_3DES_EDE_CBC_SHA 	 			0x001b //[RFC5246]
//Reserved 		 										0x001c-0x001d  to avoid conflicts with SSLv3 [RFC5246]
#define TLS_KRB5_WITH_DES_CBC_SHA 	 					0x001E //[RFC2712]
#define TLS_KRB5_WITH_3DES_EDE_CBC_SHA 	 				0x001F //[RFC2712]
#define TLS_KRB5_WITH_RC4_128_SHA 	 					0x0020 //[RFC6347][RFC2712]
#define TLS_KRB5_WITH_IDEA_CBC_SHA 	 					0x0021 //[RFC2712]
#define TLS_KRB5_WITH_DES_CBC_MD5 	 					0x0022 //[RFC2712]
#define TLS_KRB5_WITH_3DES_EDE_CBC_MD5 	 				0x0023 //[RFC2712]
#define TLS_KRB5_WITH_RC4_128_MD5 	 					0x0024 //[RFC6347][RFC2712]
#define TLS_KRB5_WITH_IDEA_CBC_MD5	 					0x0025 //[RFC2712]
#define TLS_KRB5_EXPORT_WITH_DES_CBC_40_SHA 	 		0x0026 //[RFC2712]
#define TLS_KRB5_EXPORT_WITH_RC2_CBC_40_SHA 	 		0x0027 //[RFC2712]
#define TLS_KRB5_EXPORT_WITH_RC4_40_SHA 	 			0x0028 //[RFC6347][RFC2712]
#define TLS_KRB5_EXPORT_WITH_DES_CBC_40_MD5 	 		0x0029 //[RFC2712]
#define TLS_KRB5_EXPORT_WITH_RC2_CBC_40_MD5 	 		0x002A //[RFC2712]
#define TLS_KRB5_EXPORT_WITH_RC4_40_MD5 	 			0x002B //[RFC6347][RFC2712]
#define TLS_PSK_WITH_NULL_SHA 	 						0x002C //[RFC4785]
#define TLS_DHE_PSK_WITH_NULL_SHA 	 					0x002D //[RFC4785]
#define TLS_RSA_PSK_WITH_NULL_SHA 	 					0x002E //[RFC4785]
#define TLS_RSA_WITH_AES_128_CBC_SHA 	 				0x002F //[RFC5246]
#define TLS_DH_DSS_WITH_AES_128_CBC_SHA 	 			0x0030 //[RFC5246]
#define TLS_DH_RSA_WITH_AES_128_CBC_SHA 	 			0x0031 //[RFC5246]
#define TLS_DHE_DSS_WITH_AES_128_CBC_SHA 	 			0x0032 //[RFC5246]
#define TLS_DHE_RSA_WITH_AES_128_CBC_SHA 	 			0x0033 //[RFC5246]
#define TLS_DH_anon_WITH_AES_128_CBC_SHA 	 			0x0034 //[RFC5246]
#define TLS_RSA_WITH_AES_256_CBC_SHA 	 				0x0035 //[RFC5246]
#define TLS_DH_DSS_WITH_AES_256_CBC_SHA 	 			0x0036 //[RFC5246]
#define TLS_DH_RSA_WITH_AES_256_CBC_SHA 	 			0x0037 //[RFC5246]
#define TLS_DHE_DSS_WITH_AES_256_CBC_SHA 	 			0x0038 //[RFC5246]
#define TLS_DHE_RSA_WITH_AES_256_CBC_SHA 	 			0x0039 //[RFC5246]
#define TLS_DH_anon_WITH_AES_256_CBC_SHA 	 			0x003A //[RFC5246]
#define TLS_RSA_WITH_NULL_SHA256 	 					0x003B //[RFC5246]
#define TLS_RSA_WITH_AES_128_CBC_SHA256 	 			0x003C //[RFC5246]
#define TLS_RSA_WITH_AES_256_CBC_SHA256 	 			0x003D //[RFC5246]
#define TLS_DH_DSS_WITH_AES_128_CBC_SHA256 	 			0x003E //[RFC5246]
#define TLS_DH_RSA_WITH_AES_128_CBC_SHA256 	 			0x003F //[RFC5246]
#define TLS_DHE_DSS_WITH_AES_128_CBC_SHA256 	 		0x0040 //[RFC5246]
#define TLS_RSA_WITH_CAMELLIA_128_CBC_SHA 	 			0x0041 //[RFC5932]
#define TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA 			0x0042 //[RFC5932]
#define TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA 			0x0043 //[RFC5932]
#define TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA 			0x0044 //[RFC5932]
#define TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA 			0x0045 //[RFC5932]
#define TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA 			0x0046 //[RFC5932]
//Reserved  											0x0047-4f //[Pasi_Eronen] to avoid conflicts with deployed implementations
//Reserved 					 							0x0050-58 // to avoid conflicts [Pasi Eronen, <pasi.eronen&nokia.com>, 2008-04-04. 2008-04-04]
//Reserved 												0x0059-5c // to avoid conflicts with deployed implementations [Pasi_Eronen]
//Unassigned 			 								0x005d-5f
//Reserved 												0x0060-0x0066 // to avoid conflicts with widely deployed implementations [Pasi_Eronen]
#define TLS_DHE_RSA_WITH_AES_128_CBC_SHA256				0x0067 //[RFC5246]
#define TLS_DH_DSS_WITH_AES_256_CBC_SHA256				0x0068 //[RFC5246]
#define TLS_DH_RSA_WITH_AES_256_CBC_SHA256				0x0069 //[RFC5246]
#define TLS_DHE_DSS_WITH_AES_256_CBC_SHA256				0x006a //[RFC5246]
#define TLS_DHE_RSA_WITH_AES_256_CBC_SHA256				0x006b //[RFC5246]
#define TLS_DH_anon_WITH_AES_128_CBC_SHA256				0x006c //[RFC5246]
#define TLS_DH_anon_WITH_AES_256_CBC_SHA256				0x006d //[RFC5246]
//Unassigned											0x006E-0x0083
#define TLS_RSA_WITH_CAMELLIA_256_CBC_SHA		 		0x0084 //[RFC5932]
#define TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA		 	0x0085 //[RFC5932]
#define TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA		 	0x0086 //[RFC5932]
#define TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA		 	0x0087 //[RFC5932]
#define TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA		 	0x0088 //[RFC5932]
#define TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA		 	0x0089 //[RFC5932]
#define TLS_PSK_WITH_RC4_128_SHA						0x008A //[RFC6347][RFC4279]
#define TLS_PSK_WITH_3DES_EDE_CBC_SHA					0x008B //[RFC4279]
#define TLS_PSK_WITH_AES_128_CBC_SHA					0x008C //[RFC4279]
#define TLS_PSK_WITH_AES_256_CBC_SHA					0x008D //[RFC4279]
#define TLS_DHE_PSK_WITH_RC4_128_SHA					0x008E //[RFC6347][RFC4279]
#define TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA				0x008F //[RFC4279]
#define TLS_DHE_PSK_WITH_AES_128_CBC_SHA				0x0090 //[RFC4279]
#define TLS_DHE_PSK_WITH_AES_256_CBC_SHA				0x0091 //[RFC4279]
#define TLS_RSA_PSK_WITH_RC4_128_SHA					0x0092 //[RFC6347][RFC4279]
#define TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA				0x0093 //[RFC4279]
#define TLS_RSA_PSK_WITH_AES_128_CBC_SHA				0x0094 //[RFC4279]
#define TLS_RSA_PSK_WITH_AES_256_CBC_SHA				0x0095 //[RFC4279]
#define TLS_RSA_WITH_SEED_CBC_SHA						0x0096 //[RFC4162]
#define TLS_DH_DSS_WITH_SEED_CBC_SHA					0x0097 //[RFC4162]
#define TLS_DH_RSA_WITH_SEED_CBC_SHA					0x0098 //[RFC4162]
#define TLS_DHE_DSS_WITH_SEED_CBC_SHA					0x0099 //[RFC4162]
#define TLS_DHE_RSA_WITH_SEED_CBC_SHA					0x009A //[RFC4162]
#define TLS_DH_anon_WITH_SEED_CBC_SHA					0x009B //[RFC4162]
#define TLS_RSA_WITH_AES_128_GCM_SHA256					0x009C //[RFC5288]
#define TLS_RSA_WITH_AES_256_GCM_SHA384					0x009D //[RFC5288]
#define TLS_DHE_RSA_WITH_AES_128_GCM_SHA256				0x009E //[RFC5288]
#define TLS_DHE_RSA_WITH_AES_256_GCM_SHA384				0x009F //[RFC5288]
#define TLS_DH_RSA_WITH_AES_128_GCM_SHA256				0x00A0 //[RFC5288]
#define TLS_DH_RSA_WITH_AES_256_GCM_SHA384				0x00A1 //[RFC5288]
#define TLS_DHE_DSS_WITH_AES_128_GCM_SHA256				0x00A2 //[RFC5288]
#define TLS_DHE_DSS_WITH_AES_256_GCM_SHA384				0x00A3 //[RFC5288]
#define TLS_DH_DSS_WITH_AES_128_GCM_SHA256				0x00A4 //[RFC5288]
#define TLS_DH_DSS_WITH_AES_256_GCM_SHA384				0x00A5 //[RFC5288]
#define TLS_DH_anon_WITH_AES_128_GCM_SHA256 			0x00a6 //[RFC5288]
#define TLS_DH_anon_WITH_AES_256_GCM_SHA384 			0x00a7 //[RFC5288]
#define TLS_PSK_WITH_AES_128_GCM_SHA256 				0x00a8 //[RFC5487]
#define TLS_PSK_WITH_AES_256_GCM_SHA384 				0x00a9 //[RFC5487]
#define TLS_DHE_PSK_WITH_AES_128_GCM_SHA256 			0x00aa //[RFC5487]
#define TLS_DHE_PSK_WITH_AES_256_GCM_SHA384 			0x00ab //[RFC5487]
#define TLS_RSA_PSK_WITH_AES_128_GCM_SHA256 			0x00ac //[RFC5487]
#define TLS_RSA_PSK_WITH_AES_256_GCM_SHA384 			0x00ad //[RFC5487]
#define TLS_PSK_WITH_AES_128_CBC_SHA256 				0x00ae //[RFC5487]
#define TLS_PSK_WITH_AES_256_CBC_SHA384 				0x00af //[RFC5487]
#define TLS_PSK_WITH_NULL_SHA256 						0x00b0 //[RFC5487]
#define TLS_PSK_WITH_NULL_SHA384 						0x00b1 //[RFC5487]
#define TLS_DHE_PSK_WITH_AES_128_CBC_SHA256 			0x00b2 //[RFC5487]
#define TLS_DHE_PSK_WITH_AES_256_CBC_SHA384 			0x00b3 //[RFC5487]
#define TLS_DHE_PSK_WITH_NULL_SHA256 					0x00b4 //[RFC5487]
#define TLS_DHE_PSK_WITH_NULL_SHA384 					0x00b5 //[RFC5487]
#define TLS_RSA_PSK_WITH_AES_128_CBC_SHA256 			0x00b6 //[RFC5487]
#define TLS_RSA_PSK_WITH_AES_256_CBC_SHA384 			0x00b7 //[RFC5487]
#define TLS_RSA_PSK_WITH_NULL_SHA256 					0x00b8 //[RFC5487]
#define TLS_RSA_PSK_WITH_NULL_SHA384 					0x00b9 //[RFC5487]
#define TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256 			0x00ba //[RFC5932]
#define TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256 		0x00bb //[RFC5932]
#define TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256 		0x00bc //[RFC5932]
#define TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256 		0x00bd //[RFC5932]
#define TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 		0x00be //[RFC5932]
#define TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256 		0x00bf //[RFC5932]
#define TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256 			0x00c0 //[RFC5932]
#define TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256 		0x00c1 //[RFC5932]
#define TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256 		0x00c2 //[RFC5932]
#define TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256 		0x00c3 //[RFC5932]
#define TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256 		0x00c4 //[RFC5932]
#define TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256 		0x00c5 //[RFC5932]
#define TLS_SM4_GCM_SM3 								0x00c6 //[RFC8998]
#define TLS_SM4_CCM_SM3 								0x00c7 //[RFC8998]
//Unassigned 											0x00c8-0x00fe
#define TLS_EMPTY_RENEGOTIATION_INFO_SCSV 				0x00ff //[RFC5746]
//Unassigned 											0x01-09,*
//Unassigned 											0x0A00-0x0A09
//Reserved 												0x0a0a //[RFC8701]
//Unassigned 											0x0a0b-0x0aff
//Unassigned 											0x0B-12,*
//Unassigned 											0x1300
#define TLS_AES_128_GCM_SHA256						 	0x1301 //[RFC8446]
#define TLS_AES_256_GCM_SHA384						 	0x1302 //[RFC8446]
#define TLS_CHACHA20_POLY1305_SHA256					0x1303 //[RFC8446]
#define TLS_AES_128_CCM_SHA256						 	0x1304 //[RFC8446]
#define TLS_AES_128_CCM_8_SHA256 						0x1305 //[RFC8446][IESG Action 2018-08-16]
#define TLS_AEGIS_256_SHA512 							0x1306 //[draft-irtf-cfrg-aegis-aead-08]
#define TLS_AEGIS_128L_SHA256 							0x1307 //[draft-irtf-cfrg-aegis-aead-08]
//Unassigned 											0x1308-0x13ff 	
//Unassigned 											0x14-19,* 	
//Unassigned 											0x1a00-0x1a19 	
//Reserved 		 										0x1a1a //[RFC8701]
//Unassigned 											0x1a1b-0x1aff 	
//Unassigned 											0x1b-29,* 	
//Unassigned 											0x2a00-0x2a29 	
//Reserved												0x2a2a //[RFC8701]
//Unassigned 											0x2a2b-0x2aff
//Unassigned 											0x2b-39,* 	
//Unassigned 											0x3a00-0x3a39
//Reserved												0x3a3a //[RFC8701]
//Unassigned 											0x3a3b-0x3aff 	
//Unassigned 											0x3b-49,* 	
//Unassigned 											0x4a00-0x4a49 	
//Reserved												0x4a4a [RFC8701]
//Unassigned											0x4a4b-0x4aff
//Unassigned 											0x4b-55,*
#define TLS_FALLBACK_SCSV 								0x5600//[RFC7507]
//Unassigned 											0x5601-0x56ff
//Unassigned 											0x57-59,* 	
//Unassigned 											0x5a00-0x5a59
//Reserved												0x5a5a //[RFC8701]
//Unassigned 											0x5a5b-0x5aff
//Unassigned 											0x5b-69,* 	
//Unassigned 											0x6a00-0x6a69
//Reserved												0x6a6a //[RFC8701]
//Unassigned 											0x6a6b-0x6aff
//Unassigned 											0x6b-79,*
//Unassigned 											0x7a00-0x7a79
//Reserved												0x7a7a //[RFC8701]
//Unassigned 											0x7a7b-0x7aff
//Unassigned 											0x7b-89,* 	
//Unassigned 											0x8a00-0x8a89
//Reserved												0x8a8a //[RFC8701]
//Unassigned 											0x8a8b-0x8aff
//Unassigned 											0x8b-99,* 	
//Unassigned 											0x9a00-0x9a99
//Reserved												0x9a9a //[RFC8701]
//Unassigned 											0x9a9b-0x9aff
//Unassigned 											0x9b-a9,* 	
//Unassigned 											0xaa00-0xaaa9
//Reserved												0xaaaa //[RFC8701]
//Unassigned 											0xaaab-0xaaff
//Unassigned 											0xab-b9,* 	
//Unassigned 											0xba00-0xbab9
//Reserved												0xbaba //[RFC8701]
//Unassigned 											0xbabb-0xbaff 	
//Unassigned 											0xbb-bf,* 	
//Unassigned 											0xc000 	
#define TLS_ECDH_ECDSA_WITH_NULL_SHA		 			0xc001 //[RFC8422]
#define TLS_ECDH_ECDSA_WITH_RC4_128_SHA		 			0xc002 //[RFC8422][RFC6347]
#define TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA		 	0xc003 //[RFC8422]
#define TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA		 		0xc004 //[RFC8422]
#define TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA		 		0xc005 //[RFC8422]
#define TLS_ECDHE_ECDSA_WITH_NULL_SHA		 			0xc006 //[RFC8422]
#define TLS_ECDHE_ECDSA_WITH_RC4_128_SHA		 		0xc007 //[RFC8422][RFC6347]
#define TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA		 	0xc008 //[RFC8422]
#define TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA		 	0xc009 //[RFC8422]
#define TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA		 	0xc00a //[RFC8422]
#define TLS_ECDH_RSA_WITH_NULL_SHA		 				0xc00b //[RFC8422]
#define TLS_ECDH_RSA_WITH_RC4_128_SHA		 			0xc00c //[RFC8422][RFC6347]
#define TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA		 		0xc00d //[RFC8422]
#define TLS_ECDH_RSA_WITH_AES_128_CBC_SHA		 		0xc00e //[RFC8422]
#define TLS_ECDH_RSA_WITH_AES_256_CBC_SHA		 		0xc00f //[RFC8422]
#define TLS_ECDHE_RSA_WITH_NULL_SHA		 				0xc010 //[RFC8422]
#define TLS_ECDHE_RSA_WITH_RC4_128_SHA		 			0xc011 //[RFC8422][RFC6347]
#define TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA		 		0xc012 //[RFC8422]
#define TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA		 		0xc013 //[RFC8422]
#define TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA		 		0xc014 //[RFC8422]
#define TLS_ECDH_anon_WITH_NULL_SHA		 				0xc015 //[RFC8422]
#define TLS_ECDH_anon_WITH_RC4_128_SHA		 			0xc016 //[RFC8422][RFC6347]
#define TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA		 		0xc017 //[RFC8422]
#define TLS_ECDH_anon_WITH_AES_128_CBC_SHA		 		0xc018 //[RFC8422]
#define TLS_ECDH_anon_WITH_AES_256_CBC_SHA		 		0xc019 //[RFC8422]
#define TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA		 		0xc01a //[RFC5054]
#define TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA		 	0xc01b //[RFC5054]
#define TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA		 	0xc01c //[RFC5054]
#define TLS_SRP_SHA_WITH_AES_128_CBC_SHA		 		0xc01d //[RFC5054]
#define TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA		 	0xc01e //[RFC5054]
#define TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA		 	0xc01f //[RFC5054]
#define TLS_SRP_SHA_WITH_AES_256_CBC_SHA		 		0xc020 //[RFC5054]
#define TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA		 	0xc021 //[RFC5054]
#define TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA		 	0xc022 //[RFC5054]
#define TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256		 	0xc023 //[RFC5289]
#define TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384		 	0xc024 //[RFC5289]
#define TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256		 	0xc025 //[RFC5289]
#define TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384		 	0xc026 //[RFC5289]
#define TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256		 	0xc027 //[RFC5289]
#define TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384		 	0xc028 //[RFC5289]
#define TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256		 	0xc029 //[RFC5289]
#define TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384		 	0xc02a //[RFC5289]
#define TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256		 	0xc02b //[RFC5289]
#define TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384		 	0xc02c //[RFC5289]
#define TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256		 	0xc02d //[RFC5289]
#define TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384		 	0xc02e //[RFC5289]
#define TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256		 	0xc02f //[RFC5289]
#define TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384		 	0xc030 //[RFC5289]
#define TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256		 	0xc031 //[RFC5289]
#define TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384		 	0xc032 //[RFC5289]
#define TLS_ECDHE_PSK_WITH_RC4_128_SHA		 			0xc033 //[RFC5489][RFC6347]
#define TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA		 		0xc034 //[RFC5489]
#define TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA		 		0xc035 //[RFC5489]
#define TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA		 		0xc036 //[RFC5489]
#define TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256		 	0xc037 //[RFC5489]
#define TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384		 	0xc038 //[RFC5489]
#define TLS_ECDHE_PSK_WITH_NULL_SHA		 				0xc039 //[RFC5489]
#define TLS_ECDHE_PSK_WITH_NULL_SHA256		 			0xc03a //[RFC5489]
#define TLS_ECDHE_PSK_WITH_NULL_SHA384		 			0xc03b //[RFC5489]
#define TLS_RSA_WITH_ARIA_128_CBC_SHA256		 		0xc03c //[RFC6209]
#define TLS_RSA_WITH_ARIA_256_CBC_SHA384		 		0xc03d //[RFC6209]
#define TLS_DH_DSS_WITH_ARIA_128_CBC_SHA256		 		0xc03e //[RFC6209]
#define TLS_DH_DSS_WITH_ARIA_256_CBC_SHA384		 		0xc03f //[RFC6209]
#define TLS_DH_RSA_WITH_ARIA_128_CBC_SHA256		 		0xc040 //[RFC6209]
#define TLS_DH_RSA_WITH_ARIA_256_CBC_SHA384		 		0xc041 //[RFC6209]
#define TLS_DHE_DSS_WITH_ARIA_128_CBC_SHA256		 	0xc042 //[RFC6209]
#define TLS_DHE_DSS_WITH_ARIA_256_CBC_SHA384		 	0xc043 //[RFC6209]
#define TLS_DHE_RSA_WITH_ARIA_128_CBC_SHA256		 	0xc044 //[RFC6209]
#define TLS_DHE_RSA_WITH_ARIA_256_CBC_SHA384		 	0xc045 //[RFC6209]
#define TLS_DH_anon_WITH_ARIA_128_CBC_SHA256		 	0xc046 //[RFC6209]
#define TLS_DH_anon_WITH_ARIA_256_CBC_SHA384		 	0xc047 //[RFC6209]
#define TLS_ECDHE_ECDSA_WITH_ARIA_128_CBC_SHA256		0xc048 //[RFC6209]
#define TLS_ECDHE_ECDSA_WITH_ARIA_256_CBC_SHA384		0xc049 //[RFC6209]
#define TLS_ECDH_ECDSA_WITH_ARIA_128_CBC_SHA256		 	0xc04a //[RFC6209]
#define TLS_ECDH_ECDSA_WITH_ARIA_256_CBC_SHA384		 	0xc04b //[RFC6209]
#define TLS_ECDHE_RSA_WITH_ARIA_128_CBC_SHA256		 	0xc04c //[RFC6209]
#define TLS_ECDHE_RSA_WITH_ARIA_256_CBC_SHA384		 	0xc04d //[RFC6209]
#define TLS_ECDH_RSA_WITH_ARIA_128_CBC_SHA256		 	0xc04e //[RFC6209]
#define TLS_ECDH_RSA_WITH_ARIA_256_CBC_SHA384		 	0xc04f //[RFC6209]
#define TLS_RSA_WITH_ARIA_128_GCM_SHA256		 		0xc050 //[RFC6209]
#define TLS_RSA_WITH_ARIA_256_GCM_SHA384		 		0xc051 //[RFC6209]
#define TLS_DHE_RSA_WITH_ARIA_128_GCM_SHA256		 	0xc052 //[RFC6209]
#define TLS_DHE_RSA_WITH_ARIA_256_GCM_SHA384		 	0xc053 //[RFC6209]
#define TLS_DH_RSA_WITH_ARIA_128_GCM_SHA256		 		0xc054 //[RFC6209]
#define TLS_DH_RSA_WITH_ARIA_256_GCM_SHA384		 		0xc055 //[RFC6209]
#define TLS_DHE_DSS_WITH_ARIA_128_GCM_SHA256		 	0xc056 //[RFC6209]
#define TLS_DHE_DSS_WITH_ARIA_256_GCM_SHA384		 	0xc057 //[RFC6209]
#define TLS_DH_DSS_WITH_ARIA_128_GCM_SHA256		 		0xc058 //[RFC6209]
#define TLS_DH_DSS_WITH_ARIA_256_GCM_SHA384		 		0xc059 //[RFC6209]
#define TLS_DH_anon_WITH_ARIA_128_GCM_SHA256		 	0xc05a //[RFC6209]
#define TLS_DH_anon_WITH_ARIA_256_GCM_SHA384		 	0xc05b //[RFC6209]
#define TLS_ECDHE_ECDSA_WITH_ARIA_128_GCM_SHA256		0xc05c //[RFC6209]
#define TLS_ECDHE_ECDSA_WITH_ARIA_256_GCM_SHA384		0xc05d //[RFC6209]
#define TLS_ECDH_ECDSA_WITH_ARIA_128_GCM_SHA256		 	0xc05e //[RFC6209]
#define TLS_ECDH_ECDSA_WITH_ARIA_256_GCM_SHA384		 	0xc05f //[RFC6209]
#define TLS_ECDHE_RSA_WITH_ARIA_128_GCM_SHA256		 	0xc060 //[RFC6209]
#define TLS_ECDHE_RSA_WITH_ARIA_256_GCM_SHA384		 	0xc061 //[RFC6209]
#define TLS_ECDH_RSA_WITH_ARIA_128_GCM_SHA256		 	0xc062 //[RFC6209]
#define TLS_ECDH_RSA_WITH_ARIA_256_GCM_SHA384		 	0xc063 //[RFC6209]
#define TLS_PSK_WITH_ARIA_128_CBC_SHA256		 		0xc064 //[RFC6209]
#define TLS_PSK_WITH_ARIA_256_CBC_SHA384		 		0xc065 //[RFC6209]
#define TLS_DHE_PSK_WITH_ARIA_128_CBC_SHA256		 	0xc066 //[RFC6209]
#define TLS_DHE_PSK_WITH_ARIA_256_CBC_SHA384		 	0xc067 //[RFC6209]
#define TLS_RSA_PSK_WITH_ARIA_128_CBC_SHA256		 	0xc068 //[RFC6209]
#define TLS_RSA_PSK_WITH_ARIA_256_CBC_SHA384		 	0xc069 //[RFC6209]
#define TLS_PSK_WITH_ARIA_128_GCM_SHA256		 		0xc06a //[RFC6209]
#define TLS_PSK_WITH_ARIA_256_GCM_SHA384		 		0xc06b //[RFC6209]
#define TLS_DHE_PSK_WITH_ARIA_128_GCM_SHA256		 	0xc06c //[RFC6209]
#define TLS_DHE_PSK_WITH_ARIA_256_GCM_SHA384		 	0xc06d //[RFC6209]
#define TLS_RSA_PSK_WITH_ARIA_128_GCM_SHA256		 	0xc06e //[RFC6209]
#define TLS_RSA_PSK_WITH_ARIA_256_GCM_SHA384		 	0xc06f //[RFC6209]
#define TLS_ECDHE_PSK_WITH_ARIA_128_CBC_SHA256		 	0xc070 //[RFC6209]
#define TLS_ECDHE_PSK_WITH_ARIA_256_CBC_SHA384		 	0xc071 //[RFC6209]
#define TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256	0xc072 //[RFC6367]
#define TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384	0xc073 //[RFC6367]
#define TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256		0xc074 //[RFC6367]
#define TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384		0xc075 //[RFC6367]
#define TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256		0xc076 //[RFC6367]
#define TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384		0xc077 //[RFC6367]
#define TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256		0xc078 //[RFC6367]
#define TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384		0xc079 //[RFC6367]
#define TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256		 	0xc07a //[RFC6367]
#define TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384		 	0xc07b //[RFC6367]
#define TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256		0xc07c //[RFC6367]
#define TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384		0xc07d //[RFC6367]
#define TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256		 	0xc07e //[RFC6367]
#define TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384		 	0xc07f //[RFC6367]
#define TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256		0xc080 //[RFC6367]
#define TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384		0xc081 //[RFC6367]
#define TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256		 	0xc082 //[RFC6367]
#define TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384		 	0xc083 //[RFC6367]
#define TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256		0xc084 //[RFC6367]
#define TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384		0xc085 //[RFC6367]
#define TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256	0xc086 //[RFC6367]
#define TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384	0xc087 //[RFC6367]
#define TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256		0xc088 //[RFC6367]
#define TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384		0xc089 //[RFC6367]
#define TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256		0xc08a //[RFC6367]
#define TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384		0xc08b //[RFC6367]
#define TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256		0xc08c //[RFC6367]
#define TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384		0xc08d //[RFC6367]
#define TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256		 	0xc08e //[RFC6367]
#define TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384		 	0xc08f //[RFC6367]
#define TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256		0xc090 //[RFC6367]
#define TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384		0xc091 //[RFC6367]
#define TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256		0xc092 //[RFC6367]
#define TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384		0xc093 //[RFC6367]
#define TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256		 	0xc094 //[RFC6367]
#define TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384		 	0xc095 //[RFC6367]
#define TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256		0xc096 //[RFC6367]
#define TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384		0xc097 //[RFC6367]
#define TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256		0xc098 //[RFC6367]
#define TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384		0xc099 //[RFC6367]
#define TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256		0xc09a //[RFC6367]
#define TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384		0xc09b //[RFC6367]
#define TLS_RSA_WITH_AES_128_CCM		 				0xc09c //[RFC6655]
#define TLS_RSA_WITH_AES_256_CCM		 				0xc09d //[RFC6655]
#define TLS_DHE_RSA_WITH_AES_128_CCM		 			0xc09e //[RFC6655]
#define TLS_DHE_RSA_WITH_AES_256_CCM		 			0xc09f //[RFC6655]
#define TLS_RSA_WITH_AES_128_CCM_8		 				0xc0a0 //[RFC6655]
#define TLS_RSA_WITH_AES_256_CCM_8		 				0xc0a1 //[RFC6655]
#define TLS_DHE_RSA_WITH_AES_128_CCM_8		 			0xc0a2 //[RFC6655]
#define TLS_DHE_RSA_WITH_AES_256_CCM_8		 			0xc0a3 //[RFC6655]
#define TLS_PSK_WITH_AES_128_CCM		 				0xc0a4 //[RFC6655]
#define TLS_PSK_WITH_AES_256_CCM		 				0xc0a5 //[RFC6655]
#define TLS_DHE_PSK_WITH_AES_128_CCM		 			0xc0a6 //[RFC6655]
#define TLS_DHE_PSK_WITH_AES_256_CCM		 			0xc0a7 //[RFC6655]
#define TLS_PSK_WITH_AES_128_CCM_8		 				0xc0a8 //[RFC6655]
#define TLS_PSK_WITH_AES_256_CCM_8		 				0xc0a9 //[RFC6655]
#define TLS_PSK_DHE_WITH_AES_128_CCM_8		 			0xc0aa //[RFC6655]
#define TLS_PSK_DHE_WITH_AES_256_CCM_8		 			0xc0ab //[RFC6655]
#define TLS_ECDHE_ECDSA_WITH_AES_128_CCM		 		0xc0ac //[RFC7251]
#define TLS_ECDHE_ECDSA_WITH_AES_256_CCM		 		0xc0ad //[RFC7251]
#define TLS_ECDHE_ECDSA_WITH_AES_128_CCM_8		 		0xc0ae //[RFC7251]
#define TLS_ECDHE_ECDSA_WITH_AES_256_CCM_8		 		0xc0af //[RFC7251]
#define TLS_ECCPWD_WITH_AES_128_GCM_SHA256		 		0xc0b0 //[RFC8492]
#define TLS_ECCPWD_WITH_AES_256_GCM_SHA384		 		0xc0b1 //[RFC8492]
#define TLS_ECCPWD_WITH_AES_128_CCM_SHA256		 		0xc0b2 //[RFC8492]
#define TLS_ECCPWD_WITH_AES_256_CCM_SHA384		 		0xc0b3 //[RFC8492]
#define TLS_SHA256_SHA256		 						0xc0b4 //[RFC9150]
#define TLS_SHA384_SHA384		 						0xc0b5 //[RFC9150]
//Unassigned 											0xc0b6-0xc0ff 	
#define TLS_GOSTR341112_256_WITH_KUZNYECHIK_CTR_OMAC	0xc100 //[RFC9189]
#define TLS_GOSTR341112_256_WITH_MAGMA_CTR_OMAC		 	0xc101 //[RFC9189]
#define TLS_GOSTR341112_256_WITH_28147_CNT_IMIT		 	0xc102 //[RFC9189]
#define TLS_GOSTR341112_256_WITH_KUZNYECHIK_MGM_L		0xc103 //[RFC9367]
#define TLS_GOSTR341112_256_WITH_MAGMA_MGM_L		 	0xc104 //[RFC9367]
#define TLS_GOSTR341112_256_WITH_KUZNYECHIK_MGM_S		0xc105 //[RFC9367]
#define TLS_GOSTR341112_256_WITH_MAGMA_MGM_S		 	0xc106 //[RFC9367]
//Unassigned 											0xc107-0xc1ff
//Unassigned 											0xc2-c9,*
//Unassigned 											0xca00-0xcac9
//Reserved 												0xcaca //[RFC8701]
//Unassigned 											0xcacb-0xcaff
//Unassigned 											0xcb,*
//Unassigned 											0xcc00-0xcca7
#define TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256		0xcca8 //[RFC7905]
#define TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256	0xcca9 //[RFC7905]
#define TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256		0xccaa //[RFC7905]
#define TLS_PSK_WITH_CHACHA20_POLY1305_SHA256			0xccab //[RFC7905]
#define TLS_ECDHE_PSK_WITH_CHACHA20_POLY1305_SHA256		0xccac //[RFC7905]
#define TLS_DHE_PSK_WITH_CHACHA20_POLY1305_SHA256		0xccad //[RFC7905]
#define TLS_RSA_PSK_WITH_CHACHA20_POLY1305_SHA256		0xccae //[RFC7905]
//Unassigned 											0xccaf-0xccff
//Unassigned 											0xcd-cf,*
//Unassigned 											0xd000
#define TLS_ECDHE_PSK_WITH_AES_128_GCM_SHA256		 	0xd001 //[RFC8442]
#define TLS_ECDHE_PSK_WITH_AES_256_GCM_SHA384		 	0xd002 //[RFC8442]
#define TLS_ECDHE_PSK_WITH_AES_128_CCM_8_SHA256		 	0xd003 //[RFC8442]
//Unassigned 											0xd004
#define TLS_ECDHE_PSK_WITH_AES_128_CCM_SHA256 			0xd005 //[RFC8442]
//Unassigned 											0xd006-0xd0ff
//Unassigned 											0xd1-d9,*
//Unassigned 											0xda00-0xdad9
//Reserved												0xdada //[RFC8701]
//Unassigned 											0xdadb-0xdaff 
//Unassigned 											0xdb-e9,* 
//Unassigned 											0xEA00-0xeae9 
//Reserved 												0xeaea //[RFC8701]
//Unassigned 											0xeaeb-0xeaff 
//Unassigned 											0xeb-f9,* 
//Unassigned 											0xfa00-0xfac9 
//Reserved 												0xfafa //[RFC8701]
//Unassigned 											0xfafb-0xfaff
//Unassigned 											0xfb-fd,* 
//Unassigned 											0xfe00-0xfefd 
//Reserved 	 											0xfefe-0xfeff // to avoid conflicts with widely deployed implementations	[Pasi_Eronen]
//Reserved for Private Use 								0xff00-0xffff //[RFC8446]

//----------------------Supported-Groups----------------------//

//Reserved 												0x0000 //[RFC8447]
#define sect163k1										0x0001 //[RFC8422]
#define sect163r1										0x0002 //[RFC8422]
#define sect163r2										0x0003 //[RFC8422]
#define sect193r1										0x0004 //[RFC8422]
#define sect193r2										0x0005 //[RFC8422]
#define sect233k1										0x0006 //[RFC8422]
#define sect233r1										0x0007 //[RFC8422]
#define sect239k1										0x0008 //[RFC8422]
#define sect283k1										0x0009 //[RFC8422]
#define sect283r1										0x000a //[RFC8422]
#define sect409k1										0x000b //[RFC8422]
#define sect409r1										0x000c //[RFC8422]
#define sect571k1										0x000d //[RFC8422]
#define sect571r1										0x000e //[RFC8422]
#define secp160k1										0x000f //[RFC8422]
#define secp160r1										0x0010 //[RFC8422]
#define secp160r2										0x0011 //[RFC8422] 
#define secp192k1										0x0012 //[RFC8422] 
#define secp192r1										0x0013 //[RFC8422] 
#define secp224k1										0x0014 //[RFC8422] 
#define secp224r1										0x0015 //[RFC8422] 
#define secp256k1										0x0016 //[RFC8422] 
#define secp256r1										0x0017 //[RFC8422] 
#define secp384r1										0x0018 //[RFC8422] 
#define secp521r1										0x0019 //[RFC8422] 
#define brainpoolP256r1									0x001a //[RFC7027] 	
#define brainpoolP384r1									0x001b //[RFC7027] 	
#define brainpoolP512r1									0x001c //[RFC7027] 	
#define x25519 											0x001d //[RFC8446][RFC8422] 	
#define x448 											0x001e //[RFC8446][RFC8422] 	
#define brainpoolP256r1tls13							0x001f //[RFC8734]
#define brainpoolP384r1tls13							0x0020 //[RFC8734]
#define brainpoolP512r1tls13							0x0021 //[RFC8734]
#define GC256A											0x0022 //[RFC9189]
#define GC256B											0x0023 //[RFC9189]
#define GC256C											0x0024 //[RFC9189]
#define GC256D											0x0025 //[RFC9189]
#define GC512A											0x0026 //[RFC9189]
#define GC512B											0x0027 //[RFC9189]
#define GC512C											0x0028 //[RFC9189]
#define curveSM2										0x0029 //[RFC8998]
//Unassigned	 										0x0030-0x00ff
#define ffdhe2048										0x0100 //[RFC7919]
#define ffdhe3072										0x0101 //[RFC7919]
#define ffdhe4096										0x0102 //[RFC7919]
#define ffdhe6144										0x0103 //[RFC7919]
#define ffdhe8192										0x0104 //[RFC7919]
//Unassigned 											0x0105-0x01fb
//Reserved for Private Use 								0x01fc-0x01ff //[RFC7919] 	
//Unassigned 											0x0200-0x0a09 	
//Reserved				 								0x0a0a //[RFC8701]
//Unassigned 											0x0a0b-0x1a19
//Reserved				 								0x1a1a //[RFC8701]
//Unassigned 											0x1a1b-0x2a29
//Reserved				 								0x2a2a //[RFC8701]
//Unassigned 											0x2a2b-0x3a39
//Reserved				 								0x3a3a //[RFC8701]
//Unassigned 											14907-19017
//Reserved				 								0x4a4a //[RFC8701]
//Unassigned 											19019-23129
//Reserved				 								0x5a5a //[RFC8701]
//Unassigned 											0x5a5b-0x6398
#define X25519Kyber768Draft00							0x6399 //[draft-tls-westerbaan-xyber768d00-02] 	Pre-standards version of Kyber768
#define SecP256r1Kyber768Draft00 						0x639a //[draft-kwiatkowski-tls-ecdhe-kyber-01] 	Combining secp256r1 ECDH with pre-standards version of Kyber768
//Unassigned 											0x639b-0x6a69 
//Reserved												0x6a6a //[RFC8701]
//Unassigned 											27243-31353
//Reserved												0x7a7a //[RFC8701]
//Unassigned 											31355-35465
//Reserved												0x8a8a //[RFC8701]
//Unassigned 											35467-39577
//Reserved												0x9a9a //[RFC8701]
//Unassigned 											39579-43689
//Reserved												0xaaaa //[RFC8701]
//Unassigned 											43691-47801
//Reserved												0xbaba //[RFC8701]
//Unassigned 											47803-51913
//Reserved												0xcaca //[RFC8701]
//Unassigned 											51915-56025
//Reserved												0xdada //[RFC8701]
//Unassigned 											56027-60137
//Reserved												0xeaea //[RFC8701]
//Unassigned 											60139-64249
//Reserved												0xfafa //[RFC8701]
//Unassigned 											64251-65023
//Reserved for Private Use 								65024-65279 //[RFC8422] 	
//Unassigned 											0xff00
#define arbitrary_explicit_prime_curves					0xff01 //[RFC8422]
#define arbitrary_explicit_char2_curves					0xff02 //[RFC8422]
