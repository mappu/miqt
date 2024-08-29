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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QStyledItemDelegate* QStyledItemDelegate_new() {
	return new QStyledItemDelegate();
}

QStyledItemDelegate* QStyledItemDelegate_new2(QObject* parent) {
	return new QStyledItemDelegate(parent);
}

QMetaObject* QStyledItemDelegate_MetaObject(QStyledItemDelegate* self) {
	return (QMetaObject*) const_cast<const QStyledItemDelegate*>(self)->metaObject();
}

void QStyledItemDelegate_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QStyledItemDelegate::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyledItemDelegate_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QStyledItemDelegate::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyledItemDelegate_Paint(QStyledItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	const_cast<const QStyledItemDelegate*>(self)->paint(painter, *option, *index);
}

QSize* QStyledItemDelegate_SizeHint(QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
	QSize ret = const_cast<const QStyledItemDelegate*>(self)->sizeHint(*option, *index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QWidget* QStyledItemDelegate_CreateEditor(QStyledItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return const_cast<const QStyledItemDelegate*>(self)->createEditor(parent, *option, *index);
}

void QStyledItemDelegate_SetEditorData(QStyledItemDelegate* self, QWidget* editor, QModelIndex* index) {
	const_cast<const QStyledItemDelegate*>(self)->setEditorData(editor, *index);
}

void QStyledItemDelegate_SetModelData(QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	const_cast<const QStyledItemDelegate*>(self)->setModelData(editor, model, *index);
}

void QStyledItemDelegate_UpdateEditorGeometry(QStyledItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	const_cast<const QStyledItemDelegate*>(self)->updateEditorGeometry(editor, *option, *index);
}

QItemEditorFactory* QStyledItemDelegate_ItemEditorFactory(QStyledItemDelegate* self) {
	return const_cast<const QStyledItemDelegate*>(self)->itemEditorFactory();
}

void QStyledItemDelegate_SetItemEditorFactory(QStyledItemDelegate* self, QItemEditorFactory* factory) {
	self->setItemEditorFactory(factory);
}

void QStyledItemDelegate_DisplayText(QStyledItemDelegate* self, QVariant* value, QLocale* locale, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QStyledItemDelegate*>(self)->displayText(*value, *locale);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyledItemDelegate_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStyledItemDelegate::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyledItemDelegate_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStyledItemDelegate::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyledItemDelegate_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStyledItemDelegate::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyledItemDelegate_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStyledItemDelegate::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyledItemDelegate_Delete(QStyledItemDelegate* self) {
	delete self;
}

