#include <QAbstractSlider>
#include <QDial>
#include <QEvent>
#include <QKeyEvent>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWheelEvent>
#include <QWidget>
#include <qdial.h>
#include "gen_qdial.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QDial_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QDial_MinimumSizeHint(void*, intptr_t);
bool miqt_exec_callback_QDial_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QDial_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDial_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDial_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDial_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDial_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDial_SliderChange(void*, intptr_t, int);
void miqt_exec_callback_QDial_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDial_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDial_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDial_ChangeEvent(void*, intptr_t, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDial final : public QDial {
public:

	MiqtVirtualQDial(QWidget* parent): QDial(parent) {};
	MiqtVirtualQDial(): QDial() {};

	virtual ~MiqtVirtualQDial() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QDial::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDial_SizeHint(const_cast<MiqtVirtualQDial*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QDial::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QDial::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDial_MinimumSizeHint(const_cast<MiqtVirtualQDial*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QDial::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QDial::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QDial_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QDial::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* re) override {
		if (handle__ResizeEvent == 0) {
			QDial::resizeEvent(re);
			return;
		}
		
		QResizeEvent* sigval1 = re;

		miqt_exec_callback_QDial_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* re) {

		QDial::resizeEvent(re);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* pe) override {
		if (handle__PaintEvent == 0) {
			QDial::paintEvent(pe);
			return;
		}
		
		QPaintEvent* sigval1 = pe;

		miqt_exec_callback_QDial_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* pe) {

		QDial::paintEvent(pe);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* me) override {
		if (handle__MousePressEvent == 0) {
			QDial::mousePressEvent(me);
			return;
		}
		
		QMouseEvent* sigval1 = me;

		miqt_exec_callback_QDial_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* me) {

		QDial::mousePressEvent(me);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* me) override {
		if (handle__MouseReleaseEvent == 0) {
			QDial::mouseReleaseEvent(me);
			return;
		}
		
		QMouseEvent* sigval1 = me;

		miqt_exec_callback_QDial_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* me) {

		QDial::mouseReleaseEvent(me);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* me) override {
		if (handle__MouseMoveEvent == 0) {
			QDial::mouseMoveEvent(me);
			return;
		}
		
		QMouseEvent* sigval1 = me;

		miqt_exec_callback_QDial_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* me) {

		QDial::mouseMoveEvent(me);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SliderChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange(QAbstractSlider::SliderChange change) override {
		if (handle__SliderChange == 0) {
			QDial::sliderChange(change);
			return;
		}
		
		QAbstractSlider::SliderChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);

		miqt_exec_callback_QDial_SliderChange(this, handle__SliderChange, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SliderChange(int change) {

		QDial::sliderChange(static_cast<QAbstractSlider::SliderChange>(change));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__KeyPressEvent == 0) {
			QDial::keyPressEvent(ev);
			return;
		}
		
		QKeyEvent* sigval1 = ev;

		miqt_exec_callback_QDial_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* ev) {

		QDial::keyPressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__TimerEvent == 0) {
			QDial::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QDial_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* param1) {

		QDial::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QDial::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QDial_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QDial::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QDial::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QDial_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QDial::changeEvent(e);

	}

};

QDial* QDial_new(QWidget* parent) {
	return new MiqtVirtualQDial(parent);
}

QDial* QDial_new2() {
	return new MiqtVirtualQDial();
}

void QDial_virtbase(QDial* src, QAbstractSlider** outptr_QAbstractSlider) {
	*outptr_QAbstractSlider = static_cast<QAbstractSlider*>(src);
}

QMetaObject* QDial_MetaObject(const QDial* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDial_Metacast(QDial* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDial_Tr(const char* s) {
	QString _ret = QDial::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDial_TrUtf8(const char* s) {
	QString _ret = QDial::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDial_Wrapping(const QDial* self) {
	return self->wrapping();
}

int QDial_NotchSize(const QDial* self) {
	return self->notchSize();
}

void QDial_SetNotchTarget(QDial* self, double target) {
	self->setNotchTarget(static_cast<double>(target));
}

double QDial_NotchTarget(const QDial* self) {
	qreal _ret = self->notchTarget();
	return static_cast<double>(_ret);
}

bool QDial_NotchesVisible(const QDial* self) {
	return self->notchesVisible();
}

QSize* QDial_SizeHint(const QDial* self) {
	return new QSize(self->sizeHint());
}

QSize* QDial_MinimumSizeHint(const QDial* self) {
	return new QSize(self->minimumSizeHint());
}

void QDial_SetNotchesVisible(QDial* self, bool visible) {
	self->setNotchesVisible(visible);
}

void QDial_SetWrapping(QDial* self, bool on) {
	self->setWrapping(on);
}

struct miqt_string QDial_Tr2(const char* s, const char* c) {
	QString _ret = QDial::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDial_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDial::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDial_TrUtf82(const char* s, const char* c) {
	QString _ret = QDial::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDial_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDial::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDial_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) )->handle__SizeHint = slot;
}

QSize* QDial_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_SizeHint();
}

void QDial_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QDial_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_MinimumSizeHint();
}

void QDial_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) )->handle__Event = slot;
}

bool QDial_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQDial*)(self) )->virtualbase_Event(e);
}

void QDial_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) )->handle__ResizeEvent = slot;
}

void QDial_virtualbase_ResizeEvent(void* self, QResizeEvent* re) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_ResizeEvent(re);
}

void QDial_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) )->handle__PaintEvent = slot;
}

void QDial_virtualbase_PaintEvent(void* self, QPaintEvent* pe) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_PaintEvent(pe);
}

void QDial_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) )->handle__MousePressEvent = slot;
}

void QDial_virtualbase_MousePressEvent(void* self, QMouseEvent* me) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_MousePressEvent(me);
}

void QDial_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) )->handle__MouseReleaseEvent = slot;
}

void QDial_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* me) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_MouseReleaseEvent(me);
}

void QDial_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) )->handle__MouseMoveEvent = slot;
}

void QDial_virtualbase_MouseMoveEvent(void* self, QMouseEvent* me) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_MouseMoveEvent(me);
}

void QDial_override_virtual_SliderChange(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) )->handle__SliderChange = slot;
}

void QDial_virtualbase_SliderChange(void* self, int change) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_SliderChange(change);
}

void QDial_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) )->handle__KeyPressEvent = slot;
}

void QDial_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_KeyPressEvent(ev);
}

void QDial_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) )->handle__TimerEvent = slot;
}

void QDial_virtualbase_TimerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_TimerEvent(param1);
}

void QDial_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) )->handle__WheelEvent = slot;
}

void QDial_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_WheelEvent(e);
}

void QDial_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) )->handle__ChangeEvent = slot;
}

void QDial_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_ChangeEvent(e);
}

void QDial_Delete(QDial* self) {
	delete self;
}

