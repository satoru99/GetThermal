#include "uvc_sdk.h"
#include "leptonvariation.h"
#include "python_wrapper.h"

void* leptonvariation_create(uvc_context_t *ctx,
			     uvc_device_t *dev,
			     uvc_device_handle_t *devh) {
  return (void*) new LeptonVariation(ctx, dev, devh);
}

void leptonvariation_delete(void* p) {
  delete (LeptonVariation*) p;
}

void leptonvariation_performFfc(void* p) {
  ((LeptonVariation*) p)->performFfc();
}

int leptonvariation_getauxtempC(void* p, float* auxTemperaturePtr) {
  int result;
  result = ((LeptonVariation*) p)->getSysAuxTemperatureCelcius(auxTemperaturePtr);
  return result;
}

int leptonvariation_getauxtempK(void* p, uint16_t* auxTemperaturePtr) {
  int result;
  result = ((LeptonVariation*) p)->getSysAuxTemperatureKelvin(auxTemperaturePtr);
  return result;
}
