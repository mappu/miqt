#include <QAbstractNativeEventFilter>
#include <QByteArray>
#include <qabstractnativeeventfilter.h>
#include "gen_qabstractnativeeventfilter.h"
#include "_cgo_export.h"

bool QAbstractNativeEventFilter_NativeEventFilter(QAbstractNativeEventFilter* self, QByteArray* eventType, void* message, long* result) {
	return self->nativeEventFilter(*eventType, message, static_cast<long*>(result));
}

void QAbstractNativeEventFilter_Delete(QAbstractNativeEventFilter* self) {
	delete self;
}

