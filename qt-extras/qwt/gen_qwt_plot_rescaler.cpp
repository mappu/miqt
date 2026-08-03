#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QResizeEvent>
#include <QSize>
#include <QTimerEvent>
#include <QWidget>
#include <qwt_plot_rescaler.h>
#include "gen_qwt_plot_rescaler.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QwtPlotRescaler_eventFilter(QwtPlotRescaler*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtPlotRescaler_canvasResizeEvent(QwtPlotRescaler*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtPlotRescaler_rescale2(const QwtPlotRescaler*, intptr_t, QSize*, QSize*);
QwtInterval* miqt_exec_callback_QwtPlotRescaler_expandScale(const QwtPlotRescaler*, intptr_t, int, QSize*, QSize*);
QwtInterval* miqt_exec_callback_QwtPlotRescaler_syncScale(const QwtPlotRescaler*, intptr_t, int, QwtInterval*, QSize*);
void miqt_exec_callback_QwtPlotRescaler_updateScales(const QwtPlotRescaler*, intptr_t, QwtInterval*);
bool miqt_exec_callback_QwtPlotRescaler_event(QwtPlotRescaler*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotRescaler_timerEvent(QwtPlotRescaler*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtPlotRescaler_childEvent(QwtPlotRescaler*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtPlotRescaler_customEvent(QwtPlotRescaler*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotRescaler_connectNotify(QwtPlotRescaler*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtPlotRescaler_disconnectNotify(QwtPlotRescaler*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPlotRescaler final : public QwtPlotRescaler {
public:

	MiqtVirtualQwtPlotRescaler(QWidget* canvas): QwtPlotRescaler(canvas) {}
	MiqtVirtualQwtPlotRescaler(QWidget* canvas, int referenceAxis): QwtPlotRescaler(canvas, referenceAxis) {}
	MiqtVirtualQwtPlotRescaler(QWidget* canvas, int referenceAxis, QwtPlotRescaler::RescalePolicy param3): QwtPlotRescaler(canvas, referenceAxis, param3) {}

	virtual ~MiqtVirtualQwtPlotRescaler() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QwtPlotRescaler::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QwtPlotRescaler_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPlotRescaler_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canvasResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void canvasResizeEvent(QResizeEvent* param1) override {
		if (handle__canvasResizeEvent == 0) {
			QwtPlotRescaler::canvasResizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotRescaler_canvasResizeEvent(this, handle__canvasResizeEvent, sigval1);

	}

	friend void QwtPlotRescaler_virtualbase_canvasResizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rescale2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void rescale(const QSize& oldSize, const QSize& newSize) const override {
		if (handle__rescale2 == 0) {
			QwtPlotRescaler::rescale(oldSize, newSize);
			return;
		}

		const QSize& oldSize_ret = oldSize;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&oldSize_ret);
		const QSize& newSize_ret = newSize;
		// Cast returned reference into pointer
		QSize* sigval2 = const_cast<QSize*>(&newSize_ret);
		miqt_exec_callback_QwtPlotRescaler_rescale2(this, handle__rescale2, sigval1, sigval2);

	}

	friend void QwtPlotRescaler_virtualbase_rescale2(const void* self, QSize* oldSize, QSize* newSize);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__expandScale = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtInterval expandScale(int axis, const QSize& oldSize, const QSize& newSize) const override {
		if (handle__expandScale == 0) {
			return QwtPlotRescaler::expandScale(axis, oldSize, newSize);
		}

		int sigval1 = axis;
		const QSize& oldSize_ret = oldSize;
		// Cast returned reference into pointer
		QSize* sigval2 = const_cast<QSize*>(&oldSize_ret);
		const QSize& newSize_ret = newSize;
		// Cast returned reference into pointer
		QSize* sigval3 = const_cast<QSize*>(&newSize_ret);
		QwtInterval* callback_return_value = miqt_exec_callback_QwtPlotRescaler_expandScale(this, handle__expandScale, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QwtInterval* QwtPlotRescaler_virtualbase_expandScale(const void* self, int axis, QSize* oldSize, QSize* newSize);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__syncScale = 0;

	// Subclass to allow providing a Go implementation
	virtual QwtInterval syncScale(int axis, const QwtInterval& reference, const QSize& size) const override {
		if (handle__syncScale == 0) {
			return QwtPlotRescaler::syncScale(axis, reference, size);
		}

		int sigval1 = axis;
		const QwtInterval& reference_ret = reference;
		// Cast returned reference into pointer
		QwtInterval* sigval2 = const_cast<QwtInterval*>(&reference_ret);
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval3 = const_cast<QSize*>(&size_ret);
		QwtInterval* callback_return_value = miqt_exec_callback_QwtPlotRescaler_syncScale(this, handle__syncScale, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QwtInterval* QwtPlotRescaler_virtualbase_syncScale(const void* self, int axis, QwtInterval* reference, QSize* size);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateScales = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateScales(QwtInterval* intervals) const override {
		if (handle__updateScales == 0) {
			QwtPlotRescaler::updateScales(intervals);
			return;
		}

		QwtInterval* sigval1 = intervals;
		miqt_exec_callback_QwtPlotRescaler_updateScales(this, handle__updateScales, sigval1);

	}

	friend void QwtPlotRescaler_virtualbase_updateScales(const void* self, QwtInterval* intervals);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QwtPlotRescaler::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtPlotRescaler_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtPlotRescaler_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtPlotRescaler::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotRescaler_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtPlotRescaler_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtPlotRescaler::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotRescaler_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtPlotRescaler_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtPlotRescaler::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotRescaler_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtPlotRescaler_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtPlotRescaler::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotRescaler_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtPlotRescaler_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtPlotRescaler::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotRescaler_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtPlotRescaler_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend int QwtPlotRescaler_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self, int axis);
	friend QwtInterval* QwtPlotRescaler_protectedbase_interval(bool* _dynamic_cast_ok, const void* self, int axis);
	friend QwtInterval* QwtPlotRescaler_protectedbase_expandInterval(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double width, int param3);
	friend QObject* QwtPlotRescaler_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotRescaler_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotRescaler_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtPlotRescaler_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtPlotRescaler* QwtPlotRescaler_new(QWidget* canvas) {
	return new (std::nothrow) MiqtVirtualQwtPlotRescaler(canvas);
}

QwtPlotRescaler* QwtPlotRescaler_new2(QWidget* canvas, int referenceAxis) {
	return new (std::nothrow) MiqtVirtualQwtPlotRescaler(canvas, static_cast<int>(referenceAxis));
}

QwtPlotRescaler* QwtPlotRescaler_new3(QWidget* canvas, int referenceAxis, int param3) {
	return new (std::nothrow) MiqtVirtualQwtPlotRescaler(canvas, static_cast<int>(referenceAxis), static_cast<QwtPlotRescaler::RescalePolicy>(param3));
}

void QwtPlotRescaler_virtbase(QwtPlotRescaler* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

void QwtPlotRescaler_setEnabled(QwtPlotRescaler* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QwtPlotRescaler_isEnabled(const QwtPlotRescaler* self) {
	return self->isEnabled();
}

void QwtPlotRescaler_setRescalePolicy(QwtPlotRescaler* self, int rescalePolicy) {
	self->setRescalePolicy(static_cast<QwtPlotRescaler::RescalePolicy>(rescalePolicy));
}

int QwtPlotRescaler_rescalePolicy(const QwtPlotRescaler* self) {
	QwtPlotRescaler::RescalePolicy _ret = self->rescalePolicy();
	return static_cast<int>(_ret);
}

void QwtPlotRescaler_setExpandingDirection(QwtPlotRescaler* self, int expandingDirection) {
	self->setExpandingDirection(static_cast<QwtPlotRescaler::ExpandingDirection>(expandingDirection));
}

void QwtPlotRescaler_setExpandingDirection2(QwtPlotRescaler* self, int axis, int param2) {
	self->setExpandingDirection(static_cast<int>(axis), static_cast<QwtPlotRescaler::ExpandingDirection>(param2));
}

int QwtPlotRescaler_expandingDirection(const QwtPlotRescaler* self, int axis) {
	QwtPlotRescaler::ExpandingDirection _ret = self->expandingDirection(static_cast<int>(axis));
	return static_cast<int>(_ret);
}

void QwtPlotRescaler_setReferenceAxis(QwtPlotRescaler* self, int axis) {
	self->setReferenceAxis(static_cast<int>(axis));
}

int QwtPlotRescaler_referenceAxis(const QwtPlotRescaler* self) {
	return self->referenceAxis();
}

void QwtPlotRescaler_setAspectRatio(QwtPlotRescaler* self, double ratio) {
	self->setAspectRatio(static_cast<double>(ratio));
}

void QwtPlotRescaler_setAspectRatio2(QwtPlotRescaler* self, int axis, double ratio) {
	self->setAspectRatio(static_cast<int>(axis), static_cast<double>(ratio));
}

double QwtPlotRescaler_aspectRatio(const QwtPlotRescaler* self, int axis) {
	return self->aspectRatio(static_cast<int>(axis));
}

void QwtPlotRescaler_setIntervalHint(QwtPlotRescaler* self, int axis, QwtInterval* param2) {
	self->setIntervalHint(static_cast<int>(axis), *param2);
}

QwtInterval* QwtPlotRescaler_intervalHint(const QwtPlotRescaler* self, int axis) {
	return new QwtInterval(self->intervalHint(static_cast<int>(axis)));
}

QWidget* QwtPlotRescaler_canvas(QwtPlotRescaler* self) {
	return self->canvas();
}

QWidget* QwtPlotRescaler_canvas2(const QwtPlotRescaler* self) {
	return (QWidget*) self->canvas();
}

QwtPlot* QwtPlotRescaler_plot(QwtPlotRescaler* self) {
	return self->plot();
}

QwtPlot* QwtPlotRescaler_plot2(const QwtPlotRescaler* self) {
	return (QwtPlot*) self->plot();
}

bool QwtPlotRescaler_eventFilter(QwtPlotRescaler* self, QObject* param1, QEvent* param2) {
	return self->eventFilter(param1, param2);
}

void QwtPlotRescaler_rescale(const QwtPlotRescaler* self) {
	self->rescale();
}

bool QwtPlotRescaler_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtPlotRescaler_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQwtPlotRescaler*>(self)->QwtPlotRescaler::eventFilter(param1, param2);
}

bool QwtPlotRescaler_override_virtual_canvasResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canvasResizeEvent = slot;
	return true;
}

void QwtPlotRescaler_virtualbase_canvasResizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQwtPlotRescaler*>(self)->QwtPlotRescaler::canvasResizeEvent(param1);
}

bool QwtPlotRescaler_override_virtual_rescale2(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rescale2 = slot;
	return true;
}

void QwtPlotRescaler_virtualbase_rescale2(const void* self, QSize* oldSize, QSize* newSize) {
	static_cast<const MiqtVirtualQwtPlotRescaler*>(self)->QwtPlotRescaler::rescale(*oldSize, *newSize);
}

bool QwtPlotRescaler_override_virtual_expandScale(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__expandScale = slot;
	return true;
}

QwtInterval* QwtPlotRescaler_virtualbase_expandScale(const void* self, int axis, QSize* oldSize, QSize* newSize) {
	return new QwtInterval(static_cast<const MiqtVirtualQwtPlotRescaler*>(self)->QwtPlotRescaler::expandScale(static_cast<int>(axis), *oldSize, *newSize));
}

bool QwtPlotRescaler_override_virtual_syncScale(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__syncScale = slot;
	return true;
}

QwtInterval* QwtPlotRescaler_virtualbase_syncScale(const void* self, int axis, QwtInterval* reference, QSize* size) {
	return new QwtInterval(static_cast<const MiqtVirtualQwtPlotRescaler*>(self)->QwtPlotRescaler::syncScale(static_cast<int>(axis), *reference, *size));
}

bool QwtPlotRescaler_override_virtual_updateScales(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateScales = slot;
	return true;
}

void QwtPlotRescaler_virtualbase_updateScales(const void* self, QwtInterval* intervals) {
	static_cast<const MiqtVirtualQwtPlotRescaler*>(self)->QwtPlotRescaler::updateScales(intervals);
}

bool QwtPlotRescaler_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtPlotRescaler_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtPlotRescaler*>(self)->QwtPlotRescaler::event(event);
}

bool QwtPlotRescaler_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtPlotRescaler_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtPlotRescaler*>(self)->QwtPlotRescaler::timerEvent(event);
}

bool QwtPlotRescaler_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtPlotRescaler_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtPlotRescaler*>(self)->QwtPlotRescaler::childEvent(event);
}

bool QwtPlotRescaler_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtPlotRescaler_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlotRescaler*>(self)->QwtPlotRescaler::customEvent(event);
}

bool QwtPlotRescaler_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtPlotRescaler_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotRescaler*>(self)->QwtPlotRescaler::connectNotify(*signal);
}

bool QwtPlotRescaler_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtPlotRescaler_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotRescaler*>(self)->QwtPlotRescaler::disconnectNotify(*signal);
}

int QwtPlotRescaler_protectedbase_orientation(bool* _dynamic_cast_ok, const void* self, int axis) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	Qt::Orientation _ret = self_cast->orientation(static_cast<int>(axis));
	return static_cast<int>(_ret);
}

QwtInterval* QwtPlotRescaler_protectedbase_interval(bool* _dynamic_cast_ok, const void* self, int axis) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QwtInterval(self_cast->interval(static_cast<int>(axis)));
}

QwtInterval* QwtPlotRescaler_protectedbase_expandInterval(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double width, int param3) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QwtInterval(self_cast->expandInterval(*param1, static_cast<double>(width), static_cast<MiqtVirtualQwtPlotRescaler::ExpandingDirection>(param3)));
}

QObject* QwtPlotRescaler_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtPlotRescaler_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtPlotRescaler_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtPlotRescaler_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtPlotRescaler* self_cast = dynamic_cast<MiqtVirtualQwtPlotRescaler*>( (QwtPlotRescaler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtPlotRescaler_delete(QwtPlotRescaler* self) {
	delete self;
}

