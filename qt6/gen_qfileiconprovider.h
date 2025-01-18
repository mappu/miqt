#pragma once
#ifndef MIQT_QT6_GEN_QFILEICONPROVIDER_H
#define MIQT_QT6_GEN_QFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractFileIconProvider;
class QFileIconProvider;
class QFileInfo;
class QIcon;
#else
typedef struct QAbstractFileIconProvider QAbstractFileIconProvider;
typedef struct QFileIconProvider QFileIconProvider;
typedef struct QFileInfo QFileInfo;
typedef struct QIcon QIcon;
#endif

QFileIconProvider* QFileIconProvider_new();
void QFileIconProvider_virtbase(QFileIconProvider* src, QAbstractFileIconProvider** outptr_QAbstractFileIconProvider);
QIcon* QFileIconProvider_Icon(const QFileIconProvider* self, int typeVal);
QIcon* QFileIconProvider_IconWithInfo(const QFileIconProvider* self, QFileInfo* info);
bool QFileIconProvider_override_virtual_Icon(void* self, intptr_t slot);
QIcon* QFileIconProvider_virtualbase_Icon(const void* self, int typeVal);
bool QFileIconProvider_override_virtual_IconWithInfo(void* self, intptr_t slot);
QIcon* QFileIconProvider_virtualbase_IconWithInfo(const void* self, QFileInfo* info);
bool QFileIconProvider_override_virtual_Type(void* self, intptr_t slot);
struct miqt_string QFileIconProvider_virtualbase_Type(const void* self, QFileInfo* param1);
bool QFileIconProvider_override_virtual_SetOptions(void* self, intptr_t slot);
void QFileIconProvider_virtualbase_SetOptions(void* self, int options);
bool QFileIconProvider_override_virtual_Options(void* self, intptr_t slot);
int QFileIconProvider_virtualbase_Options(const void* self);
void QFileIconProvider_Delete(QFileIconProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
