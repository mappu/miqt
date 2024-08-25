#include "gen_qstyleditemdelegate.h"
#include "qstyleditemdelegate.h"

#include <QAbstractItemModel>
#include <QItemEditorFactory>
#include <QLocale>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QSize>
#include <QString>
#include <QStyleOptionViewItem>
#include <QStyledItemDelegate>
#include <QVariant>
#include <QWidget>


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
	return (QMetaObject*) self->metaObject();
}

void QStyledItemDelegate_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QStyledItemDelegate::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyledItemDelegate_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QStyledItemDelegate::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyledItemDelegate_Paint(QStyledItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	self->paint(painter, *option, *index);
}

QSize* QStyledItemDelegate_SizeHint(QStyledItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
	QSize ret = self->sizeHint(*option, *index);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QWidget* QStyledItemDelegate_CreateEditor(QStyledItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->createEditor(parent, *option, *index);
}

void QStyledItemDelegate_SetEditorData(QStyledItemDelegate* self, QWidget* editor, QModelIndex* index) {
	self->setEditorData(editor, *index);
}

void QStyledItemDelegate_SetModelData(QStyledItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	self->setModelData(editor, model, *index);
}

void QStyledItemDelegate_UpdateEditorGeometry(QStyledItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	self->updateEditorGeometry(editor, *option, *index);
}

QItemEditorFactory* QStyledItemDelegate_ItemEditorFactory(QStyledItemDelegate* self) {
	return self->itemEditorFactory();
}

void QStyledItemDelegate_SetItemEditorFactory(QStyledItemDelegate* self, QItemEditorFactory* factory) {
	self->setItemEditorFactory(factory);
}

void QStyledItemDelegate_DisplayText(QStyledItemDelegate* self, QVariant* value, QLocale* locale, char** _out, int* _out_Strlen) {
	QString ret = self->displayText(*value, *locale);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyledItemDelegate_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QStyledItemDelegate::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyledItemDelegate_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStyledItemDelegate::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyledItemDelegate_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QStyledItemDelegate::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyledItemDelegate_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
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

