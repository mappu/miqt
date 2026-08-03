#include <QChildEvent>
#include <QEvent>
#include <QFont>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPen>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_QwtEventPattern__KeyPattern
#define WORKAROUND_INNER_CLASS_DEFINITION_QwtEventPattern__MousePattern
#include <qwt_picker.h>
#include "gen_qwt_picker.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtPicker_activated(intptr_t, bool);
void miqt_exec_callback_QwtPicker_appended(intptr_t, QPoint*);
void miqt_exec_callback_QwtPicker_moved(intptr_t, QPoint*);
void miqt_exec_callback_QwtPicker_removed(intptr_t, QPoint*);
bool miqt_exec_callback_QwtPicker_eventFilter(QwtPicker*, intptr_t, QObject*, QEvent*);
QPainterPath* miqt_exec_callback_QwtPicker_pickArea(const QwtPicker*, intptr_t);
void miqt_exec_callback_QwtPicker_drawRubberBand(const QwtPicker*, intptr_t, QPainter*);
void miqt_exec_callback_QwtPicker_drawTracker(const QwtPicker*, intptr_t, QPainter*);
QRegion* miqt_exec_callback_QwtPicker_rubberBandMask(const QwtPicker*, intptr_t);
QwtText* miqt_exec_callback_QwtPicker_trackerText(const QwtPicker*, intptr_t, QPoint*);
QRect* miqt_exec_callback_QwtPicker_trackerRect(const QwtPicker*, intptr_t, QFont*);
void miqt_exec_callback_QwtPicker_transition(QwtPicker*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPicker_begin(QwtPicker*, intptr_t);
void miqt_exec_callback_QwtPicker_append(QwtPicker*, intptr_t, QPoint*);
void miqt_exec_callback_QwtPicker_move(QwtPicker*, intptr_t, QPoint*);
void miqt_exec_callback_QwtPicker_remove(QwtPicker*, intptr_t);
bool miqt_exec_callback_QwtPicker_end(QwtPicker*, intptr_t, bool);
void miqt_exec_callback_QwtPicker_reset(QwtPicker*, intptr_t);
void miqt_exec_callback_QwtPicker_widgetMousePressEvent(QwtPicker*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPicker_widgetMouseReleaseEvent(QwtPicker*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPicker_widgetMouseDoubleClickEvent(QwtPicker*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPicker_widgetMouseMoveEvent(QwtPicker*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPicker_widgetWheelEvent(QwtPicker*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtPicker_widgetKeyPressEvent(QwtPicker*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPicker_widgetKeyReleaseEvent(QwtPicker*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPicker_widgetEnterEvent(QwtPicker*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPicker_widgetLeaveEvent(QwtPicker*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPicker_stretchSelection(QwtPicker*, intptr_t, QSize*, QSize*);
void miqt_exec_callback_QwtPicker_updateDisplay(QwtPicker*, intptr_t);
bool miqt_exec_callback_QwtPicker_event(QwtPicker*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPicker_timerEvent(QwtPicker*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtPicker_childEvent(QwtPicker*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtPicker_customEvent(QwtPicker*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPicker_connectNotify(QwtPicker*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtPicker_disconnectNotify(QwtPicker*, intptr_t, QMetaMethod*);
bool miqt_exec_callback_QwtPicker_mouseMatch2(const QwtPicker*, intptr_t, QwtEventPattern__MousePattern*, QMouseEvent*);
bool miqt_exec_callback_QwtPicker_keyMatch2(const QwtPicker*, intptr_t, QwtEventPattern__KeyPattern*, QKeyEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPicker final : public QwtPicker {
public:

	MiqtVirtualQwtPicker(QWidget* parent): QwtPicker(parent) {}
	MiqtVirtualQwtPicker(QwtPicker::RubberBand rubberBand, QwtPicker::DisplayMode trackerMode, QWidget* param3): QwtPicker(rubberBand, trackerMode, param3) {}

	virtual ~MiqtVirtualQwtPicker() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QwtPicker::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QwtPicker_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPicker_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pickArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath pickArea() const override {
		if (handle__pickArea == 0) {
			return QwtPicker::pickArea();
		}

		QPainterPath* callback_return_value = miqt_exec_callback_QwtPicker_pickArea(this, handle__pickArea);
		return *callback_return_value;
	}

	friend QPainterPath* QwtPicker_virtualbase_pickArea(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawRubberBand = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawRubberBand(QPainter* param1) const override {
		if (handle__drawRubberBand == 0) {
			QwtPicker::drawRubberBand(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtPicker_drawRubberBand(this, handle__drawRubberBand, sigval1);

	}

	friend void QwtPicker_virtualbase_drawRubberBand(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawTracker = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTracker(QPainter* param1) const override {
		if (handle__drawTracker == 0) {
			QwtPicker::drawTracker(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtPicker_drawTracker(this, handle__drawTracker, sigval1);

	}

	friend void QwtPicker_virtualbase_drawTracker(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rubberBandMask = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion rubberBandMask() const override {
		if (handle__rubberBandMask == 0) {
			return QwtPicker::rubberBandMask();
		}

		QRegion* callback_return_value = miqt_exec_callback_QwtPicker_rubberBandMask(this, handle__rubberBandMask);
		return *callback_return_value;
	}

	friend QRegion* QwtPicker_virtualbase_rubberBandMask(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__trackerText = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtText trackerText(const QPoint& pos) const override {
		if (handle__trackerText == 0) {
			return QwtPicker::trackerText(pos);
		}

		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
		QwtText* callback_return_value = miqt_exec_callback_QwtPicker_trackerText(this, handle__trackerText, sigval1);
		return *callback_return_value;
	}

	friend QwtText* QwtPicker_virtualbase_trackerText(const void* self, QPoint* pos);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__trackerRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect trackerRect(const QFont& param1) const override {
		if (handle__trackerRect == 0) {
			return QwtPicker::trackerRect(param1);
		}

		const QFont& param1_ret = param1;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&param1_ret);
		QRect* callback_return_value = miqt_exec_callback_QwtPicker_trackerRect(this, handle__trackerRect, sigval1);
		return *callback_return_value;
	}

	friend QRect* QwtPicker_virtualbase_trackerRect(const void* self, QFont* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__transition = 0;

	// Subclass to allow providing a Go implementation
	virtual void transition(const QEvent* param1) override {
		if (handle__transition == 0) {
			QwtPicker::transition(param1);
			return;
		}

		QEvent* sigval1 = (QEvent*) param1;
		miqt_exec_callback_QwtPicker_transition(this, handle__transition, sigval1);

	}

	friend void QwtPicker_virtualbase_transition(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__begin = 0;

	// Subclass to allow providing a Go implementation
	virtual void begin() override {
		if (handle__begin == 0) {
			QwtPicker::begin();
			return;
		}

		miqt_exec_callback_QwtPicker_begin(this, handle__begin);

	}

	friend void QwtPicker_virtualbase_begin(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__append = 0;

	// Subclass to allow providing a Go implementation
	virtual void append(const QPoint& param1) override {
		if (handle__append == 0) {
			QwtPicker::append(param1);
			return;
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		miqt_exec_callback_QwtPicker_append(this, handle__append, sigval1);

	}

	friend void QwtPicker_virtualbase_append(void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__move = 0;

	// Subclass to allow providing a Go implementation
	virtual void move(const QPoint& param1) override {
		if (handle__move == 0) {
			QwtPicker::move(param1);
			return;
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		miqt_exec_callback_QwtPicker_move(this, handle__move, sigval1);

	}

	friend void QwtPicker_virtualbase_move(void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__remove = 0;

	// Subclass to allow providing a Go implementation
	virtual void remove() override {
		if (handle__remove == 0) {
			QwtPicker::remove();
			return;
		}

		miqt_exec_callback_QwtPicker_remove(this, handle__remove);

	}

	friend void QwtPicker_virtualbase_remove(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__end = 0;

	// Subclass to allow providing a Go implementation
	virtual bool end(bool ok) override {
		if (handle__end == 0) {
			return QwtPicker::end(ok);
		}

		bool sigval1 = ok;
		bool callback_return_value = miqt_exec_callback_QwtPicker_end(this, handle__end, sigval1);
		return callback_return_value;
	}

	friend bool QwtPicker_virtualbase_end(void* self, bool ok);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__reset == 0) {
			QwtPicker::reset();
			return;
		}

		miqt_exec_callback_QwtPicker_reset(this, handle__reset);

	}

	friend void QwtPicker_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMousePressEvent(QMouseEvent* param1) override {
		if (handle__widgetMousePressEvent == 0) {
			QwtPicker::widgetMousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPicker_widgetMousePressEvent(this, handle__widgetMousePressEvent, sigval1);

	}

	friend void QwtPicker_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__widgetMouseReleaseEvent == 0) {
			QwtPicker::widgetMouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPicker_widgetMouseReleaseEvent(this, handle__widgetMouseReleaseEvent, sigval1);

	}

	friend void QwtPicker_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__widgetMouseDoubleClickEvent == 0) {
			QwtPicker::widgetMouseDoubleClickEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPicker_widgetMouseDoubleClickEvent(this, handle__widgetMouseDoubleClickEvent, sigval1);

	}

	friend void QwtPicker_virtualbase_widgetMouseDoubleClickEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseMoveEvent(QMouseEvent* param1) override {
		if (handle__widgetMouseMoveEvent == 0) {
			QwtPicker::widgetMouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPicker_widgetMouseMoveEvent(this, handle__widgetMouseMoveEvent, sigval1);

	}

	friend void QwtPicker_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetWheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetWheelEvent(QWheelEvent* param1) override {
		if (handle__widgetWheelEvent == 0) {
			QwtPicker::widgetWheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QwtPicker_widgetWheelEvent(this, handle__widgetWheelEvent, sigval1);

	}

	friend void QwtPicker_virtualbase_widgetWheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetKeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetKeyPressEvent(QKeyEvent* param1) override {
		if (handle__widgetKeyPressEvent == 0) {
			QwtPicker::widgetKeyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtPicker_widgetKeyPressEvent(this, handle__widgetKeyPressEvent, sigval1);

	}

	friend void QwtPicker_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetKeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetKeyReleaseEvent(QKeyEvent* param1) override {
		if (handle__widgetKeyReleaseEvent == 0) {
			QwtPicker::widgetKeyReleaseEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtPicker_widgetKeyReleaseEvent(this, handle__widgetKeyReleaseEvent, sigval1);

	}

	friend void QwtPicker_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetEnterEvent(QEvent* param1) override {
		if (handle__widgetEnterEvent == 0) {
			QwtPicker::widgetEnterEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtPicker_widgetEnterEvent(this, handle__widgetEnterEvent, sigval1);

	}

	friend void QwtPicker_virtualbase_widgetEnterEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetLeaveEvent(QEvent* param1) override {
		if (handle__widgetLeaveEvent == 0) {
			QwtPicker::widgetLeaveEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtPicker_widgetLeaveEvent(this, handle__widgetLeaveEvent, sigval1);

	}

	friend void QwtPicker_virtualbase_widgetLeaveEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stretchSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void stretchSelection(const QSize& oldSize, const QSize& newSize) override {
		if (handle__stretchSelection == 0) {
			QwtPicker::stretchSelection(oldSize, newSize);
			return;
		}

		const QSize& oldSize_ret = oldSize;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&oldSize_ret);
		const QSize& newSize_ret = newSize;
		// Cast returned reference into pointer
		QSize* sigval2 = const_cast<QSize*>(&newSize_ret);
		miqt_exec_callback_QwtPicker_stretchSelection(this, handle__stretchSelection, sigval1, sigval2);

	}

	friend void QwtPicker_virtualbase_stretchSelection(void* self, QSize* oldSize, QSize* newSize);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateDisplay = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateDisplay() override {
		if (handle__updateDisplay == 0) {
			QwtPicker::updateDisplay();
			return;
		}

		miqt_exec_callback_QwtPicker_updateDisplay(this, handle__updateDisplay);

	}

	friend void QwtPicker_virtualbase_updateDisplay(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QwtPicker::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtPicker_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtPicker_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtPicker::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtPicker_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtPicker_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtPicker::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtPicker_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtPicker_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtPicker::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPicker_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtPicker_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtPicker::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPicker_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtPicker_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtPicker::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPicker_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtPicker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMatch2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool mouseMatch(const QwtEventPattern::MousePattern& param1, const QMouseEvent* param2) const override {
		if (handle__mouseMatch2 == 0) {
			return QwtPicker::mouseMatch(param1, param2);
		}

		const QwtEventPattern::MousePattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern__MousePattern* sigval1 = const_cast<QwtEventPattern::MousePattern*>(&param1_ret);
		QMouseEvent* sigval2 = (QMouseEvent*) param2;
		bool callback_return_value = miqt_exec_callback_QwtPicker_mouseMatch2(this, handle__mouseMatch2, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPicker_virtualbase_mouseMatch2(const void* self, QwtEventPattern__MousePattern* param1, QMouseEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyMatch2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool keyMatch(const QwtEventPattern::KeyPattern& param1, const QKeyEvent* param2) const override {
		if (handle__keyMatch2 == 0) {
			return QwtPicker::keyMatch(param1, param2);
		}

		const QwtEventPattern::KeyPattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern__KeyPattern* sigval1 = const_cast<QwtEventPattern::KeyPattern*>(&param1_ret);
		QKeyEvent* sigval2 = (QKeyEvent*) param2;
		bool callback_return_value = miqt_exec_callback_QwtPicker_keyMatch2(this, handle__keyMatch2, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPicker_virtualbase_keyMatch2(const void* self, QwtEventPattern__KeyPattern* param1, QKeyEvent* param2);

	// Wrappers to allow calling protected methods:
	friend QwtWidgetOverlay* QwtPicker_protectedbase_rubberBandOverlay(bool* _dynamic_cast_ok, const void* self);
	friend QwtWidgetOverlay* QwtPicker_protectedbase_trackerOverlay(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QwtPicker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPicker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPicker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtPicker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtPicker* QwtPicker_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtPicker(parent);
}

QwtPicker* QwtPicker_new2(int rubberBand, int trackerMode, QWidget* param3) {
	return new (std::nothrow) MiqtVirtualQwtPicker(static_cast<QwtPicker::RubberBand>(rubberBand), static_cast<QwtPicker::DisplayMode>(trackerMode), param3);
}

void QwtPicker_virtbase(QwtPicker* src, QObject** outptr_QObject, QwtEventPattern** outptr_QwtEventPattern) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QwtEventPattern = static_cast<QwtEventPattern*>(src);
}

QMetaObject* QwtPicker_metaObject(const QwtPicker* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtPicker_metacast(QwtPicker* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtPicker_tr(const char* s) {
	QString _ret = QwtPicker::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPicker_trUtf8(const char* s) {
	QString _ret = QwtPicker::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtPicker_setStateMachine(QwtPicker* self, QwtPickerMachine* stateMachine) {
	self->setStateMachine(stateMachine);
}

QwtPickerMachine* QwtPicker_stateMachine(const QwtPicker* self) {
	return (QwtPickerMachine*) self->stateMachine();
}

QwtPickerMachine* QwtPicker_stateMachine2(QwtPicker* self) {
	return self->stateMachine();
}

void QwtPicker_setRubberBand(QwtPicker* self, int rubberBand) {
	self->setRubberBand(static_cast<QwtPicker::RubberBand>(rubberBand));
}

int QwtPicker_rubberBand(const QwtPicker* self) {
	QwtPicker::RubberBand _ret = self->rubberBand();
	return static_cast<int>(_ret);
}

void QwtPicker_setTrackerMode(QwtPicker* self, int trackerMode) {
	self->setTrackerMode(static_cast<QwtPicker::DisplayMode>(trackerMode));
}

int QwtPicker_trackerMode(const QwtPicker* self) {
	QwtPicker::DisplayMode _ret = self->trackerMode();
	return static_cast<int>(_ret);
}

void QwtPicker_setResizeMode(QwtPicker* self, int resizeMode) {
	self->setResizeMode(static_cast<QwtPicker::ResizeMode>(resizeMode));
}

int QwtPicker_resizeMode(const QwtPicker* self) {
	QwtPicker::ResizeMode _ret = self->resizeMode();
	return static_cast<int>(_ret);
}

void QwtPicker_setRubberBandPen(QwtPicker* self, QPen* rubberBandPen) {
	self->setRubberBandPen(*rubberBandPen);
}

QPen* QwtPicker_rubberBandPen(const QwtPicker* self) {
	return new QPen(self->rubberBandPen());
}

void QwtPicker_setTrackerPen(QwtPicker* self, QPen* trackerPen) {
	self->setTrackerPen(*trackerPen);
}

QPen* QwtPicker_trackerPen(const QwtPicker* self) {
	return new QPen(self->trackerPen());
}

void QwtPicker_setTrackerFont(QwtPicker* self, QFont* trackerFont) {
	self->setTrackerFont(*trackerFont);
}

QFont* QwtPicker_trackerFont(const QwtPicker* self) {
	return new QFont(self->trackerFont());
}

bool QwtPicker_isEnabled(const QwtPicker* self) {
	return self->isEnabled();
}

bool QwtPicker_isActive(const QwtPicker* self) {
	return self->isActive();
}

bool QwtPicker_eventFilter(QwtPicker* self, QObject* param1, QEvent* param2) {
	return self->eventFilter(param1, param2);
}

QWidget* QwtPicker_parentWidget(QwtPicker* self) {
	return self->parentWidget();
}

QWidget* QwtPicker_parentWidget2(const QwtPicker* self) {
	return (QWidget*) self->parentWidget();
}

QPainterPath* QwtPicker_pickArea(const QwtPicker* self) {
	return new QPainterPath(self->pickArea());
}

void QwtPicker_drawRubberBand(const QwtPicker* self, QPainter* param1) {
	self->drawRubberBand(param1);
}

void QwtPicker_drawTracker(const QwtPicker* self, QPainter* param1) {
	self->drawTracker(param1);
}

QRegion* QwtPicker_rubberBandMask(const QwtPicker* self) {
	return new QRegion(self->rubberBandMask());
}

QwtText* QwtPicker_trackerText(const QwtPicker* self, QPoint* pos) {
	return new QwtText(self->trackerText(*pos));
}

QPoint* QwtPicker_trackerPosition(const QwtPicker* self) {
	return new QPoint(self->trackerPosition());
}

QRect* QwtPicker_trackerRect(const QwtPicker* self, QFont* param1) {
	return new QRect(self->trackerRect(*param1));
}

void QwtPicker_setEnabled(QwtPicker* self, bool enabled) {
	self->setEnabled(enabled);
}

void QwtPicker_activated(QwtPicker* self, bool on) {
	self->activated(on);
}

void QwtPicker_connect_activated(QwtPicker* self, intptr_t slot) {
	QwtPicker::connect(self, static_cast<void (QwtPicker::*)(bool)>(&QwtPicker::activated), self, [=](bool on) {
		bool sigval1 = on;
		miqt_exec_callback_QwtPicker_activated(slot, sigval1);
	});
}

void QwtPicker_appended(QwtPicker* self, QPoint* pos) {
	self->appended(*pos);
}

void QwtPicker_connect_appended(QwtPicker* self, intptr_t slot) {
	QwtPicker::connect(self, static_cast<void (QwtPicker::*)(const QPoint&)>(&QwtPicker::appended), self, [=](const QPoint& pos) {
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
		miqt_exec_callback_QwtPicker_appended(slot, sigval1);
	});
}

void QwtPicker_moved(QwtPicker* self, QPoint* pos) {
	self->moved(*pos);
}

void QwtPicker_connect_moved(QwtPicker* self, intptr_t slot) {
	QwtPicker::connect(self, static_cast<void (QwtPicker::*)(const QPoint&)>(&QwtPicker::moved), self, [=](const QPoint& pos) {
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
		miqt_exec_callback_QwtPicker_moved(slot, sigval1);
	});
}

void QwtPicker_removed(QwtPicker* self, QPoint* pos) {
	self->removed(*pos);
}

void QwtPicker_connect_removed(QwtPicker* self, intptr_t slot) {
	QwtPicker::connect(self, static_cast<void (QwtPicker::*)(const QPoint&)>(&QwtPicker::removed), self, [=](const QPoint& pos) {
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
		miqt_exec_callback_QwtPicker_removed(slot, sigval1);
	});
}

struct miqt_string QwtPicker_tr2(const char* s, const char* c) {
	QString _ret = QwtPicker::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPicker_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtPicker::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPicker_trUtf82(const char* s, const char* c) {
	QString _ret = QwtPicker::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPicker_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtPicker::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtPicker_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtPicker_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::eventFilter(param1, param2);
}

bool QwtPicker_override_virtual_pickArea(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pickArea = slot;
	return true;
}

QPainterPath* QwtPicker_virtualbase_pickArea(const void* self) {
	return new QPainterPath(static_cast<const MiqtVirtualQwtPicker*>(self)->QwtPicker::pickArea());
}

bool QwtPicker_override_virtual_drawRubberBand(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawRubberBand = slot;
	return true;
}

void QwtPicker_virtualbase_drawRubberBand(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtPicker*>(self)->QwtPicker::drawRubberBand(param1);
}

bool QwtPicker_override_virtual_drawTracker(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawTracker = slot;
	return true;
}

void QwtPicker_virtualbase_drawTracker(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtPicker*>(self)->QwtPicker::drawTracker(param1);
}

bool QwtPicker_override_virtual_rubberBandMask(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rubberBandMask = slot;
	return true;
}

QRegion* QwtPicker_virtualbase_rubberBandMask(const void* self) {
	return new QRegion(static_cast<const MiqtVirtualQwtPicker*>(self)->QwtPicker::rubberBandMask());
}

bool QwtPicker_override_virtual_trackerText(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__trackerText = slot;
	return true;
}

QwtText* QwtPicker_virtualbase_trackerText(const void* self, QPoint* pos) {
	return new QwtText(static_cast<const MiqtVirtualQwtPicker*>(self)->QwtPicker::trackerText(*pos));
}

bool QwtPicker_override_virtual_trackerRect(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__trackerRect = slot;
	return true;
}

QRect* QwtPicker_virtualbase_trackerRect(const void* self, QFont* param1) {
	return new QRect(static_cast<const MiqtVirtualQwtPicker*>(self)->QwtPicker::trackerRect(*param1));
}

bool QwtPicker_override_virtual_transition(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__transition = slot;
	return true;
}

void QwtPicker_virtualbase_transition(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::transition(param1);
}

bool QwtPicker_override_virtual_begin(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__begin = slot;
	return true;
}

void QwtPicker_virtualbase_begin(void* self) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::begin();
}

bool QwtPicker_override_virtual_append(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__append = slot;
	return true;
}

void QwtPicker_virtualbase_append(void* self, QPoint* param1) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::append(*param1);
}

bool QwtPicker_override_virtual_move(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__move = slot;
	return true;
}

void QwtPicker_virtualbase_move(void* self, QPoint* param1) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::move(*param1);
}

bool QwtPicker_override_virtual_remove(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__remove = slot;
	return true;
}

void QwtPicker_virtualbase_remove(void* self) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::remove();
}

bool QwtPicker_override_virtual_end(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__end = slot;
	return true;
}

bool QwtPicker_virtualbase_end(void* self, bool ok) {
	return static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::end(ok);
}

bool QwtPicker_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = slot;
	return true;
}

void QwtPicker_virtualbase_reset(void* self) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::reset();
}

bool QwtPicker_override_virtual_widgetMousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMousePressEvent = slot;
	return true;
}

void QwtPicker_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::widgetMousePressEvent(param1);
}

bool QwtPicker_override_virtual_widgetMouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseReleaseEvent = slot;
	return true;
}

void QwtPicker_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::widgetMouseReleaseEvent(param1);
}

bool QwtPicker_override_virtual_widgetMouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseDoubleClickEvent = slot;
	return true;
}

void QwtPicker_virtualbase_widgetMouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::widgetMouseDoubleClickEvent(param1);
}

bool QwtPicker_override_virtual_widgetMouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseMoveEvent = slot;
	return true;
}

void QwtPicker_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::widgetMouseMoveEvent(param1);
}

bool QwtPicker_override_virtual_widgetWheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetWheelEvent = slot;
	return true;
}

void QwtPicker_virtualbase_widgetWheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::widgetWheelEvent(param1);
}

bool QwtPicker_override_virtual_widgetKeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetKeyPressEvent = slot;
	return true;
}

void QwtPicker_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::widgetKeyPressEvent(param1);
}

bool QwtPicker_override_virtual_widgetKeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetKeyReleaseEvent = slot;
	return true;
}

void QwtPicker_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::widgetKeyReleaseEvent(param1);
}

bool QwtPicker_override_virtual_widgetEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetEnterEvent = slot;
	return true;
}

void QwtPicker_virtualbase_widgetEnterEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::widgetEnterEvent(param1);
}

bool QwtPicker_override_virtual_widgetLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetLeaveEvent = slot;
	return true;
}

void QwtPicker_virtualbase_widgetLeaveEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::widgetLeaveEvent(param1);
}

bool QwtPicker_override_virtual_stretchSelection(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__stretchSelection = slot;
	return true;
}

void QwtPicker_virtualbase_stretchSelection(void* self, QSize* oldSize, QSize* newSize) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::stretchSelection(*oldSize, *newSize);
}

bool QwtPicker_override_virtual_updateDisplay(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateDisplay = slot;
	return true;
}

void QwtPicker_virtualbase_updateDisplay(void* self) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::updateDisplay();
}

bool QwtPicker_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtPicker_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::event(event);
}

bool QwtPicker_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtPicker_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::timerEvent(event);
}

bool QwtPicker_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtPicker_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::childEvent(event);
}

bool QwtPicker_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtPicker_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::customEvent(event);
}

bool QwtPicker_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtPicker_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::connectNotify(*signal);
}

bool QwtPicker_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtPicker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPicker*>(self)->QwtPicker::disconnectNotify(*signal);
}

bool QwtPicker_override_virtual_mouseMatch2(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMatch2 = slot;
	return true;
}

bool QwtPicker_virtualbase_mouseMatch2(const void* self, QwtEventPattern__MousePattern* param1, QMouseEvent* param2) {
	return static_cast<const MiqtVirtualQwtPicker*>(self)->QwtPicker::mouseMatch(*param1, param2);
}

bool QwtPicker_override_virtual_keyMatch2(void* self, intptr_t slot) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyMatch2 = slot;
	return true;
}

bool QwtPicker_virtualbase_keyMatch2(const void* self, QwtEventPattern__KeyPattern* param1, QKeyEvent* param2) {
	return static_cast<const MiqtVirtualQwtPicker*>(self)->QwtPicker::keyMatch(*param1, param2);
}

QwtWidgetOverlay* QwtPicker_protectedbase_rubberBandOverlay(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return (QwtWidgetOverlay*) self_cast->rubberBandOverlay();
}

QwtWidgetOverlay* QwtPicker_protectedbase_trackerOverlay(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return (QwtWidgetOverlay*) self_cast->trackerOverlay();
}

QObject* QwtPicker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtPicker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtPicker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtPicker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtPicker* self_cast = dynamic_cast<MiqtVirtualQwtPicker*>( (QwtPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtPicker_delete(QwtPicker* self) {
	delete self;
}

