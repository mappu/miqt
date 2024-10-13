#ifndef GEN_QSPLITTER_H
#define GEN_QSPLITTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
QSplitter* QSplitter_new2(int param1);
QSplitter* QSplitter_new3(QWidget* parent);
QSplitter* QSplitter_new4(int param1, QWidget* parent);
QMetaObject* QSplitter_MetaObject(const QSplitter* self);
void* QSplitter_Metacast(QSplitter* self, const char* param1);
struct miqt_string* QSplitter_Tr(const char* s);
struct miqt_string* QSplitter_TrUtf8(const char* s);
void QSplitter_AddWidget(QSplitter* self, QWidget* widget);
void QSplitter_InsertWidget(QSplitter* self, int index, QWidget* widget);
QWidget* QSplitter_ReplaceWidget(QSplitter* self, int index, QWidget* widget);
void QSplitter_SetOrientation(QSplitter* self, int orientation);
int QSplitter_Orientation(const QSplitter* self);
void QSplitter_SetChildrenCollapsible(QSplitter* self, bool childrenCollapsible);
bool QSplitter_ChildrenCollapsible(const QSplitter* self);
void QSplitter_SetCollapsible(QSplitter* self, int index, bool param2);
bool QSplitter_IsCollapsible(const QSplitter* self, int index);
void QSplitter_SetOpaqueResize(QSplitter* self);
bool QSplitter_OpaqueResize(const QSplitter* self);
void QSplitter_Refresh(QSplitter* self);
QSize* QSplitter_SizeHint(const QSplitter* self);
QSize* QSplitter_MinimumSizeHint(const QSplitter* self);
struct miqt_array* QSplitter_Sizes(const QSplitter* self);
void QSplitter_SetSizes(QSplitter* self, struct miqt_array* /* of int */ list);
QByteArray* QSplitter_SaveState(const QSplitter* self);
bool QSplitter_RestoreState(QSplitter* self, QByteArray* state);
int QSplitter_HandleWidth(const QSplitter* self);
void QSplitter_SetHandleWidth(QSplitter* self, int handleWidth);
int QSplitter_IndexOf(const QSplitter* self, QWidget* w);
QWidget* QSplitter_Widget(const QSplitter* self, int index);
int QSplitter_Count(const QSplitter* self);
void QSplitter_GetRange(const QSplitter* self, int index, int* param2, int* param3);
QSplitterHandle* QSplitter_Handle(const QSplitter* self, int index);
void QSplitter_SetStretchFactor(QSplitter* self, int index, int stretch);
void QSplitter_SplitterMoved(QSplitter* self, int pos, int index);
void QSplitter_connect_SplitterMoved(QSplitter* self, intptr_t slot);
struct miqt_string* QSplitter_Tr2(const char* s, const char* c);
struct miqt_string* QSplitter_Tr3(const char* s, const char* c, int n);
struct miqt_string* QSplitter_TrUtf82(const char* s, const char* c);
struct miqt_string* QSplitter_TrUtf83(const char* s, const char* c, int n);
void QSplitter_SetOpaqueResize1(QSplitter* self, bool opaque);
void QSplitter_Delete(QSplitter* self);

QSplitterHandle* QSplitterHandle_new(int o, QSplitter* parent);
QMetaObject* QSplitterHandle_MetaObject(const QSplitterHandle* self);
void* QSplitterHandle_Metacast(QSplitterHandle* self, const char* param1);
struct miqt_string* QSplitterHandle_Tr(const char* s);
struct miqt_string* QSplitterHandle_TrUtf8(const char* s);
void QSplitterHandle_SetOrientation(QSplitterHandle* self, int o);
int QSplitterHandle_Orientation(const QSplitterHandle* self);
bool QSplitterHandle_OpaqueResize(const QSplitterHandle* self);
QSplitter* QSplitterHandle_Splitter(const QSplitterHandle* self);
QSize* QSplitterHandle_SizeHint(const QSplitterHandle* self);
struct miqt_string* QSplitterHandle_Tr2(const char* s, const char* c);
struct miqt_string* QSplitterHandle_Tr3(const char* s, const char* c, int n);
struct miqt_string* QSplitterHandle_TrUtf82(const char* s, const char* c);
struct miqt_string* QSplitterHandle_TrUtf83(const char* s, const char* c, int n);
void QSplitterHandle_Delete(QSplitterHandle* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
