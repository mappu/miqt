#pragma once
#ifndef MIQT_QT6_GEN_QTEXTLIST_H
#define MIQT_QT6_GEN_QTEXTLIST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QTextBlock;
class QTextBlockGroup;
class QTextDocument;
class QTextList;
class QTextListFormat;
class QTextObject;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTextBlock QTextBlock;
typedef struct QTextBlockGroup QTextBlockGroup;
typedef struct QTextDocument QTextDocument;
typedef struct QTextList QTextList;
typedef struct QTextListFormat QTextListFormat;
typedef struct QTextObject QTextObject;
#endif

QTextList* QTextList_new(QTextDocument* doc);
void QTextList_virtbase(QTextList* src, QTextBlockGroup** outptr_QTextBlockGroup);
QMetaObject* QTextList_MetaObject(const QTextList* self);
void* QTextList_Metacast(QTextList* self, const char* param1);
struct miqt_string QTextList_Tr(const char* s);
int QTextList_Count(const QTextList* self);
QTextBlock* QTextList_Item(const QTextList* self, int i);
int QTextList_ItemNumber(const QTextList* self, QTextBlock* param1);
struct miqt_string QTextList_ItemText(const QTextList* self, QTextBlock* param1);
void QTextList_RemoveItem(QTextList* self, int i);
void QTextList_Remove(QTextList* self, QTextBlock* param1);
void QTextList_Add(QTextList* self, QTextBlock* block);
void QTextList_SetFormat(QTextList* self, QTextListFormat* format);
QTextListFormat* QTextList_Format(const QTextList* self);
struct miqt_string QTextList_Tr2(const char* s, const char* c);
struct miqt_string QTextList_Tr3(const char* s, const char* c, int n);
void QTextList_override_virtual_BlockInserted(void* self, intptr_t slot);
void QTextList_virtualbase_BlockInserted(void* self, QTextBlock* block);
void QTextList_override_virtual_BlockRemoved(void* self, intptr_t slot);
void QTextList_virtualbase_BlockRemoved(void* self, QTextBlock* block);
void QTextList_override_virtual_BlockFormatChanged(void* self, intptr_t slot);
void QTextList_virtualbase_BlockFormatChanged(void* self, QTextBlock* block);
void QTextList_Delete(QTextList* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
