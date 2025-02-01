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

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QScriptClass_queryProperty(QScriptClass*, intptr_t, QScriptValue*, QScriptString*, int, unsigned int*);
QScriptValue* miqt_exec_callback_QScriptClass_property(QScriptClass*, intptr_t, QScriptValue*, QScriptString*, unsigned int);
void miqt_exec_callback_QScriptClass_setProperty(QScriptClass*, intptr_t, QScriptValue*, QScriptString*, unsigned int, QScriptValue*);
int miqt_exec_callback_QScriptClass_propertyFlags(QScriptClass*, intptr_t, QScriptValue*, QScriptString*, unsigned int);
QScriptClassPropertyIterator* miqt_exec_callback_QScriptClass_newIterator(QScriptClass*, intptr_t, QScriptValue*);
QScriptValue* miqt_exec_callback_QScriptClass_prototype(const QScriptClass*, intptr_t);
struct miqt_string miqt_exec_callback_QScriptClass_name(const QScriptClass*, intptr_t);
bool miqt_exec_callback_QScriptClass_supportsExtension(const QScriptClass*, intptr_t, int);
QVariant* miqt_exec_callback_QScriptClass_extension(QScriptClass*, intptr_t, int, QVariant*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScriptClass final : public QScriptClass {
public:

	MiqtVirtualQScriptClass(QScriptEngine* engine): QScriptClass(engine) {};

	virtual ~MiqtVirtualQScriptClass() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__queryProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual QScriptClass::QueryFlags queryProperty(const QScriptValue& object, const QScriptString& name, QScriptClass::QueryFlags flags, uint* id) override {
		if (handle__queryProperty == 0) {
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

		int callback_return_value = miqt_exec_callback_QScriptClass_queryProperty(this, handle__queryProperty, sigval1, sigval2, sigval3, sigval4);

		return static_cast<QScriptClass::QueryFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_queryProperty(QScriptValue* object, QScriptString* name, int flags, unsigned int* id) {

		QScriptClass::QueryFlags _ret = QScriptClass::queryProperty(*object, *name, static_cast<QScriptClass::QueryFlags>(flags), static_cast<uint*>(id));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__property = 0;

	// Subclass to allow providing a Go implementation
	virtual QScriptValue property(const QScriptValue& object, const QScriptString& name, uint id) override {
		if (handle__property == 0) {
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

		QScriptValue* callback_return_value = miqt_exec_callback_QScriptClass_property(this, handle__property, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QScriptValue* virtualbase_property(QScriptValue* object, QScriptString* name, unsigned int id) {

		return new QScriptValue(QScriptClass::property(*object, *name, static_cast<uint>(id)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual void setProperty(QScriptValue& object, const QScriptString& name, uint id, const QScriptValue& value) override {
		if (handle__setProperty == 0) {
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

		miqt_exec_callback_QScriptClass_setProperty(this, handle__setProperty, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setProperty(QScriptValue* object, QScriptString* name, unsigned int id, QScriptValue* value) {

		QScriptClass::setProperty(*object, *name, static_cast<uint>(id), *value);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__propertyFlags = 0;

	// Subclass to allow providing a Go implementation
	virtual QScriptValue::PropertyFlags propertyFlags(const QScriptValue& object, const QScriptString& name, uint id) override {
		if (handle__propertyFlags == 0) {
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

		int callback_return_value = miqt_exec_callback_QScriptClass_propertyFlags(this, handle__propertyFlags, sigval1, sigval2, sigval3);

		return static_cast<QScriptValue::PropertyFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_propertyFlags(QScriptValue* object, QScriptString* name, unsigned int id) {

		QScriptValue::PropertyFlags _ret = QScriptClass::propertyFlags(*object, *name, static_cast<uint>(id));
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__newIterator = 0;

	// Subclass to allow providing a Go implementation
	virtual QScriptClassPropertyIterator* newIterator(const QScriptValue& object) override {
		if (handle__newIterator == 0) {
			return QScriptClass::newIterator(object);
		}
		
		const QScriptValue& object_ret = object;
		// Cast returned reference into pointer
		QScriptValue* sigval1 = const_cast<QScriptValue*>(&object_ret);

		QScriptClassPropertyIterator* callback_return_value = miqt_exec_callback_QScriptClass_newIterator(this, handle__newIterator, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QScriptClassPropertyIterator* virtualbase_newIterator(QScriptValue* object) {

		return QScriptClass::newIterator(*object);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__prototype = 0;

	// Subclass to allow providing a Go implementation
	virtual QScriptValue prototype() const override {
		if (handle__prototype == 0) {
			return QScriptClass::prototype();
		}
		

		QScriptValue* callback_return_value = miqt_exec_callback_QScriptClass_prototype(this, handle__prototype);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QScriptValue* virtualbase_prototype() const {

		return new QScriptValue(QScriptClass::prototype());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__name = 0;

	// Subclass to allow providing a Go implementation
	virtual QString name() const override {
		if (handle__name == 0) {
			return QScriptClass::name();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QScriptClass_name(this, handle__name);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_name() const {

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
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QScriptClass::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QScriptClass::supportsExtension(extension);
		}
		
		QScriptClass::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QScriptClass_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QScriptClass::supportsExtension(static_cast<QScriptClass::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(QScriptClass::Extension extension, const QVariant& argument) override {
		if (handle__extension == 0) {
			return QScriptClass::extension(extension, argument);
		}
		
		QScriptClass::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& argument_ret = argument;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&argument_ret);

		QVariant* callback_return_value = miqt_exec_callback_QScriptClass_extension(this, handle__extension, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(int extension, QVariant* argument) {

		return new QVariant(QScriptClass::extension(static_cast<QScriptClass::Extension>(extension), *argument));

	}

};

QScriptClass* QScriptClass_new(QScriptEngine* engine) {
	return new MiqtVirtualQScriptClass(engine);
}

QScriptEngine* QScriptClass_engine(const QScriptClass* self) {
	return self->engine();
}

int QScriptClass_queryProperty(QScriptClass* self, QScriptValue* object, QScriptString* name, int flags, unsigned int* id) {
	QScriptClass::QueryFlags _ret = self->queryProperty(*object, *name, static_cast<QScriptClass::QueryFlags>(flags), static_cast<uint*>(id));
	return static_cast<int>(_ret);
}

QScriptValue* QScriptClass_property(QScriptClass* self, QScriptValue* object, QScriptString* name, unsigned int id) {
	return new QScriptValue(self->property(*object, *name, static_cast<uint>(id)));
}

void QScriptClass_setProperty(QScriptClass* self, QScriptValue* object, QScriptString* name, unsigned int id, QScriptValue* value) {
	self->setProperty(*object, *name, static_cast<uint>(id), *value);
}

int QScriptClass_propertyFlags(QScriptClass* self, QScriptValue* object, QScriptString* name, unsigned int id) {
	QScriptValue::PropertyFlags _ret = self->propertyFlags(*object, *name, static_cast<uint>(id));
	return static_cast<int>(_ret);
}

QScriptClassPropertyIterator* QScriptClass_newIterator(QScriptClass* self, QScriptValue* object) {
	return self->newIterator(*object);
}

QScriptValue* QScriptClass_prototype(const QScriptClass* self) {
	return new QScriptValue(self->prototype());
}

struct miqt_string QScriptClass_name(const QScriptClass* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScriptClass_supportsExtension(const QScriptClass* self, int extension) {
	return self->supportsExtension(static_cast<QScriptClass::Extension>(extension));
}

QVariant* QScriptClass_extension(QScriptClass* self, int extension, QVariant* argument) {
	return new QVariant(self->extension(static_cast<QScriptClass::Extension>(extension), *argument));
}

bool QScriptClass_override_virtual_queryProperty(void* self, intptr_t slot) {
	MiqtVirtualQScriptClass* self_cast = dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__queryProperty = slot;
	return true;
}

int QScriptClass_virtualbase_queryProperty(void* self, QScriptValue* object, QScriptString* name, int flags, unsigned int* id) {
	return ( (MiqtVirtualQScriptClass*)(self) )->virtualbase_queryProperty(object, name, flags, id);
}

bool QScriptClass_override_virtual_property(void* self, intptr_t slot) {
	MiqtVirtualQScriptClass* self_cast = dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__property = slot;
	return true;
}

QScriptValue* QScriptClass_virtualbase_property(void* self, QScriptValue* object, QScriptString* name, unsigned int id) {
	return ( (MiqtVirtualQScriptClass*)(self) )->virtualbase_property(object, name, id);
}

bool QScriptClass_override_virtual_setProperty(void* self, intptr_t slot) {
	MiqtVirtualQScriptClass* self_cast = dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setProperty = slot;
	return true;
}

void QScriptClass_virtualbase_setProperty(void* self, QScriptValue* object, QScriptString* name, unsigned int id, QScriptValue* value) {
	( (MiqtVirtualQScriptClass*)(self) )->virtualbase_setProperty(object, name, id, value);
}

bool QScriptClass_override_virtual_propertyFlags(void* self, intptr_t slot) {
	MiqtVirtualQScriptClass* self_cast = dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__propertyFlags = slot;
	return true;
}

int QScriptClass_virtualbase_propertyFlags(void* self, QScriptValue* object, QScriptString* name, unsigned int id) {
	return ( (MiqtVirtualQScriptClass*)(self) )->virtualbase_propertyFlags(object, name, id);
}

bool QScriptClass_override_virtual_newIterator(void* self, intptr_t slot) {
	MiqtVirtualQScriptClass* self_cast = dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__newIterator = slot;
	return true;
}

QScriptClassPropertyIterator* QScriptClass_virtualbase_newIterator(void* self, QScriptValue* object) {
	return ( (MiqtVirtualQScriptClass*)(self) )->virtualbase_newIterator(object);
}

bool QScriptClass_override_virtual_prototype(void* self, intptr_t slot) {
	MiqtVirtualQScriptClass* self_cast = dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__prototype = slot;
	return true;
}

QScriptValue* QScriptClass_virtualbase_prototype(const void* self) {
	return ( (const MiqtVirtualQScriptClass*)(self) )->virtualbase_prototype();
}

bool QScriptClass_override_virtual_name(void* self, intptr_t slot) {
	MiqtVirtualQScriptClass* self_cast = dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__name = slot;
	return true;
}

struct miqt_string QScriptClass_virtualbase_name(const void* self) {
	return ( (const MiqtVirtualQScriptClass*)(self) )->virtualbase_name();
}

bool QScriptClass_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQScriptClass* self_cast = dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QScriptClass_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQScriptClass*)(self) )->virtualbase_supportsExtension(extension);
}

bool QScriptClass_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQScriptClass* self_cast = dynamic_cast<MiqtVirtualQScriptClass*>( (QScriptClass*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QScriptClass_virtualbase_extension(void* self, int extension, QVariant* argument) {
	return ( (MiqtVirtualQScriptClass*)(self) )->virtualbase_extension(extension, argument);
}

void QScriptClass_delete(QScriptClass* self) {
	delete self;
}

