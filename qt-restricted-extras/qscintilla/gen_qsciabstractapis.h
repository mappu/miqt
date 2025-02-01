#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCIABSTRACTAPIS_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCIABSTRACTAPIS_H

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
class QsciAbstractAPIs;
class QsciLexer;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QsciAbstractAPIs QsciAbstractAPIs;
typedef struct QsciLexer QsciLexer;
#endif

QsciAbstractAPIs* QsciAbstractAPIs_new(QsciLexer* lexer);
void QsciAbstractAPIs_virtbase(QsciAbstractAPIs* src, QObject** outptr_QObject);
QMetaObject* QsciAbstractAPIs_metaObject(const QsciAbstractAPIs* self);
void* QsciAbstractAPIs_metacast(QsciAbstractAPIs* self, const char* param1);
struct miqt_string QsciAbstractAPIs_tr(const char* s);
struct miqt_string QsciAbstractAPIs_trUtf8(const char* s);
QsciLexer* QsciAbstractAPIs_lexer(const QsciAbstractAPIs* self);
void QsciAbstractAPIs_updateAutoCompletionList(QsciAbstractAPIs* self, struct miqt_array /* of struct miqt_string */  context, struct miqt_array /* of struct miqt_string */  list);
void QsciAbstractAPIs_autoCompletionSelected(QsciAbstractAPIs* self, struct miqt_string selection);
struct miqt_array /* of struct miqt_string */  QsciAbstractAPIs_callTips(QsciAbstractAPIs* self, struct miqt_array /* of struct miqt_string */  context, int commas, int style, struct miqt_array /* of int */  shifts);
struct miqt_string QsciAbstractAPIs_tr2(const char* s, const char* c);
struct miqt_string QsciAbstractAPIs_tr3(const char* s, const char* c, int n);
struct miqt_string QsciAbstractAPIs_trUtf82(const char* s, const char* c);
struct miqt_string QsciAbstractAPIs_trUtf83(const char* s, const char* c, int n);
bool QsciAbstractAPIs_override_virtual_updateAutoCompletionList(void* self, intptr_t slot);
void QsciAbstractAPIs_virtualbase_updateAutoCompletionList(void* self, struct miqt_array /* of struct miqt_string */  context, struct miqt_array /* of struct miqt_string */  list);
bool QsciAbstractAPIs_override_virtual_autoCompletionSelected(void* self, intptr_t slot);
void QsciAbstractAPIs_virtualbase_autoCompletionSelected(void* self, struct miqt_string selection);
bool QsciAbstractAPIs_override_virtual_callTips(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciAbstractAPIs_virtualbase_callTips(void* self, struct miqt_array /* of struct miqt_string */  context, int commas, int style, struct miqt_array /* of int */  shifts);
bool QsciAbstractAPIs_override_virtual_event(void* self, intptr_t slot);
bool QsciAbstractAPIs_virtualbase_event(void* self, QEvent* event);
bool QsciAbstractAPIs_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciAbstractAPIs_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QsciAbstractAPIs_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciAbstractAPIs_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciAbstractAPIs_override_virtual_childEvent(void* self, intptr_t slot);
void QsciAbstractAPIs_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciAbstractAPIs_override_virtual_customEvent(void* self, intptr_t slot);
void QsciAbstractAPIs_virtualbase_customEvent(void* self, QEvent* event);
bool QsciAbstractAPIs_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciAbstractAPIs_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciAbstractAPIs_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciAbstractAPIs_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QsciAbstractAPIs_delete(QsciAbstractAPIs* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
