#include "gen_qdatawidgetmapper.h"
#include "qdatawidgetmapper.h"

#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QByteArray>
#include <QDataWidgetMapper>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QDataWidgetMapper* QDataWidgetMapper_new() {
	return new QDataWidgetMapper();
}

QDataWidgetMapper* QDataWidgetMapper_new2(QObject* parent) {
	return new QDataWidgetMapper(parent);
}

QMetaObject* QDataWidgetMapper_MetaObject(QDataWidgetMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void QDataWidgetMapper_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDataWidgetMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDataWidgetMapper_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDataWidgetMapper::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDataWidgetMapper_SetModel(QDataWidgetMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QAbstractItemModel* QDataWidgetMapper_Model(QDataWidgetMapper* self) {
	return self->model();
}

void QDataWidgetMapper_SetItemDelegate(QDataWidgetMapper* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QDataWidgetMapper_ItemDelegate(QDataWidgetMapper* self) {
	return self->itemDelegate();
}

void QDataWidgetMapper_SetRootIndex(QDataWidgetMapper* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

QModelIndex* QDataWidgetMapper_RootIndex(QDataWidgetMapper* self) {
	QModelIndex ret = self->rootIndex();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

void QDataWidgetMapper_AddMapping(QDataWidgetMapper* self, QWidget* widget, int section) {
	self->addMapping(widget, static_cast<int>(section));
}

void QDataWidgetMapper_AddMapping2(QDataWidgetMapper* self, QWidget* widget, int section, QByteArray* propertyName) {
	self->addMapping(widget, static_cast<int>(section), *propertyName);
}

void QDataWidgetMapper_RemoveMapping(QDataWidgetMapper* self, QWidget* widget) {
	self->removeMapping(widget);
}

int QDataWidgetMapper_MappedSection(QDataWidgetMapper* self, QWidget* widget) {
	return self->mappedSection(widget);
}

QByteArray* QDataWidgetMapper_MappedPropertyName(QDataWidgetMapper* self, QWidget* widget) {
	QByteArray ret = self->mappedPropertyName(widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QWidget* QDataWidgetMapper_MappedWidgetAt(QDataWidgetMapper* self, int section) {
	return self->mappedWidgetAt(static_cast<int>(section));
}

void QDataWidgetMapper_ClearMapping(QDataWidgetMapper* self) {
	self->clearMapping();
}

int QDataWidgetMapper_CurrentIndex(QDataWidgetMapper* self) {
	return self->currentIndex();
}

void QDataWidgetMapper_Revert(QDataWidgetMapper* self) {
	self->revert();
}

bool QDataWidgetMapper_Submit(QDataWidgetMapper* self) {
	return self->submit();
}

void QDataWidgetMapper_ToFirst(QDataWidgetMapper* self) {
	self->toFirst();
}

void QDataWidgetMapper_ToLast(QDataWidgetMapper* self) {
	self->toLast();
}

void QDataWidgetMapper_ToNext(QDataWidgetMapper* self) {
	self->toNext();
}

void QDataWidgetMapper_ToPrevious(QDataWidgetMapper* self) {
	self->toPrevious();
}

void QDataWidgetMapper_SetCurrentIndex(QDataWidgetMapper* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QDataWidgetMapper_SetCurrentModelIndex(QDataWidgetMapper* self, QModelIndex* index) {
	self->setCurrentModelIndex(*index);
}

void QDataWidgetMapper_CurrentIndexChanged(QDataWidgetMapper* self, int index) {
	self->currentIndexChanged(static_cast<int>(index));
}

void QDataWidgetMapper_connect_CurrentIndexChanged(QDataWidgetMapper* self, void* slot) {
	QDataWidgetMapper::connect(self, static_cast<void (QDataWidgetMapper::*)(int)>(&QDataWidgetMapper::currentIndexChanged), self, [=](int index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDataWidgetMapper_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDataWidgetMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDataWidgetMapper_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDataWidgetMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDataWidgetMapper_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDataWidgetMapper::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDataWidgetMapper_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDataWidgetMapper::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDataWidgetMapper_Delete(QDataWidgetMapper* self) {
	delete self;
}

