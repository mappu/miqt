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
class QChildEvent;
class QEvent;
class QHelpEvent;
class QItemDelegate;
class QItemEditorFactory;
class QMetaMethod;
class QMetaObject;
class QModelIndex;
class QObject;
class QPainter;
class QPixmap;
class QRect;
class QSize;
class QStyleOptionViewItem;
class QTimerEvent;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHelpEvent QHelpEvent;
typedef struct QItemDelegate QItemDelegate;
typedef struct QItemEditorFactory QItemEditorFactory;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QItemDelegate* QItemDelegate_new();
QItemDelegate* QItemDelegate_new2(QObject* parent);
void QItemDelegate_virtbase(QItemDelegate* src, QAbstractItemDelegate** outptr_QAbstractItemDelegate);
QMetaObject* QItemDelegate_metaObject(const QItemDelegate* self);
void* QItemDelegate_metacast(QItemDelegate* self, const char* param1);
struct miqt_string QItemDelegate_tr(const char* s);
struct miqt_string QItemDelegate_trUtf8(const char* s);
bool QItemDelegate_hasClipping(const QItemDelegate* self);
void QItemDelegate_setClipping(QItemDelegate* self, bool clip);
void QItemDelegate_paint(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
QSize* QItemDelegate_sizeHint(const QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index);
QWidget* QItemDelegate_createEditor(const QItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index);
void QItemDelegate_setEditorData(const QItemDelegate* self, QWidget* editor, QModelIndex* index);
void QItemDelegate_setModelData(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index);
void QItemDelegate_updateEditorGeometry(const QItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index);
QItemEditorFactory* QItemDelegate_itemEditorFactory(const QItemDelegate* self);
void QItemDelegate_setItemEditorFactory(QItemDelegate* self, QItemEditorFactory* factory);
void QItemDelegate_drawDisplay(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, struct miqt_string text);
void QItemDelegate_drawDecoration(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap);
void QItemDelegate_drawFocus(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect);
void QItemDelegate_drawCheck(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, int state);
bool QItemDelegate_eventFilter(QItemDelegate* self, QObject* object, QEvent* event);
bool QItemDelegate_editorEvent(QItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index);
struct miqt_string QItemDelegate_tr2(const char* s, const char* c);
struct miqt_string QItemDelegate_tr3(const char* s, const char* c, int n);
struct miqt_string QItemDelegate_trUtf82(const char* s, const char* c);
struct miqt_string QItemDelegate_trUtf83(const char* s, const char* c, int n);
bool QItemDelegate_override_virtual_paint(void* self, intptr_t slot);
void QItemDelegate_virtualbase_paint(const void* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
bool QItemDelegate_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QItemDelegate_virtualbase_sizeHint(const void* self, QStyleOptionViewItem* option, QModelIndex* index);
bool QItemDelegate_override_virtual_createEditor(void* self, intptr_t slot);
QWidget* QItemDelegate_virtualbase_createEditor(const void* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index);
bool QItemDelegate_override_virtual_setEditorData(void* self, intptr_t slot);
void QItemDelegate_virtualbase_setEditorData(const void* self, QWidget* editor, QModelIndex* index);
bool QItemDelegate_override_virtual_setModelData(void* self, intptr_t slot);
void QItemDelegate_virtualbase_setModelData(const void* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index);
bool QItemDelegate_override_virtual_updateEditorGeometry(void* self, intptr_t slot);
void QItemDelegate_virtualbase_updateEditorGeometry(const void* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index);
bool QItemDelegate_override_virtual_drawDisplay(void* self, intptr_t slot);
void QItemDelegate_virtualbase_drawDisplay(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, struct miqt_string text);
bool QItemDelegate_override_virtual_drawDecoration(void* self, intptr_t slot);
void QItemDelegate_virtualbase_drawDecoration(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap);
bool QItemDelegate_override_virtual_drawFocus(void* self, intptr_t slot);
void QItemDelegate_virtualbase_drawFocus(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect);
bool QItemDelegate_override_virtual_drawCheck(void* self, intptr_t slot);
void QItemDelegate_virtualbase_drawCheck(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, int state);
bool QItemDelegate_override_virtual_eventFilter(void* self, intptr_t slot);
bool QItemDelegate_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);
bool QItemDelegate_override_virtual_editorEvent(void* self, intptr_t slot);
bool QItemDelegate_virtualbase_editorEvent(void* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index);
bool QItemDelegate_override_virtual_destroyEditor(void* self, intptr_t slot);
void QItemDelegate_virtualbase_destroyEditor(const void* self, QWidget* editor, QModelIndex* index);
bool QItemDelegate_override_virtual_helpEvent(void* self, intptr_t slot);
bool QItemDelegate_virtualbase_helpEvent(void* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index);
bool QItemDelegate_override_virtual_paintingRoles(void* self, intptr_t slot);
struct miqt_array /* of int */  QItemDelegate_virtualbase_paintingRoles(const void* self);
bool QItemDelegate_override_virtual_event(void* self, intptr_t slot);
bool QItemDelegate_virtualbase_event(void* self, QEvent* event);
bool QItemDelegate_override_virtual_timerEvent(void* self, intptr_t slot);
void QItemDelegate_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QItemDelegate_override_virtual_childEvent(void* self, intptr_t slot);
void QItemDelegate_virtualbase_childEvent(void* self, QChildEvent* event);
bool QItemDelegate_override_virtual_customEvent(void* self, intptr_t slot);
void QItemDelegate_virtualbase_customEvent(void* self, QEvent* event);
bool QItemDelegate_override_virtual_connectNotify(void* self, intptr_t slot);
void QItemDelegate_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QItemDelegate_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QItemDelegate_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QItemDelegate_delete(QItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
