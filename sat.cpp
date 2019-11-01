#include <nan.h>

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32)
#include "SATDLL.h"
#else
#define NOT_IMPLEMENTED
#endif

NAN_METHOD(QuerySAT) {
#ifndef NOT_IMPLEMENTED
  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Argument must be a number");
    return;
  }

  int iSession = info[0]->IntegerValue(Nan::GetCurrentContext()).FromJust();
  char* cSatStatus = ConsultarSAT(iSession);
  info.GetReturnValue().Set(Nan::New<v8::String>(cSatStatus).ToLocalChecked());
#else
    Nan::ThrowError("SO not supported.");
#endif
}

NAN_MODULE_INIT(Initialize) {
  NAN_EXPORT(target, QuerySAT);
}

NODE_MODULE(addon, Initialize)
