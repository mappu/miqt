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
QIcon* QFileIconProvider_icon(const QFileIconProvider* self, int type);
QIcon* QFileIconProvider_iconWithInfo(const QFileIconProvider* self, QFileInfo* info);
struct miqt_string QFileIconProvider_type(const QFileIconProvider* self, QFileInfo* info);
void QFileIconProvider_setOptions(QFileIconProvider* self, int options);
int QFileIconProvider_options(const QFileIconProvider* self);
bool QFileIconProvider_override_virtual_icon(void* self, intptr_t slot);
QIcon* QFileIconProvider_virtualbase_icon(const void* self, int type);
bool QFileIconProvider_override_virtual_iconWithInfo(void* self, intptr_t slot);
QIcon* QFileIconProvider_virtualbase_iconWithInfo(const void* self, QFileInfo* info);
bool QFileIconProvider_override_virtual_type(void* self, intptr_t slot);
struct miqt_string QFileIconProvider_virtualbase_type(const void* self, QFileInfo* info);
void QFileIconProvider_delete(QFileIconProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
