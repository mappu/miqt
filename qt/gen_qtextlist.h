#ifndef GEN_QTEXTLIST_H
#define GEN_QTEXTLIST_H

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
class QTextBlock;
class QTextDocument;
class QTextList;
class QTextListFormat;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QTextBlock QTextBlock;
typedef struct QTextDocument QTextDocument;
typedef struct QTextList QTextList;
typedef struct QTextListFormat QTextListFormat;
#endif

QTextList* QTextList_new(QTextDocument* doc);
QMetaObject* QTextList_MetaObject(const QTextList* self);
void* QTextList_Metacast(QTextList* self, const char* param1);
struct miqt_string QTextList_Tr(const char* s);
struct miqt_string QTextList_TrUtf8(const char* s);
int QTextList_Count(const QTextList* self);
bool QTextList_IsEmpty(const QTextList* self);
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
struct miqt_string QTextList_TrUtf82(const char* s, const char* c);
struct miqt_string QTextList_TrUtf83(const char* s, const char* c, int n);
void QTextList_Delete(QTextList* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
