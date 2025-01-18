#include <QAbstractButton>
#include <QAction>
#include <QActionEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QKeyEvent>
#include <QMenu>
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
#include <QStyleOptionToolButton>
#include <QTimerEvent>
#include <QToolButton>
#include <QWidget>
#include <qtoolbutton.h>
#include "gen_qtoolbutton.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QToolButton_Triggered(intptr_t, QAction*);
QSize* miqt_exec_callback_QToolButton_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QToolButton_MinimumSizeHint(void*, intptr_t);
bool miqt_exec_callback_QToolButton_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QToolButton_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolButton_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolButton_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QToolButton_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QToolButton_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QToolButton_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QToolButton_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QToolButton_ChangeEvent(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QToolButton_HitButton(void*, intptr_t, QPoint*);
void miqt_exec_callback_QToolButton_CheckStateSet(void*, intptr_t);
void miqt_exec_callback_QToolButton_NextCheckState(void*, intptr_t);
void miqt_exec_callback_QToolButton_InitStyleOption(void*, intptr_t, QStyleOptionToolButton*);
void miqt_exec_callback_QToolButton_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QToolButton_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QToolButton_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolButton_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QToolButton_FocusOutEvent(void*, intptr_t, QFocusEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQToolButton final : public QToolButton {
public:

	MiqtVirtualQToolButton(QWidget* parent): QToolButton(parent) {};
	MiqtVirtualQToolButton(): QToolButton() {};

	virtual ~MiqtVirtualQToolButton() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QToolButton::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QToolButton_SizeHint(const_cast<MiqtVirtualQToolButton*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QToolButton::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QToolButton::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QToolButton_MinimumSizeHint(const_cast<MiqtVirtualQToolButton*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QToolButton::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QToolButton::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QToolButton_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QToolButton::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QToolButton::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QToolButton::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QToolButton::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QToolButton::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QToolButton::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QToolButton::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* param1) override {
		if (handle__ActionEvent == 0) {
			QToolButton::actionEvent(param1);
			return;
		}
		
		QActionEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* param1) {

		QToolButton::actionEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* param1) override {
		if (handle__EnterEvent == 0) {
			QToolButton::enterEvent(param1);
			return;
		}
		
		QEnterEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* param1) {

		QToolButton::enterEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* param1) override {
		if (handle__LeaveEvent == 0) {
			QToolButton::leaveEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* param1) {

		QToolButton::leaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__TimerEvent == 0) {
			QToolButton::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* param1) {

		QToolButton::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QToolButton::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QToolButton::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (handle__HitButton == 0) {
			return QToolButton::hitButton(pos);
		}
		
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);

		bool callback_return_value = miqt_exec_callback_QToolButton_HitButton(const_cast<MiqtVirtualQToolButton*>(this), handle__HitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HitButton(QPoint* pos) const {

		return QToolButton::hitButton(*pos);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CheckStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__CheckStateSet == 0) {
			QToolButton::checkStateSet();
			return;
		}
		

		miqt_exec_callback_QToolButton_CheckStateSet(this, handle__CheckStateSet);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CheckStateSet() {

		QToolButton::checkStateSet();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__NextCheckState == 0) {
			QToolButton::nextCheckState();
			return;
		}
		

		miqt_exec_callback_QToolButton_NextCheckState(this, handle__NextCheckState);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_NextCheckState() {

		QToolButton::nextCheckState();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionToolButton* option) const override {
		if (handle__InitStyleOption == 0) {
			QToolButton::initStyleOption(option);
			return;
		}
		
		QStyleOptionToolButton* sigval1 = option;

		miqt_exec_callback_QToolButton_InitStyleOption(const_cast<MiqtVirtualQToolButton*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionToolButton* option) const {

		QToolButton::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__KeyPressEvent == 0) {
			QToolButton::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QToolButton_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* e) {

		QToolButton::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__KeyReleaseEvent == 0) {
			QToolButton::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QToolButton_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* e) {

		QToolButton::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__MouseMoveEvent == 0) {
			QToolButton::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QToolButton_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* e) {

		QToolButton::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__FocusInEvent == 0) {
			QToolButton::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QToolButton_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* e) {

		QToolButton::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__FocusOutEvent == 0) {
			QToolButton::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QToolButton_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* e) {

		QToolButton::focusOutEvent(e);

	}

};

QToolButton* QToolButton_new(QWidget* parent) {
	return new MiqtVirtualQToolButton(parent);
}

QToolButton* QToolButton_new2() {
	return new MiqtVirtualQToolButton();
}

void QToolButton_virtbase(QToolButton* src, QAbstractButton** outptr_QAbstractButton) {
	*outptr_QAbstractButton = static_cast<QAbstractButton*>(src);
}

QMetaObject* QToolButton_MetaObject(const QToolButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QToolButton_Metacast(QToolButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QToolButton_Tr(const char* s) {
	QString _ret = QToolButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QToolButton_SizeHint(const QToolButton* self) {
	return new QSize(self->sizeHint());
}

QSize* QToolButton_MinimumSizeHint(const QToolButton* self) {
	return new QSize(self->minimumSizeHint());
}

int QToolButton_ToolButtonStyle(const QToolButton* self) {
	Qt::ToolButtonStyle _ret = self->toolButtonStyle();
	return static_cast<int>(_ret);
}

int QToolButton_ArrowType(const QToolButton* self) {
	Qt::ArrowType _ret = self->arrowType();
	return static_cast<int>(_ret);
}

void QToolButton_SetArrowType(QToolButton* self, int typeVal) {
	self->setArrowType(static_cast<Qt::ArrowType>(typeVal));
}

void QToolButton_SetMenu(QToolButton* self, QMenu* menu) {
	self->setMenu(menu);
}

QMenu* QToolButton_Menu(const QToolButton* self) {
	return self->menu();
}

void QToolButton_SetPopupMode(QToolButton* self, int mode) {
	self->setPopupMode(static_cast<QToolButton::ToolButtonPopupMode>(mode));
}

int QToolButton_PopupMode(const QToolButton* self) {
	QToolButton::ToolButtonPopupMode _ret = self->popupMode();
	return static_cast<int>(_ret);
}

QAction* QToolButton_DefaultAction(const QToolButton* self) {
	return self->defaultAction();
}

void QToolButton_SetAutoRaise(QToolButton* self, bool enable) {
	self->setAutoRaise(enable);
}

bool QToolButton_AutoRaise(const QToolButton* self) {
	return self->autoRaise();
}

void QToolButton_ShowMenu(QToolButton* self) {
	self->showMenu();
}

void QToolButton_SetToolButtonStyle(QToolButton* self, int style) {
	self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(style));
}

void QToolButton_SetDefaultAction(QToolButton* self, QAction* defaultAction) {
	self->setDefaultAction(defaultAction);
}

void QToolButton_Triggered(QToolButton* self, QAction* param1) {
	self->triggered(param1);
}

void QToolButton_connect_Triggered(QToolButton* self, intptr_t slot) {
	MiqtVirtualQToolButton::connect(self, static_cast<void (QToolButton::*)(QAction*)>(&QToolButton::triggered), self, [=](QAction* param1) {
		QAction* sigval1 = param1;
		miqt_exec_callback_QToolButton_Triggered(slot, sigval1);
	});
}

struct miqt_string QToolButton_Tr2(const char* s, const char* c) {
	QString _ret = QToolButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QToolButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QToolButton_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QToolButton_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_SizeHint();
}

bool QToolButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QToolButton_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_MinimumSizeHint();
}

bool QToolButton_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QToolButton_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQToolButton*)(self) )->virtualbase_Event(e);
}

bool QToolButton_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QToolButton_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_MousePressEvent(param1);
}

bool QToolButton_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QToolButton_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

bool QToolButton_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QToolButton_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_PaintEvent(param1);
}

bool QToolButton_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QToolButton_virtualbase_ActionEvent(void* self, QActionEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_ActionEvent(param1);
}

bool QToolButton_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QToolButton_virtualbase_EnterEvent(void* self, QEnterEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_EnterEvent(param1);
}

bool QToolButton_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QToolButton_virtualbase_LeaveEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_LeaveEvent(param1);
}

bool QToolButton_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QToolButton_virtualbase_TimerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_TimerEvent(param1);
}

bool QToolButton_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QToolButton_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QToolButton_override_virtual_HitButton(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HitButton = slot;
	return true;
}

bool QToolButton_virtualbase_HitButton(const void* self, QPoint* pos) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_HitButton(pos);
}

bool QToolButton_override_virtual_CheckStateSet(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CheckStateSet = slot;
	return true;
}

void QToolButton_virtualbase_CheckStateSet(void* self) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_CheckStateSet();
}

bool QToolButton_override_virtual_NextCheckState(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NextCheckState = slot;
	return true;
}

void QToolButton_virtualbase_NextCheckState(void* self) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_NextCheckState();
}

bool QToolButton_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QToolButton_virtualbase_InitStyleOption(const void* self, QStyleOptionToolButton* option) {
	( (const MiqtVirtualQToolButton*)(self) )->virtualbase_InitStyleOption(option);
}

bool QToolButton_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QToolButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_KeyPressEvent(e);
}

bool QToolButton_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QToolButton_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_KeyReleaseEvent(e);
}

bool QToolButton_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QToolButton_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_MouseMoveEvent(e);
}

bool QToolButton_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QToolButton_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_FocusInEvent(e);
}

bool QToolButton_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QToolButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_FocusOutEvent(e);
}

void QToolButton_Delete(QToolButton* self) {
	delete self;
}

