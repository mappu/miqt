#include <QAbstractNativeEventFilter>
#include "qabstractnativeeventfilter.h"

#include "gen_qabstractnativeeventfilter.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QAbstractNativeEventFilter_Delete(QAbstractNativeEventFilter* self) {
	delete self;
}

