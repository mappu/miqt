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
class QEvent;
class QHelpEvent;
class QItemEditorFactory;
class QLocale;
class QMetaObject;
class QModelIndex;
class QObject;
class QPainter;
class QSize;
class QStyleOptionViewItem;
class QStyledItemDelegate;
class QVariant;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QEvent QEvent;
typedef struct QHelpEvent QHelpEvent;
typedef struct QItemEditorFactory QItemEditorFactory;
typedef struct QLocale QLocale;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QStyledItemDelegate QStyledItemDelegate;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QStyledItemDelegate* QStyledItemDelegate_new();
QStyledItemDelegate* QStyledItemDelegate_new2(QObject* parent);
void QStyledItemDelegate_virtbase(QStyledItemDelegate* src, QAbstractItemDelegate** outptr_QAbstractItemDelegate);
QMetaObject* QStyledItemDelegate_MetaObject(const QStyledItemDelegate* self);
void* QStyledItemDelegate_Metacast(QStyledItemDelegate* self, const char* param1);
struct miqt_string QStyledItemDelegate_Tr(const char* s);
struct miqt_string QStyledItemDelegate_TrUtf8(const char* s);
void QStyledItemDelegate_Paint(const QStyledItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
QSize* QStyledItemDelegate_SizeHint(const QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index);
QWidget* QStyledItemDelegate_CreateEditor(const QStyledItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index);
void QStyledItemDelegate_SetEditorData(const QStyledItemDelegate* self, QWidget* editor, QModelIndex* index);
void QStyledItemDelegate_SetModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index);
void QStyledItemDelegate_UpdateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index);
QItemEditorFactory* QStyledItemDelegate_ItemEditorFactory(const QStyledItemDelegate* self);
void QStyledItemDelegate_SetItemEditorFactory(QStyledItemDelegate* self, QItemEditorFactory* factory);
struct miqt_string QStyledItemDelegate_DisplayText(const QStyledItemDelegate* self, QVariant* value, QLocale* locale);
void QStyledItemDelegate_InitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index);
bool QStyledItemDelegate_EventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event);
bool QStyledItemDelegate_EditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index);
struct miqt_string QStyledItemDelegate_Tr2(const char* s, const char* c);
struct miqt_string QStyledItemDelegate_Tr3(const char* s, const char* c, int n);
struct miqt_string QStyledItemDelegate_TrUtf82(const char* s, const char* c);
struct miqt_string QStyledItemDelegate_TrUtf83(const char* s, const char* c, int n);
void QStyledItemDelegate_override_virtual_Paint(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_Paint(const void* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
void QStyledItemDelegate_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QStyledItemDelegate_virtualbase_SizeHint(const void* self, QStyleOptionViewItem* option, QModelIndex* index);
void QStyledItemDelegate_override_virtual_CreateEditor(void* self, intptr_t slot);
QWidget* QStyledItemDelegate_virtualbase_CreateEditor(const void* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index);
void QStyledItemDelegate_override_virtual_SetEditorData(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_SetEditorData(const void* self, QWidget* editor, QModelIndex* index);
void QStyledItemDelegate_override_virtual_SetModelData(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_SetModelData(const void* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index);
void QStyledItemDelegate_override_virtual_UpdateEditorGeometry(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_UpdateEditorGeometry(const void* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index);
void QStyledItemDelegate_override_virtual_DisplayText(void* self, intptr_t slot);
struct miqt_string QStyledItemDelegate_virtualbase_DisplayText(const void* self, QVariant* value, QLocale* locale);
void QStyledItemDelegate_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_InitStyleOption(const void* self, QStyleOptionViewItem* option, QModelIndex* index);
void QStyledItemDelegate_override_virtual_EventFilter(void* self, intptr_t slot);
bool QStyledItemDelegate_virtualbase_EventFilter(void* self, QObject* object, QEvent* event);
void QStyledItemDelegate_override_virtual_EditorEvent(void* self, intptr_t slot);
bool QStyledItemDelegate_virtualbase_EditorEvent(void* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index);
void QStyledItemDelegate_override_virtual_DestroyEditor(void* self, intptr_t slot);
void QStyledItemDelegate_virtualbase_DestroyEditor(const void* self, QWidget* editor, QModelIndex* index);
void QStyledItemDelegate_override_virtual_HelpEvent(void* self, intptr_t slot);
bool QStyledItemDelegate_virtualbase_HelpEvent(void* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index);
void QStyledItemDelegate_override_virtual_PaintingRoles(void* self, intptr_t slot);
struct miqt_array /* of int */  QStyledItemDelegate_virtualbase_PaintingRoles(const void* self);
void QStyledItemDelegate_Delete(QStyledItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
