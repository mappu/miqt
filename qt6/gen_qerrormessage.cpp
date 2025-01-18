#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QErrorMessage>
#include <QEvent>
#include <QKeyEvent>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qerrormessage.h>
#include "gen_qerrormessage.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QErrorMessage_Done(void*, intptr_t, int);
void miqt_exec_callback_QErrorMessage_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QErrorMessage_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QErrorMessage_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QErrorMessage_MinimumSizeHint(void*, intptr_t);
void miqt_exec_callback_QErrorMessage_Open(void*, intptr_t);
int miqt_exec_callback_QErrorMessage_Exec(void*, intptr_t);
void miqt_exec_callback_QErrorMessage_Accept(void*, intptr_t);
void miqt_exec_callback_QErrorMessage_Reject(void*, intptr_t);
void miqt_exec_callback_QErrorMessage_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QErrorMessage_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QErrorMessage_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QErrorMessage_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QErrorMessage_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QErrorMessage_EventFilter(void*, intptr_t, QObject*, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQErrorMessage final : public QErrorMessage {
public:

	MiqtVirtualQErrorMessage(QWidget* parent): QErrorMessage(parent) {};
	MiqtVirtualQErrorMessage(): QErrorMessage() {};

	virtual ~MiqtVirtualQErrorMessage() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int param1) override {
		if (handle__Done == 0) {
			QErrorMessage::done(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QErrorMessage_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int param1) {

		QErrorMessage::done(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QErrorMessage::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QErrorMessage_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QErrorMessage::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QErrorMessage::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QErrorMessage_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QErrorMessage::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QErrorMessage::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QErrorMessage_SizeHint(const_cast<MiqtVirtualQErrorMessage*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QErrorMessage::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QErrorMessage::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QErrorMessage_MinimumSizeHint(const_cast<MiqtVirtualQErrorMessage*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QErrorMessage::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QErrorMessage::open();
			return;
		}
		

		miqt_exec_callback_QErrorMessage_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QErrorMessage::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QErrorMessage::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QErrorMessage_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QErrorMessage::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QErrorMessage::accept();
			return;
		}
		

		miqt_exec_callback_QErrorMessage_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QErrorMessage::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QErrorMessage::reject();
			return;
		}
		

		miqt_exec_callback_QErrorMessage_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QErrorMessage::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QErrorMessage::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QErrorMessage::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QErrorMessage::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QErrorMessage::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QErrorMessage::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QErrorMessage::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QErrorMessage::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QErrorMessage::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QErrorMessage::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QErrorMessage::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QErrorMessage::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QErrorMessage_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QErrorMessage::eventFilter(param1, param2);

	}

};

QErrorMessage* QErrorMessage_new(QWidget* parent) {
	return new MiqtVirtualQErrorMessage(parent);
}

QErrorMessage* QErrorMessage_new2() {
	return new MiqtVirtualQErrorMessage();
}

void QErrorMessage_virtbase(QErrorMessage* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QErrorMessage_MetaObject(const QErrorMessage* self) {
	return (QMetaObject*) self->metaObject();
}

void* QErrorMessage_Metacast(QErrorMessage* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QErrorMessage_Tr(const char* s) {
	QString _ret = QErrorMessage::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QErrorMessage* QErrorMessage_QtHandler() {
	return QErrorMessage::qtHandler();
}

void QErrorMessage_ShowMessage(QErrorMessage* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->showMessage(message_QString);
}

void QErrorMessage_ShowMessage2(QErrorMessage* self, struct miqt_string message, struct miqt_string typeVal) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	QString typeVal_QString = QString::fromUtf8(typeVal.data, typeVal.len);
	self->showMessage(message_QString, typeVal_QString);
}

struct miqt_string QErrorMessage_Tr2(const char* s, const char* c) {
	QString _ret = QErrorMessage::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QErrorMessage_Tr3(const char* s, const char* c, int n) {
	QString _ret = QErrorMessage::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QErrorMessage_override_virtual_Done(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) )->handle__Done = slot;
}

void QErrorMessage_virtualbase_Done(void* self, int param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_Done(param1);
}

void QErrorMessage_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) )->handle__ChangeEvent = slot;
}

void QErrorMessage_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_ChangeEvent(e);
}

void QErrorMessage_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) )->handle__SetVisible = slot;
}

void QErrorMessage_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_SetVisible(visible);
}

void QErrorMessage_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) )->handle__SizeHint = slot;
}

QSize* QErrorMessage_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_SizeHint();
}

void QErrorMessage_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QErrorMessage_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_MinimumSizeHint();
}

void QErrorMessage_override_virtual_Open(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) )->handle__Open = slot;
}

void QErrorMessage_virtualbase_Open(void* self) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_Open();
}

void QErrorMessage_override_virtual_Exec(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) )->handle__Exec = slot;
}

int QErrorMessage_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_Exec();
}

void QErrorMessage_override_virtual_Accept(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) )->handle__Accept = slot;
}

void QErrorMessage_virtualbase_Accept(void* self) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_Accept();
}

void QErrorMessage_override_virtual_Reject(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) )->handle__Reject = slot;
}

void QErrorMessage_virtualbase_Reject(void* self) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_Reject();
}

void QErrorMessage_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) )->handle__KeyPressEvent = slot;
}

void QErrorMessage_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_KeyPressEvent(param1);
}

void QErrorMessage_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) )->handle__CloseEvent = slot;
}

void QErrorMessage_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_CloseEvent(param1);
}

void QErrorMessage_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) )->handle__ShowEvent = slot;
}

void QErrorMessage_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_ShowEvent(param1);
}

void QErrorMessage_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) )->handle__ResizeEvent = slot;
}

void QErrorMessage_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_ResizeEvent(param1);
}

void QErrorMessage_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) )->handle__ContextMenuEvent = slot;
}

void QErrorMessage_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_ContextMenuEvent(param1);
}

void QErrorMessage_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) )->handle__EventFilter = slot;
}

bool QErrorMessage_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_EventFilter(param1, param2);
}

void QErrorMessage_Delete(QErrorMessage* self) {
	delete self;
}

