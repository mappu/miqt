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
#include <qwt_magnifier.h>
#include "gen_qwt_magnifier.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QwtMagnifier_eventFilter(QwtMagnifier*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtMagnifier_rescale(QwtMagnifier*, intptr_t, double);
void miqt_exec_callback_QwtMagnifier_widgetMousePressEvent(QwtMagnifier*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtMagnifier_widgetMouseReleaseEvent(QwtMagnifier*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtMagnifier_widgetMouseMoveEvent(QwtMagnifier*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtMagnifier_widgetWheelEvent(QwtMagnifier*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtMagnifier_widgetKeyPressEvent(QwtMagnifier*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtMagnifier_widgetKeyReleaseEvent(QwtMagnifier*, intptr_t, QKeyEvent*);
bool miqt_exec_callback_QwtMagnifier_event(QwtMagnifier*, intptr_t, QEvent*);
void miqt_exec_callback_QwtMagnifier_timerEvent(QwtMagnifier*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtMagnifier_childEvent(QwtMagnifier*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtMagnifier_customEvent(QwtMagnifier*, intptr_t, QEvent*);
void miqt_exec_callback_QwtMagnifier_connectNotify(QwtMagnifier*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtMagnifier_disconnectNotify(QwtMagnifier*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtMagnifier final : public QwtMagnifier {
public:

	MiqtVirtualQwtMagnifier(QWidget* param1): QwtMagnifier(param1) {}

	virtual ~MiqtVirtualQwtMagnifier() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QwtMagnifier::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QwtMagnifier_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtMagnifier_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rescale = 0;

	// Subclass to allow providing a Go implementation
	virtual void rescale(double factor) override {
		if (handle__rescale == 0) {
			return; // Pure virtual, there is no base we can call
		}

		double sigval1 = factor;
		miqt_exec_callback_QwtMagnifier_rescale(this, handle__rescale, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMousePressEvent(QMouseEvent* param1) override {
		if (handle__widgetMousePressEvent == 0) {
			QwtMagnifier::widgetMousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtMagnifier_widgetMousePressEvent(this, handle__widgetMousePressEvent, sigval1);

	}

	friend void QwtMagnifier_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__widgetMouseReleaseEvent == 0) {
			QwtMagnifier::widgetMouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtMagnifier_widgetMouseReleaseEvent(this, handle__widgetMouseReleaseEvent, sigval1);

	}

	friend void QwtMagnifier_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseMoveEvent(QMouseEvent* param1) override {
		if (handle__widgetMouseMoveEvent == 0) {
			QwtMagnifier::widgetMouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtMagnifier_widgetMouseMoveEvent(this, handle__widgetMouseMoveEvent, sigval1);

	}

	friend void QwtMagnifier_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetWheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetWheelEvent(QWheelEvent* param1) override {
		if (handle__widgetWheelEvent == 0) {
			QwtMagnifier::widgetWheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QwtMagnifier_widgetWheelEvent(this, handle__widgetWheelEvent, sigval1);

	}

	friend void QwtMagnifier_virtualbase_widgetWheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetKeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetKeyPressEvent(QKeyEvent* param1) override {
		if (handle__widgetKeyPressEvent == 0) {
			QwtMagnifier::widgetKeyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtMagnifier_widgetKeyPressEvent(this, handle__widgetKeyPressEvent, sigval1);

	}

	friend void QwtMagnifier_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetKeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetKeyReleaseEvent(QKeyEvent* param1) override {
		if (handle__widgetKeyReleaseEvent == 0) {
			QwtMagnifier::widgetKeyReleaseEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtMagnifier_widgetKeyReleaseEvent(this, handle__widgetKeyReleaseEvent, sigval1);

	}

	friend void QwtMagnifier_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QwtMagnifier::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtMagnifier_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtMagnifier_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtMagnifier::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtMagnifier_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtMagnifier_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtMagnifier::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtMagnifier_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtMagnifier_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtMagnifier::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtMagnifier_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtMagnifier_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtMagnifier::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtMagnifier_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtMagnifier_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtMagnifier::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtMagnifier_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtMagnifier_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QwtMagnifier_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtMagnifier_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtMagnifier_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtMagnifier_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtMagnifier* QwtMagnifier_new(QWidget* param1) {
	return new (std::nothrow) MiqtVirtualQwtMagnifier(param1);
}

void QwtMagnifier_virtbase(QwtMagnifier* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QwtMagnifier_metaObject(const QwtMagnifier* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtMagnifier_metacast(QwtMagnifier* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtMagnifier_tr(const char* s) {
	QString _ret = QwtMagnifier::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtMagnifier_trUtf8(const char* s) {
	QString _ret = QwtMagnifier::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWidget* QwtMagnifier_parentWidget(QwtMagnifier* self) {
	return self->parentWidget();
}

QWidget* QwtMagnifier_parentWidget2(const QwtMagnifier* self) {
	return (QWidget*) self->parentWidget();
}

void QwtMagnifier_setEnabled(QwtMagnifier* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QwtMagnifier_isEnabled(const QwtMagnifier* self) {
	return self->isEnabled();
}

void QwtMagnifier_setMouseFactor(QwtMagnifier* self, double mouseFactor) {
	self->setMouseFactor(static_cast<double>(mouseFactor));
}

double QwtMagnifier_mouseFactor(const QwtMagnifier* self) {
	return self->mouseFactor();
}

void QwtMagnifier_setMouseButton(QwtMagnifier* self, int param1) {
	self->setMouseButton(static_cast<Qt::MouseButton>(param1));
}

void QwtMagnifier_getMouseButton(const QwtMagnifier* self, int* param1, int* param2) {
	self->getMouseButton((Qt::MouseButton&)(*param1), (Qt::KeyboardModifiers&)(*param2));
}

void QwtMagnifier_setWheelFactor(QwtMagnifier* self, double wheelFactor) {
	self->setWheelFactor(static_cast<double>(wheelFactor));
}

double QwtMagnifier_wheelFactor(const QwtMagnifier* self) {
	return self->wheelFactor();
}

void QwtMagnifier_setWheelModifiers(QwtMagnifier* self, int wheelModifiers) {
	self->setWheelModifiers(static_cast<Qt::KeyboardModifiers>(wheelModifiers));
}

int QwtMagnifier_wheelModifiers(const QwtMagnifier* self) {
	Qt::KeyboardModifiers _ret = self->wheelModifiers();
	return static_cast<int>(_ret);
}

void QwtMagnifier_setKeyFactor(QwtMagnifier* self, double keyFactor) {
	self->setKeyFactor(static_cast<double>(keyFactor));
}

double QwtMagnifier_keyFactor(const QwtMagnifier* self) {
	return self->keyFactor();
}

void QwtMagnifier_setZoomInKey(QwtMagnifier* self, int key) {
	self->setZoomInKey(static_cast<int>(key));
}

void QwtMagnifier_getZoomInKey(const QwtMagnifier* self, int* key, int* param2) {
	self->getZoomInKey(static_cast<int&>(*key), (Qt::KeyboardModifiers&)(*param2));
}

void QwtMagnifier_setZoomOutKey(QwtMagnifier* self, int key) {
	self->setZoomOutKey(static_cast<int>(key));
}

void QwtMagnifier_getZoomOutKey(const QwtMagnifier* self, int* key, int* param2) {
	self->getZoomOutKey(static_cast<int&>(*key), (Qt::KeyboardModifiers&)(*param2));
}

bool QwtMagnifier_eventFilter(QwtMagnifier* self, QObject* param1, QEvent* param2) {
	return self->eventFilter(param1, param2);
}

struct miqt_string QwtMagnifier_tr2(const char* s, const char* c) {
	QString _ret = QwtMagnifier::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtMagnifier_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtMagnifier::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtMagnifier_trUtf82(const char* s, const char* c) {
	QString _ret = QwtMagnifier::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtMagnifier_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtMagnifier::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtMagnifier_setMouseButton2(QwtMagnifier* self, int param1, int param2) {
	self->setMouseButton(static_cast<Qt::MouseButton>(param1), static_cast<Qt::KeyboardModifiers>(param2));
}

void QwtMagnifier_setZoomInKey2(QwtMagnifier* self, int key, int param2) {
	self->setZoomInKey(static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(param2));
}

void QwtMagnifier_setZoomOutKey2(QwtMagnifier* self, int key, int param2) {
	self->setZoomOutKey(static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(param2));
}

bool QwtMagnifier_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtMagnifier_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQwtMagnifier*>(self)->QwtMagnifier::eventFilter(param1, param2);
}

bool QwtMagnifier_override_virtual_rescale(void* self, intptr_t slot) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rescale = slot;
	return true;
}

bool QwtMagnifier_override_virtual_widgetMousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMousePressEvent = slot;
	return true;
}

void QwtMagnifier_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtMagnifier*>(self)->QwtMagnifier::widgetMousePressEvent(param1);
}

bool QwtMagnifier_override_virtual_widgetMouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseReleaseEvent = slot;
	return true;
}

void QwtMagnifier_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtMagnifier*>(self)->QwtMagnifier::widgetMouseReleaseEvent(param1);
}

bool QwtMagnifier_override_virtual_widgetMouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseMoveEvent = slot;
	return true;
}

void QwtMagnifier_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtMagnifier*>(self)->QwtMagnifier::widgetMouseMoveEvent(param1);
}

bool QwtMagnifier_override_virtual_widgetWheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetWheelEvent = slot;
	return true;
}

void QwtMagnifier_virtualbase_widgetWheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQwtMagnifier*>(self)->QwtMagnifier::widgetWheelEvent(param1);
}

bool QwtMagnifier_override_virtual_widgetKeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetKeyPressEvent = slot;
	return true;
}

void QwtMagnifier_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtMagnifier*>(self)->QwtMagnifier::widgetKeyPressEvent(param1);
}

bool QwtMagnifier_override_virtual_widgetKeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetKeyReleaseEvent = slot;
	return true;
}

void QwtMagnifier_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtMagnifier*>(self)->QwtMagnifier::widgetKeyReleaseEvent(param1);
}

bool QwtMagnifier_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtMagnifier_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtMagnifier*>(self)->QwtMagnifier::event(event);
}

bool QwtMagnifier_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtMagnifier_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtMagnifier*>(self)->QwtMagnifier::timerEvent(event);
}

bool QwtMagnifier_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtMagnifier_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtMagnifier*>(self)->QwtMagnifier::childEvent(event);
}

bool QwtMagnifier_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtMagnifier_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtMagnifier*>(self)->QwtMagnifier::customEvent(event);
}

bool QwtMagnifier_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtMagnifier_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtMagnifier*>(self)->QwtMagnifier::connectNotify(*signal);
}

bool QwtMagnifier_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtMagnifier_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtMagnifier*>(self)->QwtMagnifier::disconnectNotify(*signal);
}

QObject* QwtMagnifier_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtMagnifier_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtMagnifier_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtMagnifier_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtMagnifier* self_cast = dynamic_cast<MiqtVirtualQwtMagnifier*>( (QwtMagnifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtMagnifier_delete(QwtMagnifier* self) {
	delete self;
}

