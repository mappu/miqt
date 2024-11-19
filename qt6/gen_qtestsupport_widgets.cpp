#include <QPoint>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventSequence
#define WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventWidgetSequence
#include <QWidget>
#include <qtestsupport_widgets.h>
#include "gen_qtestsupport_widgets.h"
#include "_cgo_export.h"

class MiqtVirtualQTestQTouchEventWidgetSequence : public virtual QTest::QTouchEventWidgetSequence {
public:

	MiqtVirtualQTestQTouchEventWidgetSequence(const QTest::QTouchEventWidgetSequence& param1): QTest::QTouchEventWidgetSequence(param1) {};

	virtual ~MiqtVirtualQTestQTouchEventWidgetSequence() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Stationary = 0;

	// Subclass to allow providing a Go implementation
	virtual QTest::QTouchEventWidgetSequence& stationary(int touchId) override {
		if (handle__Stationary == 0) {
			return QTest__QTouchEventWidgetSequence::stationary(touchId);
		}
		
		int sigval1 = touchId;

		QTest__QTouchEventWidgetSequence* callback_return_value = miqt_exec_callback_QTest__QTouchEventWidgetSequence_Stationary(this, handle__Stationary, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTest__QTouchEventWidgetSequence* virtualbase_Stationary(int touchId) {

		QTest::QTouchEventWidgetSequence& _ret = QTest__QTouchEventWidgetSequence::stationary(static_cast<int>(touchId));
		// Cast returned reference into pointer
		return &_ret;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Commit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool commit(bool processEvents) override {
		if (handle__Commit == 0) {
			return QTest__QTouchEventWidgetSequence::commit(processEvents);
		}
		
		bool sigval1 = processEvents;

		bool callback_return_value = miqt_exec_callback_QTest__QTouchEventWidgetSequence_Commit(this, handle__Commit, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Commit(bool processEvents) {

		return QTest__QTouchEventWidgetSequence::commit(processEvents);

	}

};

void QTest__QTouchEventWidgetSequence_new(QTest__QTouchEventWidgetSequence* param1, QTest__QTouchEventWidgetSequence** outptr_QTest__QTouchEventWidgetSequence, QTest__QTouchEventSequence** outptr_QTest__QTouchEventSequence) {
	MiqtVirtualQTestQTouchEventWidgetSequence* ret = new MiqtVirtualQTestQTouchEventWidgetSequence(*param1);
	*outptr_QTest__QTouchEventWidgetSequence = ret;
	*outptr_QTest__QTouchEventSequence = static_cast<QTest::QTouchEventSequence*>(ret);
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

bool QTest__QTouchEventWidgetSequence_Commit(QTest__QTouchEventWidgetSequence* self, bool processEvents) {
	return self->commit(processEvents);
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

void QTest__QTouchEventWidgetSequence_override_virtual_Stationary(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTestQTouchEventWidgetSequence*>( (QTest__QTouchEventWidgetSequence*)(self) )->handle__Stationary = slot;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_virtualbase_Stationary(void* self, int touchId) {
	return ( (MiqtVirtualQTestQTouchEventWidgetSequence*)(self) )->virtualbase_Stationary(touchId);
}

void QTest__QTouchEventWidgetSequence_override_virtual_Commit(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQTestQTouchEventWidgetSequence*>( (QTest__QTouchEventWidgetSequence*)(self) )->handle__Commit = slot;
}

bool QTest__QTouchEventWidgetSequence_virtualbase_Commit(void* self, bool processEvents) {
	return ( (MiqtVirtualQTestQTouchEventWidgetSequence*)(self) )->virtualbase_Commit(processEvents);
}

void QTest__QTouchEventWidgetSequence_Delete(QTest__QTouchEventWidgetSequence* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQTestQTouchEventWidgetSequence*>( self );
	} else {
		delete self;
	}
}

