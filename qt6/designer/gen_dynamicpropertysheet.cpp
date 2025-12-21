#include <QDesignerDynamicPropertySheetExtension>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <dynamicpropertysheet.h>
#include "gen_dynamicpropertysheet.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QDesignerDynamicPropertySheetExtension_dynamicPropertiesAllowed(const QDesignerDynamicPropertySheetExtension*, intptr_t);
int miqt_exec_callback_QDesignerDynamicPropertySheetExtension_addDynamicProperty(QDesignerDynamicPropertySheetExtension*, intptr_t, struct miqt_string, QVariant*);
bool miqt_exec_callback_QDesignerDynamicPropertySheetExtension_removeDynamicProperty(QDesignerDynamicPropertySheetExtension*, intptr_t, int);
bool miqt_exec_callback_QDesignerDynamicPropertySheetExtension_isDynamicProperty(const QDesignerDynamicPropertySheetExtension*, intptr_t, int);
bool miqt_exec_callback_QDesignerDynamicPropertySheetExtension_canAddDynamicProperty(const QDesignerDynamicPropertySheetExtension*, intptr_t, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerDynamicPropertySheetExtension final : public QDesignerDynamicPropertySheetExtension {
public:

	MiqtVirtualQDesignerDynamicPropertySheetExtension(): QDesignerDynamicPropertySheetExtension() {}

	virtual ~MiqtVirtualQDesignerDynamicPropertySheetExtension() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dynamicPropertiesAllowed = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dynamicPropertiesAllowed() const override {
		if (handle__dynamicPropertiesAllowed == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QDesignerDynamicPropertySheetExtension_dynamicPropertiesAllowed(this, handle__dynamicPropertiesAllowed);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addDynamicProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual int addDynamicProperty(const QString& propertyName, const QVariant& value) override {
		if (handle__addDynamicProperty == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QString propertyName_ret = propertyName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray propertyName_b = propertyName_ret.toUtf8();
		struct miqt_string propertyName_ms;
		propertyName_ms.len = propertyName_b.length();
		propertyName_ms.data = static_cast<char*>(malloc(propertyName_ms.len));
		memcpy(propertyName_ms.data, propertyName_b.data(), propertyName_ms.len);
		struct miqt_string sigval1 = propertyName_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int callback_return_value = miqt_exec_callback_QDesignerDynamicPropertySheetExtension_addDynamicProperty(this, handle__addDynamicProperty, sigval1, sigval2);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeDynamicProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeDynamicProperty(int index) override {
		if (handle__removeDynamicProperty == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool callback_return_value = miqt_exec_callback_QDesignerDynamicPropertySheetExtension_removeDynamicProperty(this, handle__removeDynamicProperty, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isDynamicProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isDynamicProperty(int index) const override {
		if (handle__isDynamicProperty == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool callback_return_value = miqt_exec_callback_QDesignerDynamicPropertySheetExtension_isDynamicProperty(this, handle__isDynamicProperty, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canAddDynamicProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canAddDynamicProperty(const QString& propertyName) const override {
		if (handle__canAddDynamicProperty == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		const QString propertyName_ret = propertyName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray propertyName_b = propertyName_ret.toUtf8();
		struct miqt_string propertyName_ms;
		propertyName_ms.len = propertyName_b.length();
		propertyName_ms.data = static_cast<char*>(malloc(propertyName_ms.len));
		memcpy(propertyName_ms.data, propertyName_b.data(), propertyName_ms.len);
		struct miqt_string sigval1 = propertyName_ms;
		bool callback_return_value = miqt_exec_callback_QDesignerDynamicPropertySheetExtension_canAddDynamicProperty(this, handle__canAddDynamicProperty, sigval1);
		return callback_return_value;
	}

};

QDesignerDynamicPropertySheetExtension* QDesignerDynamicPropertySheetExtension_new() {
	return new (std::nothrow) MiqtVirtualQDesignerDynamicPropertySheetExtension();
}

bool QDesignerDynamicPropertySheetExtension_dynamicPropertiesAllowed(const QDesignerDynamicPropertySheetExtension* self) {
	return self->dynamicPropertiesAllowed();
}

int QDesignerDynamicPropertySheetExtension_addDynamicProperty(QDesignerDynamicPropertySheetExtension* self, struct miqt_string propertyName, QVariant* value) {
	QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
	return self->addDynamicProperty(propertyName_QString, *value);
}

bool QDesignerDynamicPropertySheetExtension_removeDynamicProperty(QDesignerDynamicPropertySheetExtension* self, int index) {
	return self->removeDynamicProperty(static_cast<int>(index));
}

bool QDesignerDynamicPropertySheetExtension_isDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, int index) {
	return self->isDynamicProperty(static_cast<int>(index));
}

bool QDesignerDynamicPropertySheetExtension_canAddDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, struct miqt_string propertyName) {
	QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
	return self->canAddDynamicProperty(propertyName_QString);
}

bool QDesignerDynamicPropertySheetExtension_override_virtual_dynamicPropertiesAllowed(void* self, intptr_t slot) {
	MiqtVirtualQDesignerDynamicPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerDynamicPropertySheetExtension*>( (QDesignerDynamicPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dynamicPropertiesAllowed = slot;
	return true;
}

bool QDesignerDynamicPropertySheetExtension_override_virtual_addDynamicProperty(void* self, intptr_t slot) {
	MiqtVirtualQDesignerDynamicPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerDynamicPropertySheetExtension*>( (QDesignerDynamicPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__addDynamicProperty = slot;
	return true;
}

bool QDesignerDynamicPropertySheetExtension_override_virtual_removeDynamicProperty(void* self, intptr_t slot) {
	MiqtVirtualQDesignerDynamicPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerDynamicPropertySheetExtension*>( (QDesignerDynamicPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeDynamicProperty = slot;
	return true;
}

bool QDesignerDynamicPropertySheetExtension_override_virtual_isDynamicProperty(void* self, intptr_t slot) {
	MiqtVirtualQDesignerDynamicPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerDynamicPropertySheetExtension*>( (QDesignerDynamicPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isDynamicProperty = slot;
	return true;
}

bool QDesignerDynamicPropertySheetExtension_override_virtual_canAddDynamicProperty(void* self, intptr_t slot) {
	MiqtVirtualQDesignerDynamicPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerDynamicPropertySheetExtension*>( (QDesignerDynamicPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canAddDynamicProperty = slot;
	return true;
}

void QDesignerDynamicPropertySheetExtension_delete(QDesignerDynamicPropertySheetExtension* self) {
	delete self;
}

