#pragma once
#ifndef MIQT_QT6_GEN_QABSTRACTFILEICONPROVIDER_H
#define MIQT_QT6_GEN_QABSTRACTFILEICONPROVIDER_H

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
class QFileInfo;
class QIcon;
#else
typedef struct QAbstractFileIconProvider QAbstractFileIconProvider;
typedef struct QFileInfo QFileInfo;
typedef struct QIcon QIcon;
#endif

QAbstractFileIconProvider* QAbstractFileIconProvider_new();
QIcon* QAbstractFileIconProvider_Icon(const QAbstractFileIconProvider* self, int param1);
QIcon* QAbstractFileIconProvider_IconWithQFileInfo(const QAbstractFileIconProvider* self, QFileInfo* param1);
struct miqt_string QAbstractFileIconProvider_Type(const QAbstractFileIconProvider* self, QFileInfo* param1);
void QAbstractFileIconProvider_SetOptions(QAbstractFileIconProvider* self, int options);
int QAbstractFileIconProvider_Options(const QAbstractFileIconProvider* self);
void QAbstractFileIconProvider_override_virtual_Icon(void* self, intptr_t slot);
QIcon* QAbstractFileIconProvider_virtualbase_Icon(const void* self, int param1);
void QAbstractFileIconProvider_override_virtual_IconWithQFileInfo(void* self, intptr_t slot);
QIcon* QAbstractFileIconProvider_virtualbase_IconWithQFileInfo(const void* self, QFileInfo* param1);
void QAbstractFileIconProvider_override_virtual_Type(void* self, intptr_t slot);
struct miqt_string QAbstractFileIconProvider_virtualbase_Type(const void* self, QFileInfo* param1);
void QAbstractFileIconProvider_override_virtual_SetOptions(void* self, intptr_t slot);
void QAbstractFileIconProvider_virtualbase_SetOptions(void* self, int options);
void QAbstractFileIconProvider_override_virtual_Options(void* self, intptr_t slot);
int QAbstractFileIconProvider_virtualbase_Options(const void* self);
void QAbstractFileIconProvider_Delete(QAbstractFileIconProvider* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
