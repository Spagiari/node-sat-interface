#ifndef HELPER_H_
#define HELPER_H_

#include<nan.h>

void checkArgsTypeIsNumber(Nan::NAN_METHOD_ARGS_TYPE info, int index);
void checkArgsTypeIsString(Nan::NAN_METHOD_ARGS_TYPE info, int index);
char* getErrorMessage(int index, char* typeName);

#endif

