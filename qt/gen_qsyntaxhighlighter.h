#pragma once
#ifndef MIQT_QT_GEN_QSYNTAXHIGHLIGHTER_H
#define MIQT_QT_GEN_QSYNTAXHIGHLIGHTER_H

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
class QMetaMethod;
class QMetaObject;
class QObject;
class QSyntaxHighlighter;
class QTextBlock;
class QTextDocument;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSyntaxHighlighter QSyntaxHighlighter;
typedef struct QTextBlock QTextBlock;
typedef struct QTextDocument QTextDocument;
typedef struct QTimerEvent QTimerEvent;
#endif

QSyntaxHighlighter* QSyntaxHighlighter_new(QObject* parent);
QSyntaxHighlighter* QSyntaxHighlighter_new2(QTextDocument* parent);
void QSyntaxHighlighter_virtbase(QSyntaxHighlighter* src, QObject** outptr_QObject);
QMetaObject* QSyntaxHighlighter_MetaObject(const QSyntaxHighlighter* self);
void* QSyntaxHighlighter_Metacast(QSyntaxHighlighter* self, const char* param1);
struct miqt_string QSyntaxHighlighter_Tr(const char* s);
struct miqt_string QSyntaxHighlighter_TrUtf8(const char* s);
void QSyntaxHighlighter_SetDocument(QSyntaxHighlighter* self, QTextDocument* doc);
QTextDocument* QSyntaxHighlighter_Document(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_Rehighlight(QSyntaxHighlighter* self);
void QSyntaxHighlighter_RehighlightBlock(QSyntaxHighlighter* self, QTextBlock* block);
void QSyntaxHighlighter_HighlightBlock(QSyntaxHighlighter* self, struct miqt_string text);
struct miqt_string QSyntaxHighlighter_Tr2(const char* s, const char* c);
struct miqt_string QSyntaxHighlighter_Tr3(const char* s, const char* c, int n);
struct miqt_string QSyntaxHighlighter_TrUtf82(const char* s, const char* c);
struct miqt_string QSyntaxHighlighter_TrUtf83(const char* s, const char* c, int n);
void QSyntaxHighlighter_override_virtual_HighlightBlock(void* self, intptr_t slot);
void QSyntaxHighlighter_virtualbase_HighlightBlock(void* self, struct miqt_string text);
void QSyntaxHighlighter_override_virtual_Event(void* self, intptr_t slot);
bool QSyntaxHighlighter_virtualbase_Event(void* self, QEvent* event);
void QSyntaxHighlighter_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSyntaxHighlighter_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QSyntaxHighlighter_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSyntaxHighlighter_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QSyntaxHighlighter_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSyntaxHighlighter_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QSyntaxHighlighter_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSyntaxHighlighter_virtualbase_CustomEvent(void* self, QEvent* event);
void QSyntaxHighlighter_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSyntaxHighlighter_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QSyntaxHighlighter_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSyntaxHighlighter_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSyntaxHighlighter_Delete(QSyntaxHighlighter* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
