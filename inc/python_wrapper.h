#ifdef __cplusplus
extern "C" {
#endif
  void* leptonvariation_create(uvc_context_t *ctx,
			       uvc_device_t *dev,
			       uvc_device_handle_t *devh);
  void leptonvariation_delete(void* p);
  void leptonvariation_performFfc(void* p);
  int leptonvariation_getauxtempK(void* p, int* auxTemperaturePtr);
#ifdef __cplusplus
}
#endif
