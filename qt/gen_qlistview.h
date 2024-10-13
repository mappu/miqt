#ifndef GEN_QLISTVIEW_H
#define GEN_QLISTVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QListView;
class QMetaObject;
class QModelIndex;
class QPoint;
class QRect;
class QSize;
class QWidget;
#else
typedef struct QListView QListView;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QListView* QListView_new();
QListView* QListView_new2(QWidget* parent);
QMetaObject* QListView_MetaObject(const QListView* self);
void* QListView_Metacast(QListView* self, const char* param1);
struct miqt_string* QListView_Tr(const char* s);
struct miqt_string* QListView_TrUtf8(const char* s);
void QListView_SetMovement(QListView* self, int movement);
int QListView_Movement(const QListView* self);
void QListView_SetFlow(QListView* self, int flow);
int QListView_Flow(const QListView* self);
void QListView_SetWrapping(QListView* self, bool enable);
bool QListView_IsWrapping(const QListView* self);
void QListView_SetResizeMode(QListView* self, int mode);
int QListView_ResizeMode(const QListView* self);
void QListView_SetLayoutMode(QListView* self, int mode);
int QListView_LayoutMode(const QListView* self);
void QListView_SetSpacing(QListView* self, int space);
int QListView_Spacing(const QListView* self);
void QListView_SetBatchSize(QListView* self, int batchSize);
int QListView_BatchSize(const QListView* self);
void QListView_SetGridSize(QListView* self, QSize* size);
QSize* QListView_GridSize(const QListView* self);
void QListView_SetViewMode(QListView* self, int mode);
int QListView_ViewMode(const QListView* self);
void QListView_ClearPropertyFlags(QListView* self);
bool QListView_IsRowHidden(const QListView* self, int row);
void QListView_SetRowHidden(QListView* self, int row, bool hide);
void QListView_SetModelColumn(QListView* self, int column);
int QListView_ModelColumn(const QListView* self);
void QListView_SetUniformItemSizes(QListView* self, bool enable);
bool QListView_UniformItemSizes(const QListView* self);
void QListView_SetWordWrap(QListView* self, bool on);
bool QListView_WordWrap(const QListView* self);
void QListView_SetSelectionRectVisible(QListView* self, bool show);
bool QListView_IsSelectionRectVisible(const QListView* self);
void QListView_SetItemAlignment(QListView* self, int alignment);
int QListView_ItemAlignment(const QListView* self);
QRect* QListView_VisualRect(const QListView* self, QModelIndex* index);
void QListView_ScrollTo(QListView* self, QModelIndex* index);
QModelIndex* QListView_IndexAt(const QListView* self, QPoint* p);
void QListView_DoItemsLayout(QListView* self);
void QListView_Reset(QListView* self);
void QListView_SetRootIndex(QListView* self, QModelIndex* index);
void QListView_IndexesMoved(QListView* self, struct miqt_array* /* of QModelIndex* */ indexes);
void QListView_connect_IndexesMoved(QListView* self, intptr_t slot);
struct miqt_string* QListView_Tr2(const char* s, const char* c);
struct miqt_string* QListView_Tr3(const char* s, const char* c, int n);
struct miqt_string* QListView_TrUtf82(const char* s, const char* c);
struct miqt_string* QListView_TrUtf83(const char* s, const char* c, int n);
void QListView_ScrollTo2(QListView* self, QModelIndex* index, int hint);
void QListView_Delete(QListView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
