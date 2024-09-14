#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QByteArray>
#include <QDataWidgetMapper>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qdatawidgetmapper.h"
#include "gen_qdatawidgetmapper.h"
#include "_cgo_export.h"

QDataWidgetMapper* QDataWidgetMapper_new() {
	return new QDataWidgetMapper();
}

QDataWidgetMapper* QDataWidgetMapper_new2(QObject* parent) {
	return new QDataWidgetMapper(parent);
}

QMetaObject* QDataWidgetMapper_MetaObject(const QDataWidgetMapper* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QDataWidgetMapper_Tr(const char* s) {
	QString _ret = QDataWidgetMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDataWidgetMapper_TrUtf8(const char* s) {
	QString _ret = QDataWidgetMapper::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QDataWidgetMapper_SetModel(QDataWidgetMapper* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QAbstractItemModel* QDataWidgetMapper_Model(const QDataWidgetMapper* self) {
	return self->model();
}

void QDataWidgetMapper_SetItemDelegate(QDataWidgetMapper* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QDataWidgetMapper_ItemDelegate(const QDataWidgetMapper* self) {
	return self->itemDelegate();
}

void QDataWidgetMapper_SetRootIndex(QDataWidgetMapper* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

QModelIndex* QDataWidgetMapper_RootIndex(const QDataWidgetMapper* self) {
	QModelIndex _ret = self->rootIndex();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(_ret));
}

void QDataWidgetMapper_SetOrientation(QDataWidgetMapper* self, uintptr_t aOrientation) {
	self->setOrientation(static_cast<Qt::Orientation>(aOrientation));
}

uintptr_t QDataWidgetMapper_Orientation(const QDataWidgetMapper* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<uintptr_t>(_ret);
}

void QDataWidgetMapper_SetSubmitPolicy(QDataWidgetMapper* self, uintptr_t policy) {
	self->setSubmitPolicy(static_cast<QDataWidgetMapper::SubmitPolicy>(policy));
}

uintptr_t QDataWidgetMapper_SubmitPolicy(const QDataWidgetMapper* self) {
	QDataWidgetMapper::SubmitPolicy _ret = self->submitPolicy();
	return static_cast<uintptr_t>(_ret);
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

int QDataWidgetMapper_MappedSection(const QDataWidgetMapper* self, QWidget* widget) {
	return self->mappedSection(widget);
}

QByteArray* QDataWidgetMapper_MappedPropertyName(const QDataWidgetMapper* self, QWidget* widget) {
	QByteArray _ret = self->mappedPropertyName(widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

QWidget* QDataWidgetMapper_MappedWidgetAt(const QDataWidgetMapper* self, int section) {
	return self->mappedWidgetAt(static_cast<int>(section));
}

void QDataWidgetMapper_ClearMapping(QDataWidgetMapper* self) {
	self->clearMapping();
}

int QDataWidgetMapper_CurrentIndex(const QDataWidgetMapper* self) {
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
		int sigval1 = index;
		miqt_exec_callback_QDataWidgetMapper_CurrentIndexChanged(slot, sigval1);
	});
}

struct miqt_string* QDataWidgetMapper_Tr2(const char* s, const char* c) {
	QString _ret = QDataWidgetMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDataWidgetMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDataWidgetMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDataWidgetMapper_TrUtf82(const char* s, const char* c) {
	QString _ret = QDataWidgetMapper::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QDataWidgetMapper_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDataWidgetMapper::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QDataWidgetMapper_Delete(QDataWidgetMapper* self) {
	delete self;
}

