#ifndef GEN_QSTYLEDITEMDELEGATE_H
#define GEN_QSTYLEDITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
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
typedef struct QAbstractItemModel QAbstractItemModel;
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
QMetaObject* QStyledItemDelegate_MetaObject(QStyledItemDelegate* self);
void QStyledItemDelegate_Tr(const char* s, char** _out, int* _out_Strlen);
void QStyledItemDelegate_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QStyledItemDelegate_Paint(QStyledItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
QSize* QStyledItemDelegate_SizeHint(QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index);
QWidget* QStyledItemDelegate_CreateEditor(QStyledItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index);
void QStyledItemDelegate_SetEditorData(QStyledItemDelegate* self, QWidget* editor, QModelIndex* index);
void QStyledItemDelegate_SetModelData(QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index);
void QStyledItemDelegate_UpdateEditorGeometry(QStyledItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index);
QItemEditorFactory* QStyledItemDelegate_ItemEditorFactory(QStyledItemDelegate* self);
void QStyledItemDelegate_SetItemEditorFactory(QStyledItemDelegate* self, QItemEditorFactory* factory);
void QStyledItemDelegate_DisplayText(QStyledItemDelegate* self, QVariant* value, QLocale* locale, char** _out, int* _out_Strlen);
void QStyledItemDelegate_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QStyledItemDelegate_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QStyledItemDelegate_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QStyledItemDelegate_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QStyledItemDelegate_Delete(QStyledItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
