#include <QScriptClass>
#include <QScriptClassPropertyIterator>
#include <QScriptEngine>
#include <QScriptString>
#include <QScriptValue>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qscriptclass.h>
#include "gen_qscriptclass.h"
#include "_cgo_export.h"

class MiqtVirtualQScriptClass : public virtual QScriptClass {
public:

	MiqtVirtualQScriptClass(QScriptEngine* engine): QScriptClass(engine) {};

	virtual ~MiqtVirtualQScriptClass() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__QueryProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual QScriptClass::QueryFlags queryProperty(const QScriptValue& object, const QScriptString& name, QScriptClass::QueryFlags flags, uint* id) override {
		if (handle__QueryProperty == 0) {
			return QScriptClass::queryProperty(object, name, flags, id);
		}
		
		const QScriptValue& object_ret = object;
		// Cast returned reference into pointer
		QScriptValue* sigval1 = const_cast<QScriptValue*>(&object_ret);
		const QScriptString& name_ret = name;
		// Cast returned reference into pointer
		QScriptString* sigval2 = const_cast<QScriptString*>(&name_ret);
		QScriptClass::QueryFlags flags_ret = flags;
		int sigval3 = static_cast<int>(flags_ret);
		uint* id_ret = id;
		unsigned int* sigval4 = static_cast<unsigned int*>(id_ret);

		int callback_return_value = miqt_exec_callback_QScriptClass_QueryProperty(this, handle__QueryProperty, sigval1, sigval2, sigval3, sigval4);

		return static_cast<QScriptClass::QueryFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_QueryProperty(QScriptValue* object, QScriptString* name, int flags, unsigned int* id) {

		QScriptClass::QueryFlags _ret = QScriptClass::queryProperty(*object, *name, static_cast<QScriptClass::QueryFlags>(flags), static_cast<uint*>(id));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Property = 0;

	// Subclass to allow providing a Go implementation
	virtual QScriptValue property(const QScriptValue& object, const QScriptString& name, uint id) override {
		if (handle__Property == 0) {
			return QScriptClass::property(object, name, id);
		}
		
		const QScriptValue& object_ret = object;
		// Cast returned reference into pointer
		QScriptValue* sigval1 = const_cast<QScriptValue*>(&object_ret);
		const QScriptString& name_ret = name;
		// Cast returned reference into pointer
		QScriptString* sigval2 = const_cast<QScriptString*>(&name_ret);
		uint id_ret = id;
		unsigned int sigval3 = static_cast<unsigned int>(id_ret);

		QScriptValue* callback_return_value = miqt_exec_callback_QScriptClass_Property(this, handle__Property, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QScriptValue* virtualbase_Property(QScriptValue* object, QScriptString* name, unsigned int id) {

		return new QScriptValue(QScriptClass::property(*object, *name, static_cast<uint>(id)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual void setProperty(QScriptValue& object, const QScriptString& name, uint id, const QScriptValue& value) override {
		if (handle__SetProperty == 0) {
			QScriptClass::setProperty(object, name, id, value);
			return;
		}
		
		QScriptValue& object_ret = object;
		// Cast returned reference into pointer
		QScriptValue* sigval1 = &object_ret;
		const QScriptString& name_ret = name;
		// Cast returned reference into pointer
		QScriptString* sigval2 = const_cast<QScriptString*>(&name_ret);
		uint id_ret = id;
		unsigned int sigval3 = static_cast<unsigned int>(id_ret);
		const QScriptValue& value_ret = value;
		// Cast returned reference into pointer
		QScriptValue* sigval4 = const_cast<QScriptValue*>(&value_ret);

		miqt_exec_callback_QScriptClass_SetProperty(this, handle__SetProperty, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetProperty(QScriptValue* object, QScriptString* name, unsigned int id, QScriptValue* value) {

		QScriptClass::setProperty(*object, *name, static_cast<uint>(id), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PropertyFlags = 0;

	// Subclass to allow providing a Go implementation
	virtual QScriptValue::PropertyFlags propertyFlags(const QScriptValue& object, const QScriptString& name, uint id) override {
		if (handle__PropertyFlags == 0) {
			return QScriptClass::propertyFlags(object, name, id);
		}
		
		const QScriptValue& object_ret = object;
		// Cast returned reference into pointer
		QScriptValue* sigval1 = const_cast<QScriptValue*>(&object_ret);
		const QScriptString& name_ret = name;
		// Cast returned reference into pointer
		QScriptString* sigval2 = const_cast<QScriptString*>(&name_ret);
		uint id_ret = id;
		unsigned int sigval3 = static_cast<unsigned int>(id_ret);

		int callback_return_value = miqt_exec_callback_QScriptClass_PropertyFlags(this, handle__PropertyFlags, sigval1, sigval2, sigval3);

		return static_cast<QScriptValue::PropertyFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_PropertyFlags(QScriptValue* object, QScriptString* name, unsigned int id) {

		QScriptValue::PropertyFlags _ret = QScriptClass::propertyFlags(*object, *name, static_cast<uint>(id));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NewIterator = 0;

	// Subclass to allow providing a Go implementation
	virtual QScriptClassPropertyIterator* newIterator(const QScriptValue& object) override {
		if (handle__NewIterator == 0) {
			return QScriptClass::newIterator(object);
		}
		
		const QScriptValue& object_ret = object;
		// Cast returned reference into pointer
		QScriptValue* sigval1 = const_cast<QScriptValue*>(&object_ret);

		QScriptClassPropertyIterator* callback_return_value = miqt_exec_callback_QScriptClass_NewIterator(this, handle__NewIterator, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QScriptClassPropertyIterator* virtualbase_NewIterator(QScriptValue* object) {

		return QScriptClass::newIterator(*object);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Prototype = 0;

	// Subclass to allow providing a Go implementation
	virtual QScriptValue prototype() const override {
		if (handle__Prototype == 0) {
			return QScriptClass::prototype();
		}
		

		QScriptValue* callback_return_value = miqt_exec_callback_QScriptClass_Prototype(const_cast<MiqtVirtualQScriptClass*>(this), handle__Prototype);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QScriptValue* virtualbase_Prototype() const {

		return new QScriptValue(QScriptClass::prototype());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Name = 0;

	// Subclass to allow providing a Go implementation
	virtual QString name() const override {
		if (handle__Name == 0) {
			return QScriptClass::name();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QScriptClass_Name(const_cast<MiqtVirtualQScriptClass*>(this), handle__Name);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_Name() const {

		QString _ret = QScriptClass::name();
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QScriptClass::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QScriptClass::supportsExtension(extension);
		}
		
		QScriptClass::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QScriptClass_SupportsExtension(const_cast<MiqtVirtualQScriptClass*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QScriptClass::supportsExtension(static_cast<QScriptClass::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(QScriptClass::Extension extension, const QVariant& argument) override {
		if (handle__Extension == 0) {
			return QScriptClass::extension(extension, argument);
		}
		
		QScriptClass::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& argument_ret = argument;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&argument_ret);

		QVariant* callback_return_value = miqt_exec_callback_QScriptClass_Extension(this, handle__Extension, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(int extension, QVariant* argument) {

		return new QVariant(QScriptClass::extension(static_cast<QScriptClass::Extension>(extension), *argument));

	}

};

QScriptClass* QScriptClass_new(QScriptEngine* engine) {
	return new MiqtVirtualQScriptClass(engine);
}

QScriptEngine* QScriptClass_Engine(const QScriptClass* self) {
	return self->engine();
}

int QScriptClass_QueryProperty(QScriptClass* self, QScriptValue* object, QScriptString* name, int flags, unsigned int* id) {
	QScriptClass::QueryFlags _ret = self->queryProperty(*object, *name, static_cast<QScriptClass::QueryFlags>(flags), static_cast<uint*>(id));
	return static_cast<int>(_ret);
}

QScriptValue* QScriptClass_Property(QScriptClass* self, QScriptValue* object, QScriptString* name, unsigned int id) {
	return new QScriptValue(self->property(*object, *name, static_cast<uint>(id)));
}

void QScriptClass_SetProperty(QScriptClass* self, QScriptValue* object, QScriptString* name, unsigned int id, QScriptValue* value) {
	self->setProperty(*object, *name, static_cast<uint>(id), *value);
}

int QScriptClass_PropertyFlags(QScriptClass* self, QScriptValue* object, QScriptString* name, unsigned int id) {
	QScriptValue::PropertyFlags _ret = self->propertyFlags(*object, *name, static_cast<uint>(id));
	return static_cast<int>(_ret);
}

QScriptClassPropertyIterator* QScriptClass_NewIterator(QScriptClass* self, QScriptValue* object) {
	return self->newIterator(*object);
}

QScriptValue* QScriptClass_Prototype(const QScriptClass* self) {
	return new QScriptValue(self->prototype());
}

struct miqt_string QScriptClass_Name(const QScriptClass* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScriptClass_SupportsExtension(const QScriptClass* self, int extension) {
	return self->supportsExtension(static_cast<QScriptClass::Extension>(extension));
}

QVariant* QScriptClass_Extension(QScriptClass* self, int extension, QVariant* argument) {
	return new QVariant(self->extension(static_cast<QScriptClass::Extension>(extension), *argument));
}

void QScriptClass_override_virtual_QueryProperty(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) )->handle__QueryProperty = slot;
}

int QScriptClass_virtualbase_QueryProperty(void* self, QScriptValue* object, QScriptString* name, int flags, unsigned int* id) {
	return ( (MiqtVirtualQScriptClass*)(self) )->virtualbase_QueryProperty(object, name, flags, id);
}

void QScriptClass_override_virtual_Property(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) )->handle__Property = slot;
}

QScriptValue* QScriptClass_virtualbase_Property(void* self, QScriptValue* object, QScriptString* name, unsigned int id) {
	return ( (MiqtVirtualQScriptClass*)(self) )->virtualbase_Property(object, name, id);
}

void QScriptClass_override_virtual_SetProperty(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) )->handle__SetProperty = slot;
}

void QScriptClass_virtualbase_SetProperty(void* self, QScriptValue* object, QScriptString* name, unsigned int id, QScriptValue* value) {
	( (MiqtVirtualQScriptClass*)(self) )->virtualbase_SetProperty(object, name, id, value);
}

void QScriptClass_override_virtual_PropertyFlags(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) )->handle__PropertyFlags = slot;
}

int QScriptClass_virtualbase_PropertyFlags(void* self, QScriptValue* object, QScriptString* name, unsigned int id) {
	return ( (MiqtVirtualQScriptClass*)(self) )->virtualbase_PropertyFlags(object, name, id);
}

void QScriptClass_override_virtual_NewIterator(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) )->handle__NewIterator = slot;
}

QScriptClassPropertyIterator* QScriptClass_virtualbase_NewIterator(void* self, QScriptValue* object) {
	return ( (MiqtVirtualQScriptClass*)(self) )->virtualbase_NewIterator(object);
}

void QScriptClass_override_virtual_Prototype(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) )->handle__Prototype = slot;
}

QScriptValue* QScriptClass_virtualbase_Prototype(const void* self) {
	return ( (const MiqtVirtualQScriptClass*)(self) )->virtualbase_Prototype();
}

void QScriptClass_override_virtual_Name(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) )->handle__Name = slot;
}

struct miqt_string QScriptClass_virtualbase_Name(const void* self) {
	return ( (const MiqtVirtualQScriptClass*)(self) )->virtualbase_Name();
}

void QScriptClass_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) )->handle__SupportsExtension = slot;
}

bool QScriptClass_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQScriptClass*)(self) )->virtualbase_SupportsExtension(extension);
}

void QScriptClass_override_virtual_Extension(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) )->handle__Extension = slot;
}

QVariant* QScriptClass_virtualbase_Extension(void* self, int extension, QVariant* argument) {
	return ( (MiqtVirtualQScriptClass*)(self) )->virtualbase_Extension(extension, argument);
}

void QScriptClass_Delete(QScriptClass* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQScriptClass*>( self );
	} else {
		delete self;
	}
}

