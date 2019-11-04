#include <string>
#include "helper.h"

void checkArgsTypeIsNumber(Nan::NAN_METHOD_ARGS_TYPE info, int index) {
	if (!info[index]->IsNumber())
		Nan::ThrowError(getErrorMessage(index, "number"));
}

char* getErrorMessage(int index, char* typeName)
{
	std::string message;
	message << "Argument " << std::to_string(index) << "  must be a " << typeName;
	return message.c_str();
}

