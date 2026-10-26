package qt6

/*

#include "gen_qtestsupport_core.h"
#include <stdlib.h>

*/
import "C"

func QTest_QSleepWithMs(ms int) {
	C.miqt_QTest_QSleepWithMs((C.int)(ms))
}

func QTest_QWaitWithMs(ms int) {
	C.miqt_QTest_QWaitWithMs((C.int)(ms))
}
