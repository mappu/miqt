#include <QAbstractNativeEventFilter>
#include <QByteArray>
#include <qabstractnativeeventfilter.h>
#include "gen_qabstractnativeeventfilter.h"
#include "_cgo_export.h"

bool QAbstractNativeEventFilter_NativeEventFilter(QAbstractNativeEventFilter* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return self->nativeEventFilter(eventType_QByteArray, message, static_cast<long*>(result));
}

void QAbstractNativeEventFilter_Delete(QAbstractNativeEventFilter* self) {
	delete self;
}

