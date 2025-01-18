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

QIcon* miqt_exec_callback_QAbstractFileIconProvider_Icon(void*, intptr_t, int);
QIcon* miqt_exec_callback_QAbstractFileIconProvider_IconWithQFileInfo(void*, intptr_t, QFileInfo*);
struct miqt_string miqt_exec_callback_QAbstractFileIconProvider_Type(void*, intptr_t, QFileInfo*);
void miqt_exec_callback_QAbstractFileIconProvider_SetOptions(void*, intptr_t, int);
int miqt_exec_callback_QAbstractFileIconProvider_Options(void*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractFileIconProvider final : public QAbstractFileIconProvider {
public:

	MiqtVirtualQAbstractFileIconProvider(): QAbstractFileIconProvider() {};

	virtual ~MiqtVirtualQAbstractFileIconProvider() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Icon = 0;

	// Subclass to allow providing a Go implementation
	virtual QIcon icon(QAbstractFileIconProvider::IconType param1) const override {
		if (handle__Icon == 0) {
			return QAbstractFileIconProvider::icon(param1);
		}
		
		QAbstractFileIconProvider::IconType param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QIcon* callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_Icon(const_cast<MiqtVirtualQAbstractFileIconProvider*>(this), handle__Icon, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QIcon* virtualbase_Icon(int param1) const {

		return new QIcon(QAbstractFileIconProvider::icon(static_cast<QAbstractFileIconProvider::IconType>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IconWithQFileInfo = 0;

	// Subclass to allow providing a Go implementation
	virtual QIcon icon(const QFileInfo& param1) const override {
		if (handle__IconWithQFileInfo == 0) {
			return QAbstractFileIconProvider::icon(param1);
		}
		
		const QFileInfo& param1_ret = param1;
		// Cast returned reference into pointer
		QFileInfo* sigval1 = const_cast<QFileInfo*>(&param1_ret);

		QIcon* callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_IconWithQFileInfo(const_cast<MiqtVirtualQAbstractFileIconProvider*>(this), handle__IconWithQFileInfo, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QIcon* virtualbase_IconWithQFileInfo(QFileInfo* param1) const {

		return new QIcon(QAbstractFileIconProvider::icon(*param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual QString type(const QFileInfo& param1) const override {
		if (handle__Type == 0) {
			return QAbstractFileIconProvider::type(param1);
		}
		
		const QFileInfo& param1_ret = param1;
		// Cast returned reference into pointer
		QFileInfo* sigval1 = const_cast<QFileInfo*>(&param1_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_Type(const_cast<MiqtVirtualQAbstractFileIconProvider*>(this), handle__Type, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_Type(QFileInfo* param1) const {

		QString _ret = QAbstractFileIconProvider::type(*param1);
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual void setOptions(QAbstractFileIconProvider::Options options) override {
		if (handle__SetOptions == 0) {
			QAbstractFileIconProvider::setOptions(options);
			return;
		}
		
		QAbstractFileIconProvider::Options options_ret = options;
		int sigval1 = static_cast<int>(options_ret);

		miqt_exec_callback_QAbstractFileIconProvider_SetOptions(this, handle__SetOptions, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetOptions(int options) {

		QAbstractFileIconProvider::setOptions(static_cast<QAbstractFileIconProvider::Options>(options));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Options = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractFileIconProvider::Options options() const override {
		if (handle__Options == 0) {
			return QAbstractFileIconProvider::options();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_Options(const_cast<MiqtVirtualQAbstractFileIconProvider*>(this), handle__Options);

		return static_cast<QAbstractFileIconProvider::Options>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Options() const {

		QAbstractFileIconProvider::Options _ret = QAbstractFileIconProvider::options();
		return static_cast<int>(_ret);

	}

};

QAbstractFileIconProvider* QAbstractFileIconProvider_new() {
	return new MiqtVirtualQAbstractFileIconProvider();
}

QIcon* QAbstractFileIconProvider_Icon(const QAbstractFileIconProvider* self, int param1) {
	return new QIcon(self->icon(static_cast<QAbstractFileIconProvider::IconType>(param1)));
}

QIcon* QAbstractFileIconProvider_IconWithQFileInfo(const QAbstractFileIconProvider* self, QFileInfo* param1) {
	return new QIcon(self->icon(*param1));
}

struct miqt_string QAbstractFileIconProvider_Type(const QAbstractFileIconProvider* self, QFileInfo* param1) {
	QString _ret = self->type(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractFileIconProvider_SetOptions(QAbstractFileIconProvider* self, int options) {
	self->setOptions(static_cast<QAbstractFileIconProvider::Options>(options));
}

int QAbstractFileIconProvider_Options(const QAbstractFileIconProvider* self) {
	QAbstractFileIconProvider::Options _ret = self->options();
	return static_cast<int>(_ret);
}

bool QAbstractFileIconProvider_override_virtual_Icon(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Icon = slot;
	return true;
}

QIcon* QAbstractFileIconProvider_virtualbase_Icon(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractFileIconProvider*)(self) )->virtualbase_Icon(param1);
}

bool QAbstractFileIconProvider_override_virtual_IconWithQFileInfo(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IconWithQFileInfo = slot;
	return true;
}

QIcon* QAbstractFileIconProvider_virtualbase_IconWithQFileInfo(const void* self, QFileInfo* param1) {
	return ( (const MiqtVirtualQAbstractFileIconProvider*)(self) )->virtualbase_IconWithQFileInfo(param1);
}

bool QAbstractFileIconProvider_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

struct miqt_string QAbstractFileIconProvider_virtualbase_Type(const void* self, QFileInfo* param1) {
	return ( (const MiqtVirtualQAbstractFileIconProvider*)(self) )->virtualbase_Type(param1);
}

bool QAbstractFileIconProvider_override_virtual_SetOptions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetOptions = slot;
	return true;
}

void QAbstractFileIconProvider_virtualbase_SetOptions(void* self, int options) {
	( (MiqtVirtualQAbstractFileIconProvider*)(self) )->virtualbase_SetOptions(options);
}

bool QAbstractFileIconProvider_override_virtual_Options(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Options = slot;
	return true;
}

int QAbstractFileIconProvider_virtualbase_Options(const void* self) {
	return ( (const MiqtVirtualQAbstractFileIconProvider*)(self) )->virtualbase_Options();
}

void QAbstractFileIconProvider_Delete(QAbstractFileIconProvider* self) {
	delete self;
}

