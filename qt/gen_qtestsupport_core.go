package qt

/*

#include "gen_qtestsupport_core.h"
#include <stdlib.h>

*/
import "C"

func QTest_QWaitWithMs(ms int) {
	C.miqt_QTest_QWaitWithMs((C.int)(ms))
}
