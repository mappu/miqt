#ifndef GEN_QPAINTDEVICEWINDOW_H
#define GEN_QPAINTDEVICEWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QPaintDeviceWindow;
class QRect;
class QRegion;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QPaintDeviceWindow QPaintDeviceWindow;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
#endif

QMetaObject* QPaintDeviceWindow_MetaObject(QPaintDeviceWindow* self);
void QPaintDeviceWindow_Tr(const char* s, char** _out, int* _out_Strlen);
void QPaintDeviceWindow_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QPaintDeviceWindow_Update(QPaintDeviceWindow* self, QRect* rect);
void QPaintDeviceWindow_UpdateWithRegion(QPaintDeviceWindow* self, QRegion* region);
void QPaintDeviceWindow_Update2(QPaintDeviceWindow* self);
void QPaintDeviceWindow_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPaintDeviceWindow_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QPaintDeviceWindow_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPaintDeviceWindow_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QPaintDeviceWindow_Delete(QPaintDeviceWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
