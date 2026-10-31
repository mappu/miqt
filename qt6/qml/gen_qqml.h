#pragma once
#ifndef MIQT_QT6_QML_GEN_QQML_H
#define MIQT_QT6_QML_GEN_QQML_H

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
class QQmlContext;
class QQmlEngine;
class QUrl;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlContext QQmlContext;
typedef struct QQmlEngine QQmlEngine;
typedef struct QUrl QUrl;
#endif

void miqt_QmlClearTypeRegistrations2();
int miqt_QmlRegisterTypeNotAvailable2(const char* uri, int versionMajor, int versionMinor, const char* qmlName, struct miqt_string message);
int miqt_QmlRegisterUncreatableMetaObject2(QMetaObject* staticMetaObject, const char* uri, int versionMajor, int versionMinor, const char* qmlName, struct miqt_string reason);
void miqt_QmlExecuteDeferredWithQObject(QObject* param1);
QQmlContext* miqt_QmlContextWithQObject(QObject* param1);
QQmlEngine* miqt_QmlEngineWithQObject(QObject* param1);
QObject* miqt_QmlExtendedObjectWithQObject(QObject* param1);
bool miqt_QmlProtectModule2(const char* uri, int majVersion);
void miqt_QmlRegisterModule2(const char* uri, int versionMajor, int versionMinor);
void miqt_QmlRegisterModuleImport2(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor);
void miqt_QmlUnregisterModuleImport2(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor);
int miqt_QmlRegisterSingletonType3(QUrl* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName);
int miqt_QmlRegisterType2(QUrl* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName);
void miqt_QmlRegisterNamespaceAndRevisions2(QMetaObject* metaObject, const char* uri, int versionMajor, struct miqt_array /* of int */  qmlTypeIds, QMetaObject* classInfoMetaObject, QMetaObject* extensionMetaObject);
void miqt_QmlRegisterNamespaceAndRevisions3(QMetaObject* metaObject, const char* uri, int versionMajor, struct miqt_array /* of int */  qmlTypeIds, QMetaObject* classInfoMetaObject);
int miqt_QmlTypeId2(const char* uri, int versionMajor, int versionMinor, const char* qmlName);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
