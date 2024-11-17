#pragma once
#ifndef MIQT_QT6_GEN_QRASTERWINDOW_H
#define MIQT_QT6_GEN_QRASTERWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
QMetaObject* QRasterWindow_MetaObject(const QRasterWindow* self);
void* QRasterWindow_Metacast(QRasterWindow* self, const char* param1);
struct miqt_string QRasterWindow_Tr(const char* s);
struct miqt_string QRasterWindow_Tr2(const char* s, const char* c);
struct miqt_string QRasterWindow_Tr3(const char* s, const char* c, int n);
void QRasterWindow_Delete(QRasterWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
