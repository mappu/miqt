#pragma once
#ifndef MIQT_QT_GEN_QSTYLEPLUGIN_H
#define MIQT_QT_GEN_QSTYLEPLUGIN_H

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
class QObject;
class QStyle;
class QStylePlugin;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QStyle QStyle;
typedef struct QStylePlugin QStylePlugin;
#endif

QMetaObject* QStylePlugin_MetaObject(const QStylePlugin* self);
void* QStylePlugin_Metacast(QStylePlugin* self, const char* param1);
struct miqt_string QStylePlugin_Tr(const char* s);
struct miqt_string QStylePlugin_TrUtf8(const char* s);
QStyle* QStylePlugin_Create(QStylePlugin* self, struct miqt_string key);
struct miqt_string QStylePlugin_Tr2(const char* s, const char* c);
struct miqt_string QStylePlugin_Tr3(const char* s, const char* c, int n);
struct miqt_string QStylePlugin_TrUtf82(const char* s, const char* c);
struct miqt_string QStylePlugin_TrUtf83(const char* s, const char* c, int n);
void QStylePlugin_Delete(QStylePlugin* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
