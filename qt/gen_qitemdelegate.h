#ifndef GEN_QITEMDELEGATE_H
#define GEN_QITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QItemDelegate;
class QItemEditorFactory;
class QMetaObject;
class QModelIndex;
class QObject;
class QPainter;
class QSize;
class QStyleOptionViewItem;
class QWidget;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QItemDelegate QItemDelegate;
typedef struct QItemEditorFactory QItemEditorFactory;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QWidget QWidget;
#endif

QItemDelegate* QItemDelegate_new();
QItemDelegate* QItemDelegate_new2(QObject* parent);
QMetaObject* QItemDelegate_MetaObject(const QItemDelegate* self);
void QItemDelegate_Tr(const char* s, char** _out, int* _out_Strlen);
void QItemDelegate_TrUtf8(const char* s, char** _out, int* _out_Strlen);
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
void QItemDelegate_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QItemDelegate_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QItemDelegate_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QItemDelegate_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QItemDelegate_Delete(QItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
