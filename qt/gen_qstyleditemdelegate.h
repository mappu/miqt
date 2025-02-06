#pragma once
#ifndef MIQT_QT_GEN_QSTYLEDITEMDELEGATE_H
#define MIQT_QT_GEN_QSTYLEDITEMDELEGATE_H

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
class QItemEditorFactory;
class QLocale;
class QMetaMethod;
class QMetaObject;
class QModelIndex;
class QObject;
class QPainter;
class QSize;
class QStyleOptionViewItem;
class QStyledItemDelegate;
class QTimerEvent;
class QVariant;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHelpEvent QHelpEvent;
typedef struct QItemEditorFactory QItemEditorFactory;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QStyledItemDelegate QStyledItemDelegate;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QStyledItemDelegate* QStyledItemDelegate_new();
QStyledItemDelegate* QStyledItemDelegate_new2(QObject* parent);
void QStyledItemDelegate_virtbase(QStyledItemDelegate* src, QAbstractItemDelegate** outptr_QAbstractItemDelegate);
QMetaObject* QStyledItemDelegate_metaObject(const QStyledItemDelegate* self);
void* QStyledItemDelegate_metacast(QStyledItemDelegate* self, const char* param1);
struct miqt_string QStyledItemDelegate_tr(const char* s);
struct miqt_string QStyledItemDelegate_trUtf8(const char* s);
void QStyledItemDelegate_paint(const QStyledItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
QSize* QStyledItemDelegate_sizeHint(const QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index);
QWidget* QStyledItemDelegate_createEditor(const QStyledItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index);
void QStyledItemDelegate_setEditorData(const QStyledItemDelegate* self, QWidget* editor, QModelIndex* index);
void QStyledItemDelegate_setModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index);
void QStyledItemDelegate_updateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index);
QItemEditorFactory* QStyledItemDelegate_itemEditorFactory(const QStyledItemDelegate* self);
void QStyledItemDelegate_setItemEditorFactory(QStyledItemDelegate* self, QItemEditorFactory* factory);
struct miqt_string QStyledItemDelegate_displayText(const QStyledItemDelegate* self, QVariant* value, QLocale* locale);
void QStyledItemDelegate_initStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index);
bool QStyledItemDelegate_eventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event);
bool QStyledItemDelegate_editorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index);
struct miqt_string QStyledItemDelegate_tr2(const char* s, const char* c);
struct miqt_string QStyledItemDelegate_tr3(const char* s, const char* c, int n);
struct miqt_string QStyledItemDelegate_trUtf82(const char* s, const char* c);
struct miqt_string QStyledItemDelegate_trUtf83(const char* s, const char* c, int n);
bool QStyledItemDelegate_override_virtual_paint(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_paint(const void* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
bool QStyledItemDelegate_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QStyledItemDelegate_virtualbase_sizeHint(const void* self, QStyleOptionViewItem* option, QModelIndex* index);
bool QStyledItemDelegate_override_virtual_createEditor(void* self, intptr_t slot);
QWidget* QStyledItemDelegate_virtualbase_createEditor(const void* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index);
bool QStyledItemDelegate_override_virtual_setEditorData(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_setEditorData(const void* self, QWidget* editor, QModelIndex* index);
bool QStyledItemDelegate_override_virtual_setModelData(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_setModelData(const void* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index);
bool QStyledItemDelegate_override_virtual_updateEditorGeometry(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_updateEditorGeometry(const void* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index);
bool QStyledItemDelegate_override_virtual_displayText(void* self, intptr_t slot);
struct miqt_string QStyledItemDelegate_virtualbase_displayText(const void* self, QVariant* value, QLocale* locale);
bool QStyledItemDelegate_override_virtual_initStyleOption(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_initStyleOption(const void* self, QStyleOptionViewItem* option, QModelIndex* index);
bool QStyledItemDelegate_override_virtual_eventFilter(void* self, intptr_t slot);
bool QStyledItemDelegate_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);
bool QStyledItemDelegate_override_virtual_editorEvent(void* self, intptr_t slot);
bool QStyledItemDelegate_virtualbase_editorEvent(void* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index);
bool QStyledItemDelegate_override_virtual_destroyEditor(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_destroyEditor(const void* self, QWidget* editor, QModelIndex* index);
bool QStyledItemDelegate_override_virtual_helpEvent(void* self, intptr_t slot);
bool QStyledItemDelegate_virtualbase_helpEvent(void* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index);
bool QStyledItemDelegate_override_virtual_paintingRoles(void* self, intptr_t slot);
struct miqt_array /* of int */  QStyledItemDelegate_virtualbase_paintingRoles(const void* self);
bool QStyledItemDelegate_override_virtual_event(void* self, intptr_t slot);
bool QStyledItemDelegate_virtualbase_event(void* self, QEvent* event);
bool QStyledItemDelegate_override_virtual_timerEvent(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QStyledItemDelegate_override_virtual_childEvent(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_childEvent(void* self, QChildEvent* event);
bool QStyledItemDelegate_override_virtual_customEvent(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_customEvent(void* self, QEvent* event);
bool QStyledItemDelegate_override_virtual_connectNotify(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QStyledItemDelegate_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QStyledItemDelegate_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QStyledItemDelegate_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QStyledItemDelegate_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QStyledItemDelegate_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QStyledItemDelegate_delete(QStyledItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
