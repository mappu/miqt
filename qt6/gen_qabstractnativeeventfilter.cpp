#include <QAbstractNativeEventFilter>
#include <QByteArray>
#include <qabstractnativeeventfilter.h>
#include "gen_qabstractnativeeventfilter.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QAbstractNativeEventFilter_nativeEventFilter(QAbstractNativeEventFilter*, intptr_t, struct miqt_string, void*, intptr_t*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractNativeEventFilter final : public QAbstractNativeEventFilter {
public:

	MiqtVirtualQAbstractNativeEventFilter(): QAbstractNativeEventFilter() {};

	virtual ~MiqtVirtualQAbstractNativeEventFilter() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEventFilter(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEventFilter == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		qintptr* result_ret = result;
		intptr_t* sigval3 = (intptr_t*)(result_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractNativeEventFilter_nativeEventFilter(this, handle__nativeEventFilter, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

};

QAbstractNativeEventFilter* QAbstractNativeEventFilter_new() {
	return new MiqtVirtualQAbstractNativeEventFilter();
}

bool QAbstractNativeEventFilter_nativeEventFilter(QAbstractNativeEventFilter* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return self->nativeEventFilter(eventType_QByteArray, message, (qintptr*)(result));
}

bool QAbstractNativeEventFilter_override_virtual_nativeEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractNativeEventFilter* self_cast = dynamic_cast<MiqtVirtualQAbstractNativeEventFilter*>( (QAbstractNativeEventFilter*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEventFilter = slot;
	return true;
}

void QAbstractNativeEventFilter_delete(QAbstractNativeEventFilter* self) {
	delete self;
}

