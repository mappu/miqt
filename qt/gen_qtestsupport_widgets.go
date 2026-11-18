package qt

/*

#include "gen_qtestsupport_widgets.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
)

func QTest_QWaitForWindowActive3(widget *QWidget, timeout int) bool {
	defer runtime.KeepAlive(widget)
	return (bool)(C.miqt_QTest_QWaitForWindowActive3(widget.cPointer(), (C.int)(timeout)))
}

func QTest_QWaitForWindowExposed3(widget *QWidget, timeout int) bool {
	defer runtime.KeepAlive(widget)
	return (bool)(C.miqt_QTest_QWaitForWindowExposed3(widget.cPointer(), (C.int)(timeout)))
}
