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

QByteArray* QItemEditorCreatorBase_ValuePropertyName(const QItemEditorCreatorBase* self) {
	return new QByteArray(self->valuePropertyName());
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

QByteArray* QItemEditorFactory_ValuePropertyName(const QItemEditorFactory* self, int userType) {
	return new QByteArray(self->valuePropertyName(static_cast<int>(userType)));
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

