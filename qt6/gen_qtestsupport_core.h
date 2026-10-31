#pragma once
#ifndef MIQT_QT6_GEN_QTESTSUPPORT_CORE_H
#define MIQT_QT6_GEN_QTESTSUPPORT_CORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
#endif

void miqt_QTest_QSleepWithMs(int ms);
void miqt_QTest_QWaitWithMs(int ms);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
