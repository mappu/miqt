#pragma once
#ifndef MIQT_QT6_GEN_QICONENGINEPLUGIN_H
#define MIQT_QT6_GEN_QICONENGINEPLUGIN_H

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
#else
typedef struct QIconEngine QIconEngine;
typedef struct QIconEnginePlugin QIconEnginePlugin;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QIconEnginePlugin_MetaObject(const QIconEnginePlugin* self);
void* QIconEnginePlugin_Metacast(QIconEnginePlugin* self, const char* param1);
struct miqt_string QIconEnginePlugin_Tr(const char* s);
QIconEngine* QIconEnginePlugin_Create(QIconEnginePlugin* self);
struct miqt_string QIconEnginePlugin_Tr2(const char* s, const char* c);
struct miqt_string QIconEnginePlugin_Tr3(const char* s, const char* c, int n);
QIconEngine* QIconEnginePlugin_Create1(QIconEnginePlugin* self, struct miqt_string filename);
void QIconEnginePlugin_Delete(QIconEnginePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
