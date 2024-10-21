#ifndef GEN_QTESTSUPPORT_GUI_H
#define GEN_QTESTSUPPORT_GUI_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPoint;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventSequence)
typedef QTest::QTouchEventSequence QTest__QTouchEventSequence;
#else
class QTest__QTouchEventSequence;
#endif
class QWindow;
#else
typedef struct QPoint QPoint;
typedef struct QTest__QTouchEventSequence QTest__QTouchEventSequence;
typedef struct QWindow QWindow;
#endif

QTest__QTouchEventSequence* QTest__QTouchEventSequence_Press(QTest__QTouchEventSequence* self, int touchId, QPoint* pt);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_Move(QTest__QTouchEventSequence* self, int touchId, QPoint* pt);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_Release(QTest__QTouchEventSequence* self, int touchId, QPoint* pt);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_Stationary(QTest__QTouchEventSequence* self, int touchId);
bool QTest__QTouchEventSequence_Commit(QTest__QTouchEventSequence* self);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_Press3(QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_Move3(QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_Release3(QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window);
bool QTest__QTouchEventSequence_Commit1(QTest__QTouchEventSequence* self, bool processEvents);
void QTest__QTouchEventSequence_Delete(QTest__QTouchEventSequence* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
