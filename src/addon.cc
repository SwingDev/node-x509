#include <cstdlib>
#include <cstdio>

#include <addon.h>
#include <x509.h>

using namespace v8;
using namespace Nan;

void init(Local<Object> exports) {
  Nan::Set(exports,
    Nan::New<String>("version").ToLocalChecked(),
    Nan::New<String>(VERSION).ToLocalChecked());

  Nan::Set(exports,
    Nan::New<String>("parseCert").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(parse_cert)).ToLocalChecked());
}

NODE_MODULE(x509, init)
