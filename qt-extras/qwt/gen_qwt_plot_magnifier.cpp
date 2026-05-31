#include <QChildEvent>
#include <QEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWheelEvent>
#include <QWidget>
#include <qwt_plot_magnifier.h>
#include "gen_qwt_plot_magnifier.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtPlotMagnifier_rescale(QwtPlotMagnifier*, intptr_t, double);
bool miqt_exec_callback_QwtPlotMagnifier_eventFilter(QwtPlotMagnifier*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtPlotMagnifier_widgetMousePressEvent(QwtPlotMagnifier*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotMagnifier_widgetMouseReleaseEvent(QwtPlotMagnifier*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotMagnifier_widgetMouseMoveEvent(QwtPlotMagnifier*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotMagnifier_widgetWheelEvent(QwtPlotMagnifier*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtPlotMagnifier_widgetKeyPressEvent(QwtPlotMagnifier*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPlotMagnifier_widgetKeyReleaseEvent(QwtPlotMagnifier*, intptr_t, QKeyEvent*);
bool miqt_exec_callback_QwtPlotMagnifier_event(QwtPlotMagnifier*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotMagnifier_timerEvent(QwtPlotMagnifier*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtPlotMagnifier_childEvent(QwtPlotMagnifier*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtPlotMagnifier_customEvent(QwtPlotMagnifier*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotMagnifier_connectNotify(QwtPlotMagnifier*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtPlotMagnifier_disconnectNotify(QwtPlotMagnifier*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPlotMagnifier final : public QwtPlotMagnifier {
public:

	MiqtVirtualQwtPlotMagnifier(QWidget* param1): QwtPlotMagnifier(param1) {}

	virtual ~MiqtVirtualQwtPlotMagnifier() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rescale = 0;

	// Subclass to allow providing a Go implementation
	virtual void rescale(double factor) override {
		if (handle__rescale == 0) {
			QwtPlotMagnifier::rescale(factor);
			return;
		}

		double sigval1 = factor;
		miqt_exec_callback_QwtPlotMagnifier_rescale(this, handle__rescale, sigval1);

	}

	friend void QwtPlotMagnifier_virtualbase_rescale(void* self, double factor);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QwtPlotMagnifier::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QwtPlotMagnifier_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPlotMagnifier_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMousePressEvent(QMouseEvent* param1) override {
		if (handle__widgetMousePressEvent == 0) {
			QwtPlotMagnifier::widgetMousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotMagnifier_widgetMousePressEvent(this, handle__widgetMousePressEvent, sigval1);

	}

	friend void QwtPlotMagnifier_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__widgetMouseReleaseEvent == 0) {
			QwtPlotMagnifier::widgetMouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotMagnifier_widgetMouseReleaseEvent(this, handle__widgetMouseReleaseEvent, sigval1);

	}

	friend void QwtPlotMagnifier_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseMoveEvent(QMouseEvent* param1) override {
		if (handle__widgetMouseMoveEvent == 0) {
			QwtPlotMagnifier::widgetMouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotMagnifier_widgetMouseMoveEvent(this, handle__widgetMouseMoveEvent, sigval1);

	}

	friend void QwtPlotMagnifier_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetWheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetWheelEvent(QWheelEvent* param1) override {
		if (handle__widgetWheelEvent == 0) {
			QwtPlotMagnifier::widgetWheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotMagnifier_widgetWheelEvent(this, handle__widgetWheelEvent, sigval1);

	}

	friend void QwtPlotMagnifier_virtualbase_widgetWheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetKeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetKeyPressEvent(QKeyEvent* param1) override {
		if (handle__widgetKeyPressEvent == 0) {
			QwtPlotMagnifier::widgetKeyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotMagnifier_widgetKeyPressEvent(this, handle__widgetKeyPressEvent, sigval1);

	}

	friend void QwtPlotMagnifier_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetKeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetKeyReleaseEvent(QKeyEvent* param1) override {
		if (handle__widgetKeyReleaseEvent == 0) {
			QwtPlotMagnifier::widgetKeyReleaseEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotMagnifier_widgetKeyReleaseEvent(this, handle__widgetKeyReleaseEvent, sigval1);

	}

	friend void QwtPlotMagnifier_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QwtPlotMagnifier::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtPlotMagnifier_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtPlotMagnifier_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtPlotMagnifier::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotMagnifier_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtPlotMagnifier_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtPlotMagnifier::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotMagnifier_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtPlotMagnifier_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtPlotMagnifier::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotMagnifier_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtPlotMagnifier_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtPlotMagnifier::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotMagnifier_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtPlotMagnifier_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtPlotMagnifier::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotMagnifier_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtPlotMagnifier_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QwtPlotMagnifier_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotMagnifier_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotMagnifier_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtPlotMagnifier_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtPlotMagnifier* QwtPlotMagnifier_new(QWidget* param1) {
	return new (std::nothrow) MiqtVirtualQwtPlotMagnifier(param1);
}

void QwtPlotMagnifier_virtbase(QwtPlotMagnifier* src, QwtMagnifier** outptr_QwtMagnifier) {
	*outptr_QwtMagnifier = static_cast<QwtMagnifier*>(src);
}

QMetaObject* QwtPlotMagnifier_metaObject(const QwtPlotMagnifier* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtPlotMagnifier_metacast(QwtPlotMagnifier* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtPlotMagnifier_tr(const char* s) {
	QString _ret = QwtPlotMagnifier::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotMagnifier_trUtf8(const char* s) {
	QString _ret = QwtPlotMagnifier::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtPlotMagnifier_setAxisEnabled(QwtPlotMagnifier* self, int axis, bool on) {
	self->setAxisEnabled(static_cast<int>(axis), on);
}

bool QwtPlotMagnifier_isAxisEnabled(const QwtPlotMagnifier* self, int axis) {
	return self->isAxisEnabled(static_cast<int>(axis));
}

QWidget* QwtPlotMagnifier_canvas(QwtPlotMagnifier* self) {
	return self->canvas();
}

QWidget* QwtPlotMagnifier_canvas2(const QwtPlotMagnifier* self) {
	return (QWidget*) self->canvas();
}

QwtPlot* QwtPlotMagnifier_plot(QwtPlotMagnifier* self) {
	return self->plot();
}

QwtPlot* QwtPlotMagnifier_plot2(const QwtPlotMagnifier* self) {
	return (QwtPlot*) self->plot();
}

struct miqt_string QwtPlotMagnifier_tr2(const char* s, const char* c) {
	QString _ret = QwtPlotMagnifier::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotMagnifier_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtPlotMagnifier::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotMagnifier_trUtf82(const char* s, const char* c) {
	QString _ret = QwtPlotMagnifier::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotMagnifier_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtPlotMagnifier::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtPlotMagnifier_override_virtual_rescale(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rescale = slot;
	return true;
}

void QwtPlotMagnifier_virtualbase_rescale(void* self, double factor) {
	static_cast<MiqtVirtualQwtPlotMagnifier*>(self)->QwtPlotMagnifier::rescale(static_cast<double>(factor));
}

bool QwtPlotMagnifier_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtPlotMagnifier_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQwtPlotMagnifier*>(self)->QwtPlotMagnifier::eventFilter(param1, param2);
}

bool QwtPlotMagnifier_override_virtual_widgetMousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMousePressEvent = slot;
	return true;
}

void QwtPlotMagnifier_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPlotMagnifier*>(self)->QwtPlotMagnifier::widgetMousePressEvent(param1);
}

bool QwtPlotMagnifier_override_virtual_widgetMouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseReleaseEvent = slot;
	return true;
}

void QwtPlotMagnifier_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPlotMagnifier*>(self)->QwtPlotMagnifier::widgetMouseReleaseEvent(param1);
}

bool QwtPlotMagnifier_override_virtual_widgetMouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseMoveEvent = slot;
	return true;
}

void QwtPlotMagnifier_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPlotMagnifier*>(self)->QwtPlotMagnifier::widgetMouseMoveEvent(param1);
}

bool QwtPlotMagnifier_override_virtual_widgetWheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetWheelEvent = slot;
	return true;
}

void QwtPlotMagnifier_virtualbase_widgetWheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQwtPlotMagnifier*>(self)->QwtPlotMagnifier::widgetWheelEvent(param1);
}

bool QwtPlotMagnifier_override_virtual_widgetKeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetKeyPressEvent = slot;
	return true;
}

void QwtPlotMagnifier_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtPlotMagnifier*>(self)->QwtPlotMagnifier::widgetKeyPressEvent(param1);
}

bool QwtPlotMagnifier_override_virtual_widgetKeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetKeyReleaseEvent = slot;
	return true;
}

void QwtPlotMagnifier_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtPlotMagnifier*>(self)->QwtPlotMagnifier::widgetKeyReleaseEvent(param1);
}

bool QwtPlotMagnifier_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtPlotMagnifier_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtPlotMagnifier*>(self)->QwtPlotMagnifier::event(event);
}

bool QwtPlotMagnifier_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtPlotMagnifier_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtPlotMagnifier*>(self)->QwtPlotMagnifier::timerEvent(event);
}

bool QwtPlotMagnifier_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtPlotMagnifier_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtPlotMagnifier*>(self)->QwtPlotMagnifier::childEvent(event);
}

bool QwtPlotMagnifier_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtPlotMagnifier_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlotMagnifier*>(self)->QwtPlotMagnifier::customEvent(event);
}

bool QwtPlotMagnifier_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtPlotMagnifier_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotMagnifier*>(self)->QwtPlotMagnifier::connectNotify(*signal);
}

bool QwtPlotMagnifier_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtPlotMagnifier_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotMagnifier*>(self)->QwtPlotMagnifier::disconnectNotify(*signal);
}

QObject* QwtPlotMagnifier_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtPlotMagnifier_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtPlotMagnifier_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtPlotMagnifier_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtPlotMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtPlotMagnifier*>( (QwtPlotMagnifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtPlotMagnifier_delete(QwtPlotMagnifier* self) {
	delete self;
}

