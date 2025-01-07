#include <QAbstractButton>
#include <QEvent>
#include <QFocusEvent>
#include <QIcon>
#include <QKeyEvent>
#include <QMenu>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QPoint>
#include <QPushButton>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <qpushbutton.h>
#include "gen_qpushbutton.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QPushButton_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QPushButton_MinimumSizeHint(void*, intptr_t);
bool miqt_exec_callback_QPushButton_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPushButton_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPushButton_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPushButton_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPushButton_FocusOutEvent(void*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QPushButton_HitButton(void*, intptr_t, QPoint*);
void miqt_exec_callback_QPushButton_CheckStateSet(void*, intptr_t);
void miqt_exec_callback_QPushButton_NextCheckState(void*, intptr_t);
void miqt_exec_callback_QPushButton_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPushButton_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPushButton_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPushButton_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPushButton_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPushButton_TimerEvent(void*, intptr_t, QTimerEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPushButton : public virtual QPushButton {
public:

	MiqtVirtualQPushButton(QWidget* parent): QPushButton(parent) {};
	MiqtVirtualQPushButton(): QPushButton() {};
	MiqtVirtualQPushButton(const QString& text): QPushButton(text) {};
	MiqtVirtualQPushButton(const QIcon& icon, const QString& text): QPushButton(icon, text) {};
	MiqtVirtualQPushButton(const QString& text, QWidget* parent): QPushButton(text, parent) {};
	MiqtVirtualQPushButton(const QIcon& icon, const QString& text, QWidget* parent): QPushButton(icon, text, parent) {};

	virtual ~MiqtVirtualQPushButton() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QPushButton::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPushButton_SizeHint(const_cast<MiqtVirtualQPushButton*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QPushButton::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QPushButton::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPushButton_MinimumSizeHint(const_cast<MiqtVirtualQPushButton*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QPushButton::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QPushButton::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QPushButton_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QPushButton::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QPushButton::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QPushButton_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QPushButton::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QPushButton::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QPushButton_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QPushButton::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__FocusInEvent == 0) {
			QPushButton::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QPushButton_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* param1) {

		QPushButton::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__FocusOutEvent == 0) {
			QPushButton::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QPushButton_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* param1) {

		QPushButton::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (handle__HitButton == 0) {
			return QPushButton::hitButton(pos);
		}
		
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);

		bool callback_return_value = miqt_exec_callback_QPushButton_HitButton(const_cast<MiqtVirtualQPushButton*>(this), handle__HitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HitButton(QPoint* pos) const {

		return QPushButton::hitButton(*pos);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CheckStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__CheckStateSet == 0) {
			QPushButton::checkStateSet();
			return;
		}
		

		miqt_exec_callback_QPushButton_CheckStateSet(this, handle__CheckStateSet);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CheckStateSet() {

		QPushButton::checkStateSet();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__NextCheckState == 0) {
			QPushButton::nextCheckState();
			return;
		}
		

		miqt_exec_callback_QPushButton_NextCheckState(this, handle__NextCheckState);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_NextCheckState() {

		QPushButton::nextCheckState();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__KeyReleaseEvent == 0) {
			QPushButton::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* e) {

		QPushButton::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QPushButton::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QPushButton::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QPushButton::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QPushButton::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__MouseMoveEvent == 0) {
			QPushButton::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* e) {

		QPushButton::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QPushButton::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QPushButton::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__TimerEvent == 0) {
			QPushButton::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* e) {

		QPushButton::timerEvent(e);

	}

};

QPushButton* QPushButton_new(QWidget* parent) {
	return new MiqtVirtualQPushButton(parent);
}

QPushButton* QPushButton_new2() {
	return new MiqtVirtualQPushButton();
}

QPushButton* QPushButton_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQPushButton(text_QString);
}

QPushButton* QPushButton_new4(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQPushButton(*icon, text_QString);
}

QPushButton* QPushButton_new5(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQPushButton(text_QString, parent);
}

QPushButton* QPushButton_new6(QIcon* icon, struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQPushButton(*icon, text_QString, parent);
}

void QPushButton_virtbase(QPushButton* src, QAbstractButton** outptr_QAbstractButton) {
	*outptr_QAbstractButton = static_cast<QAbstractButton*>(src);
}

QMetaObject* QPushButton_MetaObject(const QPushButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPushButton_Metacast(QPushButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPushButton_Tr(const char* s) {
	QString _ret = QPushButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPushButton_TrUtf8(const char* s) {
	QString _ret = QPushButton::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QPushButton_SizeHint(const QPushButton* self) {
	return new QSize(self->sizeHint());
}

QSize* QPushButton_MinimumSizeHint(const QPushButton* self) {
	return new QSize(self->minimumSizeHint());
}

bool QPushButton_AutoDefault(const QPushButton* self) {
	return self->autoDefault();
}

void QPushButton_SetAutoDefault(QPushButton* self, bool autoDefault) {
	self->setAutoDefault(autoDefault);
}

bool QPushButton_IsDefault(const QPushButton* self) {
	return self->isDefault();
}

void QPushButton_SetDefault(QPushButton* self, bool defaultVal) {
	self->setDefault(defaultVal);
}

void QPushButton_SetMenu(QPushButton* self, QMenu* menu) {
	self->setMenu(menu);
}

QMenu* QPushButton_Menu(const QPushButton* self) {
	return self->menu();
}

void QPushButton_SetFlat(QPushButton* self, bool flat) {
	self->setFlat(flat);
}

bool QPushButton_IsFlat(const QPushButton* self) {
	return self->isFlat();
}

void QPushButton_ShowMenu(QPushButton* self) {
	self->showMenu();
}

struct miqt_string QPushButton_Tr2(const char* s, const char* c) {
	QString _ret = QPushButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPushButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPushButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPushButton_TrUtf82(const char* s, const char* c) {
	QString _ret = QPushButton::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPushButton_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPushButton::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPushButton_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__SizeHint = slot;
}

QSize* QPushButton_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_SizeHint();
}

void QPushButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QPushButton_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_MinimumSizeHint();
}

void QPushButton_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__Event = slot;
}

bool QPushButton_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQPushButton*)(self) )->virtualbase_Event(e);
}

void QPushButton_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__PaintEvent = slot;
}

void QPushButton_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_PaintEvent(param1);
}

void QPushButton_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__KeyPressEvent = slot;
}

void QPushButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_KeyPressEvent(param1);
}

void QPushButton_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__FocusInEvent = slot;
}

void QPushButton_virtualbase_FocusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_FocusInEvent(param1);
}

void QPushButton_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__FocusOutEvent = slot;
}

void QPushButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_FocusOutEvent(param1);
}

void QPushButton_override_virtual_HitButton(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__HitButton = slot;
}

bool QPushButton_virtualbase_HitButton(const void* self, QPoint* pos) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_HitButton(pos);
}

void QPushButton_override_virtual_CheckStateSet(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__CheckStateSet = slot;
}

void QPushButton_virtualbase_CheckStateSet(void* self) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_CheckStateSet();
}

void QPushButton_override_virtual_NextCheckState(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__NextCheckState = slot;
}

void QPushButton_virtualbase_NextCheckState(void* self) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_NextCheckState();
}

void QPushButton_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__KeyReleaseEvent = slot;
}

void QPushButton_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_KeyReleaseEvent(e);
}

void QPushButton_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__MousePressEvent = slot;
}

void QPushButton_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_MousePressEvent(e);
}

void QPushButton_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__MouseReleaseEvent = slot;
}

void QPushButton_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_MouseReleaseEvent(e);
}

void QPushButton_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__MouseMoveEvent = slot;
}

void QPushButton_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_MouseMoveEvent(e);
}

void QPushButton_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__ChangeEvent = slot;
}

void QPushButton_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_ChangeEvent(e);
}

void QPushButton_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) )->handle__TimerEvent = slot;
}

void QPushButton_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_TimerEvent(e);
}

void QPushButton_Delete(QPushButton* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQPushButton*>( self );
	} else {
		delete self;
	}
}

