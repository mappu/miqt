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
QIcon* QAbstractFileIconProvider_icon(const QAbstractFileIconProvider* self, int param1);
QIcon* QAbstractFileIconProvider_iconWithQFileInfo(const QAbstractFileIconProvider* self, QFileInfo* param1);
struct miqt_string QAbstractFileIconProvider_type(const QAbstractFileIconProvider* self, QFileInfo* param1);
void QAbstractFileIconProvider_setOptions(QAbstractFileIconProvider* self, int options);
int QAbstractFileIconProvider_options(const QAbstractFileIconProvider* self);
bool QAbstractFileIconProvider_override_virtual_icon(void* self, intptr_t slot);
QIcon* QAbstractFileIconProvider_virtualbase_icon(const void* self, int param1);
bool QAbstractFileIconProvider_override_virtual_iconWithQFileInfo(void* self, intptr_t slot);
QIcon* QAbstractFileIconProvider_virtualbase_iconWithQFileInfo(const void* self, QFileInfo* param1);
bool QAbstractFileIconProvider_override_virtual_type(void* self, intptr_t slot);
struct miqt_string QAbstractFileIconProvider_virtualbase_type(const void* self, QFileInfo* param1);
bool QAbstractFileIconProvider_override_virtual_setOptions(void* self, intptr_t slot);
void QAbstractFileIconProvider_virtualbase_setOptions(void* self, int options);
bool QAbstractFileIconProvider_override_virtual_options(void* self, intptr_t slot);
int QAbstractFileIconProvider_virtualbase_options(const void* self);
void QAbstractFileIconProvider_delete(QAbstractFileIconProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
