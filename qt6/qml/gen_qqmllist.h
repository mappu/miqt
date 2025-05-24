#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLLIST_H
#define MIQT_QT6_QML_GEN_QQMLLIST_H

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
class QQmlEngine;
class QQmlListReference;
class QVariant;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlListReference QQmlListReference;
typedef struct QVariant QVariant;
#endif

QQmlListReference* QQmlListReference_new();
QQmlListReference* QQmlListReference_new2(QVariant* variant, QQmlEngine* engine);
QQmlListReference* QQmlListReference_new3(QObject* o, const char* property, QQmlEngine* engine);
QQmlListReference* QQmlListReference_new4(QVariant* variant);
QQmlListReference* QQmlListReference_new5(QObject* o, const char* property);
QQmlListReference* QQmlListReference_new6(QQmlListReference* param1);
void QQmlListReference_operatorAssign(QQmlListReference* self, QQmlListReference* param1);
bool QQmlListReference_isValid(const QQmlListReference* self);
QObject* QQmlListReference_object(const QQmlListReference* self);
QMetaObject* QQmlListReference_listElementType(const QQmlListReference* self);
bool QQmlListReference_canAppend(const QQmlListReference* self);
bool QQmlListReference_canAt(const QQmlListReference* self);
bool QQmlListReference_canClear(const QQmlListReference* self);
bool QQmlListReference_canCount(const QQmlListReference* self);
bool QQmlListReference_canReplace(const QQmlListReference* self);
bool QQmlListReference_canRemoveLast(const QQmlListReference* self);
bool QQmlListReference_isManipulable(const QQmlListReference* self);
bool QQmlListReference_isReadable(const QQmlListReference* self);
bool QQmlListReference_append(const QQmlListReference* self, QObject* param1);
QObject* QQmlListReference_at(const QQmlListReference* self, ptrdiff_t param1);
bool QQmlListReference_clear(const QQmlListReference* self);
ptrdiff_t QQmlListReference_count(const QQmlListReference* self);
ptrdiff_t QQmlListReference_size(const QQmlListReference* self);
bool QQmlListReference_replace(const QQmlListReference* self, ptrdiff_t param1, QObject* param2);
bool QQmlListReference_removeLast(const QQmlListReference* self);
bool QQmlListReference_operatorEqual(const QQmlListReference* self, QQmlListReference* other);
void QQmlListReference_delete(QQmlListReference* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
