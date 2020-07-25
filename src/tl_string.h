#ifndef TL_STRING_H
#define TL_STRING_H

#include "tl_def.h"

typedef struct tl_string{
    Object super;
    size_t length;
    const char* str;
} String;

String* tl_create_string(const char*);
String* tl_create_string_with_length(size_t len);
void tl_release_string(String*);

String* tl_string_append(String*, String*);
String* tl_string_append_chars(String*, const char*);

size_t tl_string_length(String*);

#endif
