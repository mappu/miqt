#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCIABSTRACTAPIS_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCIABSTRACTAPIS_H

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
QMetaObject* QsciAbstractAPIs_MetaObject(const QsciAbstractAPIs* self);
void* QsciAbstractAPIs_Metacast(QsciAbstractAPIs* self, const char* param1);
struct miqt_string QsciAbstractAPIs_Tr(const char* s);
QsciLexer* QsciAbstractAPIs_Lexer(const QsciAbstractAPIs* self);
void QsciAbstractAPIs_UpdateAutoCompletionList(QsciAbstractAPIs* self, struct miqt_array /* of struct miqt_string */  context, struct miqt_array /* of struct miqt_string */  list);
void QsciAbstractAPIs_AutoCompletionSelected(QsciAbstractAPIs* self, struct miqt_string selection);
struct miqt_array /* of struct miqt_string */  QsciAbstractAPIs_CallTips(QsciAbstractAPIs* self, struct miqt_array /* of struct miqt_string */  context, int commas, int style, struct miqt_array /* of int */  shifts);
struct miqt_string QsciAbstractAPIs_Tr2(const char* s, const char* c);
struct miqt_string QsciAbstractAPIs_Tr3(const char* s, const char* c, int n);
void QsciAbstractAPIs_override_virtual_UpdateAutoCompletionList(void* self, intptr_t slot);
void QsciAbstractAPIs_virtualbase_UpdateAutoCompletionList(void* self, struct miqt_array /* of struct miqt_string */  context, struct miqt_array /* of struct miqt_string */  list);
void QsciAbstractAPIs_override_virtual_AutoCompletionSelected(void* self, intptr_t slot);
void QsciAbstractAPIs_virtualbase_AutoCompletionSelected(void* self, struct miqt_string selection);
void QsciAbstractAPIs_override_virtual_CallTips(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciAbstractAPIs_virtualbase_CallTips(void* self, struct miqt_array /* of struct miqt_string */  context, int commas, int style, struct miqt_array /* of int */  shifts);
void QsciAbstractAPIs_override_virtual_Event(void* self, intptr_t slot);
bool QsciAbstractAPIs_virtualbase_Event(void* self, QEvent* event);
void QsciAbstractAPIs_override_virtual_EventFilter(void* self, intptr_t slot);
bool QsciAbstractAPIs_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QsciAbstractAPIs_override_virtual_TimerEvent(void* self, intptr_t slot);
void QsciAbstractAPIs_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QsciAbstractAPIs_override_virtual_ChildEvent(void* self, intptr_t slot);
void QsciAbstractAPIs_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QsciAbstractAPIs_override_virtual_CustomEvent(void* self, intptr_t slot);
void QsciAbstractAPIs_virtualbase_CustomEvent(void* self, QEvent* event);
void QsciAbstractAPIs_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QsciAbstractAPIs_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QsciAbstractAPIs_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QsciAbstractAPIs_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QsciAbstractAPIs_Delete(QsciAbstractAPIs* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
