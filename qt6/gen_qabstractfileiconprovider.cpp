#include <QAbstractFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qabstractfileiconprovider.h>
#include "gen_qabstractfileiconprovider.h"

#ifdef __cplusplus
extern "C" {
#endif

QIcon* miqt_exec_callback_QAbstractFileIconProvider_icon(const QAbstractFileIconProvider*, intptr_t, int);
QIcon* miqt_exec_callback_QAbstractFileIconProvider_iconWithQFileInfo(const QAbstractFileIconProvider*, intptr_t, QFileInfo*);
struct miqt_string miqt_exec_callback_QAbstractFileIconProvider_type(const QAbstractFileIconProvider*, intptr_t, QFileInfo*);
void miqt_exec_callback_QAbstractFileIconProvider_setOptions(QAbstractFileIconProvider*, intptr_t, int);
int miqt_exec_callback_QAbstractFileIconProvider_options(const QAbstractFileIconProvider*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractFileIconProvider final : public QAbstractFileIconProvider {
public:

	MiqtVirtualQAbstractFileIconProvider(): QAbstractFileIconProvider() {}

	virtual ~MiqtVirtualQAbstractFileIconProvider() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__icon = 0;

	// Subclass to allow providing a Go implementation
	virtual QIcon icon(QAbstractFileIconProvider::IconType param1) const override {
		if (handle__icon == 0) {
			return QAbstractFileIconProvider::icon(param1);
		}

		QAbstractFileIconProvider::IconType param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QIcon* callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_icon(this, handle__icon, sigval1);
		return *callback_return_value;
	}

	friend QIcon* QAbstractFileIconProvider_virtualbase_icon(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__iconWithQFileInfo = 0;

	// Subclass to allow providing a Go implementation
	virtual QIcon icon(const QFileInfo& param1) const override {
		if (handle__iconWithQFileInfo == 0) {
			return QAbstractFileIconProvider::icon(param1);
		}

		const QFileInfo& param1_ret = param1;
		// Cast returned reference into pointer
		QFileInfo* sigval1 = const_cast<QFileInfo*>(&param1_ret);
		QIcon* callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_iconWithQFileInfo(this, handle__iconWithQFileInfo, sigval1);
		return *callback_return_value;
	}

	friend QIcon* QAbstractFileIconProvider_virtualbase_iconWithQFileInfo(const void* self, QFileInfo* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QString type(const QFileInfo& param1) const override {
		if (handle__type == 0) {
			return QAbstractFileIconProvider::type(param1);
		}

		const QFileInfo& param1_ret = param1;
		// Cast returned reference into pointer
		QFileInfo* sigval1 = const_cast<QFileInfo*>(&param1_ret);
		struct miqt_string callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_type(this, handle__type, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QAbstractFileIconProvider_virtualbase_type(const void* self, QFileInfo* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual void setOptions(QAbstractFileIconProvider::Options options) override {
		if (handle__setOptions == 0) {
			QAbstractFileIconProvider::setOptions(options);
			return;
		}

		QAbstractFileIconProvider::Options options_ret = options;
		int sigval1 = static_cast<int>(options_ret);
		miqt_exec_callback_QAbstractFileIconProvider_setOptions(this, handle__setOptions, sigval1);

	}

	friend void QAbstractFileIconProvider_virtualbase_setOptions(void* self, int options);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__options = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractFileIconProvider::Options options() const override {
		if (handle__options == 0) {
			return QAbstractFileIconProvider::options();
		}

		int callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_options(this, handle__options);
		return static_cast<QAbstractFileIconProvider::Options>(callback_return_value);
	}

	friend int QAbstractFileIconProvider_virtualbase_options(const void* self);

};

QAbstractFileIconProvider* QAbstractFileIconProvider_new() {
	return new (std::nothrow) MiqtVirtualQAbstractFileIconProvider();
}

QIcon* QAbstractFileIconProvider_icon(const QAbstractFileIconProvider* self, int param1) {
	return new QIcon(self->icon(static_cast<QAbstractFileIconProvider::IconType>(param1)));
}

QIcon* QAbstractFileIconProvider_iconWithQFileInfo(const QAbstractFileIconProvider* self, QFileInfo* param1) {
	return new QIcon(self->icon(*param1));
}

struct miqt_string QAbstractFileIconProvider_type(const QAbstractFileIconProvider* self, QFileInfo* param1) {
	QString _ret = self->type(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractFileIconProvider_setOptions(QAbstractFileIconProvider* self, int options) {
	self->setOptions(static_cast<QAbstractFileIconProvider::Options>(options));
}

int QAbstractFileIconProvider_options(const QAbstractFileIconProvider* self) {
	QAbstractFileIconProvider::Options _ret = self->options();
	return static_cast<int>(_ret);
}

bool QAbstractFileIconProvider_override_virtual_icon(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__icon = slot;
	return true;
}

QIcon* QAbstractFileIconProvider_virtualbase_icon(const void* self, int param1) {
	return new QIcon(static_cast<const MiqtVirtualQAbstractFileIconProvider*>(self)->QAbstractFileIconProvider::icon(static_cast<MiqtVirtualQAbstractFileIconProvider::IconType>(param1)));
}

bool QAbstractFileIconProvider_override_virtual_iconWithQFileInfo(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__iconWithQFileInfo = slot;
	return true;
}

QIcon* QAbstractFileIconProvider_virtualbase_iconWithQFileInfo(const void* self, QFileInfo* param1) {
	return new QIcon(static_cast<const MiqtVirtualQAbstractFileIconProvider*>(self)->QAbstractFileIconProvider::icon(*param1));
}

bool QAbstractFileIconProvider_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = slot;
	return true;
}

struct miqt_string QAbstractFileIconProvider_virtualbase_type(const void* self, QFileInfo* param1) {
	QString _ret = static_cast<const MiqtVirtualQAbstractFileIconProvider*>(self)->QAbstractFileIconProvider::type(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractFileIconProvider_override_virtual_setOptions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setOptions = slot;
	return true;
}

void QAbstractFileIconProvider_virtualbase_setOptions(void* self, int options) {
	static_cast<MiqtVirtualQAbstractFileIconProvider*>(self)->QAbstractFileIconProvider::setOptions(static_cast<MiqtVirtualQAbstractFileIconProvider::Options>(options));
}

bool QAbstractFileIconProvider_override_virtual_options(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__options = slot;
	return true;
}

int QAbstractFileIconProvider_virtualbase_options(const void* self) {
	MiqtVirtualQAbstractFileIconProvider::Options _ret = static_cast<const MiqtVirtualQAbstractFileIconProvider*>(self)->QAbstractFileIconProvider::options();
	return static_cast<int>(_ret);
}

void QAbstractFileIconProvider_delete(QAbstractFileIconProvider* self) {
	delete self;
}

