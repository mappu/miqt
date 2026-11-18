#include <QWidget>
#include <qtestsupport_widgets.h>
#include "gen_qtestsupport_widgets.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

bool miqt_QTest_QWaitForWindowActive3(QWidget* widget, int timeout) {

	return QTest::qWaitForWindowActive(widget, static_cast<int>(timeout));
}

bool miqt_QTest_QWaitForWindowExposed3(QWidget* widget, int timeout) {

	return QTest::qWaitForWindowExposed(widget, static_cast<int>(timeout));
}

