#include "gen_qabstractnativeeventfilter.h"
#include "qabstractnativeeventfilter.h"

#include <QAbstractNativeEventFilter>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QAbstractNativeEventFilter_Delete(QAbstractNativeEventFilter* self) {
	delete self;
}

