#ifndef TL_ARRAY_H
#define TL_ARRAY_H

#include "../tl_def.h"

#define ARRAY_MAX_CAPACITY (size_t)(-1);

typedef struct tl_array{
    Object super;
    size_t capacity;
    size_t used;
    size_t element_size;
    tl_ptr elements;
} Array;

Array* tl_create_array(size_t element_size, size_t capacity);
void tl_release_array(Array*);

void tl_array_add(Array*, tl_ptr, int*);
int tl_array_insert(Array*, tl_ptr, size_t, int*);


#endif
