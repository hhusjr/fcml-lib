/*
 * fcml_types.h
 *
 *  Created on: 02-03-2013
 *      Author: tAs
 */

#ifndef FCML_TYPES_H_
#define FCML_TYPES_H_

#include <stddef.h>
#include <stdint.h>

typedef uint8_t fcml_bool;
typedef int8_t fcml_int8_t;
typedef uint8_t fcml_uint8_t;
typedef int16_t fcml_int16_t;
typedef uint16_t fcml_uint16_t;
typedef int32_t fcml_int32_t;
typedef uint32_t fcml_uint32_t;
typedef int64_t fcml_int64_t;
typedef uint64_t fcml_uint64_t;

typedef char fcml_char;
typedef char* fcml_string;
typedef float fcml_float;
typedef fcml_uint16_t fcml_data_size;
typedef void* fcml_ptr;

typedef unsigned int fcml_usize;
typedef int fcml_size;

#define FCML_TRUE		1
#define FCML_FALSE		0

/* Signed integers. */
#define FCML_INT64_MAX	INT64_MAX
#define FCML_INT64_MIN	INT64_MIN
#define FCML_INT32_MAX	INT32_MAX
#define FCML_INT32_MIN	INT32_MIN
#define FCML_INT16_MAX	INT16_MAX
#define FCML_INT16_MIN	INT16_MIN
#define FCML_INT8_MAX	INT8_MAX
#define FCML_INT8_MIN	INT8_MIN

/* Unsigned integers. */
#define FCML_UINT8_MAX	UINT8_MAX
#define FCML_UINT16_MAX	UINT16_MAX
#define FCML_UINT32_MAX	UINT32_MAX
#define FCML_UINT64_MAX	UINT64_MAX

/* Macro for bit manipulations. */

#define FCML_TP_SET_BIT(x,y)	( ( x ) | ( 0x01 << ( y ) ) )
#define FCML_TP_GET_BIT(x,y)	( ( x >> y ) & 0x01 )
#define FCML_TP_CLEAR_BIT(x,y)  ( ( x ) &= ~( 1 << ( y ) ) )

/* Nulleable types. */

typedef struct fcml_nuint8_t {
	fcml_uint8_t value;
	fcml_bool is_not_null;
} fcml_nuint8_t;

typedef struct fcml_nuint16_t {
	fcml_uint16_t value;
	fcml_bool is_not_null;
} fcml_nuint16_t;

typedef struct fcml_nuint32_t {
	fcml_uint32_t value;
	fcml_bool is_not_null;
} fcml_nuint32_t;

typedef struct fcml_nuint64_t {
	fcml_uint64_t value;
	fcml_bool is_not_null;
} fcml_nuint64_t;

typedef struct fcml_nint8_t {
	fcml_int8_t value;
	fcml_bool is_not_null;
} fcml_nint8_t;

typedef struct fcml_nint16_t {
	fcml_int16_t value;
	fcml_bool is_not_null;
} fcml_nint16_t;

typedef struct fcml_nint32_t {
	fcml_int32_t value;
	fcml_bool is_not_null;
} fcml_nint32_t;

typedef struct fcml_nint64_t {
	fcml_int64_t value;
	fcml_bool is_not_null;
} fcml_nint64_t;

typedef struct fcml_st_integer {
    fcml_data_size size;
    fcml_bool is_signed;
    union {
        fcml_int8_t int8;
        fcml_int16_t int16;
        fcml_int32_t int32;
        fcml_int64_t int64;
    };
} fcml_st_integer;

#endif /* FCML_TYPES_H_ */
