package qt

/*

#include "gen_qtestsupport_gui.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
)

func QTest_QWaitForWindowActive2(window *QWindow, timeout int) bool {
	defer runtime.KeepAlive(window)
	return (bool)(C.miqt_QTest_QWaitForWindowActive2(window.cPointer(), (C.int)(timeout)))
}

func QTest_QWaitForWindowExposed2(window *QWindow, timeout int) bool {
	defer runtime.KeepAlive(window)
	return (bool)(C.miqt_QTest_QWaitForWindowExposed2(window.cPointer(), (C.int)(timeout)))
}
