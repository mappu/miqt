#include <QWindow>
#include <qtestsupport_gui.h>
#include "gen_qtestsupport_gui.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

bool miqt_QTest_QWaitForWindowActive2(QWindow* window, int timeout) {

	return QTest::qWaitForWindowActive(window, static_cast<int>(timeout));
}

bool miqt_QTest_QWaitForWindowExposed2(QWindow* window, int timeout) {

	return QTest::qWaitForWindowExposed(window, static_cast<int>(timeout));
}

