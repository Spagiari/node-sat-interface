#include <nan.h>
#include <helper.h>

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32)
#include "SATDLL.h"
#else
#define NOT_IMPLEMENTED
#endif

#define GET_C_INT(arg) arg->IntegerValue(Nan::GetCurrentContext()).FromJust();
#define GET_C_STR(arg) v8::String::Utf8Value s(arg);
#define SET_C_STR(value) info.GetReturnValue().Set(Nan::New<v8::String>(value).ToLocalChecked());

NAN_METHOD(getStatus) {
#ifndef NOT_IMPLEMENTED
	checkArgsTypeIsNumber(info, 0);

	int iSession = info[0]->IntegerValue(Nan::GetCurrentContext()).FromJust();
	char* cSatStatus = ConsultarSAT(iSession);
	info.GetReturnValue().Set(Nan::New<v8::String>(cSatStatus).ToLocalChecked());
#else 
	Nan::ThrowError("SO not supported.");
#endif
}

NAN_METHOD(sendSalesData) {
#ifndef NOT_IMPLEMENTED
	checkArgsTypeIsNumber(info, 0);
	checkArgsTypeIsString(info, 1);
	checkArgsTypeIsString(info, 2);

  int iSession = GET_C_INT(info[0]);
  std::string sActivationCode(GET_C_STR(info[1])); 
  std::string sSalesData(GET_C_STR(info[2]));

  char* cSatCommand = EnviarDadosVenda(iSession, sActivationCode.c_str(), sSalesData.c_str());
  SET_C_STR(cSatCommand);
#else
    Nan::ThrowError("SO not supported.");
#endif
}

NAN_MODULE_INIT(Initialize) {
  NAN_EXPORT(target, query);
}

NODE_MODULE(addon, Initialize)
