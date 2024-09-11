#ifndef GEN_QABSTRACTITEMDELEGATE_H
#define GEN_QABSTRACTITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemDelegate;
class QAbstractItemModel;
class QAbstractItemView;
class QEvent;
class QFontMetrics;
class QHelpEvent;
class QMetaObject;
class QModelIndex;
class QPainter;
class QSize;
class QStyleOptionViewItem;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QEvent QEvent;
typedef struct QFontMetrics QFontMetrics;
typedef struct QHelpEvent QHelpEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QPainter QPainter;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QWidget QWidget;
#endif

QMetaObject* QAbstractItemDelegate_MetaObject(const QAbstractItemDelegate* self);
void QAbstractItemDelegate_Tr(const char* s, char** _out, int* _out_Strlen);
void QAbstractItemDelegate_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QAbstractItemDelegate_Paint(const QAbstractItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index);
QSize* QAbstractItemDelegate_SizeHint(const QAbstractItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index);
QWidget* QAbstractItemDelegate_CreateEditor(const QAbstractItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index);
void QAbstractItemDelegate_DestroyEditor(const QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index);
void QAbstractItemDelegate_SetEditorData(const QAbstractItemDelegate* self, QWidget* editor, QModelIndex* index);
void QAbstractItemDelegate_SetModelData(const QAbstractItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index);
void QAbstractItemDelegate_UpdateEditorGeometry(const QAbstractItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index);
bool QAbstractItemDelegate_EditorEvent(QAbstractItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index);
void QAbstractItemDelegate_ElidedText(QFontMetrics* fontMetrics, int width, uintptr_t mode, const char* text, size_t text_Strlen, char** _out, int* _out_Strlen);
bool QAbstractItemDelegate_HelpEvent(QAbstractItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index);
void QAbstractItemDelegate_PaintingRoles(const QAbstractItemDelegate* self, int** _out, size_t* _out_len);
void QAbstractItemDelegate_CommitData(QAbstractItemDelegate* self, QWidget* editor);
void QAbstractItemDelegate_connect_CommitData(QAbstractItemDelegate* self, void* slot);
void QAbstractItemDelegate_CloseEditor(QAbstractItemDelegate* self, QWidget* editor);
void QAbstractItemDelegate_connect_CloseEditor(QAbstractItemDelegate* self, void* slot);
void QAbstractItemDelegate_SizeHintChanged(QAbstractItemDelegate* self, QModelIndex* param1);
void QAbstractItemDelegate_connect_SizeHintChanged(QAbstractItemDelegate* self, void* slot);
void QAbstractItemDelegate_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAbstractItemDelegate_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAbstractItemDelegate_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAbstractItemDelegate_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAbstractItemDelegate_CloseEditor2(QAbstractItemDelegate* self, QWidget* editor, uintptr_t hint);
void QAbstractItemDelegate_connect_CloseEditor2(QAbstractItemDelegate* self, void* slot);
void QAbstractItemDelegate_Delete(QAbstractItemDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
