#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCIAPIS_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCIAPIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEvent;
class QMetaObject;
class QObject;
class QsciAPIs;
class QsciAbstractAPIs;
class QsciLexer;
#else
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciAPIs QsciAPIs;
typedef struct QsciAbstractAPIs QsciAbstractAPIs;
typedef struct QsciLexer QsciLexer;
#endif

QsciAPIs* QsciAPIs_new(QsciLexer* lexer);
void QsciAPIs_virtbase(QsciAPIs* src, QsciAbstractAPIs** outptr_QsciAbstractAPIs);
QMetaObject* QsciAPIs_MetaObject(const QsciAPIs* self);
void* QsciAPIs_Metacast(QsciAPIs* self, const char* param1);
struct miqt_string QsciAPIs_Tr(const char* s);
struct miqt_string QsciAPIs_TrUtf8(const char* s);
void QsciAPIs_Add(QsciAPIs* self, struct miqt_string entry);
void QsciAPIs_Clear(QsciAPIs* self);
bool QsciAPIs_Load(QsciAPIs* self, struct miqt_string filename);
void QsciAPIs_Remove(QsciAPIs* self, struct miqt_string entry);
void QsciAPIs_Prepare(QsciAPIs* self);
void QsciAPIs_CancelPreparation(QsciAPIs* self);
struct miqt_string QsciAPIs_DefaultPreparedName(const QsciAPIs* self);
bool QsciAPIs_IsPrepared(const QsciAPIs* self);
bool QsciAPIs_LoadPrepared(QsciAPIs* self);
bool QsciAPIs_SavePrepared(const QsciAPIs* self);
void QsciAPIs_UpdateAutoCompletionList(QsciAPIs* self, struct miqt_array /* of struct miqt_string */  context, struct miqt_array /* of struct miqt_string */  list);
void QsciAPIs_AutoCompletionSelected(QsciAPIs* self, struct miqt_string sel);
struct miqt_array /* of struct miqt_string */  QsciAPIs_CallTips(QsciAPIs* self, struct miqt_array /* of struct miqt_string */  context, int commas, int style, struct miqt_array /* of int */  shifts);
bool QsciAPIs_Event(QsciAPIs* self, QEvent* e);
struct miqt_array /* of struct miqt_string */  QsciAPIs_InstalledAPIFiles(const QsciAPIs* self);
void QsciAPIs_ApiPreparationCancelled(QsciAPIs* self);
void QsciAPIs_connect_ApiPreparationCancelled(QsciAPIs* self, intptr_t slot);
void QsciAPIs_ApiPreparationStarted(QsciAPIs* self);
void QsciAPIs_connect_ApiPreparationStarted(QsciAPIs* self, intptr_t slot);
void QsciAPIs_ApiPreparationFinished(QsciAPIs* self);
void QsciAPIs_connect_ApiPreparationFinished(QsciAPIs* self, intptr_t slot);
struct miqt_string QsciAPIs_Tr2(const char* s, const char* c);
struct miqt_string QsciAPIs_Tr3(const char* s, const char* c, int n);
struct miqt_string QsciAPIs_TrUtf82(const char* s, const char* c);
struct miqt_string QsciAPIs_TrUtf83(const char* s, const char* c, int n);
bool QsciAPIs_IsPrepared1(const QsciAPIs* self, struct miqt_string filename);
bool QsciAPIs_LoadPrepared1(QsciAPIs* self, struct miqt_string filename);
bool QsciAPIs_SavePrepared1(const QsciAPIs* self, struct miqt_string filename);
void QsciAPIs_override_virtual_UpdateAutoCompletionList(void* self, intptr_t slot);
void QsciAPIs_virtualbase_UpdateAutoCompletionList(void* self, struct miqt_array /* of struct miqt_string */  context, struct miqt_array /* of struct miqt_string */  list);
void QsciAPIs_override_virtual_AutoCompletionSelected(void* self, intptr_t slot);
void QsciAPIs_virtualbase_AutoCompletionSelected(void* self, struct miqt_string sel);
void QsciAPIs_override_virtual_CallTips(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciAPIs_virtualbase_CallTips(void* self, struct miqt_array /* of struct miqt_string */  context, int commas, int style, struct miqt_array /* of int */  shifts);
void QsciAPIs_override_virtual_Event(void* self, intptr_t slot);
bool QsciAPIs_virtualbase_Event(void* self, QEvent* e);
void QsciAPIs_Delete(QsciAPIs* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
