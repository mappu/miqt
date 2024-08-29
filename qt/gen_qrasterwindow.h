#ifndef GEN_QRASTERWINDOW_H
#define GEN_QRASTERWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QRasterWindow;
class QWindow;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QRasterWindow QRasterWindow;
typedef struct QWindow QWindow;
#endif

QRasterWindow* QRasterWindow_new();
QRasterWindow* QRasterWindow_new2(QWindow* parent);
QMetaObject* QRasterWindow_MetaObject(QRasterWindow* self);
void QRasterWindow_Tr(const char* s, char** _out, int* _out_Strlen);
void QRasterWindow_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QRasterWindow_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QRasterWindow_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QRasterWindow_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QRasterWindow_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QRasterWindow_Delete(QRasterWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
