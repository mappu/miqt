#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCIMACRO_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCIMACRO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QsciMacro;
class QsciScintilla;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QsciMacro QsciMacro;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciMacro* QsciMacro_new(QsciScintilla* parent);
QsciMacro* QsciMacro_new2(struct miqt_string asc, QsciScintilla* parent);
void QsciMacro_virtbase(QsciMacro* src, QObject** outptr_QObject);
QMetaObject* QsciMacro_metaObject(const QsciMacro* self);
void* QsciMacro_metacast(QsciMacro* self, const char* param1);
struct miqt_string QsciMacro_tr(const char* s);
struct miqt_string QsciMacro_trUtf8(const char* s);
void QsciMacro_clear(QsciMacro* self);
bool QsciMacro_load(QsciMacro* self, struct miqt_string asc);
struct miqt_string QsciMacro_save(const QsciMacro* self);
void QsciMacro_play(QsciMacro* self);
void QsciMacro_startRecording(QsciMacro* self);
void QsciMacro_endRecording(QsciMacro* self);
struct miqt_string QsciMacro_tr2(const char* s, const char* c);
struct miqt_string QsciMacro_tr3(const char* s, const char* c, int n);
struct miqt_string QsciMacro_trUtf82(const char* s, const char* c);
struct miqt_string QsciMacro_trUtf83(const char* s, const char* c, int n);
bool QsciMacro_override_virtual_play(void* self, intptr_t slot);
void QsciMacro_virtualbase_play(void* self);
bool QsciMacro_override_virtual_startRecording(void* self, intptr_t slot);
void QsciMacro_virtualbase_startRecording(void* self);
bool QsciMacro_override_virtual_endRecording(void* self, intptr_t slot);
void QsciMacro_virtualbase_endRecording(void* self);
bool QsciMacro_override_virtual_event(void* self, intptr_t slot);
bool QsciMacro_virtualbase_event(void* self, QEvent* event);
bool QsciMacro_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciMacro_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciMacro_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciMacro_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciMacro_override_virtual_childEvent(void* self, intptr_t slot);
void QsciMacro_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciMacro_override_virtual_customEvent(void* self, intptr_t slot);
void QsciMacro_virtualbase_customEvent(void* self, QEvent* event);
bool QsciMacro_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciMacro_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciMacro_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciMacro_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QsciMacro_delete(QsciMacro* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
