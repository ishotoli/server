/******************************************************
Copyright (c) 2013 Percona LLC and/or its affiliates.

Encryption interface for XtraBackup.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; version 2 of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA

*******************************************************/

#ifndef DS_ENCRYPT_H
#define DS_ENCRYPT_H

#include "datasink.h"
#ifdef HAVE_GCRYPT
extern datasink_t datasink_encrypt;
#endif
/* Encryption options */
extern uint		ds_encrypt_encrypt_threads;
extern ulonglong	ds_encrypt_encrypt_chunk_size;


#endif
