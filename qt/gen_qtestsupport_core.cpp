#include <qtestsupport_core.h>
#include "gen_qtestsupport_core.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void miqt_QTest_QWaitWithMs(int ms) {

	QTest::qWait(static_cast<int>(ms));
}

