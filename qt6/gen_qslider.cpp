#include <QAbstractSlider>
#include <QEvent>
#include <QKeyEvent>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QSize>
#include <QSlider>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionSlider>
#include <QTimerEvent>
#include <QWheelEvent>
#include <QWidget>
#include <qslider.h>
#include "gen_qslider.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QSlider_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QSlider_MinimumSizeHint(void*, intptr_t);
bool miqt_exec_callback_QSlider_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSlider_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QSlider_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSlider_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSlider_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSlider_InitStyleOption(void*, intptr_t, QStyleOptionSlider*);
void miqt_exec_callback_QSlider_SliderChange(void*, intptr_t, int);
void miqt_exec_callback_QSlider_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSlider_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSlider_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QSlider_ChangeEvent(void*, intptr_t, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSlider final : public QSlider {
public:

	MiqtVirtualQSlider(QWidget* parent): QSlider(parent) {};
	MiqtVirtualQSlider(): QSlider() {};
	MiqtVirtualQSlider(Qt::Orientation orientation): QSlider(orientation) {};
	MiqtVirtualQSlider(Qt::Orientation orientation, QWidget* parent): QSlider(orientation, parent) {};

	virtual ~MiqtVirtualQSlider() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QSlider::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSlider_SizeHint(const_cast<MiqtVirtualQSlider*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QSlider::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QSlider::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSlider_MinimumSizeHint(const_cast<MiqtVirtualQSlider*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QSlider::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSlider::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSlider_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSlider::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* ev) override {
		if (handle__PaintEvent == 0) {
			QSlider::paintEvent(ev);
			return;
		}
		
		QPaintEvent* sigval1 = ev;

		miqt_exec_callback_QSlider_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* ev) {

		QSlider::paintEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* ev) override {
		if (handle__MousePressEvent == 0) {
			QSlider::mousePressEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QSlider_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* ev) {

		QSlider::mousePressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* ev) override {
		if (handle__MouseReleaseEvent == 0) {
			QSlider::mouseReleaseEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QSlider_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* ev) {

		QSlider::mouseReleaseEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* ev) override {
		if (handle__MouseMoveEvent == 0) {
			QSlider::mouseMoveEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QSlider_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* ev) {

		QSlider::mouseMoveEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionSlider* option) const override {
		if (handle__InitStyleOption == 0) {
			QSlider::initStyleOption(option);
			return;
		}
		
		QStyleOptionSlider* sigval1 = option;

		miqt_exec_callback_QSlider_InitStyleOption(const_cast<MiqtVirtualQSlider*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionSlider* option) const {

		QSlider::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SliderChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange(QAbstractSlider::SliderChange change) override {
		if (handle__SliderChange == 0) {
			QSlider::sliderChange(change);
			return;
		}
		
		QAbstractSlider::SliderChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);

		miqt_exec_callback_QSlider_SliderChange(this, handle__SliderChange, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SliderChange(int change) {

		QSlider::sliderChange(static_cast<QAbstractSlider::SliderChange>(change));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__KeyPressEvent == 0) {
			QSlider::keyPressEvent(ev);
			return;
		}
		
		QKeyEvent* sigval1 = ev;

		miqt_exec_callback_QSlider_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* ev) {

		QSlider::keyPressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__TimerEvent == 0) {
			QSlider::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QSlider_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* param1) {

		QSlider::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QSlider::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QSlider_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QSlider::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QSlider::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QSlider_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QSlider::changeEvent(e);

	}

};

QSlider* QSlider_new(QWidget* parent) {
	return new MiqtVirtualQSlider(parent);
}

QSlider* QSlider_new2() {
	return new MiqtVirtualQSlider();
}

QSlider* QSlider_new3(int orientation) {
	return new MiqtVirtualQSlider(static_cast<Qt::Orientation>(orientation));
}

QSlider* QSlider_new4(int orientation, QWidget* parent) {
	return new MiqtVirtualQSlider(static_cast<Qt::Orientation>(orientation), parent);
}

void QSlider_virtbase(QSlider* src, QAbstractSlider** outptr_QAbstractSlider) {
	*outptr_QAbstractSlider = static_cast<QAbstractSlider*>(src);
}

QMetaObject* QSlider_MetaObject(const QSlider* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSlider_Metacast(QSlider* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSlider_Tr(const char* s) {
	QString _ret = QSlider::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QSlider_SizeHint(const QSlider* self) {
	return new QSize(self->sizeHint());
}

QSize* QSlider_MinimumSizeHint(const QSlider* self) {
	return new QSize(self->minimumSizeHint());
}

void QSlider_SetTickPosition(QSlider* self, int position) {
	self->setTickPosition(static_cast<QSlider::TickPosition>(position));
}

int QSlider_TickPosition(const QSlider* self) {
	QSlider::TickPosition _ret = self->tickPosition();
	return static_cast<int>(_ret);
}

void QSlider_SetTickInterval(QSlider* self, int ti) {
	self->setTickInterval(static_cast<int>(ti));
}

int QSlider_TickInterval(const QSlider* self) {
	return self->tickInterval();
}

bool QSlider_Event(QSlider* self, QEvent* event) {
	return self->event(event);
}

struct miqt_string QSlider_Tr2(const char* s, const char* c) {
	QString _ret = QSlider::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSlider_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSlider::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSlider_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) )->handle__SizeHint = slot;
}

QSize* QSlider_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQSlider*)(self) )->virtualbase_SizeHint();
}

void QSlider_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QSlider_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQSlider*)(self) )->virtualbase_MinimumSizeHint();
}

void QSlider_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) )->handle__Event = slot;
}

bool QSlider_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSlider*)(self) )->virtualbase_Event(event);
}

void QSlider_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) )->handle__PaintEvent = slot;
}

void QSlider_virtualbase_PaintEvent(void* self, QPaintEvent* ev) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_PaintEvent(ev);
}

void QSlider_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) )->handle__MousePressEvent = slot;
}

void QSlider_virtualbase_MousePressEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_MousePressEvent(ev);
}

void QSlider_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) )->handle__MouseReleaseEvent = slot;
}

void QSlider_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_MouseReleaseEvent(ev);
}

void QSlider_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) )->handle__MouseMoveEvent = slot;
}

void QSlider_virtualbase_MouseMoveEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_MouseMoveEvent(ev);
}

void QSlider_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) )->handle__InitStyleOption = slot;
}

void QSlider_virtualbase_InitStyleOption(const void* self, QStyleOptionSlider* option) {
	( (const MiqtVirtualQSlider*)(self) )->virtualbase_InitStyleOption(option);
}

void QSlider_override_virtual_SliderChange(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) )->handle__SliderChange = slot;
}

void QSlider_virtualbase_SliderChange(void* self, int change) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_SliderChange(change);
}

void QSlider_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) )->handle__KeyPressEvent = slot;
}

void QSlider_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_KeyPressEvent(ev);
}

void QSlider_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) )->handle__TimerEvent = slot;
}

void QSlider_virtualbase_TimerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_TimerEvent(param1);
}

void QSlider_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) )->handle__WheelEvent = slot;
}

void QSlider_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_WheelEvent(e);
}

void QSlider_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) )->handle__ChangeEvent = slot;
}

void QSlider_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_ChangeEvent(e);
}

void QSlider_Delete(QSlider* self) {
	delete self;
}

