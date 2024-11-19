#pragma once
#ifndef MIQT_QT_GEN_QICONENGINEPLUGIN_H
#define MIQT_QT_GEN_QICONENGINEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIconEngine;
class QIconEnginePlugin;
class QMetaObject;
class QObject;
#else
typedef struct QIconEngine QIconEngine;
typedef struct QIconEnginePlugin QIconEnginePlugin;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QIconEnginePlugin_MetaObject(const QIconEnginePlugin* self);
void* QIconEnginePlugin_Metacast(QIconEnginePlugin* self, const char* param1);
struct miqt_string QIconEnginePlugin_Tr(const char* s);
struct miqt_string QIconEnginePlugin_TrUtf8(const char* s);
QIconEngine* QIconEnginePlugin_Create(QIconEnginePlugin* self, struct miqt_string filename);
struct miqt_string QIconEnginePlugin_Tr2(const char* s, const char* c);
struct miqt_string QIconEnginePlugin_Tr3(const char* s, const char* c, int n);
struct miqt_string QIconEnginePlugin_TrUtf82(const char* s, const char* c);
struct miqt_string QIconEnginePlugin_TrUtf83(const char* s, const char* c, int n);
void QIconEnginePlugin_Delete(QIconEnginePlugin* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
