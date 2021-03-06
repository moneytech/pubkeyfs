/*
 * Public Key File System (PKFS)
 *
 * Copyright (C) Kelsey Hightower, 2012
 */
#ifndef __PKFS_LDAPAPI_H__
#define __PKFS_LDAPAPI_H__

#include "utils.h"

#define MAX_FILTER 256
#define CAST_PATH (char*)(ptrdiff_t)

struct pubkeys {
  char *keys;
  int size;
};

typedef struct pubkeys pubkeys_t;

int ldap_user_check(char *uid);
int get_public_keys(char *uid, pubkeys_t *pubkeys);
void initialize_public_keys(pubkeys_t **pubkeys);
void destroy_public_keys(pubkeys_t *pubkeys);

#endif

