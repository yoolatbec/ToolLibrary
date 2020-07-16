#ifndef _TL_DEF_H_
#define _TL_DEF_H_

#define nullptr 0

#define false 0
#define true (!false)

typedef struct tl_byte{
    int: 8;
} Byte;

typedef struct tl_object{

} Object;

typedef Byte* tl_ptr;

#endif