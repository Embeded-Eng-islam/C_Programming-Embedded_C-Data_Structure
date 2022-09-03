#ifndef PLATFORM_ISLAM_H_
#define PLATFORM_ISLAM_H_
/*
 * Platform_Islam.h
 *
 *  Created on: Sep 2, 2022
 *      Author: ELBOSTAN
 */
#include<stdint.h>
#include<stdbool.h>
#define CPU_TYPE        CPU_TYPE_32
#define CPU_BIT_ORDER   MSB_FIRST
#define CPU_BYTE_ORDER  HIGH_BYTE_FIRST
/* 7.18.1.1  Exact-width integer types.
 */
typedef int8_t   sint8;
typedef uint8_t  uint8;
typedef int16_t  sint16;
typedef uint16_t uint16;
typedef int32_t  sint32;
typedef uint32_t uint32;
typedef int64_t  sint64;
typedef uint64_t uint64;
/* 7.18.1.1  Exact-width volatile integer types.
 */
typedef volatile int8_t   vsint8;
typedef volatile uint8_t  vuint8;

typedef volatile int16_t  vsint16;
typedef volatile uint16_t vuint16;

typedef volatile int32_t  vsint32;
typedef volatile uint32_t vuint32;

typedef volatile int64_t  vsint64;
typedef volatile uint64_t vuint64;
#endif /* PLATFORM_ISLAM_H_ */
