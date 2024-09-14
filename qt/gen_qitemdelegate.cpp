#include <QAbstractItemModel>
#include <QItemDelegate>
#include <QItemEditorFactory>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QWidget>
#include "qitemdelegate.h"
#include "gen_qitemdelegate.h"
#include "_cgo_export.h"

QItemDelegate* QItemDelegate_new() {
	return new QItemDelegate();
}

QItemDelegate* QItemDelegate_new2(QObject* parent) {
	return new QItemDelegate(parent);
}

QMetaObject* QItemDelegate_MetaObject(const QItemDelegate* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QItemDelegate_Tr(const char* s) {
	QString _ret = QItemDelegate::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QItemDelegate_TrUtf8(const char* s) {
	QString _ret = QItemDelegate::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QItemDelegate_HasClipping(const QItemDelegate* self) {
	return self->hasClipping();
}

void QItemDelegate_SetClipping(QItemDelegate* self, bool clip) {
	self->setClipping(clip);
}

void QItemDelegate_Paint(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	self->paint(painter, *option, *index);
}

QSize* QItemDelegate_SizeHint(const QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
	QSize _ret = self->sizeHint(*option, *index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

QWidget* QItemDelegate_CreateEditor(const QItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->createEditor(parent, *option, *index);
}

void QItemDelegate_SetEditorData(const QItemDelegate* self, QWidget* editor, QModelIndex* index) {
	self->setEditorData(editor, *index);
}

void QItemDelegate_SetModelData(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	self->setModelData(editor, model, *index);
}

void QItemDelegate_UpdateEditorGeometry(const QItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	self->updateEditorGeometry(editor, *option, *index);
}

QItemEditorFactory* QItemDelegate_ItemEditorFactory(const QItemDelegate* self) {
	return self->itemEditorFactory();
}

void QItemDelegate_SetItemEditorFactory(QItemDelegate* self, QItemEditorFactory* factory) {
	self->setItemEditorFactory(factory);
}

struct miqt_string* QItemDelegate_Tr2(const char* s, const char* c) {
	QString _ret = QItemDelegate::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QItemDelegate_Tr3(const char* s, const char* c, int n) {
	QString _ret = QItemDelegate::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QItemDelegate_TrUtf82(const char* s, const char* c) {
	QString _ret = QItemDelegate::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QItemDelegate_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QItemDelegate::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QItemDelegate_Delete(QItemDelegate* self) {
	delete self;
}

