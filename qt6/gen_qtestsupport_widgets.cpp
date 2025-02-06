#include <QEventPoint>
#include <QPoint>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventSequence
#define WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventWidgetSequence
#include <QWidget>
#include <qtestsupport_widgets.h>
#include "gen_qtestsupport_widgets.h"

#ifdef __cplusplus
extern "C" {
#endif

QTest__QTouchEventWidgetSequence* miqt_exec_callback_QTest__QTouchEventWidgetSequence_stationary(QTest__QTouchEventWidgetSequence*, intptr_t, int);
bool miqt_exec_callback_QTest__QTouchEventWidgetSequence_commit(QTest__QTouchEventWidgetSequence*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTestQTouchEventWidgetSequence final : public QTest::QTouchEventWidgetSequence {
public:

	MiqtVirtualQTestQTouchEventWidgetSequence(const QTest::QTouchEventWidgetSequence& param1): QTest::QTouchEventWidgetSequence(param1) {};

	virtual ~MiqtVirtualQTestQTouchEventWidgetSequence() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stationary = 0;

	// Subclass to allow providing a Go implementation
	virtual QTest::QTouchEventWidgetSequence& stationary(int touchId) override {
		if (handle__stationary == 0) {
			return QTest__QTouchEventWidgetSequence::stationary(touchId);
		}
		
		int sigval1 = touchId;

		QTest__QTouchEventWidgetSequence* callback_return_value = miqt_exec_callback_QTest__QTouchEventWidgetSequence_stationary(this, handle__stationary, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTest__QTouchEventWidgetSequence* virtualbase_stationary(int touchId) {

		QTest::QTouchEventWidgetSequence& _ret = QTest__QTouchEventWidgetSequence::stationary(static_cast<int>(touchId));
		// Cast returned reference into pointer
		return &_ret;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__commit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool commit(bool processEvents) override {
		if (handle__commit == 0) {
			return QTest__QTouchEventWidgetSequence::commit(processEvents);
		}
		
		bool sigval1 = processEvents;

		bool callback_return_value = miqt_exec_callback_QTest__QTouchEventWidgetSequence_commit(this, handle__commit, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_commit(bool processEvents) {

		return QTest__QTouchEventWidgetSequence::commit(processEvents);

	}

	// Wrappers to allow calling protected methods:
	friend QEventPoint* QTest__QTouchEventWidgetSequence_protectedbase_point(bool* _dynamic_cast_ok, void* self, int touchId);
	friend QEventPoint* QTest__QTouchEventWidgetSequence_protectedbase_pointOrPreviousPoint(bool* _dynamic_cast_ok, void* self, int touchId);
};

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_new(QTest__QTouchEventWidgetSequence* param1) {
	return new MiqtVirtualQTestQTouchEventWidgetSequence(*param1);
}

void QTest__QTouchEventWidgetSequence_virtbase(QTest__QTouchEventWidgetSequence* src, QTest::QTouchEventSequence** outptr_QTest__QTouchEventSequence) {
	*outptr_QTest__QTouchEventSequence = static_cast<QTest::QTouchEventSequence*>(src);
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_press(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt) {
	QTest::QTouchEventWidgetSequence& _ret = self->press(static_cast<int>(touchId), *pt);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_move(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt) {
	QTest::QTouchEventWidgetSequence& _ret = self->move(static_cast<int>(touchId), *pt);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_release(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt) {
	QTest::QTouchEventWidgetSequence& _ret = self->release(static_cast<int>(touchId), *pt);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_stationary(QTest__QTouchEventWidgetSequence* self, int touchId) {
	QTest::QTouchEventWidgetSequence& _ret = self->stationary(static_cast<int>(touchId));
	// Cast returned reference into pointer
	return &_ret;
}

bool QTest__QTouchEventWidgetSequence_commit(QTest__QTouchEventWidgetSequence* self, bool processEvents) {
	return self->commit(processEvents);
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_press3(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt, QWidget* widget) {
	QTest::QTouchEventWidgetSequence& _ret = self->press(static_cast<int>(touchId), *pt, widget);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_move3(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt, QWidget* widget) {
	QTest::QTouchEventWidgetSequence& _ret = self->move(static_cast<int>(touchId), *pt, widget);
	// Cast returned reference into pointer
	return &_ret;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_release3(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt, QWidget* widget) {
	QTest::QTouchEventWidgetSequence& _ret = self->release(static_cast<int>(touchId), *pt, widget);
	// Cast returned reference into pointer
	return &_ret;
}

bool QTest__QTouchEventWidgetSequence_override_virtual_stationary(void* self, intptr_t slot) {
	MiqtVirtualQTestQTouchEventWidgetSequence* self_cast = dynamic_cast<MiqtVirtualQTestQTouchEventWidgetSequence*>( (QTest__QTouchEventWidgetSequence*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__stationary = slot;
	return true;
}

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_virtualbase_stationary(void* self, int touchId) {
	return ( (MiqtVirtualQTestQTouchEventWidgetSequence*)(self) )->virtualbase_stationary(touchId);
}

bool QTest__QTouchEventWidgetSequence_override_virtual_commit(void* self, intptr_t slot) {
	MiqtVirtualQTestQTouchEventWidgetSequence* self_cast = dynamic_cast<MiqtVirtualQTestQTouchEventWidgetSequence*>( (QTest__QTouchEventWidgetSequence*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__commit = slot;
	return true;
}

bool QTest__QTouchEventWidgetSequence_virtualbase_commit(void* self, bool processEvents) {
	return ( (MiqtVirtualQTestQTouchEventWidgetSequence*)(self) )->virtualbase_commit(processEvents);
}

QEventPoint* QTest__QTouchEventWidgetSequence_protectedbase_point(bool* _dynamic_cast_ok, void* self, int touchId) {
	MiqtVirtualQTestQTouchEventWidgetSequence* self_cast = dynamic_cast<MiqtVirtualQTestQTouchEventWidgetSequence*>( (QTest__QTouchEventWidgetSequence*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	QEventPoint& _ret = self_cast->point(static_cast<int>(touchId));
	// Cast returned reference into pointer
	return &_ret;

}

QEventPoint* QTest__QTouchEventWidgetSequence_protectedbase_pointOrPreviousPoint(bool* _dynamic_cast_ok, void* self, int touchId) {
	MiqtVirtualQTestQTouchEventWidgetSequence* self_cast = dynamic_cast<MiqtVirtualQTestQTouchEventWidgetSequence*>( (QTest__QTouchEventWidgetSequence*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	QEventPoint& _ret = self_cast->pointOrPreviousPoint(static_cast<int>(touchId));
	// Cast returned reference into pointer
	return &_ret;

}

void QTest__QTouchEventWidgetSequence_delete(QTest__QTouchEventWidgetSequence* self) {
	delete self;
}

