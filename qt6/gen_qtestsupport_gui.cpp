#include <QEventPoint>
#include <QPoint>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventSequence
#include <QWindow>
#include <qtestsupport_gui.h>
#include "gen_qtestsupport_gui.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QTest__QTouchEventSequence* QTest__QTouchEventSequence_press(QTest__QTouchEventSequence* self, int touchId, QPoint* pt) {
	QTest::QTouchEventSequence& _ret = self->press(static_cast<int>(touchId), *pt);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_move(QTest__QTouchEventSequence* self, int touchId, QPoint* pt) {
	QTest::QTouchEventSequence& _ret = self->move(static_cast<int>(touchId), *pt);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_release(QTest__QTouchEventSequence* self, int touchId, QPoint* pt) {
	QTest::QTouchEventSequence& _ret = self->release(static_cast<int>(touchId), *pt);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_stationary(QTest__QTouchEventSequence* self, int touchId) {
	QTest::QTouchEventSequence& _ret = self->stationary(static_cast<int>(touchId));
	// Cast returned reference into pointer
	return &_ret;
}

bool QTest__QTouchEventSequence_commit(QTest__QTouchEventSequence* self, bool processEvents) {
	return self->commit(processEvents);
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_press3(QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window) {
	QTest::QTouchEventSequence& _ret = self->press(static_cast<int>(touchId), *pt, window);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_move3(QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window) {
	QTest::QTouchEventSequence& _ret = self->move(static_cast<int>(touchId), *pt, window);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_release3(QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window) {
	QTest::QTouchEventSequence& _ret = self->release(static_cast<int>(touchId), *pt, window);
	// Cast returned reference into pointer
	return &_ret;
}

void QTest__QTouchEventSequence_delete(QTest__QTouchEventSequence* self) {
	delete self;
}

