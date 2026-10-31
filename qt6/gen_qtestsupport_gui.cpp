#include <QEventPoint>
#include <QList>
#include <QPoint>
#include <QPointingDevice>
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

void QTest__QTouchEventSequence_operatorAssign(QTest__QTouchEventSequence* self, QTest__QTouchEventSequence* param1) {
	self->operator=(*param1);
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_press2(QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window) {
	QTest::QTouchEventSequence& _ret = self->press(static_cast<int>(touchId), *pt, window);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_move2(QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window) {
	QTest::QTouchEventSequence& _ret = self->move(static_cast<int>(touchId), *pt, window);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventSequence* QTest__QTouchEventSequence_release2(QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window) {
	QTest::QTouchEventSequence& _ret = self->release(static_cast<int>(touchId), *pt, window);
	// Cast returned reference into pointer
	return &_ret;
}

void QTest__QTouchEventSequence_delete(QTest__QTouchEventSequence* self) {
	delete self;
}

void miqt_HandleTouchEvent2(QWindow* w, QPointingDevice* device, struct miqt_array /* of QEventPoint* */  points, int mods) {
	QList<QEventPoint> points_QList;
	points_QList.reserve(points.len);
	QEventPoint** points_arr = static_cast<QEventPoint**>(points.data);
	for(size_t i = 0; i < points.len; ++i) {
		points_QList.push_back(*(points_arr[i]));
	}

	qt_handleTouchEvent(w, device, points_QList, static_cast<Qt::KeyboardModifiers>(mods));
}

bool miqt_HandleTouchEventv22(QWindow* w, QPointingDevice* device, struct miqt_array /* of QEventPoint* */  points, int mods) {
	QList<QEventPoint> points_QList;
	points_QList.reserve(points.len);
	QEventPoint** points_arr = static_cast<QEventPoint**>(points.data);
	for(size_t i = 0; i < points.len; ++i) {
		points_QList.push_back(*(points_arr[i]));
	}

	return qt_handleTouchEventv2(w, device, points_QList, static_cast<Qt::KeyboardModifiers>(mods));
}

bool miqt_QTest_QWaitForWindowActive2(QWindow* window, int timeout) {

	return QTest::qWaitForWindowActive(window, static_cast<int>(timeout));
}

bool miqt_QTest_QWaitForWindowExposed2(QWindow* window, int timeout) {

	return QTest::qWaitForWindowExposed(window, static_cast<int>(timeout));
}

QPointingDevice* miqt_QTest_CreateTouchDevice2(int devType, int caps) {

	return QTest::createTouchDevice(static_cast<QInputDevice::DeviceType>(devType), static_cast<QInputDevice::Capabilities>(caps));
}

