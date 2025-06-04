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
QIcon* QFileIconProvider_icon(const QFileIconProvider* self, int type);
QIcon* QFileIconProvider_iconWithInfo(const QFileIconProvider* self, QFileInfo* info);

bool QFileIconProvider_override_virtual_icon(void* self, intptr_t slot);
QIcon* QFileIconProvider_virtualbase_icon(const void* self, int type);
bool QFileIconProvider_override_virtual_iconWithInfo(void* self, intptr_t slot);
QIcon* QFileIconProvider_virtualbase_iconWithInfo(const void* self, QFileInfo* info);
bool QFileIconProvider_override_virtual_type(void* self, intptr_t slot);
struct miqt_string QFileIconProvider_virtualbase_type(const void* self, QFileInfo* param1);
bool QFileIconProvider_override_virtual_setOptions(void* self, intptr_t slot);
void QFileIconProvider_virtualbase_setOptions(void* self, int options);
bool QFileIconProvider_override_virtual_options(void* self, intptr_t slot);
int QFileIconProvider_virtualbase_options(const void* self);

void QFileIconProvider_delete(QFileIconProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
