#ifndef GEN_QSPLITTER_H
#define GEN_QSPLITTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QMetaObject;
class QSize;
class QSplitter;
class QSplitterHandle;
class QWidget;
#else
typedef struct QByteArray QByteArray;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QSplitter QSplitter;
typedef struct QSplitterHandle QSplitterHandle;
typedef struct QWidget QWidget;
#endif

QSplitter* QSplitter_new();
QSplitter* QSplitter_new2(QWidget* parent);
QMetaObject* QSplitter_MetaObject(QSplitter* self);
void QSplitter_Tr(char* s, char** _out, int* _out_Strlen);
void QSplitter_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QSplitter_AddWidget(QSplitter* self, QWidget* widget);
void QSplitter_InsertWidget(QSplitter* self, int index, QWidget* widget);
QWidget* QSplitter_ReplaceWidget(QSplitter* self, int index, QWidget* widget);
void QSplitter_SetChildrenCollapsible(QSplitter* self, bool childrenCollapsible);
bool QSplitter_ChildrenCollapsible(QSplitter* self);
void QSplitter_SetCollapsible(QSplitter* self, int index, bool param2);
bool QSplitter_IsCollapsible(QSplitter* self, int index);
void QSplitter_SetOpaqueResize(QSplitter* self);
bool QSplitter_OpaqueResize(QSplitter* self);
void QSplitter_Refresh(QSplitter* self);
QSize* QSplitter_SizeHint(QSplitter* self);
QSize* QSplitter_MinimumSizeHint(QSplitter* self);
void QSplitter_Sizes(QSplitter* self, int** _out, size_t* _out_len);
void QSplitter_SetSizes(QSplitter* self, int* list, size_t list_len);
QByteArray* QSplitter_SaveState(QSplitter* self);
bool QSplitter_RestoreState(QSplitter* self, QByteArray* state);
int QSplitter_HandleWidth(QSplitter* self);
void QSplitter_SetHandleWidth(QSplitter* self, int handleWidth);
int QSplitter_IndexOf(QSplitter* self, QWidget* w);
QWidget* QSplitter_Widget(QSplitter* self, int index);
int QSplitter_Count(QSplitter* self);
void QSplitter_GetRange(QSplitter* self, int index, int* param2, int* param3);
QSplitterHandle* QSplitter_Handle(QSplitter* self, int index);
void QSplitter_SetStretchFactor(QSplitter* self, int index, int stretch);
void QSplitter_SplitterMoved(QSplitter* self, int pos, int index);
void QSplitter_connect_SplitterMoved(QSplitter* self, void* slot);
void QSplitter_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QSplitter_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSplitter_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QSplitter_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSplitter_SetOpaqueResize1(QSplitter* self, bool opaque);
void QSplitter_Delete(QSplitter* self);

QMetaObject* QSplitterHandle_MetaObject(QSplitterHandle* self);
void QSplitterHandle_Tr(char* s, char** _out, int* _out_Strlen);
void QSplitterHandle_TrUtf8(char* s, char** _out, int* _out_Strlen);
bool QSplitterHandle_OpaqueResize(QSplitterHandle* self);
QSplitter* QSplitterHandle_Splitter(QSplitterHandle* self);
QSize* QSplitterHandle_SizeHint(QSplitterHandle* self);
void QSplitterHandle_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QSplitterHandle_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSplitterHandle_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QSplitterHandle_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSplitterHandle_Delete(QSplitterHandle* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
