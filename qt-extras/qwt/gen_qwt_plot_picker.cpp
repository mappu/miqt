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
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVector>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_QwtEventPattern__KeyPattern
#define WORKAROUND_INNER_CLASS_DEFINITION_QwtEventPattern__MousePattern
#include <qwt_plot_picker.h>
#include "gen_qwt_plot_picker.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtPlotPicker_selected(intptr_t, QPointF*);
void miqt_exec_callback_QwtPlotPicker_selectedWithRect(intptr_t, QRectF*);
void miqt_exec_callback_QwtPlotPicker_selectedWithPa(intptr_t, struct miqt_array /* of QPointF* */ );
void miqt_exec_callback_QwtPlotPicker_appended(intptr_t, QPointF*);
void miqt_exec_callback_QwtPlotPicker_moved(intptr_t, QPointF*);
void miqt_exec_callback_QwtPlotPicker_setAxis(QwtPlotPicker*, intptr_t, int, int);
QwtText* miqt_exec_callback_QwtPlotPicker_trackerText(const QwtPlotPicker*, intptr_t, QPoint*);
QwtText* miqt_exec_callback_QwtPlotPicker_trackerTextF(const QwtPlotPicker*, intptr_t, QPointF*);
void miqt_exec_callback_QwtPlotPicker_move(QwtPlotPicker*, intptr_t, QPoint*);
void miqt_exec_callback_QwtPlotPicker_append(QwtPlotPicker*, intptr_t, QPoint*);
bool miqt_exec_callback_QwtPlotPicker_end(QwtPlotPicker*, intptr_t, bool);
bool miqt_exec_callback_QwtPlotPicker_eventFilter(QwtPlotPicker*, intptr_t, QObject*, QEvent*);
QPainterPath* miqt_exec_callback_QwtPlotPicker_pickArea(const QwtPlotPicker*, intptr_t);
void miqt_exec_callback_QwtPlotPicker_drawRubberBand(const QwtPlotPicker*, intptr_t, QPainter*);
void miqt_exec_callback_QwtPlotPicker_drawTracker(const QwtPlotPicker*, intptr_t, QPainter*);
QRegion* miqt_exec_callback_QwtPlotPicker_rubberBandMask(const QwtPlotPicker*, intptr_t);
QRect* miqt_exec_callback_QwtPlotPicker_trackerRect(const QwtPlotPicker*, intptr_t, QFont*);
void miqt_exec_callback_QwtPlotPicker_transition(QwtPlotPicker*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotPicker_begin(QwtPlotPicker*, intptr_t);
void miqt_exec_callback_QwtPlotPicker_remove(QwtPlotPicker*, intptr_t);
void miqt_exec_callback_QwtPlotPicker_reset(QwtPlotPicker*, intptr_t);
void miqt_exec_callback_QwtPlotPicker_widgetMousePressEvent(QwtPlotPicker*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotPicker_widgetMouseReleaseEvent(QwtPlotPicker*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotPicker_widgetMouseDoubleClickEvent(QwtPlotPicker*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotPicker_widgetMouseMoveEvent(QwtPlotPicker*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotPicker_widgetWheelEvent(QwtPlotPicker*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtPlotPicker_widgetKeyPressEvent(QwtPlotPicker*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPlotPicker_widgetKeyReleaseEvent(QwtPlotPicker*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPlotPicker_widgetEnterEvent(QwtPlotPicker*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotPicker_widgetLeaveEvent(QwtPlotPicker*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotPicker_stretchSelection(QwtPlotPicker*, intptr_t, QSize*, QSize*);
void miqt_exec_callback_QwtPlotPicker_updateDisplay(QwtPlotPicker*, intptr_t);
bool miqt_exec_callback_QwtPlotPicker_event(QwtPlotPicker*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotPicker_timerEvent(QwtPlotPicker*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtPlotPicker_childEvent(QwtPlotPicker*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtPlotPicker_customEvent(QwtPlotPicker*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotPicker_connectNotify(QwtPlotPicker*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtPlotPicker_disconnectNotify(QwtPlotPicker*, intptr_t, QMetaMethod*);
bool miqt_exec_callback_QwtPlotPicker_mouseMatch2(const QwtPlotPicker*, intptr_t, QwtEventPattern__MousePattern*, QMouseEvent*);
bool miqt_exec_callback_QwtPlotPicker_keyMatch2(const QwtPlotPicker*, intptr_t, QwtEventPattern__KeyPattern*, QKeyEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPlotPicker final : public QwtPlotPicker {
public:

	MiqtVirtualQwtPlotPicker(QWidget* canvas): QwtPlotPicker(canvas) {}
	MiqtVirtualQwtPlotPicker(int xAxis, int yAxis, QWidget* param3): QwtPlotPicker(xAxis, yAxis, param3) {}
	MiqtVirtualQwtPlotPicker(int xAxis, int yAxis, QwtPicker::RubberBand rubberBand, QwtPicker::DisplayMode trackerMode, QWidget* param5): QwtPlotPicker(xAxis, yAxis, rubberBand, trackerMode, param5) {}

	virtual ~MiqtVirtualQwtPlotPicker() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAxis = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAxis(int xAxis, int yAxis) override {
		if (handle__setAxis == 0) {
			QwtPlotPicker::setAxis(xAxis, yAxis);
			return;
		}

		int sigval1 = xAxis;
		int sigval2 = yAxis;
		miqt_exec_callback_QwtPlotPicker_setAxis(this, handle__setAxis, sigval1, sigval2);

	}

	friend void QwtPlotPicker_virtualbase_setAxis(void* self, int xAxis, int yAxis);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__trackerText = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtText trackerText(const QPoint& param1) const override {
		if (handle__trackerText == 0) {
			return QwtPlotPicker::trackerText(param1);
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		QwtText* callback_return_value = miqt_exec_callback_QwtPlotPicker_trackerText(this, handle__trackerText, sigval1);
		return *callback_return_value;
	}

	friend QwtText* QwtPlotPicker_virtualbase_trackerText(const void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__trackerTextF = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtText trackerTextF(const QPointF& param1) const override {
		if (handle__trackerTextF == 0) {
			return QwtPlotPicker::trackerTextF(param1);
		}

		const QPointF& param1_ret = param1;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&param1_ret);
		QwtText* callback_return_value = miqt_exec_callback_QwtPlotPicker_trackerTextF(this, handle__trackerTextF, sigval1);
		return *callback_return_value;
	}

	friend QwtText* QwtPlotPicker_virtualbase_trackerTextF(const void* self, QPointF* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__move = 0;

	// Subclass to allow providing a Go implementation
	virtual void move(const QPoint& param1) override {
		if (handle__move == 0) {
			QwtPlotPicker::move(param1);
			return;
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		miqt_exec_callback_QwtPlotPicker_move(this, handle__move, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_move(void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__append = 0;

	// Subclass to allow providing a Go implementation
	virtual void append(const QPoint& param1) override {
		if (handle__append == 0) {
			QwtPlotPicker::append(param1);
			return;
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		miqt_exec_callback_QwtPlotPicker_append(this, handle__append, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_append(void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__end = 0;

	// Subclass to allow providing a Go implementation
	virtual bool end(bool ok) override {
		if (handle__end == 0) {
			return QwtPlotPicker::end(ok);
		}

		bool sigval1 = ok;
		bool callback_return_value = miqt_exec_callback_QwtPlotPicker_end(this, handle__end, sigval1);
		return callback_return_value;
	}

	friend bool QwtPlotPicker_virtualbase_end(void* self, bool ok);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QwtPlotPicker::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QwtPlotPicker_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPlotPicker_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pickArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath pickArea() const override {
		if (handle__pickArea == 0) {
			return QwtPlotPicker::pickArea();
		}

		QPainterPath* callback_return_value = miqt_exec_callback_QwtPlotPicker_pickArea(this, handle__pickArea);
		return *callback_return_value;
	}

	friend QPainterPath* QwtPlotPicker_virtualbase_pickArea(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawRubberBand = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawRubberBand(QPainter* param1) const override {
		if (handle__drawRubberBand == 0) {
			QwtPlotPicker::drawRubberBand(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtPlotPicker_drawRubberBand(this, handle__drawRubberBand, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_drawRubberBand(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawTracker = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawTracker(QPainter* param1) const override {
		if (handle__drawTracker == 0) {
			QwtPlotPicker::drawTracker(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtPlotPicker_drawTracker(this, handle__drawTracker, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_drawTracker(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rubberBandMask = 0;

	// Subclass to allow providing a Go implementation
	virtual QRegion rubberBandMask() const override {
		if (handle__rubberBandMask == 0) {
			return QwtPlotPicker::rubberBandMask();
		}

		QRegion* callback_return_value = miqt_exec_callback_QwtPlotPicker_rubberBandMask(this, handle__rubberBandMask);
		return *callback_return_value;
	}

	friend QRegion* QwtPlotPicker_virtualbase_rubberBandMask(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__trackerRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect trackerRect(const QFont& param1) const override {
		if (handle__trackerRect == 0) {
			return QwtPlotPicker::trackerRect(param1);
		}

		const QFont& param1_ret = param1;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&param1_ret);
		QRect* callback_return_value = miqt_exec_callback_QwtPlotPicker_trackerRect(this, handle__trackerRect, sigval1);
		return *callback_return_value;
	}

	friend QRect* QwtPlotPicker_virtualbase_trackerRect(const void* self, QFont* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__transition = 0;

	// Subclass to allow providing a Go implementation
	virtual void transition(const QEvent* param1) override {
		if (handle__transition == 0) {
			QwtPlotPicker::transition(param1);
			return;
		}

		QEvent* sigval1 = (QEvent*) param1;
		miqt_exec_callback_QwtPlotPicker_transition(this, handle__transition, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_transition(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__begin = 0;

	// Subclass to allow providing a Go implementation
	virtual void begin() override {
		if (handle__begin == 0) {
			QwtPlotPicker::begin();
			return;
		}

		miqt_exec_callback_QwtPlotPicker_begin(this, handle__begin);

	}

	friend void QwtPlotPicker_virtualbase_begin(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__remove = 0;

	// Subclass to allow providing a Go implementation
	virtual void remove() override {
		if (handle__remove == 0) {
			QwtPlotPicker::remove();
			return;
		}

		miqt_exec_callback_QwtPlotPicker_remove(this, handle__remove);

	}

	friend void QwtPlotPicker_virtualbase_remove(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__reset == 0) {
			QwtPlotPicker::reset();
			return;
		}

		miqt_exec_callback_QwtPlotPicker_reset(this, handle__reset);

	}

	friend void QwtPlotPicker_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMousePressEvent(QMouseEvent* param1) override {
		if (handle__widgetMousePressEvent == 0) {
			QwtPlotPicker::widgetMousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPicker_widgetMousePressEvent(this, handle__widgetMousePressEvent, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__widgetMouseReleaseEvent == 0) {
			QwtPlotPicker::widgetMouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPicker_widgetMouseReleaseEvent(this, handle__widgetMouseReleaseEvent, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__widgetMouseDoubleClickEvent == 0) {
			QwtPlotPicker::widgetMouseDoubleClickEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPicker_widgetMouseDoubleClickEvent(this, handle__widgetMouseDoubleClickEvent, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_widgetMouseDoubleClickEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseMoveEvent(QMouseEvent* param1) override {
		if (handle__widgetMouseMoveEvent == 0) {
			QwtPlotPicker::widgetMouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPicker_widgetMouseMoveEvent(this, handle__widgetMouseMoveEvent, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetWheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetWheelEvent(QWheelEvent* param1) override {
		if (handle__widgetWheelEvent == 0) {
			QwtPlotPicker::widgetWheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPicker_widgetWheelEvent(this, handle__widgetWheelEvent, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_widgetWheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetKeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetKeyPressEvent(QKeyEvent* param1) override {
		if (handle__widgetKeyPressEvent == 0) {
			QwtPlotPicker::widgetKeyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPicker_widgetKeyPressEvent(this, handle__widgetKeyPressEvent, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetKeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetKeyReleaseEvent(QKeyEvent* param1) override {
		if (handle__widgetKeyReleaseEvent == 0) {
			QwtPlotPicker::widgetKeyReleaseEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPicker_widgetKeyReleaseEvent(this, handle__widgetKeyReleaseEvent, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetEnterEvent(QEvent* param1) override {
		if (handle__widgetEnterEvent == 0) {
			QwtPlotPicker::widgetEnterEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPicker_widgetEnterEvent(this, handle__widgetEnterEvent, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_widgetEnterEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetLeaveEvent(QEvent* param1) override {
		if (handle__widgetLeaveEvent == 0) {
			QwtPlotPicker::widgetLeaveEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPicker_widgetLeaveEvent(this, handle__widgetLeaveEvent, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_widgetLeaveEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stretchSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual void stretchSelection(const QSize& oldSize, const QSize& newSize) override {
		if (handle__stretchSelection == 0) {
			QwtPlotPicker::stretchSelection(oldSize, newSize);
			return;
		}

		const QSize& oldSize_ret = oldSize;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&oldSize_ret);
		const QSize& newSize_ret = newSize;
		// Cast returned reference into pointer
		QSize* sigval2 = const_cast<QSize*>(&newSize_ret);
		miqt_exec_callback_QwtPlotPicker_stretchSelection(this, handle__stretchSelection, sigval1, sigval2);

	}

	friend void QwtPlotPicker_virtualbase_stretchSelection(void* self, QSize* oldSize, QSize* newSize);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateDisplay = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateDisplay() override {
		if (handle__updateDisplay == 0) {
			QwtPlotPicker::updateDisplay();
			return;
		}

		miqt_exec_callback_QwtPlotPicker_updateDisplay(this, handle__updateDisplay);

	}

	friend void QwtPlotPicker_virtualbase_updateDisplay(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QwtPlotPicker::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtPlotPicker_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtPlotPicker_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtPlotPicker::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPicker_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtPlotPicker::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPicker_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtPlotPicker::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPicker_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtPlotPicker::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotPicker_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtPlotPicker::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotPicker_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtPlotPicker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMatch2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool mouseMatch(const QwtEventPattern::MousePattern& param1, const QMouseEvent* param2) const override {
		if (handle__mouseMatch2 == 0) {
			return QwtPlotPicker::mouseMatch(param1, param2);
		}

		const QwtEventPattern::MousePattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern__MousePattern* sigval1 = const_cast<QwtEventPattern::MousePattern*>(&param1_ret);
		QMouseEvent* sigval2 = (QMouseEvent*) param2;
		bool callback_return_value = miqt_exec_callback_QwtPlotPicker_mouseMatch2(this, handle__mouseMatch2, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPlotPicker_virtualbase_mouseMatch2(const void* self, QwtEventPattern__MousePattern* param1, QMouseEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyMatch2 = 0;

	// Subclass to allow providing a Go implementation
	virtual bool keyMatch(const QwtEventPattern::KeyPattern& param1, const QKeyEvent* param2) const override {
		if (handle__keyMatch2 == 0) {
			return QwtPlotPicker::keyMatch(param1, param2);
		}

		const QwtEventPattern::KeyPattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern__KeyPattern* sigval1 = const_cast<QwtEventPattern::KeyPattern*>(&param1_ret);
		QKeyEvent* sigval2 = (QKeyEvent*) param2;
		bool callback_return_value = miqt_exec_callback_QwtPlotPicker_keyMatch2(this, handle__keyMatch2, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPlotPicker_virtualbase_keyMatch2(const void* self, QwtEventPattern__KeyPattern* param1, QKeyEvent* param2);

	// Wrappers to allow calling protected methods:
	friend QRectF* QwtPlotPicker_protectedbase_scaleRect(bool* _dynamic_cast_ok, const void* self);
	friend QRectF* QwtPlotPicker_protectedbase_invTransform(bool* _dynamic_cast_ok, const void* self, QRect* param1);
	friend QRect* QwtPlotPicker_protectedbase_transform(bool* _dynamic_cast_ok, const void* self, QRectF* param1);
	friend QPointF* QwtPlotPicker_protectedbase_invTransformWithQPoint(bool* _dynamic_cast_ok, const void* self, QPoint* param1);
	friend QPoint* QwtPlotPicker_protectedbase_transformWithQPointF(bool* _dynamic_cast_ok, const void* self, QPointF* param1);
	friend QwtWidgetOverlay* QwtPlotPicker_protectedbase_rubberBandOverlay(bool* _dynamic_cast_ok, const void* self);
	friend QwtWidgetOverlay* QwtPlotPicker_protectedbase_trackerOverlay(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QwtPlotPicker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotPicker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotPicker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtPlotPicker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtPlotPicker* QwtPlotPicker_new(QWidget* canvas) {
	return new (std::nothrow) MiqtVirtualQwtPlotPicker(canvas);
}

QwtPlotPicker* QwtPlotPicker_new2(int xAxis, int yAxis, QWidget* param3) {
	return new (std::nothrow) MiqtVirtualQwtPlotPicker(static_cast<int>(xAxis), static_cast<int>(yAxis), param3);
}

QwtPlotPicker* QwtPlotPicker_new3(int xAxis, int yAxis, int rubberBand, int trackerMode, QWidget* param5) {
	return new (std::nothrow) MiqtVirtualQwtPlotPicker(static_cast<int>(xAxis), static_cast<int>(yAxis), static_cast<QwtPicker::RubberBand>(rubberBand), static_cast<QwtPicker::DisplayMode>(trackerMode), param5);
}

void QwtPlotPicker_virtbase(QwtPlotPicker* src, QwtPicker** outptr_QwtPicker) {
	*outptr_QwtPicker = static_cast<QwtPicker*>(src);
}

QMetaObject* QwtPlotPicker_metaObject(const QwtPlotPicker* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtPlotPicker_metacast(QwtPlotPicker* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtPlotPicker_tr(const char* s) {
	QString _ret = QwtPlotPicker::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotPicker_trUtf8(const char* s) {
	QString _ret = QwtPlotPicker::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtPlotPicker_setAxis(QwtPlotPicker* self, int xAxis, int yAxis) {
	self->setAxis(static_cast<int>(xAxis), static_cast<int>(yAxis));
}

int QwtPlotPicker_xAxis(const QwtPlotPicker* self) {
	return self->xAxis();
}

int QwtPlotPicker_yAxis(const QwtPlotPicker* self) {
	return self->yAxis();
}

QwtPlot* QwtPlotPicker_plot(QwtPlotPicker* self) {
	return self->plot();
}

QwtPlot* QwtPlotPicker_plot2(const QwtPlotPicker* self) {
	return (QwtPlot*) self->plot();
}

QWidget* QwtPlotPicker_canvas(QwtPlotPicker* self) {
	return self->canvas();
}

QWidget* QwtPlotPicker_canvas2(const QwtPlotPicker* self) {
	return (QWidget*) self->canvas();
}

void QwtPlotPicker_selected(QwtPlotPicker* self, QPointF* pos) {
	self->selected(*pos);
}

void QwtPlotPicker_connect_selected(QwtPlotPicker* self, intptr_t slot) {
	QwtPlotPicker::connect(self, static_cast<void (QwtPlotPicker::*)(const QPointF&)>(&QwtPlotPicker::selected), self, [=](const QPointF& pos) {
		const QPointF& pos_ret = pos;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&pos_ret);
		miqt_exec_callback_QwtPlotPicker_selected(slot, sigval1);
	});
}

void QwtPlotPicker_selectedWithRect(QwtPlotPicker* self, QRectF* rect) {
	self->selected(*rect);
}

void QwtPlotPicker_connect_selectedWithRect(QwtPlotPicker* self, intptr_t slot) {
	QwtPlotPicker::connect(self, static_cast<void (QwtPlotPicker::*)(const QRectF&)>(&QwtPlotPicker::selected), self, [=](const QRectF& rect) {
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);
		miqt_exec_callback_QwtPlotPicker_selectedWithRect(slot, sigval1);
	});
}

void QwtPlotPicker_selectedWithPa(QwtPlotPicker* self, struct miqt_array /* of QPointF* */  pa) {
	QVector<QPointF> pa_QList;
	pa_QList.reserve(pa.len);
	QPointF** pa_arr = static_cast<QPointF**>(pa.data);
	for(size_t i = 0; i < pa.len; ++i) {
		pa_QList.push_back(*(pa_arr[i]));
	}
	self->selected(pa_QList);
}

void QwtPlotPicker_connect_selectedWithPa(QwtPlotPicker* self, intptr_t slot) {
	QwtPlotPicker::connect(self, static_cast<void (QwtPlotPicker::*)(const QVector<QPointF>&)>(&QwtPlotPicker::selected), self, [=](const QVector<QPointF>& pa) {
		const QVector<QPointF>& pa_ret = pa;
		// Convert QList<> from C++ memory to manually-managed C memory
		QPointF** pa_arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * pa_ret.length()));
		for (size_t i = 0, e = pa_ret.length(); i < e; ++i) {
			pa_arr[i] = new QPointF(pa_ret[i]);
		}
		struct miqt_array pa_out;
		pa_out.len = pa_ret.length();
		pa_out.data = static_cast<void*>(pa_arr);
		struct miqt_array /* of QPointF* */  sigval1 = pa_out;
		miqt_exec_callback_QwtPlotPicker_selectedWithPa(slot, sigval1);
	});
}

void QwtPlotPicker_appended(QwtPlotPicker* self, QPointF* pos) {
	self->appended(*pos);
}

void QwtPlotPicker_connect_appended(QwtPlotPicker* self, intptr_t slot) {
	QwtPlotPicker::connect(self, static_cast<void (QwtPlotPicker::*)(const QPointF&)>(&QwtPlotPicker::appended), self, [=](const QPointF& pos) {
		const QPointF& pos_ret = pos;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&pos_ret);
		miqt_exec_callback_QwtPlotPicker_appended(slot, sigval1);
	});
}

void QwtPlotPicker_moved(QwtPlotPicker* self, QPointF* pos) {
	self->moved(*pos);
}

void QwtPlotPicker_connect_moved(QwtPlotPicker* self, intptr_t slot) {
	QwtPlotPicker::connect(self, static_cast<void (QwtPlotPicker::*)(const QPointF&)>(&QwtPlotPicker::moved), self, [=](const QPointF& pos) {
		const QPointF& pos_ret = pos;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&pos_ret);
		miqt_exec_callback_QwtPlotPicker_moved(slot, sigval1);
	});
}

struct miqt_string QwtPlotPicker_tr2(const char* s, const char* c) {
	QString _ret = QwtPlotPicker::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotPicker_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtPlotPicker::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotPicker_trUtf82(const char* s, const char* c) {
	QString _ret = QwtPlotPicker::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotPicker_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtPlotPicker::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtPlotPicker_override_virtual_setAxis(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAxis = slot;
	return true;
}

void QwtPlotPicker_virtualbase_setAxis(void* self, int xAxis, int yAxis) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::setAxis(static_cast<int>(xAxis), static_cast<int>(yAxis));
}

bool QwtPlotPicker_override_virtual_trackerText(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__trackerText = slot;
	return true;
}

QwtText* QwtPlotPicker_virtualbase_trackerText(const void* self, QPoint* param1) {
	return new QwtText(static_cast<const MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::trackerText(*param1));
}

bool QwtPlotPicker_override_virtual_trackerTextF(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__trackerTextF = slot;
	return true;
}

QwtText* QwtPlotPicker_virtualbase_trackerTextF(const void* self, QPointF* param1) {
	return new QwtText(static_cast<const MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::trackerTextF(*param1));
}

bool QwtPlotPicker_override_virtual_move(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__move = slot;
	return true;
}

void QwtPlotPicker_virtualbase_move(void* self, QPoint* param1) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::move(*param1);
}

bool QwtPlotPicker_override_virtual_append(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__append = slot;
	return true;
}

void QwtPlotPicker_virtualbase_append(void* self, QPoint* param1) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::append(*param1);
}

bool QwtPlotPicker_override_virtual_end(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__end = slot;
	return true;
}

bool QwtPlotPicker_virtualbase_end(void* self, bool ok) {
	return static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::end(ok);
}

bool QwtPlotPicker_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtPlotPicker_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::eventFilter(param1, param2);
}

bool QwtPlotPicker_override_virtual_pickArea(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pickArea = slot;
	return true;
}

QPainterPath* QwtPlotPicker_virtualbase_pickArea(const void* self) {
	return new QPainterPath(static_cast<const MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::pickArea());
}

bool QwtPlotPicker_override_virtual_drawRubberBand(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawRubberBand = slot;
	return true;
}

void QwtPlotPicker_virtualbase_drawRubberBand(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::drawRubberBand(param1);
}

bool QwtPlotPicker_override_virtual_drawTracker(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawTracker = slot;
	return true;
}

void QwtPlotPicker_virtualbase_drawTracker(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::drawTracker(param1);
}

bool QwtPlotPicker_override_virtual_rubberBandMask(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rubberBandMask = slot;
	return true;
}

QRegion* QwtPlotPicker_virtualbase_rubberBandMask(const void* self) {
	return new QRegion(static_cast<const MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::rubberBandMask());
}

bool QwtPlotPicker_override_virtual_trackerRect(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__trackerRect = slot;
	return true;
}

QRect* QwtPlotPicker_virtualbase_trackerRect(const void* self, QFont* param1) {
	return new QRect(static_cast<const MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::trackerRect(*param1));
}

bool QwtPlotPicker_override_virtual_transition(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__transition = slot;
	return true;
}

void QwtPlotPicker_virtualbase_transition(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::transition(param1);
}

bool QwtPlotPicker_override_virtual_begin(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__begin = slot;
	return true;
}

void QwtPlotPicker_virtualbase_begin(void* self) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::begin();
}

bool QwtPlotPicker_override_virtual_remove(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__remove = slot;
	return true;
}

void QwtPlotPicker_virtualbase_remove(void* self) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::remove();
}

bool QwtPlotPicker_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = slot;
	return true;
}

void QwtPlotPicker_virtualbase_reset(void* self) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::reset();
}

bool QwtPlotPicker_override_virtual_widgetMousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMousePressEvent = slot;
	return true;
}

void QwtPlotPicker_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::widgetMousePressEvent(param1);
}

bool QwtPlotPicker_override_virtual_widgetMouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseReleaseEvent = slot;
	return true;
}

void QwtPlotPicker_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::widgetMouseReleaseEvent(param1);
}

bool QwtPlotPicker_override_virtual_widgetMouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseDoubleClickEvent = slot;
	return true;
}

void QwtPlotPicker_virtualbase_widgetMouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::widgetMouseDoubleClickEvent(param1);
}

bool QwtPlotPicker_override_virtual_widgetMouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseMoveEvent = slot;
	return true;
}

void QwtPlotPicker_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::widgetMouseMoveEvent(param1);
}

bool QwtPlotPicker_override_virtual_widgetWheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetWheelEvent = slot;
	return true;
}

void QwtPlotPicker_virtualbase_widgetWheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::widgetWheelEvent(param1);
}

bool QwtPlotPicker_override_virtual_widgetKeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetKeyPressEvent = slot;
	return true;
}

void QwtPlotPicker_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::widgetKeyPressEvent(param1);
}

bool QwtPlotPicker_override_virtual_widgetKeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetKeyReleaseEvent = slot;
	return true;
}

void QwtPlotPicker_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::widgetKeyReleaseEvent(param1);
}

bool QwtPlotPicker_override_virtual_widgetEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetEnterEvent = slot;
	return true;
}

void QwtPlotPicker_virtualbase_widgetEnterEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::widgetEnterEvent(param1);
}

bool QwtPlotPicker_override_virtual_widgetLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetLeaveEvent = slot;
	return true;
}

void QwtPlotPicker_virtualbase_widgetLeaveEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::widgetLeaveEvent(param1);
}

bool QwtPlotPicker_override_virtual_stretchSelection(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__stretchSelection = slot;
	return true;
}

void QwtPlotPicker_virtualbase_stretchSelection(void* self, QSize* oldSize, QSize* newSize) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::stretchSelection(*oldSize, *newSize);
}

bool QwtPlotPicker_override_virtual_updateDisplay(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateDisplay = slot;
	return true;
}

void QwtPlotPicker_virtualbase_updateDisplay(void* self) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::updateDisplay();
}

bool QwtPlotPicker_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtPlotPicker_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::event(event);
}

bool QwtPlotPicker_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtPlotPicker_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::timerEvent(event);
}

bool QwtPlotPicker_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtPlotPicker_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::childEvent(event);
}

bool QwtPlotPicker_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtPlotPicker_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::customEvent(event);
}

bool QwtPlotPicker_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtPlotPicker_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::connectNotify(*signal);
}

bool QwtPlotPicker_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtPlotPicker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::disconnectNotify(*signal);
}

bool QwtPlotPicker_override_virtual_mouseMatch2(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMatch2 = slot;
	return true;
}

bool QwtPlotPicker_virtualbase_mouseMatch2(const void* self, QwtEventPattern__MousePattern* param1, QMouseEvent* param2) {
	return static_cast<const MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::mouseMatch(*param1, param2);
}

bool QwtPlotPicker_override_virtual_keyMatch2(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyMatch2 = slot;
	return true;
}

bool QwtPlotPicker_virtualbase_keyMatch2(const void* self, QwtEventPattern__KeyPattern* param1, QKeyEvent* param2) {
	return static_cast<const MiqtVirtualQwtPlotPicker*>(self)->QwtPlotPicker::keyMatch(*param1, param2);
}

QRectF* QwtPlotPicker_protectedbase_scaleRect(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRectF(self_cast->scaleRect());
}

QRectF* QwtPlotPicker_protectedbase_invTransform(bool* _dynamic_cast_ok, const void* self, QRect* param1) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRectF(self_cast->invTransform(*param1));
}

QRect* QwtPlotPicker_protectedbase_transform(bool* _dynamic_cast_ok, const void* self, QRectF* param1) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRect(self_cast->transform(*param1));
}

QPointF* QwtPlotPicker_protectedbase_invTransformWithQPoint(bool* _dynamic_cast_ok, const void* self, QPoint* param1) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QPointF(self_cast->invTransform(*param1));
}

QPoint* QwtPlotPicker_protectedbase_transformWithQPointF(bool* _dynamic_cast_ok, const void* self, QPointF* param1) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QPoint(self_cast->transform(*param1));
}

QwtWidgetOverlay* QwtPlotPicker_protectedbase_rubberBandOverlay(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return (QwtWidgetOverlay*) self_cast->rubberBandOverlay();
}

QwtWidgetOverlay* QwtPlotPicker_protectedbase_trackerOverlay(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return (QwtWidgetOverlay*) self_cast->trackerOverlay();
}

QObject* QwtPlotPicker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtPlotPicker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtPlotPicker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtPlotPicker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtPlotPicker* self_cast = dynamic_cast<MiqtVirtualQwtPlotPicker*>( (QwtPlotPicker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtPlotPicker_delete(QwtPlotPicker* self) {
	delete self;
}

