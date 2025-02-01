#include <QFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfileiconprovider.h>
#include "gen_qfileiconprovider.h"

#ifdef __cplusplus
extern "C" {
#endif

QIcon* miqt_exec_callback_QFileIconProvider_icon(const QFileIconProvider*, intptr_t, int);
QIcon* miqt_exec_callback_QFileIconProvider_iconWithInfo(const QFileIconProvider*, intptr_t, QFileInfo*);
struct miqt_string miqt_exec_callback_QFileIconProvider_type(const QFileIconProvider*, intptr_t, QFileInfo*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFileIconProvider final : public QFileIconProvider {
public:

	MiqtVirtualQFileIconProvider(): QFileIconProvider() {};

	virtual ~MiqtVirtualQFileIconProvider() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__icon = 0;

	// Subclass to allow providing a Go implementation
	virtual QIcon icon(QFileIconProvider::IconType type) const override {
		if (handle__icon == 0) {
			return QFileIconProvider::icon(type);
		}
		
		QFileIconProvider::IconType type_ret = type;
		int sigval1 = static_cast<int>(type_ret);

		QIcon* callback_return_value = miqt_exec_callback_QFileIconProvider_icon(this, handle__icon, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QIcon* virtualbase_icon(int type) const {

		return new QIcon(QFileIconProvider::icon(static_cast<QFileIconProvider::IconType>(type)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__iconWithInfo = 0;

	// Subclass to allow providing a Go implementation
	virtual QIcon icon(const QFileInfo& info) const override {
		if (handle__iconWithInfo == 0) {
			return QFileIconProvider::icon(info);
		}
		
		const QFileInfo& info_ret = info;
		// Cast returned reference into pointer
		QFileInfo* sigval1 = const_cast<QFileInfo*>(&info_ret);

		QIcon* callback_return_value = miqt_exec_callback_QFileIconProvider_iconWithInfo(this, handle__iconWithInfo, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QIcon* virtualbase_iconWithInfo(QFileInfo* info) const {

		return new QIcon(QFileIconProvider::icon(*info));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QString type(const QFileInfo& info) const override {
		if (handle__type == 0) {
			return QFileIconProvider::type(info);
		}
		
		const QFileInfo& info_ret = info;
		// Cast returned reference into pointer
		QFileInfo* sigval1 = const_cast<QFileInfo*>(&info_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QFileIconProvider_type(this, handle__type, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_type(QFileInfo* info) const {

		QString _ret = QFileIconProvider::type(*info);
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

};

QFileIconProvider* QFileIconProvider_new() {
	return new MiqtVirtualQFileIconProvider();
}

QIcon* QFileIconProvider_icon(const QFileIconProvider* self, int type) {
	return new QIcon(self->icon(static_cast<QFileIconProvider::IconType>(type)));
}

QIcon* QFileIconProvider_iconWithInfo(const QFileIconProvider* self, QFileInfo* info) {
	return new QIcon(self->icon(*info));
}

struct miqt_string QFileIconProvider_type(const QFileIconProvider* self, QFileInfo* info) {
	QString _ret = self->type(*info);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileIconProvider_setOptions(QFileIconProvider* self, int options) {
	self->setOptions(static_cast<QFileIconProvider::Options>(options));
}

int QFileIconProvider_options(const QFileIconProvider* self) {
	QFileIconProvider::Options _ret = self->options();
	return static_cast<int>(_ret);
}

bool QFileIconProvider_override_virtual_icon(void* self, intptr_t slot) {
	MiqtVirtualQFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQFileIconProvider*>( (QFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__icon = slot;
	return true;
}

QIcon* QFileIconProvider_virtualbase_icon(const void* self, int type) {
	return ( (const MiqtVirtualQFileIconProvider*)(self) )->virtualbase_icon(type);
}

bool QFileIconProvider_override_virtual_iconWithInfo(void* self, intptr_t slot) {
	MiqtVirtualQFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQFileIconProvider*>( (QFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__iconWithInfo = slot;
	return true;
}

QIcon* QFileIconProvider_virtualbase_iconWithInfo(const void* self, QFileInfo* info) {
	return ( (const MiqtVirtualQFileIconProvider*)(self) )->virtualbase_iconWithInfo(info);
}

bool QFileIconProvider_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQFileIconProvider*>( (QFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

struct miqt_string QFileIconProvider_virtualbase_type(const void* self, QFileInfo* info) {
	return ( (const MiqtVirtualQFileIconProvider*)(self) )->virtualbase_type(info);
}

void QFileIconProvider_delete(QFileIconProvider* self) {
	delete self;
}

