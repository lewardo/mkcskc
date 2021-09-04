/* 
 * the mkcskc.h header v1.0, making c sexy(er) since 2021
 * 
 * copyright (c) lewardo all rights reserved
 * 
 */

#pragma once

#ifdef __cplusplus
/*
 *  c++ only region
 */

#include <cstdint>
#include <unordered_map>


// renaming something which should have been renamed long ago
template <typename a, typename b>
using hashtable = std::unordered_map<a, b>

#else
/*
 *  c only region
 */

#include <stdint.h>

// such a useful way to pass data, but dereferencing is such a hassle... Not Anymore!
// useage: pv => pointer to dereference; t => type to cast as
#define pv_deref(pv, t) ((t) *((t *) (pv)))


#endif

// negating a whole condition is so ugly, so you'll only have to see it here from now on!
#define ifnt( condition ) if(!( condition ))
#define whilnt( condition ) while(!( condition ))

// just a _really_ useful macro! a for loop where the variable name passed as n loops from lo to hi
// useage: for range(i, 0, 10)
#define range(n, lo, hi) (signed long long int n = lo; n < hi; ++n)