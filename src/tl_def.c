/*
 * tl_def.c
 *
 *  Created on: 2020年7月25日
 *      Author: yoolatbec
 */
#include <stdlib.h>
#include "tl_def.h"

static unsigned long long hash_code(Object*);

const Object null = {
	0
};

Object* tl_create_object(void){
	Object* obj = malloc(sizeof(Object));
	obj->hash_code = hash_code(obj);
	return obj;
}

static unsigned long long hash_code(Object* object){

}
