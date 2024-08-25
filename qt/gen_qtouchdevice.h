#ifndef GEN_QTOUCHDEVICE_H
#define GEN_QTOUCHDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QTouchDevice;
#else
typedef struct QTouchDevice QTouchDevice;
#endif

QTouchDevice* QTouchDevice_new();
void QTouchDevice_Devices(QTouchDevice*** _out, size_t* _out_len);
void QTouchDevice_Name(QTouchDevice* self, char** _out, int* _out_Strlen);
int QTouchDevice_MaximumTouchPoints(QTouchDevice* self);
void QTouchDevice_SetName(QTouchDevice* self, const char* name, size_t name_Strlen);
void QTouchDevice_SetMaximumTouchPoints(QTouchDevice* self, int max);
void QTouchDevice_Delete(QTouchDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
