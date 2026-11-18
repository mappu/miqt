#pragma once
#ifndef MIQT_QT_GEN_QTESTSUPPORT_GUI_H
#define MIQT_QT_GEN_QTESTSUPPORT_GUI_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QWindow;
#else
typedef struct QWindow QWindow;
#endif

bool miqt_QTest_QWaitForWindowActive2(QWindow* window, int timeout);
bool miqt_QTest_QWaitForWindowExposed2(QWindow* window, int timeout);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
