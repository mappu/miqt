#ifndef GEN_QPROPERTYANIMATION_H
#define GEN_QPROPERTYANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
void QPropertyAnimation_Tr(const char* s, char** _out, int* _out_Strlen);
void QPropertyAnimation_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QObject* QPropertyAnimation_TargetObject(const QPropertyAnimation* self);
void QPropertyAnimation_SetTargetObject(QPropertyAnimation* self, QObject* target);
QByteArray* QPropertyAnimation_PropertyName(const QPropertyAnimation* self);
void QPropertyAnimation_SetPropertyName(QPropertyAnimation* self, QByteArray* propertyName);
void QPropertyAnimation_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPropertyAnimation_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QPropertyAnimation_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPropertyAnimation_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QPropertyAnimation_Delete(QPropertyAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
