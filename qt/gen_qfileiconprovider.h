#pragma once
#ifndef MIQT_QT_GEN_QFILEICONPROVIDER_H
#define MIQT_QT_GEN_QFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFileIconProvider;
class QFileInfo;
class QIcon;
#else
typedef struct QFileIconProvider QFileIconProvider;
typedef struct QFileInfo QFileInfo;
typedef struct QIcon QIcon;
#endif

QFileIconProvider* QFileIconProvider_new();
QIcon* QFileIconProvider_Icon(const QFileIconProvider* self, int typeVal);
QIcon* QFileIconProvider_IconWithInfo(const QFileIconProvider* self, QFileInfo* info);
struct miqt_string QFileIconProvider_Type(const QFileIconProvider* self, QFileInfo* info);
void QFileIconProvider_SetOptions(QFileIconProvider* self, int options);
int QFileIconProvider_Options(const QFileIconProvider* self);
void QFileIconProvider_override_virtual_Icon(void* self, intptr_t slot);
QIcon* QFileIconProvider_virtualbase_Icon(const void* self, int typeVal);
void QFileIconProvider_override_virtual_IconWithInfo(void* self, intptr_t slot);
QIcon* QFileIconProvider_virtualbase_IconWithInfo(const void* self, QFileInfo* info);
void QFileIconProvider_override_virtual_Type(void* self, intptr_t slot);
struct miqt_string QFileIconProvider_virtualbase_Type(const void* self, QFileInfo* info);
void QFileIconProvider_Delete(QFileIconProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
