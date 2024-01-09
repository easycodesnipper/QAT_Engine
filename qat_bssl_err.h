/*
 * Copyright 1995-2024 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef QAT_BSSL_ERR_H
# define QAT_BSSL_ERR_H

# define QATerr(f, r) ERR_QAT_error((f), (r), __FILE__, __LINE__)
# define ERR_PUT_error(lib_code, function, reason, file, line) ERR_put_error(lib_code, function, reason, file, line)

# ifdef  __cplusplus
extern "C" {
# endif
int ERR_load_QAT_strings(void);
void ERR_unload_QAT_strings(void);
void ERR_QAT_error(int function, int reason, char *file, int line);
# ifdef  __cplusplus
}
# endif

/*
 * QAT function codes.
 */
# define QAT_F_AES_GCM_TLS_CIPHER                         100
# define QAT_F_BUILD_DECRYPT_OP_BUF                       101
# define QAT_F_BUILD_ENCRYPT_OP_BUF                       102
# define QAT_F_CRT_COMBINE                                103
# define QAT_F_CRT_PREPARE                                104
# define QAT_F_ENGINE_FINISH_BEFORE_FORK_HANDLER          105
# define QAT_F_ENGINE_INIT_CHILD_AT_FORK_HANDLER          106
# define QAT_F_ENGINE_QAT                                 107
# define QAT_F_EVENT_POLL_FUNC                            108
# define QAT_F_MB_ECDH_COMPUTE_KEY                        109
# define QAT_F_MB_ECDH_GENERATE_KEY                       110
# define QAT_F_MB_ECDSA_DO_VERIFY                         111
# define QAT_F_MB_ECDSA_SIGN                              112
# define QAT_F_MB_ECDSA_SIGN_SETUP                        113
# define QAT_F_MB_ECDSA_SIGN_SIG                          114
# define QAT_F_MB_ECDSA_SM2_SIGN                          115
# define QAT_F_MB_ECDSA_SM2_VERIFY                        116
# define QAT_F_MB_ECDSA_VERIFY                            117
# define QAT_F_MB_SM2_CTRL                                118
# define QAT_F_MB_SM2_INIT                                119
# define QAT_F_MULTIBUFF_RSA_ADD_PADDING_PRIV_ENC         120
# define QAT_F_MULTIBUFF_RSA_ADD_PADDING_PUB_ENC          121
# define QAT_F_MULTIBUFF_RSA_PRIV_DEC                     122
# define QAT_F_MULTIBUFF_RSA_PRIV_ENC                     123
# define QAT_F_MULTIBUFF_RSA_PUB_DEC                      124
# define QAT_F_MULTIBUFF_RSA_PUB_ENC                      125
# define QAT_F_MULTIBUFF_VALIDATE_ECX_DERIVE              126
# define QAT_F_MULTIBUFF_X25519_DERIVE                    127
# define QAT_F_MULTIBUFF_X25519_KEYGEN                    128
# define QAT_F_OSSL_SM2_COMPUTE_Z_DIGEST                  129
# define QAT_F_POLL_INSTANCES                             130
# define QAT_F_QAT_ADJUST_THREAD_AFFINITY                 131
# define QAT_F_QAT_AES_GCM_CIPHER                         132
# define QAT_F_QAT_AES_GCM_CLEANUP                        133
# define QAT_F_QAT_AES_GCM_CTRL                           134
# define QAT_F_QAT_AES_GCM_INIT                           135
# define QAT_F_QAT_AES_GCM_SESSION_INIT                   136
# define QAT_F_QAT_AES_GCM_TLS_CIPHER                     137
# define QAT_F_QAT_CHACHA20_POLY1305_CLEANUP              138
# define QAT_F_QAT_CHACHA20_POLY1305_CTRL                 139
# define QAT_F_QAT_CHACHA20_POLY1305_DO_CIPHER            140
# define QAT_F_QAT_CHACHA20_POLY1305_INIT                 141
# define QAT_F_QAT_CHACHA20_POLY1305_INIT_KEY_IV          142
# define QAT_F_QAT_CHACHA20_POLY1305_MAC_KEYGEN           143
# define QAT_F_QAT_CHACHA20_POLY1305_TLS_CIPHER           144
# define QAT_F_QAT_CHACHAPOLY_SESSION_DATA_INIT           145
# define QAT_F_QAT_CHACHAPOLY_SETUP_OP_PARAMS             146
# define QAT_F_QAT_CREATE_SM4_CBC_CIPHER_METH             147
# define QAT_F_QAT_CREATE_SM4_CCM_CIPHER_METH             148
# define QAT_F_QAT_CRYPTO_CALLBACKFN                      149
# define QAT_F_QAT_DH_COMPUTE_KEY                         150
# define QAT_F_QAT_DH_GENERATE_KEY                        151
# define QAT_F_QAT_DSA_DO_SIGN                            152
# define QAT_F_QAT_DSA_DO_VERIFY                          153
# define QAT_F_QAT_DSA_SIGN_SETUP                         154
# define QAT_F_QAT_ECDH_COMPUTE_KEY                       155
# define QAT_F_QAT_ECDH_GENERATE_KEY                      156
# define QAT_F_QAT_ECDSA_DO_SIGN                          157
# define QAT_F_QAT_ECDSA_DO_VERIFY                        158
# define QAT_F_QAT_ECDSA_SIGN                             159
# define QAT_F_QAT_ECDSA_VERIFY                           160
# define QAT_F_QAT_ENGINE_CTRL                            161
# define QAT_F_QAT_ENGINE_ECDH_COMPUTE_KEY                162
# define QAT_F_QAT_FD_CLEANUP                             163
# define QAT_F_QAT_GET_DH_METHODS                         164
# define QAT_F_QAT_GET_DSA_METHODS                        165
# define QAT_F_QAT_GET_EC_METHODS                         166
# define QAT_F_QAT_GET_RSA_METHODS                        167
# define QAT_F_QAT_HKDF_CTRL                              168
# define QAT_F_QAT_HKDF_DERIVE                            169
# define QAT_F_QAT_HKDF_INIT                              170
# define QAT_F_QAT_HKDF_PMETH                             171
# define QAT_F_QAT_HW_CREATE_SM3_METH                     172
# define QAT_F_QAT_HW_FINISH_INT                          173
# define QAT_F_QAT_HW_INIT                                174
# define QAT_F_QAT_HW_SHA3_OFFLOAD                        175
# define QAT_F_QAT_HW_SM3_CLEANUP                         176
# define QAT_F_QAT_HW_SM3_COPY                            177
# define QAT_F_QAT_HW_SM3_DO_OFFLOAD                      178
# define QAT_F_QAT_HW_SM3_FINAL                           179
# define QAT_F_QAT_HW_SM3_SETUP_PARAM                     180
# define QAT_F_QAT_HW_SM3_UPDATE                          181
# define QAT_F_QAT_INIT_OP_DONE                           182
# define QAT_F_QAT_INIT_OP_DONE_PIPE                      183
# define QAT_F_QAT_INIT_OP_DONE_RSA_CRT                   184
# define QAT_F_QAT_MOD_EXP                                185
# define QAT_F_QAT_PKEY_ECX_DERIVE25519                   186
# define QAT_F_QAT_PKEY_ECX_DERIVE448                     187
# define QAT_F_QAT_PKEY_ECX_KEYGEN                        188
# define QAT_F_QAT_PRF_PMETH                              189
# define QAT_F_QAT_PRF_TLS_DERIVE                         190
# define QAT_F_QAT_REMAP_INSTANCES                        191
# define QAT_F_QAT_RSA_DECRYPT                            192
# define QAT_F_QAT_RSA_DECRYPT_CRT                        193
# define QAT_F_QAT_RSA_ENCRYPT                            194
# define QAT_F_QAT_RSA_PRIV_DEC                           195
# define QAT_F_QAT_RSA_PRIV_ENC                           196
# define QAT_F_QAT_RSA_PUB_DEC                            197
# define QAT_F_QAT_RSA_PUB_ENC                            198
# define QAT_F_QAT_SESSION_DATA_INIT                      199
# define QAT_F_QAT_SETUP_OP_PARAMS                        200
# define QAT_F_QAT_SET_INSTANCE_FOR_THREAD                201
# define QAT_F_QAT_SHA3_CLEANUP                           202
# define QAT_F_QAT_SHA3_CTRL                              203
# define QAT_F_QAT_SHA3_FINAL                             204
# define QAT_F_QAT_SHA3_SESSION_DATA_INIT                 205
# define QAT_F_QAT_SHA3_SETUP_PARAM                       206
# define QAT_F_QAT_SHA3_UPDATE                            207
# define QAT_F_QAT_SM2_COMPUTE_Z_DIGEST                   208
# define QAT_F_QAT_SM2_COPY                               209
# define QAT_F_QAT_SM2_CTRL                               210
# define QAT_F_QAT_SM2_DIGEST_CUSTOM                      211
# define QAT_F_QAT_SM2_INIT                               212
# define QAT_F_QAT_SM2_SIGN                               213
# define QAT_F_QAT_SM2_VERIFY                             214
# define QAT_F_QAT_SM4_CBC_CLEANUP                        215
# define QAT_F_QAT_SM4_CBC_DO_CIPHER                      216
# define QAT_F_QAT_SM4_CBC_INIT                           217
# define QAT_F_QAT_SW_INIT                                218
# define QAT_F_QAT_SW_SM3_FINAL                           219
# define QAT_F_QAT_SW_SM3_INIT                            220
# define QAT_F_QAT_SW_SM3_UPDATE                          221
# define QAT_F_QAT_SW_SM4_CBC_CIPHER                      222
# define QAT_F_QAT_SW_SM4_CBC_CLEANUP                     223
# define QAT_F_QAT_SW_SM4_CBC_KEY_INIT                    224
# define QAT_F_QAT_SW_SM4_CCM_CLEANUP                     225
# define QAT_F_QAT_SW_SM4_CCM_CTRL                        226
# define QAT_F_QAT_SW_SM4_CCM_DECRYPT                     227
# define QAT_F_QAT_SW_SM4_CCM_DO_CIPHER                   228
# define QAT_F_QAT_SW_SM4_CCM_ENCRYPT                     229
# define QAT_F_QAT_SW_SM4_CCM_INIT                        230
# define QAT_F_QAT_SW_SM4_GCM_CIPHER                      231
# define QAT_F_QAT_SW_SM4_GCM_CLEANUP                     232
# define QAT_F_QAT_SW_SM4_GCM_CTRL                        233
# define QAT_F_QAT_SW_SM4_GCM_DECRYPT                     234
# define QAT_F_QAT_SW_SM4_GCM_ENCRYPT                     235
# define QAT_F_QAT_SW_SM4_GCM_INIT                        236
# define QAT_F_QAT_SW_SM4_GCM_TLS_CIPHER                  237
# define QAT_F_QAT_SYM_PERFORM_OP                         238
# define QAT_F_QAT_VALIDATE_ECX_DERIVE                    239
# define QAT_F_QAT_X25519_PMETH                           240
# define QAT_F_QAT_X448_PMETH                             241
# define QAT_F_SM2_COMPUTE_MSG_HASH                       242
# define QAT_F_VAESGCM_CIPHERS_CTRL                       243
# define QAT_F_VAESGCM_CIPHERS_DO_CIPHER                  244
# define QAT_F_VAESGCM_CIPHERS_INIT                       245
# define QAT_F_VAESGCM_INIT_GCM                           246
# define QAT_F_VAESGCM_INIT_IPSEC_MB_MGR                  247
# define QAT_F_VAESGCM_INIT_KEY                           248

/*
 * QAT reason codes.
 */
# define QAT_R_AAD_INVALID_PTR                            100
# define QAT_R_AAD_LEN_INVALID                            101
# define QAT_R_AAD_MALLOC_FAILURE                         102
# define QAT_R_ADD_M2_FAILURE                             103
# define QAT_R_ADJUST_DELTA_M1_M2_FAILURE                 104
# define QAT_R_ALGO_TYPE_SUPPORTED                        105
# define QAT_R_ALGO_TYPE_UNSUPPORTED                      106
# define QAT_R_ALLOC_E_CHECK_FAILURE                      107
# define QAT_R_ALLOC_MULTIBUFF_RSA_METH_FAILURE           108
# define QAT_R_ALLOC_QAT_DSA_METH_FAILURE                 109
# define QAT_R_ALLOC_QAT_RSA_METH_FAILURE                 110
# define QAT_R_ALLOC_QAT_X25519_METH_FAILURE              111
# define QAT_R_ALLOC_QAT_X448_METH_FAILURE                112
# define QAT_R_ALLOC_TAG_FAILURE                          113
# define QAT_R_BAD_INPUT_PARAMS                           114
# define QAT_R_BN_LIB_FAILURE                             115
# define QAT_R_BUF_CONV_FAIL                              116
# define QAT_R_CAPABILITY_FAILURE                         117
# define QAT_R_CHACHAPOLY_CTX_NULL                        118
# define QAT_R_CIPHER_DATA_NULL                           119
# define QAT_R_CIPHER_OPERATION_FAILED                    120
# define QAT_R_CLOSE_READFD_FAILURE                       121
# define QAT_R_COMPUTE_FAILURE                            122
# define QAT_R_COMPUTE_H_MULTIPLY_Q_FAILURE               123
# define QAT_R_CP_BUF_MALLOC_FAILURE                      124
# define QAT_R_CQ_BUF_MALLOC_FAILURE                      125
# define QAT_R_CREATE_FREELIST_QUEUE_FAILURE              126
# define QAT_R_CTX_MALLOC_FAILURE                         127
# define QAT_R_CTX_NULL                                   128
# define QAT_R_CURVE_COORDINATE_PARAMS_CONVERT_TO_FB_FAILURE 129
# define QAT_R_CURVE_DOES_NOT_SUPPORT_SIGNING             130
# define QAT_R_C_MODULO_P_FAILURE                         131
# define QAT_R_C_MODULO_Q_FAILURE                         132
# define QAT_R_C_P_Q_CP_CQ_MALLOC_FAILURE                 133
# define QAT_R_DEC_OP_DATA_MALLOC_FAILURE                 134
# define QAT_R_DERIVE_FAILURE                             135
# define QAT_R_DGSTLEN_INVALID                            136
# define QAT_R_DGST_BN_CONV_FAILURE                       137
# define QAT_R_DH_NULL                                    138
# define QAT_R_DLEN_INVALID                               139
# define QAT_R_DSA_DGST_NULL                              140
# define QAT_R_DSA_DGST_SIG_NULL                          141
# define QAT_R_ECDH_GET_AFFINE_COORD_FAILED               142
# define QAT_R_ECDH_GROUP_NULL                            143
# define QAT_R_ECDH_PRIVATE_KEY_NULL                      144
# define QAT_R_ECDH_PRIV_KEY_PUB_KEY_NULL                 145
# define QAT_R_ECDH_SET_AFFINE_COORD_FAILED               146
# define QAT_R_ECDH_UNKNOWN_FIELD_TYPE                    147
# define QAT_R_ECDSA_MALLOC_FAILURE                       148
# define QAT_R_ECDSA_SIGN_FAILURE                         149
# define QAT_R_ECDSA_SIGN_NULL                            150
# define QAT_R_ECDSA_SIGN_SETUP_FAILURE                   151
# define QAT_R_ECDSA_SIG_MALLOC_FAILURE                   152
# define QAT_R_ECDSA_SIG_SET_R_S_FAILURE                  153
# define QAT_R_ECDSA_VERIFY_FAILURE                       154
# define QAT_R_ECDSA_VERIFY_NULL                          155
# define QAT_R_ECKEY_GROUP_PUBKEY_SIG_NULL                156
# define QAT_R_EC_KEY_GROUP_PRIV_KEY_NULL                 157
# define QAT_R_EC_LIB                                     158
# define QAT_R_EC_POINT_RETRIEVE_FAILURE                  159
# define QAT_R_ENC_OP_DATA_MALLOC_FAILURE                 160
# define QAT_R_ENGINE_CTRL_CMD_FAILURE                    161
# define QAT_R_ENGINE_INIT_FAILURE                        162
# define QAT_R_ENGINE_NULL                                163
# define QAT_R_EPOLL_CREATE_FAILURE                       164
# define QAT_R_EPOLL_CTL_FAILURE                          165
# define QAT_R_EVENTS_MALLOC_FAILURE                      166
# define QAT_R_EVP_LIB                                    167
# define QAT_R_FAILED_TO_GET_PARAMETER                    168
# define QAT_R_FAILED_TO_SET_PARAMETER                    169
# define QAT_R_FALLBACK_INIT_FAILURE                      170
# define QAT_R_FALLBACK_POINTER_NULL                      171
# define QAT_R_FIELD_SIZE_INVALID                         172
# define QAT_R_FREE_DH_METH_FAILURE                       173
# define QAT_R_FREE_MULTIBUFF_RSA_METH_FAILURE            174
# define QAT_R_FREE_QAT_DSA_METH_FAILURE                  175
# define QAT_R_FREE_QAT_RSA_METH_FAILURE                  176
# define QAT_R_GCM_TAG_VERIFY_FAILURE                     177
# define QAT_R_GET_COFACTOR_FAILURE                       178
# define QAT_R_GET_FILE_DESCRIPTOR_FAILURE                179
# define QAT_R_GET_GROUP_FAILURE                          180
# define QAT_R_GET_INSTANCE_FAILURE                       181
# define QAT_R_GET_INSTANCE_INFO_FAILURE                  182
# define QAT_R_GET_NUM_INSTANCE_FAILURE                   183
# define QAT_R_GET_ORDER_FAILURE                          184
# define QAT_R_GET_PQG_FAILURE                            185
# define QAT_R_GET_PRIV_KEY_FAILURE                       186
# define QAT_R_GROUP_NULL                                 187
# define QAT_R_GROUP_PRIV_KEY_PUB_KEY_NULL                188
# define QAT_R_GROUP_PUB_KEY_NULL                         189
# define QAT_R_H_CONVERT_TO_FB_FAILURE                    190
# define QAT_R_ICP_SAL_USERSTART_FAIL                     191
# define QAT_R_ID_TOO_LARGE                               192
# define QAT_R_INITIALIZE_CTX_FAILURE                     193
# define QAT_R_INIT_FAILURE                               194
# define QAT_R_INPUT_DATA_MALLOC_FAILURE                  195
# define QAT_R_INPUT_PARAM_INVALID                        196
# define QAT_R_INSTANCE_HANDLE_MALLOC_FAILURE             197
# define QAT_R_INSTANCE_UNAVAILABLE                       198
# define QAT_R_INTERNAL_ERROR                             199
# define QAT_R_INVALID_AAD                                200
# define QAT_R_INVALID_ATTACHED_TAG                       201
# define QAT_R_INVALID_CTRL_TYPE                          202
# define QAT_R_INVALID_CURVE                              203
# define QAT_R_INVALID_DATA                               204
# define QAT_R_INVALID_HASH_DATA                          205
# define QAT_R_INVALID_INPUT                              206
# define QAT_R_INVALID_INPUT_LENGTH                       207
# define QAT_R_INVALID_INPUT_PARAMETER                    208
# define QAT_R_INVALID_IVLEN                              209
# define QAT_R_INVALID_IV_LENGTH                          210
# define QAT_R_INVALID_L                                  211
# define QAT_R_INVALID_LEN                                212
# define QAT_R_INVALID_PEER_KEY                           213
# define QAT_R_INVALID_PRIVATE_KEY                        214
# define QAT_R_INVALID_PTR                                215
# define QAT_R_INVALID_PTR_IV                             216
# define QAT_R_INVALID_PUB_KEY                            217
# define QAT_R_INVALID_QCTX_MEMORY                        218
# define QAT_R_INVALID_TAG                                219
# define QAT_R_INVALID_TAG_LEN                            220
# define QAT_R_INVALID_TYPE                               221
# define QAT_R_IN_KINV_CONVERT_TO_FB_FAILURE              222
# define QAT_R_IN_R_CONVERT_TO_FB_FAILURE                 223
# define QAT_R_IPSEC_MGR_NULL                             224
# define QAT_R_IV_ALLOC_FAILURE                           225
# define QAT_R_IV_GEN_INVALID                             226
# define QAT_R_IV_INVALID                                 227
# define QAT_R_IV_LEN_NOT_SUPPORTED                       228
# define QAT_R_IV_MALLOC_FAILURE                          229
# define QAT_R_IV_NOTSET                                  230
# define QAT_R_IV_NULL_PTR_INVALID                        231
# define QAT_R_IV_NVALID                                  232
# define QAT_R_KEYGEN_FAILURE                             233
# define QAT_R_KEYS_NOT_SET                               234
# define QAT_R_KEY_IV_NOT_SET                             235
# define QAT_R_KEY_MALLOC_FAILURE                         236
# define QAT_R_KEY_NOTSET                                 237
# define QAT_R_KEY_NULL                                   238
# define QAT_R_K_ALLOCATE_FAILURE                         239
# define QAT_R_K_CONVERT_TO_FB_FAILURE                    240
# define QAT_R_K_E_ORDER_MALLOC_FAILURE                   241
# define QAT_R_K_ORDER_CONVERT_TO_FB_FAILURE              242
# define QAT_R_K_RAND_GENERATE_FAILURE                    243
# define QAT_R_M1_DEDUCT_M2_FAILURE                       244
# define QAT_R_M1_M2_P_Q_QINV_TMP_MALLOC_FAILURE          245
# define QAT_R_MALLOC_FAILURE                             246
# define QAT_R_MAX_RETRIES_EXCEEDED                       247
# define QAT_R_MB_FREE_EC_METHOD_FAILURE                  248
# define QAT_R_MB_GET_EC_METHOD_MALLOC_FAILURE            249
# define QAT_R_MODULO_P_FAILURE                           250
# define QAT_R_MOD_GET_NEXT_INST_FAIL                     251
# define QAT_R_MOD_LN_MOD_EXP_FAIL                        252
# define QAT_R_MOD_SETUP_ASYNC_EVENT_FAIL                 253
# define QAT_R_MSGLEN_NOTSET                              254
# define QAT_R_MULTIPLY_QINV_FAILURE                      255
# define QAT_R_NID_NOT_SUPPORTED                          256
# define QAT_R_NO_PARAMETERS_SET                          257
# define QAT_R_N_E_CONVERT_TO_FB_FAILURE                  258
# define QAT_R_N_E_NULL                                   259
# define QAT_R_OP1_BASE_PDATA_MALLOC_FAILURE              260
# define QAT_R_OP2_BASE_PDATA_MALLOC_FAILURE              261
# define QAT_R_OPDATA_A_PDATA_MALLOC_FAILURE              262
# define QAT_R_OPDATA_DATA_MALLOC_FAILURE                 263
# define QAT_R_OPDATA_D_MALLOC_FAILURE                    264
# define QAT_R_OPDATA_E_MALLOC_FAILURE                    265
# define QAT_R_OPDATA_K_MALLOC_FAILURE                    266
# define QAT_R_OPDATA_MALLOC_FAILURE                      267
# define QAT_R_OPDATA_PDATA_MALLOC_FAILURE                268
# define QAT_R_OPDATA_ZPDATA_MALLOC_FAILURE               269
# define QAT_R_OPDCRT_NULL                                270
# define QAT_R_OPDONE_NULL                                271
# define QAT_R_OPDPIPE_NULL                               272
# define QAT_R_ORDER_MALLOC_FAILURE                       273
# define QAT_R_OUT1_PDATA_MALLOC_FAILURE                  274
# define QAT_R_OUT2_PDATA_MALLOC_FAILURE                  275
# define QAT_R_OUTPUT_BUFFER_TOO_SMALL                    276
# define QAT_R_OUTPUT_BUF_MALLOC_FAILURE                  277
# define QAT_R_OUTPUT_BUF_PDATA_MALLOC_FAILURE            278
# define QAT_R_OUTX_MALLOC_FAILURE                        279
# define QAT_R_OUTX_OUTY_LEN_NULL                         280
# define QAT_R_OUTY_MALLOC_FAILURE                        281
# define QAT_R_PADDING_UNKNOWN                            282
# define QAT_R_POLLING_THREAD_CREATE_FAILURE              283
# define QAT_R_POLLING_THREAD_SEM_INIT_FAILURE            284
# define QAT_R_POLLING_THREAD_SIGMASK_FAILURE             285
# define QAT_R_POLL_INSTANCE_FAILURE                      286
# define QAT_R_POPDATA_A_PDATA_MALLOC_FAILURE             287
# define QAT_R_POPDATA_MALLOC_FAILURE                     288
# define QAT_R_POPDATA_PCURVE_MALLOC_FAILURE              289
# define QAT_R_PPV_MALLOC_FAILURE                         290
# define QAT_R_PPV_PDATA_MALLOC_FAILURE                   291
# define QAT_R_PRESULTR_MALLOC_FAILURE                    292
# define QAT_R_PRESULTR_PDATA_MALLOC_FAILURE              293
# define QAT_R_PRESULTS_MALLOC_FAILURE                    294
# define QAT_R_PRESULTS_PDATA_MALLOC_FAILURE              295
# define QAT_R_PRESULTX_MALLOC_FAILURE                    296
# define QAT_R_PRESULTX_PDATA_MALLOC_FAILURE              297
# define QAT_R_PRESULTY_LENGTH_CHECK_FAILURE              298
# define QAT_R_PRESULTY_MALLOC_FAILURE                    299
# define QAT_R_PRESULTY_PDATA_MALLOC_FAILURE              300
# define QAT_R_PRIV_KEY_DUPLICATE_FAILURE                 301
# define QAT_R_PRIV_KEY_K_E_D_CONVERT_TO_FB_FAILURE       302
# define QAT_R_PRIV_KEY_MALLOC_FAILURE                    303
# define QAT_R_PRIV_KEY_M_XG_YG_A_B_P_CONVERT_TO_FB_FAILURE 304
# define QAT_R_PRIV_KEY_NULL                              305
# define QAT_R_PRIV_KEY_RAND_GENERATE_FAILURE             306
# define QAT_R_PRIV_KEY_XG_YG_A_B_P_CONVERT_TO_FB_FAILURE 307
# define QAT_R_PRIV_KEY_XP_YP_A_B_P_CONVERT_TO_FB_FAILURE 308
# define QAT_R_PTHREAD_CREATE_FAILURE                     309
# define QAT_R_PTHREAD_GETAFFINITY_FAILURE                310
# define QAT_R_PTHREAD_JOIN_FAILURE                       311
# define QAT_R_PTHREAD_SETAFFINITY_FAILURE                312
# define QAT_R_PUB_KEY_DUPLICATE_FAILURE                  313
# define QAT_R_PUB_KEY_MALLOC_FAILURE                     314
# define QAT_R_PUB_KEY_NULL                               315
# define QAT_R_P_A_B_XG_YG_MALLOC_FAILURE                 316
# define QAT_R_P_A_B_XG_YG_M_K_R_ORDER_MALLOC_FAILURE     317
# define QAT_R_P_A_B_XG_YG_XP_YP_M_ORDER_FAILURE          318
# define QAT_R_P_A_B_XP_YP_FAILURE                        319
# define QAT_R_P_A_B_XP_YP_MALLOC_FAILURE                 320
# define QAT_R_P_G_PRIV_KEY_CONVERT_TO_FB_FAILURE         321
# define QAT_R_P_PUB_PRIV_KEY_CONVERT_TO_FB_FAILURE       322
# define QAT_R_P_Q_DMP_DMQ_CONVERT_TO_FB_FAILURE          323
# define QAT_R_P_Q_DMP_DMQ_IQMP_NULL                      324
# define QAT_R_P_Q_G_NULL                                 325
# define QAT_R_P_Q_G_X_K_CONVERT_TO_FB_FAILURE            326
# define QAT_R_P_Q_G_Y_Z_R_S_CONVERT_TO_FB_FAILURE        327
# define QAT_R_QAT_ALLOC_DH_METH_FAILURE                  328
# define QAT_R_QAT_CREATE_ENGINE_FAILURE                  329
# define QAT_R_QAT_ECDSA_DO_SIGN_FAIL                     330
# define QAT_R_QAT_FREE_EC_METHOD_FAILURE                 331
# define QAT_R_QAT_GET_EC_METHOD_MALLOC_FAILURE           332
# define QAT_R_QAT_SET_DH_METH_FAILURE                    333
# define QAT_R_QCTX_CTX_NULL                              334
# define QAT_R_QCTX_NULL                                  335
# define QAT_R_RAND_BYTES_FAILURE                         336
# define QAT_R_RAND_FAILURE                               337
# define QAT_R_RAND_GENERATE_FAILURE                      338
# define QAT_R_RESULT_PDATA_ALLOC_FAIL                    339
# define QAT_R_RETRIEVE_EC_POINT_FAILURE                  340
# define QAT_R_RETRIEVE_ORDER_FAILURE                     341
# define QAT_R_RSA_FROM_TO_NULL                           342
# define QAT_R_RSA_OUTPUT_BUF_PDATA_MALLOC_FAILURE        343
# define QAT_R_R_Q_COMPARE_FAILURE                        344
# define QAT_R_SECRET_KEY_MALLOC_FAILURE                  345
# define QAT_R_SECRET_KEY_PDATA_MALLOC_FAILURE            346
# define QAT_R_SEM_POST_FAILURE                           347
# define QAT_R_SETUP_ASYNC_EVENT_FAILURE                  348
# define QAT_R_SET_ADDRESS_TRANSLATION_FAILURE            349
# define QAT_R_SET_FILE_DESCRIPTOR_NONBLOCKING_FAILURE    350
# define QAT_R_SET_INSTANCE_FAILURE                       351
# define QAT_R_SET_MULTIBUFF_RSA_METH_FAILURE             352
# define QAT_R_SET_NOTIFICATION_CALLBACK_FAILURE          353
# define QAT_R_SET_POLLING_THREAD_AFFINITY_FAILURE        354
# define QAT_R_SET_PRIV_KEY_FAILURE                       355
# define QAT_R_SET_QAT_DSA_METH_FAILURE                   356
# define QAT_R_SET_QAT_RSA_METH_FAILURE                   357
# define QAT_R_SET_TAG_INVALID_OP                         358
# define QAT_R_SHA3_CTX_NULL                              359
# define QAT_R_SIG_GET_R_S_FAILURE                        360
# define QAT_R_SIG_MALLOC_FAILURE                         361
# define QAT_R_SM2_BAD_SIGNATURE                          362
# define QAT_R_SM2_ID_TOO_LARGE                           363
# define QAT_R_SM2_INVALID_DIGEST                         364
# define QAT_R_SM2_SIGN_NULL                              365
# define QAT_R_SM2_SIG_GEN_MALLOC_FAILURE                 366
# define QAT_R_SM2_SIG_MALLOC_FAILURE                     367
# define QAT_R_SM2_SIG_SET_R_S_FAILURE                    368
# define QAT_R_SM2_VERIFY_NULL                            369
# define QAT_R_SM3_CTX_NULL                               370
# define QAT_R_SM3_FINAL_FAILURE                          371
# define QAT_R_SM3_INIT_FAILURE                           372
# define QAT_R_SM3_UPDATE_FAILURE                         373
# define QAT_R_SM4_CCM_DECRYPT_FAILURE                    374
# define QAT_R_SM4_GCM_DECRYPT_FAILURE                    375
# define QAT_R_SM4_GCM_ENCRYPT_FAILURE                    376
# define QAT_R_SM4_GET_INSTANCE_FAILED                    377
# define QAT_R_SM4_GET_SESSIONCTX_SIZE_FAILED             378
# define QAT_R_SM4_MALLOC_FAILED                          379
# define QAT_R_SM4_NO_QAT_INSTANCE_AVAILABLE              380
# define QAT_R_SM4_NULL_CKEY                              381
# define QAT_R_SM4_NULL_CTX_OR_KEY                        382
# define QAT_R_SM4_NULL_POINTER                           383
# define QAT_R_SM4_NULL_QCTX                              384
# define QAT_R_SM4_QAT_CONTEXT_NOT_INITIALISED            385
# define QAT_R_SM4_QAT_INITSESSION_FAILED                 386
# define QAT_R_SM4_QAT_SUBMIT_REQUEST_FAILED              387
# define QAT_R_SM4_REMOVE_SESSION_FAILED                  388
# define QAT_R_SM4_SETUP_META_DATA_FAILED                 389
# define QAT_R_SM4_SET_METHODS_FAILED                     390
# define QAT_R_SSD_MALLOC_FAILURE                         391
# define QAT_R_SSD_NULL                                   392
# define QAT_R_START_INSTANCE_FAILURE                     393
# define QAT_R_STOP_INSTANCE_FAILURE                      394
# define QAT_R_SW_GET_COMPUTE_KEY_PFUNC_NULL              395
# define QAT_R_SW_GET_KEYGEN_PFUNC_NULL                   396
# define QAT_R_SW_GET_SIGN_PFUNC_NULL                     397
# define QAT_R_SW_GET_SIGN_SETUP_PFUNC_NULL               398
# define QAT_R_SW_GET_SIGN_SIG_PFUNC_NULL                 399
# define QAT_R_SW_GET_VERIFY_PFUNC_NULL                   400
# define QAT_R_SW_GET_VERIFY_SIG_PFUNC_NULL               401
# define QAT_R_SW_METHOD_NULL                             402
# define QAT_R_S_NULL                                     403
# define QAT_R_S_Q_COMPARE_FAILURE                        404
# define QAT_R_TAG_NOTSET                                 405
# define QAT_R_TAG_NOT_NEEDED                             406
# define QAT_R_UNKNOWN_PADDING                            407
# define QAT_R_UNKNOWN_PADDING_TYPE                       408
# define QAT_R_WAKE_PAUSE_JOB_FAILURE                     409
# define QAT_R_X_Y_E_MALLOC_FAILURE                       410
# define QAT_R_X_Y_TX_TY_BN_MALLOC_FAILURE                411
# define QAT_R_X_Y_Z_MALLOC_FAILURE                       412
# define QAT_R_Z_ALLOCATE_FAILURE                         413

#endif
