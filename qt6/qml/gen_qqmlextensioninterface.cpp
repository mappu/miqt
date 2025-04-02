#include <QQmlEngine>
#include <QQmlEngineExtensionInterface>
#include <QQmlExtensionInterface>
#include <QQmlTypesExtensionInterface>
#include <qqmlextensioninterface.h>
#include "gen_qqmlextensioninterface.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QQmlTypesExtensionInterface_registerTypes(QQmlTypesExtensionInterface*, intptr_t, const char*);
void miqt_exec_callback_QQmlExtensionInterface_initializeEngine(QQmlExtensionInterface*, intptr_t, QQmlEngine*, const char*);
void miqt_exec_callback_QQmlExtensionInterface_registerTypes(QQmlExtensionInterface*, intptr_t, const char*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQQmlTypesExtensionInterface final : public QQmlTypesExtensionInterface {
public:

	MiqtVirtualQQmlTypesExtensionInterface(const QQmlTypesExtensionInterface& param1): QQmlTypesExtensionInterface(param1) {};

	virtual ~MiqtVirtualQQmlTypesExtensionInterface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__registerTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual void registerTypes(const char* uri) override {
		if (handle__registerTypes == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const char* sigval1 = (const char*) uri;

		miqt_exec_callback_QQmlTypesExtensionInterface_registerTypes(this, handle__registerTypes, sigval1);

		
	}

};

QQmlTypesExtensionInterface* QQmlTypesExtensionInterface_new(QQmlTypesExtensionInterface* param1) {
	return new MiqtVirtualQQmlTypesExtensionInterface(*param1);
}

void QQmlTypesExtensionInterface_registerTypes(QQmlTypesExtensionInterface* self, const char* uri) {
	self->registerTypes(uri);
}

void QQmlTypesExtensionInterface_operatorAssign(QQmlTypesExtensionInterface* self, QQmlTypesExtensionInterface* param1) {
	self->operator=(*param1);
}

bool QQmlTypesExtensionInterface_override_virtual_registerTypes(void* self, intptr_t slot) {
	MiqtVirtualQQmlTypesExtensionInterface* self_cast = dynamic_cast<MiqtVirtualQQmlTypesExtensionInterface*>( (QQmlTypesExtensionInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__registerTypes = slot;
	return true;
}

void QQmlTypesExtensionInterface_delete(QQmlTypesExtensionInterface* self) {
	delete self;
}

class MiqtVirtualQQmlExtensionInterface final : public QQmlExtensionInterface {
public:

	MiqtVirtualQQmlExtensionInterface(const QQmlExtensionInterface& param1): QQmlExtensionInterface(param1) {};

	virtual ~MiqtVirtualQQmlExtensionInterface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initializeEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual void initializeEngine(QQmlEngine* engine, const char* uri) override {
		if (handle__initializeEngine == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QQmlEngine* sigval1 = engine;
		const char* sigval2 = (const char*) uri;

		miqt_exec_callback_QQmlExtensionInterface_initializeEngine(this, handle__initializeEngine, sigval1, sigval2);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__registerTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual void registerTypes(const char* uri) override {
		if (handle__registerTypes == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const char* sigval1 = (const char*) uri;

		miqt_exec_callback_QQmlExtensionInterface_registerTypes(this, handle__registerTypes, sigval1);

		
	}

};

QQmlExtensionInterface* QQmlExtensionInterface_new(QQmlExtensionInterface* param1) {
	return new MiqtVirtualQQmlExtensionInterface(*param1);
}

void QQmlExtensionInterface_virtbase(QQmlExtensionInterface* src, QQmlTypesExtensionInterface** outptr_QQmlTypesExtensionInterface) {
	*outptr_QQmlTypesExtensionInterface = static_cast<QQmlTypesExtensionInterface*>(src);
}

void QQmlExtensionInterface_initializeEngine(QQmlExtensionInterface* self, QQmlEngine* engine, const char* uri) {
	self->initializeEngine(engine, uri);
}

void QQmlExtensionInterface_operatorAssign(QQmlExtensionInterface* self, QQmlExtensionInterface* param1) {
	self->operator=(*param1);
}

bool QQmlExtensionInterface_override_virtual_initializeEngine(void* self, intptr_t slot) {
	MiqtVirtualQQmlExtensionInterface* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionInterface*>( (QQmlExtensionInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initializeEngine = slot;
	return true;
}

bool QQmlExtensionInterface_override_virtual_registerTypes(void* self, intptr_t slot) {
	MiqtVirtualQQmlExtensionInterface* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionInterface*>( (QQmlExtensionInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__registerTypes = slot;
	return true;
}

void QQmlExtensionInterface_delete(QQmlExtensionInterface* self) {
	delete self;
}

void QQmlEngineExtensionInterface_initializeEngine(QQmlEngineExtensionInterface* self, QQmlEngine* engine, const char* uri) {
	self->initializeEngine(engine, uri);
}

void QQmlEngineExtensionInterface_operatorAssign(QQmlEngineExtensionInterface* self, QQmlEngineExtensionInterface* param1) {
	self->operator=(*param1);
}

void QQmlEngineExtensionInterface_delete(QQmlEngineExtensionInterface* self) {
	delete self;
}

