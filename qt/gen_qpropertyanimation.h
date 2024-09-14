#ifndef GEN_QPROPERTYANIMATION_H
#define GEN_QPROPERTYANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QMetaObject;
class QObject;
class QPropertyAnimation;
#else
typedef struct QByteArray QByteArray;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPropertyAnimation QPropertyAnimation;
#endif

QPropertyAnimation* QPropertyAnimation_new();
QPropertyAnimation* QPropertyAnimation_new2(QObject* target, QByteArray* propertyName);
QPropertyAnimation* QPropertyAnimation_new3(QObject* parent);
QPropertyAnimation* QPropertyAnimation_new4(QObject* target, QByteArray* propertyName, QObject* parent);
QMetaObject* QPropertyAnimation_MetaObject(const QPropertyAnimation* self);
struct miqt_string* QPropertyAnimation_Tr(const char* s);
struct miqt_string* QPropertyAnimation_TrUtf8(const char* s);
QObject* QPropertyAnimation_TargetObject(const QPropertyAnimation* self);
void QPropertyAnimation_SetTargetObject(QPropertyAnimation* self, QObject* target);
QByteArray* QPropertyAnimation_PropertyName(const QPropertyAnimation* self);
void QPropertyAnimation_SetPropertyName(QPropertyAnimation* self, QByteArray* propertyName);
struct miqt_string* QPropertyAnimation_Tr2(const char* s, const char* c);
struct miqt_string* QPropertyAnimation_Tr3(const char* s, const char* c, int n);
struct miqt_string* QPropertyAnimation_TrUtf82(const char* s, const char* c);
struct miqt_string* QPropertyAnimation_TrUtf83(const char* s, const char* c, int n);
void QPropertyAnimation_Delete(QPropertyAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
