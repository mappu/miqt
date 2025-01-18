#pragma once
#ifndef MIQT_QT_GEN_QITEMDELEGATE_H
#define MIQT_QT_GEN_QITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemDelegate;
class QAbstractItemModel;
class QAbstractItemView;
class QEvent;
class QHelpEvent;
class QItemDelegate;
class QItemEditorFactory;
class QMetaObject;
class QModelIndex;
class QObject;
class QPainter;
class QPixmap;
class QRect;
class QSize;
class QStyleOptionViewItem;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QEvent QEvent;
typedef struct QHelpEvent QHelpEvent;
typedef struct QItemDelegate QItemDelegate;
typedef struct QItemEditorFactory QItemEditorFactory;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QWidget QWidget;
#endif

QItemDelegate* QItemDelegate_new();
QItemDelegate* QItemDelegate_new2(QObject* parent);
void QItemDelegate_virtbase(QItemDelegate* src, QAbstractItemDelegate** outptr_QAbstractItemDelegate);
QMetaObject* QItemDelegate_MetaObject(const QItemDelegate* self);
void* QItemDelegate_Metacast(QItemDelegate* self, const char* param1);
struct miqt_string QItemDelegate_Tr(const char* s);
struct miqt_string QItemDelegate_TrUtf8(const char* s);
bool QItemDelegate_HasClipping(const QItemDelegate* self);
void QItemDelegate_SetClipping(QItemDelegate* self, bool clip);
void QItemDelegate_Paint(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
QSize* QItemDelegate_SizeHint(const QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index);
QWidget* QItemDelegate_CreateEditor(const QItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index);
void QItemDelegate_SetEditorData(const QItemDelegate* self, QWidget* editor, QModelIndex* index);
void QItemDelegate_SetModelData(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index);
void QItemDelegate_UpdateEditorGeometry(const QItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index);
QItemEditorFactory* QItemDelegate_ItemEditorFactory(const QItemDelegate* self);
void QItemDelegate_SetItemEditorFactory(QItemDelegate* self, QItemEditorFactory* factory);
void QItemDelegate_DrawDisplay(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, struct miqt_string text);
void QItemDelegate_DrawDecoration(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap);
void QItemDelegate_DrawFocus(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect);
void QItemDelegate_DrawCheck(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, int state);
bool QItemDelegate_EventFilter(QItemDelegate* self, QObject* object, QEvent* event);
bool QItemDelegate_EditorEvent(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index);
struct miqt_string QItemDelegate_Tr2(const char* s, const char* c);
struct miqt_string QItemDelegate_Tr3(const char* s, const char* c, int n);
struct miqt_string QItemDelegate_TrUtf82(const char* s, const char* c);
struct miqt_string QItemDelegate_TrUtf83(const char* s, const char* c, int n);
bool QItemDelegate_override_virtual_Paint(void* self, intptr_t slot);
void QItemDelegate_virtualbase_Paint(const void* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
bool QItemDelegate_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QItemDelegate_virtualbase_SizeHint(const void* self, QStyleOptionViewItem* option, QModelIndex* index);
bool QItemDelegate_override_virtual_CreateEditor(void* self, intptr_t slot);
QWidget* QItemDelegate_virtualbase_CreateEditor(const void* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index);
bool QItemDelegate_override_virtual_SetEditorData(void* self, intptr_t slot);
void QItemDelegate_virtualbase_SetEditorData(const void* self, QWidget* editor, QModelIndex* index);
bool QItemDelegate_override_virtual_SetModelData(void* self, intptr_t slot);
void QItemDelegate_virtualbase_SetModelData(const void* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index);
bool QItemDelegate_override_virtual_UpdateEditorGeometry(void* self, intptr_t slot);
void QItemDelegate_virtualbase_UpdateEditorGeometry(const void* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index);
bool QItemDelegate_override_virtual_DrawDisplay(void* self, intptr_t slot);
void QItemDelegate_virtualbase_DrawDisplay(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, struct miqt_string text);
bool QItemDelegate_override_virtual_DrawDecoration(void* self, intptr_t slot);
void QItemDelegate_virtualbase_DrawDecoration(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap);
bool QItemDelegate_override_virtual_DrawFocus(void* self, intptr_t slot);
void QItemDelegate_virtualbase_DrawFocus(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect);
bool QItemDelegate_override_virtual_DrawCheck(void* self, intptr_t slot);
void QItemDelegate_virtualbase_DrawCheck(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, int state);
bool QItemDelegate_override_virtual_EventFilter(void* self, intptr_t slot);
bool QItemDelegate_virtualbase_EventFilter(void* self, QObject* object, QEvent* event);
bool QItemDelegate_override_virtual_EditorEvent(void* self, intptr_t slot);
bool QItemDelegate_virtualbase_EditorEvent(void* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index);
bool QItemDelegate_override_virtual_DestroyEditor(void* self, intptr_t slot);
void QItemDelegate_virtualbase_DestroyEditor(const void* self, QWidget* editor, QModelIndex* index);
bool QItemDelegate_override_virtual_HelpEvent(void* self, intptr_t slot);
bool QItemDelegate_virtualbase_HelpEvent(void* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index);
bool QItemDelegate_override_virtual_PaintingRoles(void* self, intptr_t slot);
struct miqt_array /* of int */  QItemDelegate_virtualbase_PaintingRoles(const void* self);
void QItemDelegate_Delete(QItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
