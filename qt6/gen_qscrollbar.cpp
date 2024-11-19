#include <QAbstractSlider>
#include <QContextMenuEvent>
#include <QEvent>
#include <QHideEvent>
#include <QKeyEvent>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QScrollBar>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionSlider>
#include <QTimerEvent>
#include <QWheelEvent>
#include <QWidget>
#include <qscrollbar.h>
#include "gen_qscrollbar.h"
#include "_cgo_export.h"

class MiqtVirtualQScrollBar : public virtual QScrollBar {
public:

	MiqtVirtualQScrollBar(QWidget* parent): QScrollBar(parent) {};
	MiqtVirtualQScrollBar(): QScrollBar() {};
	MiqtVirtualQScrollBar(Qt::Orientation param1): QScrollBar(param1) {};
	MiqtVirtualQScrollBar(Qt::Orientation param1, QWidget* parent): QScrollBar(param1, parent) {};

	virtual ~MiqtVirtualQScrollBar() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QScrollBar::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QScrollBar_SizeHint(const_cast<MiqtVirtualQScrollBar*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QScrollBar::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QScrollBar::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QScrollBar_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QScrollBar::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QScrollBar::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QScrollBar::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QScrollBar::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QScrollBar::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QScrollBar::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QScrollBar::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QScrollBar::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QScrollBar::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QScrollBar::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QScrollBar::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* param1) override {
		if (handle__HideEvent == 0) {
			QScrollBar::hideEvent(param1);
			return;
		}
		
		QHideEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* param1) {

		QScrollBar::hideEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SliderChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange(QAbstractSlider::SliderChange change) override {
		if (handle__SliderChange == 0) {
			QScrollBar::sliderChange(change);
			return;
		}
		
		QAbstractSlider::SliderChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);

		miqt_exec_callback_QScrollBar_SliderChange(this, handle__SliderChange, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SliderChange(int change) {

		QScrollBar::sliderChange(static_cast<QAbstractSlider::SliderChange>(change));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QScrollBar::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QScrollBar::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionSlider* option) const override {
		if (handle__InitStyleOption == 0) {
			QScrollBar::initStyleOption(option);
			return;
		}
		
		QStyleOptionSlider* sigval1 = option;

		miqt_exec_callback_QScrollBar_InitStyleOption(const_cast<MiqtVirtualQScrollBar*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionSlider* option) const {

		QScrollBar::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__KeyPressEvent == 0) {
			QScrollBar::keyPressEvent(ev);
			return;
		}
		
		QKeyEvent* sigval1 = ev;

		miqt_exec_callback_QScrollBar_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* ev) {

		QScrollBar::keyPressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__TimerEvent == 0) {
			QScrollBar::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* param1) {

		QScrollBar::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QScrollBar::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QScrollBar_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QScrollBar::changeEvent(e);

	}

};

void QScrollBar_new(QWidget* parent, QScrollBar** outptr_QScrollBar, QAbstractSlider** outptr_QAbstractSlider, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQScrollBar* ret = new MiqtVirtualQScrollBar(parent);
	*outptr_QScrollBar = ret;
	*outptr_QAbstractSlider = static_cast<QAbstractSlider*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QScrollBar_new2(QScrollBar** outptr_QScrollBar, QAbstractSlider** outptr_QAbstractSlider, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQScrollBar* ret = new MiqtVirtualQScrollBar();
	*outptr_QScrollBar = ret;
	*outptr_QAbstractSlider = static_cast<QAbstractSlider*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QScrollBar_new3(int param1, QScrollBar** outptr_QScrollBar, QAbstractSlider** outptr_QAbstractSlider, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQScrollBar* ret = new MiqtVirtualQScrollBar(static_cast<Qt::Orientation>(param1));
	*outptr_QScrollBar = ret;
	*outptr_QAbstractSlider = static_cast<QAbstractSlider*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QScrollBar_new4(int param1, QWidget* parent, QScrollBar** outptr_QScrollBar, QAbstractSlider** outptr_QAbstractSlider, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQScrollBar* ret = new MiqtVirtualQScrollBar(static_cast<Qt::Orientation>(param1), parent);
	*outptr_QScrollBar = ret;
	*outptr_QAbstractSlider = static_cast<QAbstractSlider*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

QMetaObject* QScrollBar_MetaObject(const QScrollBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScrollBar_Metacast(QScrollBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScrollBar_Tr(const char* s) {
	QString _ret = QScrollBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QScrollBar_SizeHint(const QScrollBar* self) {
	return new QSize(self->sizeHint());
}

bool QScrollBar_Event(QScrollBar* self, QEvent* event) {
	return self->event(event);
}

struct miqt_string QScrollBar_Tr2(const char* s, const char* c) {
	QString _ret = QScrollBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScrollBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScrollBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScrollBar_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) )->handle__SizeHint = slot;
}

QSize* QScrollBar_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_SizeHint();
}

void QScrollBar_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) )->handle__Event = slot;
}

bool QScrollBar_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQScrollBar*)(self) )->virtualbase_Event(event);
}

void QScrollBar_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) )->handle__WheelEvent = slot;
}

void QScrollBar_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_WheelEvent(param1);
}

void QScrollBar_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) )->handle__PaintEvent = slot;
}

void QScrollBar_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_PaintEvent(param1);
}

void QScrollBar_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) )->handle__MousePressEvent = slot;
}

void QScrollBar_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_MousePressEvent(param1);
}

void QScrollBar_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) )->handle__MouseReleaseEvent = slot;
}

void QScrollBar_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

void QScrollBar_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) )->handle__MouseMoveEvent = slot;
}

void QScrollBar_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_MouseMoveEvent(param1);
}

void QScrollBar_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) )->handle__HideEvent = slot;
}

void QScrollBar_virtualbase_HideEvent(void* self, QHideEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_HideEvent(param1);
}

void QScrollBar_override_virtual_SliderChange(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) )->handle__SliderChange = slot;
}

void QScrollBar_virtualbase_SliderChange(void* self, int change) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_SliderChange(change);
}

void QScrollBar_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) )->handle__ContextMenuEvent = slot;
}

void QScrollBar_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_ContextMenuEvent(param1);
}

void QScrollBar_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) )->handle__InitStyleOption = slot;
}

void QScrollBar_virtualbase_InitStyleOption(const void* self, QStyleOptionSlider* option) {
	( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_InitStyleOption(option);
}

void QScrollBar_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) )->handle__KeyPressEvent = slot;
}

void QScrollBar_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_KeyPressEvent(ev);
}

void QScrollBar_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) )->handle__TimerEvent = slot;
}

void QScrollBar_virtualbase_TimerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_TimerEvent(param1);
}

void QScrollBar_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) )->handle__ChangeEvent = slot;
}

void QScrollBar_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_ChangeEvent(e);
}

void QScrollBar_Delete(QScrollBar* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQScrollBar*>( self );
	} else {
		delete self;
	}
}

