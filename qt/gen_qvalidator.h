#pragma once
#ifndef MIQT_QT_GEN_QVALIDATOR_H
#define MIQT_QT_GEN_QVALIDATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QDoubleValidator;
class QEvent;
class QIntValidator;
class QLocale;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRegExp;
class QRegExpValidator;
class QRegularExpression;
class QRegularExpressionValidator;
class QTimerEvent;
class QValidator;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDoubleValidator QDoubleValidator;
typedef struct QEvent QEvent;
typedef struct QIntValidator QIntValidator;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRegExp QRegExp;
typedef struct QRegExpValidator QRegExpValidator;
typedef struct QRegularExpression QRegularExpression;
typedef struct QRegularExpressionValidator QRegularExpressionValidator;
typedef struct QTimerEvent QTimerEvent;
typedef struct QValidator QValidator;
#endif

QValidator* QValidator_new();
QValidator* QValidator_new2(QObject* parent);
void QValidator_virtbase(QValidator* src, QObject** outptr_QObject);
QMetaObject* QValidator_MetaObject(const QValidator* self);
void* QValidator_Metacast(QValidator* self, const char* param1);
struct miqt_string QValidator_Tr(const char* s);
struct miqt_string QValidator_TrUtf8(const char* s);
void QValidator_SetLocale(QValidator* self, QLocale* locale);
QLocale* QValidator_Locale(const QValidator* self);
int QValidator_Validate(const QValidator* self, struct miqt_string param1, int* param2);
void QValidator_Fixup(const QValidator* self, struct miqt_string param1);
void QValidator_Changed(QValidator* self);
void QValidator_connect_Changed(QValidator* self, intptr_t slot);
struct miqt_string QValidator_Tr2(const char* s, const char* c);
struct miqt_string QValidator_Tr3(const char* s, const char* c, int n);
struct miqt_string QValidator_TrUtf82(const char* s, const char* c);
struct miqt_string QValidator_TrUtf83(const char* s, const char* c, int n);
void QValidator_override_virtual_Validate(void* self, intptr_t slot);
int QValidator_virtualbase_Validate(const void* self, struct miqt_string param1, int* param2);
void QValidator_override_virtual_Fixup(void* self, intptr_t slot);
void QValidator_virtualbase_Fixup(const void* self, struct miqt_string param1);
void QValidator_override_virtual_Event(void* self, intptr_t slot);
bool QValidator_virtualbase_Event(void* self, QEvent* event);
void QValidator_override_virtual_EventFilter(void* self, intptr_t slot);
bool QValidator_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QValidator_override_virtual_TimerEvent(void* self, intptr_t slot);
void QValidator_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QValidator_override_virtual_ChildEvent(void* self, intptr_t slot);
void QValidator_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QValidator_override_virtual_CustomEvent(void* self, intptr_t slot);
void QValidator_virtualbase_CustomEvent(void* self, QEvent* event);
void QValidator_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QValidator_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QValidator_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QValidator_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QValidator_Delete(QValidator* self, bool isSubclass);

QIntValidator* QIntValidator_new();
QIntValidator* QIntValidator_new2(int bottom, int top);
QIntValidator* QIntValidator_new3(QObject* parent);
QIntValidator* QIntValidator_new4(int bottom, int top, QObject* parent);
void QIntValidator_virtbase(QIntValidator* src, QValidator** outptr_QValidator);
QMetaObject* QIntValidator_MetaObject(const QIntValidator* self);
void* QIntValidator_Metacast(QIntValidator* self, const char* param1);
struct miqt_string QIntValidator_Tr(const char* s);
struct miqt_string QIntValidator_TrUtf8(const char* s);
int QIntValidator_Validate(const QIntValidator* self, struct miqt_string param1, int* param2);
void QIntValidator_Fixup(const QIntValidator* self, struct miqt_string input);
void QIntValidator_SetBottom(QIntValidator* self, int bottom);
void QIntValidator_SetTop(QIntValidator* self, int top);
void QIntValidator_SetRange(QIntValidator* self, int bottom, int top);
int QIntValidator_Bottom(const QIntValidator* self);
int QIntValidator_Top(const QIntValidator* self);
void QIntValidator_BottomChanged(QIntValidator* self, int bottom);
void QIntValidator_connect_BottomChanged(QIntValidator* self, intptr_t slot);
void QIntValidator_TopChanged(QIntValidator* self, int top);
void QIntValidator_connect_TopChanged(QIntValidator* self, intptr_t slot);
struct miqt_string QIntValidator_Tr2(const char* s, const char* c);
struct miqt_string QIntValidator_Tr3(const char* s, const char* c, int n);
struct miqt_string QIntValidator_TrUtf82(const char* s, const char* c);
struct miqt_string QIntValidator_TrUtf83(const char* s, const char* c, int n);
void QIntValidator_override_virtual_Validate(void* self, intptr_t slot);
int QIntValidator_virtualbase_Validate(const void* self, struct miqt_string param1, int* param2);
void QIntValidator_override_virtual_Fixup(void* self, intptr_t slot);
void QIntValidator_virtualbase_Fixup(const void* self, struct miqt_string input);
void QIntValidator_override_virtual_SetRange(void* self, intptr_t slot);
void QIntValidator_virtualbase_SetRange(void* self, int bottom, int top);
void QIntValidator_Delete(QIntValidator* self, bool isSubclass);

QDoubleValidator* QDoubleValidator_new();
QDoubleValidator* QDoubleValidator_new2(double bottom, double top, int decimals);
QDoubleValidator* QDoubleValidator_new3(QObject* parent);
QDoubleValidator* QDoubleValidator_new4(double bottom, double top, int decimals, QObject* parent);
void QDoubleValidator_virtbase(QDoubleValidator* src, QValidator** outptr_QValidator);
QMetaObject* QDoubleValidator_MetaObject(const QDoubleValidator* self);
void* QDoubleValidator_Metacast(QDoubleValidator* self, const char* param1);
struct miqt_string QDoubleValidator_Tr(const char* s);
struct miqt_string QDoubleValidator_TrUtf8(const char* s);
int QDoubleValidator_Validate(const QDoubleValidator* self, struct miqt_string param1, int* param2);
void QDoubleValidator_SetRange(QDoubleValidator* self, double bottom, double top, int decimals);
void QDoubleValidator_SetBottom(QDoubleValidator* self, double bottom);
void QDoubleValidator_SetTop(QDoubleValidator* self, double top);
void QDoubleValidator_SetDecimals(QDoubleValidator* self, int decimals);
void QDoubleValidator_SetNotation(QDoubleValidator* self, int notation);
double QDoubleValidator_Bottom(const QDoubleValidator* self);
double QDoubleValidator_Top(const QDoubleValidator* self);
int QDoubleValidator_Decimals(const QDoubleValidator* self);
int QDoubleValidator_Notation(const QDoubleValidator* self);
void QDoubleValidator_BottomChanged(QDoubleValidator* self, double bottom);
void QDoubleValidator_connect_BottomChanged(QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_TopChanged(QDoubleValidator* self, double top);
void QDoubleValidator_connect_TopChanged(QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_DecimalsChanged(QDoubleValidator* self, int decimals);
void QDoubleValidator_connect_DecimalsChanged(QDoubleValidator* self, intptr_t slot);
void QDoubleValidator_NotationChanged(QDoubleValidator* self, int notation);
void QDoubleValidator_connect_NotationChanged(QDoubleValidator* self, intptr_t slot);
struct miqt_string QDoubleValidator_Tr2(const char* s, const char* c);
struct miqt_string QDoubleValidator_Tr3(const char* s, const char* c, int n);
struct miqt_string QDoubleValidator_TrUtf82(const char* s, const char* c);
struct miqt_string QDoubleValidator_TrUtf83(const char* s, const char* c, int n);
void QDoubleValidator_override_virtual_Validate(void* self, intptr_t slot);
int QDoubleValidator_virtualbase_Validate(const void* self, struct miqt_string param1, int* param2);
void QDoubleValidator_override_virtual_SetRange(void* self, intptr_t slot);
void QDoubleValidator_virtualbase_SetRange(void* self, double bottom, double top, int decimals);
void QDoubleValidator_override_virtual_Fixup(void* self, intptr_t slot);
void QDoubleValidator_virtualbase_Fixup(const void* self, struct miqt_string param1);
void QDoubleValidator_Delete(QDoubleValidator* self, bool isSubclass);

QRegExpValidator* QRegExpValidator_new();
QRegExpValidator* QRegExpValidator_new2(QRegExp* rx);
QRegExpValidator* QRegExpValidator_new3(QObject* parent);
QRegExpValidator* QRegExpValidator_new4(QRegExp* rx, QObject* parent);
void QRegExpValidator_virtbase(QRegExpValidator* src, QValidator** outptr_QValidator);
QMetaObject* QRegExpValidator_MetaObject(const QRegExpValidator* self);
void* QRegExpValidator_Metacast(QRegExpValidator* self, const char* param1);
struct miqt_string QRegExpValidator_Tr(const char* s);
struct miqt_string QRegExpValidator_TrUtf8(const char* s);
int QRegExpValidator_Validate(const QRegExpValidator* self, struct miqt_string input, int* pos);
void QRegExpValidator_SetRegExp(QRegExpValidator* self, QRegExp* rx);
QRegExp* QRegExpValidator_RegExp(const QRegExpValidator* self);
void QRegExpValidator_RegExpChanged(QRegExpValidator* self, QRegExp* regExp);
void QRegExpValidator_connect_RegExpChanged(QRegExpValidator* self, intptr_t slot);
struct miqt_string QRegExpValidator_Tr2(const char* s, const char* c);
struct miqt_string QRegExpValidator_Tr3(const char* s, const char* c, int n);
struct miqt_string QRegExpValidator_TrUtf82(const char* s, const char* c);
struct miqt_string QRegExpValidator_TrUtf83(const char* s, const char* c, int n);
void QRegExpValidator_override_virtual_Validate(void* self, intptr_t slot);
int QRegExpValidator_virtualbase_Validate(const void* self, struct miqt_string input, int* pos);
void QRegExpValidator_override_virtual_Fixup(void* self, intptr_t slot);
void QRegExpValidator_virtualbase_Fixup(const void* self, struct miqt_string param1);
void QRegExpValidator_Delete(QRegExpValidator* self, bool isSubclass);

QRegularExpressionValidator* QRegularExpressionValidator_new();
QRegularExpressionValidator* QRegularExpressionValidator_new2(QRegularExpression* re);
QRegularExpressionValidator* QRegularExpressionValidator_new3(QObject* parent);
QRegularExpressionValidator* QRegularExpressionValidator_new4(QRegularExpression* re, QObject* parent);
void QRegularExpressionValidator_virtbase(QRegularExpressionValidator* src, QValidator** outptr_QValidator);
QMetaObject* QRegularExpressionValidator_MetaObject(const QRegularExpressionValidator* self);
void* QRegularExpressionValidator_Metacast(QRegularExpressionValidator* self, const char* param1);
struct miqt_string QRegularExpressionValidator_Tr(const char* s);
struct miqt_string QRegularExpressionValidator_TrUtf8(const char* s);
int QRegularExpressionValidator_Validate(const QRegularExpressionValidator* self, struct miqt_string input, int* pos);
QRegularExpression* QRegularExpressionValidator_RegularExpression(const QRegularExpressionValidator* self);
void QRegularExpressionValidator_SetRegularExpression(QRegularExpressionValidator* self, QRegularExpression* re);
void QRegularExpressionValidator_RegularExpressionChanged(QRegularExpressionValidator* self, QRegularExpression* re);
void QRegularExpressionValidator_connect_RegularExpressionChanged(QRegularExpressionValidator* self, intptr_t slot);
struct miqt_string QRegularExpressionValidator_Tr2(const char* s, const char* c);
struct miqt_string QRegularExpressionValidator_Tr3(const char* s, const char* c, int n);
struct miqt_string QRegularExpressionValidator_TrUtf82(const char* s, const char* c);
struct miqt_string QRegularExpressionValidator_TrUtf83(const char* s, const char* c, int n);
void QRegularExpressionValidator_override_virtual_Validate(void* self, intptr_t slot);
int QRegularExpressionValidator_virtualbase_Validate(const void* self, struct miqt_string input, int* pos);
void QRegularExpressionValidator_override_virtual_Fixup(void* self, intptr_t slot);
void QRegularExpressionValidator_virtualbase_Fixup(const void* self, struct miqt_string param1);
void QRegularExpressionValidator_Delete(QRegularExpressionValidator* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
