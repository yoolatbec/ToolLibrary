/*
 * tl_def.h
 *
 *  Created on: 2020年7月25日
 *      Author: yoolatbec
 */

#ifndef TL_DEF_H_
#define TL_DEF_H_

#define nullptr 0

#define false 0
#define true (!false)

typedef struct tl_byte{
	int: 8;
} Byte;

typedef Byte* tl_ptr;

typedef struct tl_object{
	unsigned long long hash_code;
} Object;

extern const Object null;

Object* tl_create_object(void);

#endif
