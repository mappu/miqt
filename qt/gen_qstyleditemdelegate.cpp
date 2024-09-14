#include <QAbstractItemModel>
#include <QItemEditorFactory>
#include <QLocale>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QStyledItemDelegate>
#include <QVariant>
#include <QWidget>
#include "qstyleditemdelegate.h"
#include "gen_qstyleditemdelegate.h"
#include "_cgo_export.h"

QStyledItemDelegate* QStyledItemDelegate_new() {
	return new QStyledItemDelegate();
}

QStyledItemDelegate* QStyledItemDelegate_new2(QObject* parent) {
	return new QStyledItemDelegate(parent);
}

QMetaObject* QStyledItemDelegate_MetaObject(const QStyledItemDelegate* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QStyledItemDelegate_Tr(const char* s) {
	QString _ret = QStyledItemDelegate::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStyledItemDelegate_TrUtf8(const char* s) {
	QString _ret = QStyledItemDelegate::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QStyledItemDelegate_Paint(const QStyledItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	self->paint(painter, *option, *index);
}

QSize* QStyledItemDelegate_SizeHint(const QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
	QSize _ret = self->sizeHint(*option, *index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

QWidget* QStyledItemDelegate_CreateEditor(const QStyledItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->createEditor(parent, *option, *index);
}

void QStyledItemDelegate_SetEditorData(const QStyledItemDelegate* self, QWidget* editor, QModelIndex* index) {
	self->setEditorData(editor, *index);
}

void QStyledItemDelegate_SetModelData(const QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	self->setModelData(editor, model, *index);
}

void QStyledItemDelegate_UpdateEditorGeometry(const QStyledItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	self->updateEditorGeometry(editor, *option, *index);
}

QItemEditorFactory* QStyledItemDelegate_ItemEditorFactory(const QStyledItemDelegate* self) {
	return self->itemEditorFactory();
}

void QStyledItemDelegate_SetItemEditorFactory(QStyledItemDelegate* self, QItemEditorFactory* factory) {
	self->setItemEditorFactory(factory);
}

struct miqt_string* QStyledItemDelegate_DisplayText(const QStyledItemDelegate* self, QVariant* value, QLocale* locale) {
	QString _ret = self->displayText(*value, *locale);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStyledItemDelegate_Tr2(const char* s, const char* c) {
	QString _ret = QStyledItemDelegate::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStyledItemDelegate_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStyledItemDelegate::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStyledItemDelegate_TrUtf82(const char* s, const char* c) {
	QString _ret = QStyledItemDelegate::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QStyledItemDelegate_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QStyledItemDelegate::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QStyledItemDelegate_Delete(QStyledItemDelegate* self) {
	delete self;
}

