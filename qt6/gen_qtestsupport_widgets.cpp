#include <QPoint>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventWidgetSequence
#include <QWidget>
#include <qtestsupport_widgets.h>
#include "gen_qtestsupport_widgets.h"
#include "_cgo_export.h"

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_new(QTest__QTouchEventWidgetSequence* param1) {
	return new QTest::QTouchEventWidgetSequence(*param1);
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Press(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt) {
	QTest::QTouchEventWidgetSequence& _ret = self->press(static_cast<int>(touchId), *pt);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Move(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt) {
	QTest::QTouchEventWidgetSequence& _ret = self->move(static_cast<int>(touchId), *pt);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Release(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt) {
	QTest::QTouchEventWidgetSequence& _ret = self->release(static_cast<int>(touchId), *pt);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Stationary(QTest__QTouchEventWidgetSequence* self, int touchId) {
	QTest::QTouchEventWidgetSequence& _ret = self->stationary(static_cast<int>(touchId));
	// Cast returned reference into pointer
	return &_ret;
}

bool QTest__QTouchEventWidgetSequence_Commit(QTest__QTouchEventWidgetSequence* self) {
	return self->commit();
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Press3(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt, QWidget* widget) {
	QTest::QTouchEventWidgetSequence& _ret = self->press(static_cast<int>(touchId), *pt, widget);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Move3(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt, QWidget* widget) {
	QTest::QTouchEventWidgetSequence& _ret = self->move(static_cast<int>(touchId), *pt, widget);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Release3(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt, QWidget* widget) {
	QTest::QTouchEventWidgetSequence& _ret = self->release(static_cast<int>(touchId), *pt, widget);
	// Cast returned reference into pointer
	return &_ret;
}

bool QTest__QTouchEventWidgetSequence_Commit1(QTest__QTouchEventWidgetSequence* self, bool processEvents) {
	return self->commit(processEvents);
}

void QTest__QTouchEventWidgetSequence_Delete(QTest__QTouchEventWidgetSequence* self) {
	delete self;
}

