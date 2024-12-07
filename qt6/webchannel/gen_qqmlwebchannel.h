#pragma once
#ifndef MIQT_QT6_WEBCHANNEL_GEN_QQMLWEBCHANNEL_H
#define MIQT_QT6_WEBCHANNEL_GEN_QQMLWEBCHANNEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QQmlWebChannel;
class QVariant;
class QWebChannel;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlWebChannel QQmlWebChannel;
typedef struct QVariant QVariant;
typedef struct QWebChannel QWebChannel;
#endif

QQmlWebChannel* QQmlWebChannel_new();
QQmlWebChannel* QQmlWebChannel_new2(QObject* parent);
void QQmlWebChannel_virtbase(QQmlWebChannel* src, QWebChannel** outptr_QWebChannel);
QMetaObject* QQmlWebChannel_MetaObject(const QQmlWebChannel* self);
void* QQmlWebChannel_Metacast(QQmlWebChannel* self, const char* param1);
struct miqt_string QQmlWebChannel_Tr(const char* s);
void QQmlWebChannel_RegisterObjects(QQmlWebChannel* self, struct miqt_map /* of struct miqt_string to QVariant* */  objects);
void QQmlWebChannel_ConnectTo(QQmlWebChannel* self, QObject* transport);
void QQmlWebChannel_DisconnectFrom(QQmlWebChannel* self, QObject* transport);
struct miqt_string QQmlWebChannel_Tr2(const char* s, const char* c);
struct miqt_string QQmlWebChannel_Tr3(const char* s, const char* c, int n);
void QQmlWebChannel_Delete(QQmlWebChannel* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
