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

void QItemEditorCreatorBase_Delete(QItemEditorCreatorBase* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QItemEditorCreatorBase*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQItemEditorFactory : public virtual QItemEditorFactory {
public:

	MiqtVirtualQItemEditorFactory(): QItemEditorFactory() {};
	MiqtVirtualQItemEditorFactory(const QItemEditorFactory& param1): QItemEditorFactory(param1) {};

	virtual ~MiqtVirtualQItemEditorFactory() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createEditor(int userType, QWidget* parent) const override {
		if (handle__CreateEditor == 0) {
			return QItemEditorFactory::createEditor(userType, parent);
		}
		
		int sigval1 = userType;
		QWidget* sigval2 = parent;

		QWidget* callback_return_value = miqt_exec_callback_QItemEditorFactory_CreateEditor(const_cast<MiqtVirtualQItemEditorFactory*>(this), handle__CreateEditor, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_CreateEditor(int userType, QWidget* parent) const {

		return QItemEditorFactory::createEditor(static_cast<int>(userType), parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ValuePropertyName = 0;

	// Subclass to allow providing a Go implementation
	virtual QByteArray valuePropertyName(int userType) const override {
		if (handle__ValuePropertyName == 0) {
			return QItemEditorFactory::valuePropertyName(userType);
		}
		
		int sigval1 = userType;

		struct miqt_string callback_return_value = miqt_exec_callback_QItemEditorFactory_ValuePropertyName(const_cast<MiqtVirtualQItemEditorFactory*>(this), handle__ValuePropertyName, sigval1);
		QByteArray callback_return_value_QByteArray(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QByteArray;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_ValuePropertyName(int userType) const {

		QByteArray _qb = QItemEditorFactory::valuePropertyName(static_cast<int>(userType));
		struct miqt_string _ms;
		_ms.len = _qb.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _qb.data(), _ms.len);
		return _ms;

	}

};

QItemEditorFactory* QItemEditorFactory_new() {
	return new MiqtVirtualQItemEditorFactory();
}

QItemEditorFactory* QItemEditorFactory_new2(QItemEditorFactory* param1) {
	return new MiqtVirtualQItemEditorFactory(*param1);
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

void QItemEditorFactory_override_virtual_CreateEditor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemEditorFactory*>( (QItemEditorFactory*)(self) )->handle__CreateEditor = slot;
}

QWidget* QItemEditorFactory_virtualbase_CreateEditor(const void* self, int userType, QWidget* parent) {
	return ( (const MiqtVirtualQItemEditorFactory*)(self) )->virtualbase_CreateEditor(userType, parent);
}

void QItemEditorFactory_override_virtual_ValuePropertyName(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemEditorFactory*>( (QItemEditorFactory*)(self) )->handle__ValuePropertyName = slot;
}

struct miqt_string QItemEditorFactory_virtualbase_ValuePropertyName(const void* self, int userType) {
	return ( (const MiqtVirtualQItemEditorFactory*)(self) )->virtualbase_ValuePropertyName(userType);
}

void QItemEditorFactory_Delete(QItemEditorFactory* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQItemEditorFactory*>( self );
	} else {
		delete self;
	}
}

