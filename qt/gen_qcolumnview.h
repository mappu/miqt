#ifndef GEN_QCOLUMNVIEW_H
#define GEN_QCOLUMNVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QColumnView;
class QItemSelectionModel;
class QMetaObject;
class QModelIndex;
class QPoint;
class QRect;
class QSize;
class QWidget;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QColumnView QColumnView;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QColumnView* QColumnView_new();
QColumnView* QColumnView_new2(QWidget* parent);
QMetaObject* QColumnView_MetaObject(QColumnView* self);
void QColumnView_Tr(const char* s, char** _out, int* _out_Strlen);
void QColumnView_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QColumnView_UpdatePreviewWidget(QColumnView* self, QModelIndex* index);
void QColumnView_connect_UpdatePreviewWidget(QColumnView* self, void* slot);
QModelIndex* QColumnView_IndexAt(QColumnView* self, QPoint* point);
void QColumnView_ScrollTo(QColumnView* self, QModelIndex* index);
QSize* QColumnView_SizeHint(QColumnView* self);
QRect* QColumnView_VisualRect(QColumnView* self, QModelIndex* index);
void QColumnView_SetModel(QColumnView* self, QAbstractItemModel* model);
void QColumnView_SetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel);
void QColumnView_SetRootIndex(QColumnView* self, QModelIndex* index);
void QColumnView_SelectAll(QColumnView* self);
void QColumnView_SetResizeGripsVisible(QColumnView* self, bool visible);
bool QColumnView_ResizeGripsVisible(QColumnView* self);
QWidget* QColumnView_PreviewWidget(QColumnView* self);
void QColumnView_SetPreviewWidget(QColumnView* self, QWidget* widget);
void QColumnView_SetColumnWidths(QColumnView* self, int* list, size_t list_len);
void QColumnView_ColumnWidths(QColumnView* self, int** _out, size_t* _out_len);
void QColumnView_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QColumnView_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QColumnView_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QColumnView_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QColumnView_ScrollTo2(QColumnView* self, QModelIndex* index, uintptr_t hint);
void QColumnView_Delete(QColumnView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
