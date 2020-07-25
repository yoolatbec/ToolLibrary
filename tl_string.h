#ifndef _TL_STRING_H_
#define _TL_STRING_H_

#include "tl_def.h"

typedef struct tl_string{
    Object super;
    const char* str;
    size_t length;
} String;

String* tl_create_string(const char*);
void tl_release_string(String*);

String* tl_string_append(String*, String*);
String* tl_string_append_chars(String*, const char*);

int tl_string_length(String*);

#endif