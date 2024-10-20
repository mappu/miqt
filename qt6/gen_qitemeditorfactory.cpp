#include <QByteArray>
#include <QItemEditorCreatorBase>
#include <QItemEditorFactory>
#include <QWidget>
#include <qitemeditorfactory.h>
#include "gen_qitemeditorfactory.h"
#include "_cgo_export.h"

QWidget* QItemEditorCreatorBase_CreateWidget(const QItemEditorCreatorBase* self, QWidget* parent) {
	return self->createWidget(parent);
}

struct miqt_string QItemEditorCreatorBase_ValuePropertyName(const QItemEditorCreatorBase* self) {
	QByteArray _qb = self->valuePropertyName();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QItemEditorCreatorBase_OperatorAssign(QItemEditorCreatorBase* self, QItemEditorCreatorBase* param1) {
	self->operator=(*param1);
}

void QItemEditorCreatorBase_Delete(QItemEditorCreatorBase* self) {
	delete self;
}

QItemEditorFactory* QItemEditorFactory_new() {
	return new QItemEditorFactory();
}

QItemEditorFactory* QItemEditorFactory_new2(QItemEditorFactory* param1) {
	return new QItemEditorFactory(*param1);
}

QWidget* QItemEditorFactory_CreateEditor(const QItemEditorFactory* self, int userType, QWidget* parent) {
	return self->createEditor(static_cast<int>(userType), parent);
}

struct miqt_string QItemEditorFactory_ValuePropertyName(const QItemEditorFactory* self, int userType) {
	QByteArray _qb = self->valuePropertyName(static_cast<int>(userType));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QItemEditorFactory_RegisterEditor(QItemEditorFactory* self, int userType, QItemEditorCreatorBase* creator) {
	self->registerEditor(static_cast<int>(userType), creator);
}

QItemEditorFactory* QItemEditorFactory_DefaultFactory() {
	return (QItemEditorFactory*) QItemEditorFactory::defaultFactory();
}

void QItemEditorFactory_SetDefaultFactory(QItemEditorFactory* factory) {
	QItemEditorFactory::setDefaultFactory(factory);
}

void QItemEditorFactory_Delete(QItemEditorFactory* self) {
	delete self;
}

