#include <QDesignerSettingsInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <abstractsettings.h>
#include "gen_abstractsettings.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDesignerSettingsInterface_beginGroup(QDesignerSettingsInterface*, intptr_t, struct miqt_string);
void miqt_exec_callback_QDesignerSettingsInterface_endGroup(QDesignerSettingsInterface*, intptr_t);
bool miqt_exec_callback_QDesignerSettingsInterface_contains(const QDesignerSettingsInterface*, intptr_t, struct miqt_string);
void miqt_exec_callback_QDesignerSettingsInterface_setValue(QDesignerSettingsInterface*, intptr_t, struct miqt_string, QVariant*);
QVariant* miqt_exec_callback_QDesignerSettingsInterface_value(const QDesignerSettingsInterface*, intptr_t, struct miqt_string, QVariant*);
void miqt_exec_callback_QDesignerSettingsInterface_remove(QDesignerSettingsInterface*, intptr_t, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerSettingsInterface final : public QDesignerSettingsInterface {
public:

	MiqtVirtualQDesignerSettingsInterface(): QDesignerSettingsInterface() {}

	virtual ~MiqtVirtualQDesignerSettingsInterface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__beginGroup = 0;

	// Subclass to allow providing a Go implementation
	virtual void beginGroup(const QString& prefix) override {
		if (handle__beginGroup == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QString prefix_ret = prefix;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray prefix_b = prefix_ret.toUtf8();
		struct miqt_string prefix_ms;
		prefix_ms.len = prefix_b.length();
		prefix_ms.data = static_cast<char*>(malloc(prefix_ms.len));
		memcpy(prefix_ms.data, prefix_b.data(), prefix_ms.len);
		struct miqt_string sigval1 = prefix_ms;
		miqt_exec_callback_QDesignerSettingsInterface_beginGroup(this, handle__beginGroup, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__endGroup = 0;

	// Subclass to allow providing a Go implementation
	virtual void endGroup() override {
		if (handle__endGroup == 0) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QDesignerSettingsInterface_endGroup(this, handle__endGroup);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QString& key) const override {
		if (handle__contains == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		const QString key_ret = key;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray key_b = key_ret.toUtf8();
		struct miqt_string key_ms;
		key_ms.len = key_b.length();
		key_ms.data = static_cast<char*>(malloc(key_ms.len));
		memcpy(key_ms.data, key_b.data(), key_ms.len);
		struct miqt_string sigval1 = key_ms;
		bool callback_return_value = miqt_exec_callback_QDesignerSettingsInterface_contains(this, handle__contains, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setValue = 0;

	// Subclass to allow providing a Go implementation
	virtual void setValue(const QString& key, const QVariant& value) override {
		if (handle__setValue == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QString key_ret = key;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray key_b = key_ret.toUtf8();
		struct miqt_string key_ms;
		key_ms.len = key_b.length();
		key_ms.data = static_cast<char*>(malloc(key_ms.len));
		memcpy(key_ms.data, key_b.data(), key_ms.len);
		struct miqt_string sigval1 = key_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QDesignerSettingsInterface_setValue(this, handle__setValue, sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__value = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant value(const QString& key, const QVariant& defaultValue) const override {
		if (handle__value == 0) {
			return QVariant(); // Pure virtual, there is no base we can call
		}

		const QString key_ret = key;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray key_b = key_ret.toUtf8();
		struct miqt_string key_ms;
		key_ms.len = key_b.length();
		key_ms.data = static_cast<char*>(malloc(key_ms.len));
		memcpy(key_ms.data, key_b.data(), key_ms.len);
		struct miqt_string sigval1 = key_ms;
		const QVariant& defaultValue_ret = defaultValue;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&defaultValue_ret);
		QVariant* callback_return_value = miqt_exec_callback_QDesignerSettingsInterface_value(this, handle__value, sigval1, sigval2);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__remove = 0;

	// Subclass to allow providing a Go implementation
	virtual void remove(const QString& key) override {
		if (handle__remove == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QString key_ret = key;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray key_b = key_ret.toUtf8();
		struct miqt_string key_ms;
		key_ms.len = key_b.length();
		key_ms.data = static_cast<char*>(malloc(key_ms.len));
		memcpy(key_ms.data, key_b.data(), key_ms.len);
		struct miqt_string sigval1 = key_ms;
		miqt_exec_callback_QDesignerSettingsInterface_remove(this, handle__remove, sigval1);

	}

};

QDesignerSettingsInterface* QDesignerSettingsInterface_new() {
	return new (std::nothrow) MiqtVirtualQDesignerSettingsInterface();
}

void QDesignerSettingsInterface_beginGroup(QDesignerSettingsInterface* self, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	self->beginGroup(prefix_QString);
}

void QDesignerSettingsInterface_endGroup(QDesignerSettingsInterface* self) {
	self->endGroup();
}

bool QDesignerSettingsInterface_contains(const QDesignerSettingsInterface* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->contains(key_QString);
}

void QDesignerSettingsInterface_setValue(QDesignerSettingsInterface* self, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setValue(key_QString, *value);
}

QVariant* QDesignerSettingsInterface_value(const QDesignerSettingsInterface* self, struct miqt_string key, QVariant* defaultValue) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QVariant(self->value(key_QString, *defaultValue));
}

void QDesignerSettingsInterface_remove(QDesignerSettingsInterface* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->remove(key_QString);
}

bool QDesignerSettingsInterface_override_virtual_beginGroup(void* self, intptr_t slot) {
	MiqtVirtualQDesignerSettingsInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerSettingsInterface*>( (QDesignerSettingsInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__beginGroup = slot;
	return true;
}

bool QDesignerSettingsInterface_override_virtual_endGroup(void* self, intptr_t slot) {
	MiqtVirtualQDesignerSettingsInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerSettingsInterface*>( (QDesignerSettingsInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__endGroup = slot;
	return true;
}

bool QDesignerSettingsInterface_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQDesignerSettingsInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerSettingsInterface*>( (QDesignerSettingsInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contains = slot;
	return true;
}

bool QDesignerSettingsInterface_override_virtual_setValue(void* self, intptr_t slot) {
	MiqtVirtualQDesignerSettingsInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerSettingsInterface*>( (QDesignerSettingsInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setValue = slot;
	return true;
}

bool QDesignerSettingsInterface_override_virtual_value(void* self, intptr_t slot) {
	MiqtVirtualQDesignerSettingsInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerSettingsInterface*>( (QDesignerSettingsInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__value = slot;
	return true;
}

bool QDesignerSettingsInterface_override_virtual_remove(void* self, intptr_t slot) {
	MiqtVirtualQDesignerSettingsInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerSettingsInterface*>( (QDesignerSettingsInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__remove = slot;
	return true;
}

void QDesignerSettingsInterface_delete(QDesignerSettingsInterface* self) {
	delete self;
}

