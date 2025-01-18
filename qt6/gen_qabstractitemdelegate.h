#pragma once
#ifndef MIQT_QT6_GEN_QABSTRACTITEMDELEGATE_H
#define MIQT_QT6_GEN_QABSTRACTITEMDELEGATE_H

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
class QMetaMethod;
class QMetaObject;
class QModelIndex;
class QObject;
class QPainter;
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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QAbstractItemDelegate* QAbstractItemDelegate_new();
QAbstractItemDelegate* QAbstractItemDelegate_new2(QObject* parent);
void QAbstractItemDelegate_virtbase(QAbstractItemDelegate* src, QObject** outptr_QObject);
QMetaObject* QAbstractItemDelegate_MetaObject(const QAbstractItemDelegate* self);
void* QAbstractItemDelegate_Metacast(QAbstractItemDelegate* self, const char* param1);
struct miqt_string QAbstractItemDelegate_Tr(const char* s);
void QAbstractItemDelegate_Paint(const QAbstractItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
QSize* QAbstractItemDelegate_SizeHint(const QAbstractItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index);
QWidget* QAbstractItemDelegate_CreateEditor(const QAbstractItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index);
void QAbstractItemDelegate_DestroyEditor(const QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index);
void QAbstractItemDelegate_SetEditorData(const QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index);
void QAbstractItemDelegate_SetModelData(const QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index);
void QAbstractItemDelegate_UpdateEditorGeometry(const QAbstractItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index);
bool QAbstractItemDelegate_EditorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index);
bool QAbstractItemDelegate_HelpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index);
struct miqt_array /* of int */  QAbstractItemDelegate_PaintingRoles(const QAbstractItemDelegate* self);
void QAbstractItemDelegate_CommitData(QAbstractItemDelegate* self, QWidget* editor);
void QAbstractItemDelegate_connect_CommitData(QAbstractItemDelegate* self, intptr_t slot);
void QAbstractItemDelegate_CloseEditor(QAbstractItemDelegate* self, QWidget* editor);
void QAbstractItemDelegate_connect_CloseEditor(QAbstractItemDelegate* self, intptr_t slot);
void QAbstractItemDelegate_SizeHintChanged(QAbstractItemDelegate* self, QModelIndex* param1);
void QAbstractItemDelegate_connect_SizeHintChanged(QAbstractItemDelegate* self, intptr_t slot);
struct miqt_string QAbstractItemDelegate_Tr2(const char* s, const char* c);
struct miqt_string QAbstractItemDelegate_Tr3(const char* s, const char* c, int n);
void QAbstractItemDelegate_CloseEditor2(QAbstractItemDelegate* self, QWidget* editor, int hint);
void QAbstractItemDelegate_connect_CloseEditor2(QAbstractItemDelegate* self, intptr_t slot);
void QAbstractItemDelegate_override_virtual_Paint(void* self, intptr_t slot);
void QAbstractItemDelegate_virtualbase_Paint(const void* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
void QAbstractItemDelegate_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QAbstractItemDelegate_virtualbase_SizeHint(const void* self, QStyleOptionViewItem* option, QModelIndex* index);
void QAbstractItemDelegate_override_virtual_CreateEditor(void* self, intptr_t slot);
QWidget* QAbstractItemDelegate_virtualbase_CreateEditor(const void* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index);
void QAbstractItemDelegate_override_virtual_DestroyEditor(void* self, intptr_t slot);
void QAbstractItemDelegate_virtualbase_DestroyEditor(const void* self, QWidget* editor, QModelIndex* index);
void QAbstractItemDelegate_override_virtual_SetEditorData(void* self, intptr_t slot);
void QAbstractItemDelegate_virtualbase_SetEditorData(const void* self, QWidget* editor, QModelIndex* index);
void QAbstractItemDelegate_override_virtual_SetModelData(void* self, intptr_t slot);
void QAbstractItemDelegate_virtualbase_SetModelData(const void* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index);
void QAbstractItemDelegate_override_virtual_UpdateEditorGeometry(void* self, intptr_t slot);
void QAbstractItemDelegate_virtualbase_UpdateEditorGeometry(const void* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index);
void QAbstractItemDelegate_override_virtual_EditorEvent(void* self, intptr_t slot);
bool QAbstractItemDelegate_virtualbase_EditorEvent(void* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index);
void QAbstractItemDelegate_override_virtual_HelpEvent(void* self, intptr_t slot);
bool QAbstractItemDelegate_virtualbase_HelpEvent(void* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index);
void QAbstractItemDelegate_override_virtual_PaintingRoles(void* self, intptr_t slot);
struct miqt_array /* of int */  QAbstractItemDelegate_virtualbase_PaintingRoles(const void* self);
void QAbstractItemDelegate_override_virtual_Event(void* self, intptr_t slot);
bool QAbstractItemDelegate_virtualbase_Event(void* self, QEvent* event);
void QAbstractItemDelegate_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAbstractItemDelegate_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAbstractItemDelegate_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAbstractItemDelegate_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAbstractItemDelegate_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAbstractItemDelegate_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAbstractItemDelegate_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAbstractItemDelegate_virtualbase_CustomEvent(void* self, QEvent* event);
void QAbstractItemDelegate_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAbstractItemDelegate_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAbstractItemDelegate_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAbstractItemDelegate_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAbstractItemDelegate_Delete(QAbstractItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
