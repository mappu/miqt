#pragma once
#ifndef MIQT_QT6_GEN_QGENERICPLUGIN_H
#define MIQT_QT6_GEN_QGENERICPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGenericPlugin;
class QMetaObject;
class QObject;
#else
typedef struct QGenericPlugin QGenericPlugin;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QGenericPlugin_MetaObject(const QGenericPlugin* self);
void* QGenericPlugin_Metacast(QGenericPlugin* self, const char* param1);
struct miqt_string QGenericPlugin_Tr(const char* s);
QObject* QGenericPlugin_Create(QGenericPlugin* self, struct miqt_string name, struct miqt_string spec);
struct miqt_string QGenericPlugin_Tr2(const char* s, const char* c);
struct miqt_string QGenericPlugin_Tr3(const char* s, const char* c, int n);
void QGenericPlugin_Delete(QGenericPlugin* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
