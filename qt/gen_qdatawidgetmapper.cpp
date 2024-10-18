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
#include <qdatawidgetmapper.h>
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

void* QDataWidgetMapper_Metacast(QDataWidgetMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDataWidgetMapper_Tr(const char* s) {
	QString _ret = QDataWidgetMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDataWidgetMapper_TrUtf8(const char* s) {
	QString _ret = QDataWidgetMapper::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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
	return new QModelIndex(self->rootIndex());
}

void QDataWidgetMapper_SetOrientation(QDataWidgetMapper* self, int aOrientation) {
	self->setOrientation(static_cast<Qt::Orientation>(aOrientation));
}

int QDataWidgetMapper_Orientation(const QDataWidgetMapper* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QDataWidgetMapper_SetSubmitPolicy(QDataWidgetMapper* self, int policy) {
	self->setSubmitPolicy(static_cast<QDataWidgetMapper::SubmitPolicy>(policy));
}

int QDataWidgetMapper_SubmitPolicy(const QDataWidgetMapper* self) {
	QDataWidgetMapper::SubmitPolicy _ret = self->submitPolicy();
	return static_cast<int>(_ret);
}

void QDataWidgetMapper_AddMapping(QDataWidgetMapper* self, QWidget* widget, int section) {
	self->addMapping(widget, static_cast<int>(section));
}

void QDataWidgetMapper_AddMapping2(QDataWidgetMapper* self, QWidget* widget, int section, struct miqt_string propertyName) {
	QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
	self->addMapping(widget, static_cast<int>(section), propertyName_QByteArray);
}

void QDataWidgetMapper_RemoveMapping(QDataWidgetMapper* self, QWidget* widget) {
	self->removeMapping(widget);
}

int QDataWidgetMapper_MappedSection(const QDataWidgetMapper* self, QWidget* widget) {
	return self->mappedSection(widget);
}

struct miqt_string QDataWidgetMapper_MappedPropertyName(const QDataWidgetMapper* self, QWidget* widget) {
	QByteArray _qb = self->mappedPropertyName(widget);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
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

void QDataWidgetMapper_connect_CurrentIndexChanged(QDataWidgetMapper* self, intptr_t slot) {
	QDataWidgetMapper::connect(self, static_cast<void (QDataWidgetMapper::*)(int)>(&QDataWidgetMapper::currentIndexChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QDataWidgetMapper_CurrentIndexChanged(slot, sigval1);
	});
}

struct miqt_string QDataWidgetMapper_Tr2(const char* s, const char* c) {
	QString _ret = QDataWidgetMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDataWidgetMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDataWidgetMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDataWidgetMapper_TrUtf82(const char* s, const char* c) {
	QString _ret = QDataWidgetMapper::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDataWidgetMapper_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDataWidgetMapper::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDataWidgetMapper_Delete(QDataWidgetMapper* self) {
	delete self;
}

