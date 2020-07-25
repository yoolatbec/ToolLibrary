<<<<<<< HEAD
/*
 * tl_def.h
 *
 *  Created on: 2020年7月25日
 *      Author: yoolatbec
 */

#ifndef TL_DEF_H_
#define TL_DEF_H_
=======
#ifndef _TL_DEF_H_
#define _TL_DEF_H_

#define nullptr 0
>>>>>>> origin/master

#define false 0
#define true (!false)

<<<<<<< HEAD
#define nullptr 0

typedef struct tl_byte{
	int: 8;
} Byte;

typedef Byte* tl_ptr;

typedef struct tl_object{
	unsigned long long hash_code;
} Object;

extern const Object null;

Object* tl_create_object(void);

#endif /* TL_DEF_H_ */
=======
typedef struct tl_byte{
    int: 8;
} Byte;

typedef struct tl_object{

} Object;

typedef Byte* tl_ptr;

#endif
>>>>>>> origin/master
