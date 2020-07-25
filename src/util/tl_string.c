/*
 * tl_string.c
 *
 *  Created on: 2020年7月25日
 *      Author: yoolatbec
 */

#include "../tl_string.h"
#include <string.h>
#include <stdlib.h>

String* tl_create_string(const char* data){
	int length = strlen(data) + 1;
	String* str = malloc(sizeof(String));
	str->super = tl_create_object();
	str->length = length;
	str->str = malloc(length * sizeof(char));
	strncpy(str->str, data, length);
	return str;
}

