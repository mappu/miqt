#pragma once
#ifndef MIQT_QT_GEN_QTRANSLATOR_H
#define MIQT_QT_GEN_QTRANSLATOR_H

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
class QEvent;
class QLocale;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QTranslator;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTranslator QTranslator;
#endif

QTranslator* QTranslator_new();
QTranslator* QTranslator_new2(QObject* parent);
void QTranslator_virtbase(QTranslator* src, QObject** outptr_QObject);
QMetaObject* QTranslator_MetaObject(const QTranslator* self);
void* QTranslator_Metacast(QTranslator* self, const char* param1);
struct miqt_string QTranslator_Tr(const char* s);
struct miqt_string QTranslator_TrUtf8(const char* s);
struct miqt_string QTranslator_Translate(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n);
bool QTranslator_IsEmpty(const QTranslator* self);
struct miqt_string QTranslator_Language(const QTranslator* self);
struct miqt_string QTranslator_FilePath(const QTranslator* self);
bool QTranslator_Load(QTranslator* self, struct miqt_string filename);
bool QTranslator_Load2(QTranslator* self, QLocale* locale, struct miqt_string filename);
bool QTranslator_Load3(QTranslator* self, const unsigned char* data, int lenVal);
struct miqt_string QTranslator_Tr2(const char* s, const char* c);
struct miqt_string QTranslator_Tr3(const char* s, const char* c, int n);
struct miqt_string QTranslator_TrUtf82(const char* s, const char* c);
struct miqt_string QTranslator_TrUtf83(const char* s, const char* c, int n);
bool QTranslator_Load22(QTranslator* self, struct miqt_string filename, struct miqt_string directory);
bool QTranslator_Load32(QTranslator* self, struct miqt_string filename, struct miqt_string directory, struct miqt_string search_delimiters);
bool QTranslator_Load4(QTranslator* self, struct miqt_string filename, struct miqt_string directory, struct miqt_string search_delimiters, struct miqt_string suffix);
bool QTranslator_Load33(QTranslator* self, QLocale* locale, struct miqt_string filename, struct miqt_string prefix);
bool QTranslator_Load42(QTranslator* self, QLocale* locale, struct miqt_string filename, struct miqt_string prefix, struct miqt_string directory);
bool QTranslator_Load5(QTranslator* self, QLocale* locale, struct miqt_string filename, struct miqt_string prefix, struct miqt_string directory, struct miqt_string suffix);
bool QTranslator_Load34(QTranslator* self, const unsigned char* data, int lenVal, struct miqt_string directory);
bool QTranslator_override_virtual_Translate(void* self, intptr_t slot);
struct miqt_string QTranslator_virtualbase_Translate(const void* self, const char* context, const char* sourceText, const char* disambiguation, int n);
bool QTranslator_override_virtual_IsEmpty(void* self, intptr_t slot);
bool QTranslator_virtualbase_IsEmpty(const void* self);
bool QTranslator_override_virtual_Event(void* self, intptr_t slot);
bool QTranslator_virtualbase_Event(void* self, QEvent* event);
bool QTranslator_override_virtual_EventFilter(void* self, intptr_t slot);
bool QTranslator_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QTranslator_override_virtual_TimerEvent(void* self, intptr_t slot);
void QTranslator_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QTranslator_override_virtual_ChildEvent(void* self, intptr_t slot);
void QTranslator_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QTranslator_override_virtual_CustomEvent(void* self, intptr_t slot);
void QTranslator_virtualbase_CustomEvent(void* self, QEvent* event);
bool QTranslator_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QTranslator_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QTranslator_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QTranslator_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QTranslator_Delete(QTranslator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
