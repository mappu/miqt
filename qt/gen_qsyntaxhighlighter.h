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
QMetaObject* QSyntaxHighlighter_metaObject(const QSyntaxHighlighter* self);
void* QSyntaxHighlighter_metacast(QSyntaxHighlighter* self, const char* param1);
struct miqt_string QSyntaxHighlighter_tr(const char* s);
struct miqt_string QSyntaxHighlighter_trUtf8(const char* s);
void QSyntaxHighlighter_setDocument(QSyntaxHighlighter* self, QTextDocument* doc);
QTextDocument* QSyntaxHighlighter_document(const QSyntaxHighlighter* self);
void QSyntaxHighlighter_rehighlight(QSyntaxHighlighter* self);
void QSyntaxHighlighter_rehighlightBlock(QSyntaxHighlighter* self, QTextBlock* block);
void QSyntaxHighlighter_highlightBlock(QSyntaxHighlighter* self, struct miqt_string text);
struct miqt_string QSyntaxHighlighter_tr2(const char* s, const char* c);
struct miqt_string QSyntaxHighlighter_tr3(const char* s, const char* c, int n);
struct miqt_string QSyntaxHighlighter_trUtf82(const char* s, const char* c);
struct miqt_string QSyntaxHighlighter_trUtf83(const char* s, const char* c, int n);
bool QSyntaxHighlighter_override_virtual_highlightBlock(void* self, intptr_t slot);
void QSyntaxHighlighter_virtualbase_highlightBlock(void* self, struct miqt_string text);
bool QSyntaxHighlighter_override_virtual_event(void* self, intptr_t slot);
bool QSyntaxHighlighter_virtualbase_event(void* self, QEvent* event);
bool QSyntaxHighlighter_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSyntaxHighlighter_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSyntaxHighlighter_override_virtual_timerEvent(void* self, intptr_t slot);
void QSyntaxHighlighter_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSyntaxHighlighter_override_virtual_childEvent(void* self, intptr_t slot);
void QSyntaxHighlighter_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSyntaxHighlighter_override_virtual_customEvent(void* self, intptr_t slot);
void QSyntaxHighlighter_virtualbase_customEvent(void* self, QEvent* event);
bool QSyntaxHighlighter_override_virtual_connectNotify(void* self, intptr_t slot);
void QSyntaxHighlighter_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSyntaxHighlighter_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSyntaxHighlighter_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QSyntaxHighlighter_delete(QSyntaxHighlighter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
