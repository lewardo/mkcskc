/* 
 * the mkcskc.h header v1.0, making c sexy(er) since 2021
 * 
 * copyright (c) lewardo, all rights reserved
 * 
 */

#pragma once

#ifdef __cplusplus

/*
 *  cpp-specific additions
 */

#include <cstdint>
#include <unordered_map>


/*
 *  type alias 
 */
template <typename Ta, typename Tb>
using hash_table = std::unordered_map<Ta, Tb>

#else

/*
 *  c-specific additions
 */

#include <stdint.h>


/*
 *  void pointer dereference
 */
#define pv_deref(pv, t) ((t) *((t *) (pv)))


#endif

/*
 *  negated if
 */
#define ifnt( condition ) if(!( condition ))

/*
 *  negated while
 */
#define whilnt( condition ) while(!( condition ))