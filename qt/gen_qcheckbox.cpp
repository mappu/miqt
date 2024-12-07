#include <QAbstractButton>
#include <QCheckBox>
#include <QEvent>
#include <QFocusEvent>
#include <QKeyEvent>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QPoint>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <qcheckbox.h>
#include "gen_qcheckbox.h"
#include "_cgo_export.h"

class MiqtVirtualQCheckBox : public virtual QCheckBox {
public:

	MiqtVirtualQCheckBox(QWidget* parent): QCheckBox(parent) {};
	MiqtVirtualQCheckBox(): QCheckBox() {};
	MiqtVirtualQCheckBox(const QString& text): QCheckBox(text) {};
	MiqtVirtualQCheckBox(const QString& text, QWidget* parent): QCheckBox(text, parent) {};

	virtual ~MiqtVirtualQCheckBox() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QCheckBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCheckBox_SizeHint(const_cast<MiqtVirtualQCheckBox*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QCheckBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QCheckBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCheckBox_MinimumSizeHint(const_cast<MiqtVirtualQCheckBox*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QCheckBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QCheckBox::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QCheckBox_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QCheckBox::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (handle__HitButton == 0) {
			return QCheckBox::hitButton(pos);
		}
		
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);

		bool callback_return_value = miqt_exec_callback_QCheckBox_HitButton(const_cast<MiqtVirtualQCheckBox*>(this), handle__HitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HitButton(QPoint* pos) const {

		return QCheckBox::hitButton(*pos);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CheckStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__CheckStateSet == 0) {
			QCheckBox::checkStateSet();
			return;
		}
		

		miqt_exec_callback_QCheckBox_CheckStateSet(this, handle__CheckStateSet);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CheckStateSet() {

		QCheckBox::checkStateSet();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__NextCheckState == 0) {
			QCheckBox::nextCheckState();
			return;
		}
		

		miqt_exec_callback_QCheckBox_NextCheckState(this, handle__NextCheckState);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_NextCheckState() {

		QCheckBox::nextCheckState();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QCheckBox::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QCheckBox_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QCheckBox::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QCheckBox::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QCheckBox_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QCheckBox::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__KeyPressEvent == 0) {
			QCheckBox::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* e) {

		QCheckBox::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__KeyReleaseEvent == 0) {
			QCheckBox::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* e) {

		QCheckBox::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QCheckBox::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QCheckBox::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QCheckBox::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QCheckBox::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__FocusInEvent == 0) {
			QCheckBox::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* e) {

		QCheckBox::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__FocusOutEvent == 0) {
			QCheckBox::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* e) {

		QCheckBox::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QCheckBox::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QCheckBox::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__TimerEvent == 0) {
			QCheckBox::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* e) {

		QCheckBox::timerEvent(e);

	}

};

QCheckBox* QCheckBox_new(QWidget* parent) {
	return new MiqtVirtualQCheckBox(parent);
}

QCheckBox* QCheckBox_new2() {
	return new MiqtVirtualQCheckBox();
}

QCheckBox* QCheckBox_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQCheckBox(text_QString);
}

QCheckBox* QCheckBox_new4(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQCheckBox(text_QString, parent);
}

void QCheckBox_virtbase(QCheckBox* src, QAbstractButton** outptr_QAbstractButton) {
	*outptr_QAbstractButton = static_cast<QAbstractButton*>(src);
}

QMetaObject* QCheckBox_MetaObject(const QCheckBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCheckBox_Metacast(QCheckBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCheckBox_Tr(const char* s) {
	QString _ret = QCheckBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCheckBox_TrUtf8(const char* s) {
	QString _ret = QCheckBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QCheckBox_SizeHint(const QCheckBox* self) {
	return new QSize(self->sizeHint());
}

QSize* QCheckBox_MinimumSizeHint(const QCheckBox* self) {
	return new QSize(self->minimumSizeHint());
}

void QCheckBox_SetTristate(QCheckBox* self) {
	self->setTristate();
}

bool QCheckBox_IsTristate(const QCheckBox* self) {
	return self->isTristate();
}

int QCheckBox_CheckState(const QCheckBox* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<int>(_ret);
}

void QCheckBox_SetCheckState(QCheckBox* self, int state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

void QCheckBox_StateChanged(QCheckBox* self, int param1) {
	self->stateChanged(static_cast<int>(param1));
}

void QCheckBox_connect_StateChanged(QCheckBox* self, intptr_t slot) {
	MiqtVirtualQCheckBox::connect(self, static_cast<void (QCheckBox::*)(int)>(&QCheckBox::stateChanged), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QCheckBox_StateChanged(slot, sigval1);
	});
}

struct miqt_string QCheckBox_Tr2(const char* s, const char* c) {
	QString _ret = QCheckBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCheckBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCheckBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCheckBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QCheckBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCheckBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCheckBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCheckBox_SetTristate1(QCheckBox* self, bool y) {
	self->setTristate(y);
}

void QCheckBox_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__SizeHint = slot;
}

QSize* QCheckBox_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_SizeHint();
}

void QCheckBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QCheckBox_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_MinimumSizeHint();
}

void QCheckBox_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__Event = slot;
}

bool QCheckBox_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQCheckBox*)(self) )->virtualbase_Event(e);
}

void QCheckBox_override_virtual_HitButton(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__HitButton = slot;
}

bool QCheckBox_virtualbase_HitButton(const void* self, QPoint* pos) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_HitButton(pos);
}

void QCheckBox_override_virtual_CheckStateSet(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__CheckStateSet = slot;
}

void QCheckBox_virtualbase_CheckStateSet(void* self) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_CheckStateSet();
}

void QCheckBox_override_virtual_NextCheckState(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__NextCheckState = slot;
}

void QCheckBox_virtualbase_NextCheckState(void* self) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_NextCheckState();
}

void QCheckBox_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__PaintEvent = slot;
}

void QCheckBox_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_PaintEvent(param1);
}

void QCheckBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__MouseMoveEvent = slot;
}

void QCheckBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_MouseMoveEvent(param1);
}

void QCheckBox_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__KeyPressEvent = slot;
}

void QCheckBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_KeyPressEvent(e);
}

void QCheckBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__KeyReleaseEvent = slot;
}

void QCheckBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_KeyReleaseEvent(e);
}

void QCheckBox_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__MousePressEvent = slot;
}

void QCheckBox_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_MousePressEvent(e);
}

void QCheckBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__MouseReleaseEvent = slot;
}

void QCheckBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_MouseReleaseEvent(e);
}

void QCheckBox_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__FocusInEvent = slot;
}

void QCheckBox_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_FocusInEvent(e);
}

void QCheckBox_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__FocusOutEvent = slot;
}

void QCheckBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_FocusOutEvent(e);
}

void QCheckBox_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__ChangeEvent = slot;
}

void QCheckBox_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_ChangeEvent(e);
}

void QCheckBox_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) )->handle__TimerEvent = slot;
}

void QCheckBox_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_TimerEvent(e);
}

void QCheckBox_Delete(QCheckBox* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQCheckBox*>( self );
	} else {
		delete self;
	}
}

