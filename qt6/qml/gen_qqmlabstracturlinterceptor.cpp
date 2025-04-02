#include <QQmlAbstractUrlInterceptor>
#include <QUrl>
#include <qqmlabstracturlinterceptor.h>
#include "gen_qqmlabstracturlinterceptor.h"

#ifdef __cplusplus
extern "C" {
#endif

QUrl* miqt_exec_callback_QQmlAbstractUrlInterceptor_intercept(QQmlAbstractUrlInterceptor*, intptr_t, QUrl*, int);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQQmlAbstractUrlInterceptor final : public QQmlAbstractUrlInterceptor {
public:

	MiqtVirtualQQmlAbstractUrlInterceptor(): QQmlAbstractUrlInterceptor() {};

	virtual ~MiqtVirtualQQmlAbstractUrlInterceptor() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__intercept = 0;

	// Subclass to allow providing a Go implementation
	virtual QUrl intercept(const QUrl& path, QQmlAbstractUrlInterceptor::DataType type) override {
		if (handle__intercept == 0) {
			return QUrl(); // Pure virtual, there is no base we can call
		}
		
		const QUrl& path_ret = path;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&path_ret);
		QQmlAbstractUrlInterceptor::DataType type_ret = type;
		int sigval2 = static_cast<int>(type_ret);

		QUrl* callback_return_value = miqt_exec_callback_QQmlAbstractUrlInterceptor_intercept(this, handle__intercept, sigval1, sigval2);

		return *callback_return_value;
	}

};

QQmlAbstractUrlInterceptor* QQmlAbstractUrlInterceptor_new() {
	return new MiqtVirtualQQmlAbstractUrlInterceptor();
}

QUrl* QQmlAbstractUrlInterceptor_intercept(QQmlAbstractUrlInterceptor* self, QUrl* path, int type) {
	return new QUrl(self->intercept(*path, static_cast<QQmlAbstractUrlInterceptor::DataType>(type)));
}

void QQmlAbstractUrlInterceptor_operatorAssign(QQmlAbstractUrlInterceptor* self, QQmlAbstractUrlInterceptor* param1) {
	self->operator=(*param1);
}

bool QQmlAbstractUrlInterceptor_override_virtual_intercept(void* self, intptr_t slot) {
	MiqtVirtualQQmlAbstractUrlInterceptor* self_cast = dynamic_cast<MiqtVirtualQQmlAbstractUrlInterceptor*>( (QQmlAbstractUrlInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__intercept = slot;
	return true;
}

void QQmlAbstractUrlInterceptor_delete(QQmlAbstractUrlInterceptor* self) {
	delete self;
}

