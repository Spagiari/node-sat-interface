#include <nan.h>

#if (defined (_WIN_32_VER) || defined (_WIN_64_VER))
#include <SATDLL.h>
#else
#define NOT_IMPLEMENTED
#endif

const int maxValue = 10;
int numberOfCalls = 0;

NAN_METHOD(WhoAmI) {
  auto message = Nan::New<v8::String>("I'm a Node Hero!").ToLocalChecked();
  info.GetReturnValue().Set(message);
}

NAN_METHOD(Increment) {
  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Argument must be a number");
    return;
  }

  double infoValue = info[0]->NumberValue();
  if (numberOfCalls + infoValue > maxValue) {
    Nan::ThrowError("Counter went through the roof!");
    return;
  }

  numberOfCalls += infoValue;

  auto currentNumberOfCalls =
    Nan::New<v8::Number>(numberOfCalls);

  info.GetReturnValue().Set(currentNumberOfCalls);
}

NAN_METHOD(ConsultarSAT) {
#ifndef NOT_IMPLEMENTED
  if (!info[0]->IsNumber()) {
    Nan::ThrowError("Argument must be a number");
    return;
  }

  int numeroSessao = info[0]->NumberValue();
  char* ret = ConsultarSAT(numeroSessao);
  auto satInfo = Nan::New<v8::String>(ret);
  info.GetReturnValue().Set(satInfo);
#else
    Nan::ThrowError("SO not supported.");
    return;
#endif
}

NAN_MODULE_INIT(Initialize) {
  NAN_EXPORT(target, WhoAmI);
  NAN_EXPORT(target, Increment);
  NAN_EXPORT(target, ConsultarSAT);
}

NODE_MODULE(addon, Initialize)
