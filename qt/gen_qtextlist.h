#ifndef GEN_QTEXTLIST_H
#define GEN_QTEXTLIST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QMetaObject* QTextList_MetaObject(QTextList* self);
void QTextList_Tr(const char* s, char** _out, int* _out_Strlen);
void QTextList_TrUtf8(const char* s, char** _out, int* _out_Strlen);
int QTextList_Count(QTextList* self);
bool QTextList_IsEmpty(QTextList* self);
QTextBlock* QTextList_Item(QTextList* self, int i);
int QTextList_ItemNumber(QTextList* self, QTextBlock* param1);
void QTextList_ItemText(QTextList* self, QTextBlock* param1, char** _out, int* _out_Strlen);
void QTextList_RemoveItem(QTextList* self, int i);
void QTextList_Remove(QTextList* self, QTextBlock* param1);
void QTextList_Add(QTextList* self, QTextBlock* block);
void QTextList_SetFormat(QTextList* self, QTextListFormat* format);
QTextListFormat* QTextList_Format(QTextList* self);
void QTextList_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTextList_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTextList_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTextList_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTextList_Delete(QTextList* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
