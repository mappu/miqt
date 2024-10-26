#ifndef GEN_QCOLUMNVIEW_H
#define GEN_QCOLUMNVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

QColumnView* QColumnView_new(QWidget* parent);
QColumnView* QColumnView_new2();
QMetaObject* QColumnView_MetaObject(const QColumnView* self);
void* QColumnView_Metacast(QColumnView* self, const char* param1);
struct miqt_string QColumnView_Tr(const char* s);
void QColumnView_UpdatePreviewWidget(QColumnView* self, QModelIndex* index);
void QColumnView_connect_UpdatePreviewWidget(QColumnView* self, intptr_t slot);
QModelIndex* QColumnView_IndexAt(const QColumnView* self, QPoint* point);
void QColumnView_ScrollTo(QColumnView* self, QModelIndex* index);
QSize* QColumnView_SizeHint(const QColumnView* self);
QRect* QColumnView_VisualRect(const QColumnView* self, QModelIndex* index);
void QColumnView_SetModel(QColumnView* self, QAbstractItemModel* model);
void QColumnView_SetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel);
void QColumnView_SetRootIndex(QColumnView* self, QModelIndex* index);
void QColumnView_SelectAll(QColumnView* self);
void QColumnView_SetResizeGripsVisible(QColumnView* self, bool visible);
bool QColumnView_ResizeGripsVisible(const QColumnView* self);
QWidget* QColumnView_PreviewWidget(const QColumnView* self);
void QColumnView_SetPreviewWidget(QColumnView* self, QWidget* widget);
void QColumnView_SetColumnWidths(QColumnView* self, struct miqt_array* /* of int */ list);
struct miqt_array* QColumnView_ColumnWidths(const QColumnView* self);
struct miqt_string QColumnView_Tr2(const char* s, const char* c);
struct miqt_string QColumnView_Tr3(const char* s, const char* c, int n);
void QColumnView_ScrollTo2(QColumnView* self, QModelIndex* index, int hint);
void QColumnView_Delete(QColumnView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
