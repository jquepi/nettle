/* cmac-internal.h

   CMAC mode internal functions

   Copyright (C) 2017 Red Hat, Inc.

   Contributed by Nikos Mavrogiannopoulos

   This file is part of GNU Nettle.

   GNU Nettle is free software: you can redistribute it and/or
   modify it under the terms of either:

     * the GNU Lesser General Public License as published by the Free
       Software Foundation; either version 3 of the License, or (at your
       option) any later version.

   or

     * the GNU General Public License as published by the Free
       Software Foundation; either version 2 of the License, or (at your
       option) any later version.

   or both in parallel, as here.

   GNU Nettle is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received copies of the GNU General Public License and
   the GNU Lesser General Public License along with this program.  If
   not, see http://www.gnu.org/licenses/.
*/

#ifndef NETTLE_CMAC_INTERNAL_H_INCLUDED
#define NETTLE_CMAC_INTERNAL_H_INCLUDED

#include "cmac.h"

#ifdef __cplusplus
extern "C" {
#endif

#define _cmac128_block_mulx _nettle_cmac128_block_mulx

void _cmac128_block_mulx(union nettle_block16 *out,
			 const union nettle_block16 *in);

#ifdef __cplusplus
}
#endif

#endif /* CMAC_INTERNAL_H_INCLUDED */
