#include <QAbstractFileIconProvider>
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

QIcon* miqt_exec_callback_QFileIconProvider_Icon(void*, intptr_t, int);
QIcon* miqt_exec_callback_QFileIconProvider_IconWithInfo(void*, intptr_t, QFileInfo*);
struct miqt_string miqt_exec_callback_QFileIconProvider_Type(void*, intptr_t, QFileInfo*);
void miqt_exec_callback_QFileIconProvider_SetOptions(void*, intptr_t, int);
int miqt_exec_callback_QFileIconProvider_Options(void*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFileIconProvider : public virtual QFileIconProvider {
public:

	MiqtVirtualQFileIconProvider(): QFileIconProvider() {};

	virtual ~MiqtVirtualQFileIconProvider() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Icon = 0;

	// Subclass to allow providing a Go implementation
	virtual QIcon icon(QAbstractFileIconProvider::IconType typeVal) const override {
		if (handle__Icon == 0) {
			return QFileIconProvider::icon(typeVal);
		}
		
		QAbstractFileIconProvider::IconType typeVal_ret = typeVal;
		int sigval1 = static_cast<int>(typeVal_ret);

		QIcon* callback_return_value = miqt_exec_callback_QFileIconProvider_Icon(const_cast<MiqtVirtualQFileIconProvider*>(this), handle__Icon, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QIcon* virtualbase_Icon(int typeVal) const {

		return new QIcon(QFileIconProvider::icon(static_cast<QAbstractFileIconProvider::IconType>(typeVal)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IconWithInfo = 0;

	// Subclass to allow providing a Go implementation
	virtual QIcon icon(const QFileInfo& info) const override {
		if (handle__IconWithInfo == 0) {
			return QFileIconProvider::icon(info);
		}
		
		const QFileInfo& info_ret = info;
		// Cast returned reference into pointer
		QFileInfo* sigval1 = const_cast<QFileInfo*>(&info_ret);

		QIcon* callback_return_value = miqt_exec_callback_QFileIconProvider_IconWithInfo(const_cast<MiqtVirtualQFileIconProvider*>(this), handle__IconWithInfo, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QIcon* virtualbase_IconWithInfo(QFileInfo* info) const {

		return new QIcon(QFileIconProvider::icon(*info));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual QString type(const QFileInfo& param1) const override {
		if (handle__Type == 0) {
			return QFileIconProvider::type(param1);
		}
		
		const QFileInfo& param1_ret = param1;
		// Cast returned reference into pointer
		QFileInfo* sigval1 = const_cast<QFileInfo*>(&param1_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QFileIconProvider_Type(const_cast<MiqtVirtualQFileIconProvider*>(this), handle__Type, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_Type(QFileInfo* param1) const {

		QString _ret = QFileIconProvider::type(*param1);
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
			QFileIconProvider::setOptions(options);
			return;
		}
		
		QAbstractFileIconProvider::Options options_ret = options;
		int sigval1 = static_cast<int>(options_ret);

		miqt_exec_callback_QFileIconProvider_SetOptions(this, handle__SetOptions, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetOptions(int options) {

		QFileIconProvider::setOptions(static_cast<QAbstractFileIconProvider::Options>(options));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Options = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractFileIconProvider::Options options() const override {
		if (handle__Options == 0) {
			return QFileIconProvider::options();
		}
		

		int callback_return_value = miqt_exec_callback_QFileIconProvider_Options(const_cast<MiqtVirtualQFileIconProvider*>(this), handle__Options);

		return static_cast<QAbstractFileIconProvider::Options>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Options() const {

		QAbstractFileIconProvider::Options _ret = QFileIconProvider::options();
		return static_cast<int>(_ret);

	}

};

QFileIconProvider* QFileIconProvider_new() {
	return new MiqtVirtualQFileIconProvider();
}

void QFileIconProvider_virtbase(QFileIconProvider* src, QAbstractFileIconProvider** outptr_QAbstractFileIconProvider) {
	*outptr_QAbstractFileIconProvider = static_cast<QAbstractFileIconProvider*>(src);
}

QIcon* QFileIconProvider_Icon(const QFileIconProvider* self, int typeVal) {
	return new QIcon(self->icon(static_cast<QAbstractFileIconProvider::IconType>(typeVal)));
}

QIcon* QFileIconProvider_IconWithInfo(const QFileIconProvider* self, QFileInfo* info) {
	return new QIcon(self->icon(*info));
}

void QFileIconProvider_override_virtual_Icon(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFileIconProvider*>( (QFileIconProvider*)(self) )->handle__Icon = slot;
}

QIcon* QFileIconProvider_virtualbase_Icon(const void* self, int typeVal) {
	return ( (const MiqtVirtualQFileIconProvider*)(self) )->virtualbase_Icon(typeVal);
}

void QFileIconProvider_override_virtual_IconWithInfo(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFileIconProvider*>( (QFileIconProvider*)(self) )->handle__IconWithInfo = slot;
}

QIcon* QFileIconProvider_virtualbase_IconWithInfo(const void* self, QFileInfo* info) {
	return ( (const MiqtVirtualQFileIconProvider*)(self) )->virtualbase_IconWithInfo(info);
}

void QFileIconProvider_override_virtual_Type(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFileIconProvider*>( (QFileIconProvider*)(self) )->handle__Type = slot;
}

struct miqt_string QFileIconProvider_virtualbase_Type(const void* self, QFileInfo* param1) {
	return ( (const MiqtVirtualQFileIconProvider*)(self) )->virtualbase_Type(param1);
}

void QFileIconProvider_override_virtual_SetOptions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFileIconProvider*>( (QFileIconProvider*)(self) )->handle__SetOptions = slot;
}

void QFileIconProvider_virtualbase_SetOptions(void* self, int options) {
	( (MiqtVirtualQFileIconProvider*)(self) )->virtualbase_SetOptions(options);
}

void QFileIconProvider_override_virtual_Options(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFileIconProvider*>( (QFileIconProvider*)(self) )->handle__Options = slot;
}

int QFileIconProvider_virtualbase_Options(const void* self) {
	return ( (const MiqtVirtualQFileIconProvider*)(self) )->virtualbase_Options();
}

void QFileIconProvider_Delete(QFileIconProvider* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQFileIconProvider*>( self );
	} else {
		delete self;
	}
}

