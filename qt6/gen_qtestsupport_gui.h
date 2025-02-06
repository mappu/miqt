#pragma once
#ifndef MIQT_QT6_GEN_QTESTSUPPORT_GUI_H
#define MIQT_QT6_GEN_QTESTSUPPORT_GUI_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEventPoint;
class QPoint;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventSequence)
typedef QTest::QTouchEventSequence QTest__QTouchEventSequence;
#else
class QTest__QTouchEventSequence;
#endif
class QWindow;
#else
typedef struct QEventPoint QEventPoint;
typedef struct QPoint QPoint;
typedef struct QTest__QTouchEventSequence QTest__QTouchEventSequence;
typedef struct QWindow QWindow;
#endif

QTest__QTouchEventSequence* QTest__QTouchEventSequence_press(QTest__QTouchEventSequence* self, int touchId, QPoint* pt);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_move(QTest__QTouchEventSequence* self, int touchId, QPoint* pt);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_release(QTest__QTouchEventSequence* self, int touchId, QPoint* pt);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_stationary(QTest__QTouchEventSequence* self, int touchId);
bool QTest__QTouchEventSequence_commit(QTest__QTouchEventSequence* self, bool processEvents);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_press3(QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_move3(QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_release3(QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window);
void QTest__QTouchEventSequence_delete(QTest__QTouchEventSequence* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
