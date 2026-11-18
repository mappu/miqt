#pragma once
#ifndef MIQT_QT_GEN_QTESTSUPPORT_WIDGETS_H
#define MIQT_QT_GEN_QTESTSUPPORT_WIDGETS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QWidget;
#else
typedef struct QWidget QWidget;
#endif

bool miqt_QTest_QWaitForWindowActive3(QWidget* widget, int timeout);
bool miqt_QTest_QWaitForWindowExposed3(QWidget* widget, int timeout);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
