/*
 * userpref.h
 * contains methods to access user specific certificates IDs and more.
 *
 * Copyright (c) 2008 Jonathan Beck All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef __USERPREF_H
#define __USERPREF_H

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

typedef struct {
	unsigned char *data;
	unsigned int size;
} key_data_t;

#ifndef LIBIMOBILEDEVICE_INTERNAL
#ifdef WIN32
#define LIBIMOBILEDEVICE_INTERNAL
#else
#define LIBIMOBILEDEVICE_INTERNAL __attribute__((visibility("hidden")))
#endif
#endif

#define USERPREF_E_SUCCESS             0
#define USERPREF_E_INVALID_ARG        -1
#define USERPREF_E_INVALID_CONF       -2
#define USERPREF_E_SSL_ERROR          -3
#define USERPREF_E_READ_ERROR         -4
#define USERPREF_E_WRITE_ERROR        -5

#define USERPREF_E_UNKNOWN_ERROR    -256

typedef __int16 userpref_error_t;

LIBIMOBILEDEVICE_INTERNAL userpref_error_t userpref_get_keys_and_certs(key_data_t* root_privkey, key_data_t* root_crt, key_data_t* host_privkey, key_data_t* host_crt);
LIBIMOBILEDEVICE_INTERNAL userpref_error_t userpref_set_keys_and_certs(key_data_t * root_key, key_data_t * root_cert, key_data_t * host_key, key_data_t * host_cert);
LIBIMOBILEDEVICE_INTERNAL userpref_error_t userpref_get_certs_as_pem(key_data_t *pem_root_cert, key_data_t *pem_host_cert);
LIBIMOBILEDEVICE_INTERNAL userpref_error_t userpref_set_device_public_key(const char *udid, key_data_t public_key);
userpref_error_t userpref_remove_device_public_key(const char *udid);
LIBIMOBILEDEVICE_INTERNAL int userpref_has_device_public_key(const char *udid);
userpref_error_t userpref_get_paired_udids(char ***list, unsigned int *count);
void userpref_get_host_id(char **host_id);

#endif
