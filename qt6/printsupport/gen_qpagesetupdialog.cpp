#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QEvent>
#include <QKeyEvent>
#include <QMetaObject>
#include <QObject>
#include <QPageSetupDialog>
#include <QPaintDevice>
#include <QPrinter>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qpagesetupdialog.h>
#include "gen_qpagesetupdialog.h"
#include "_cgo_export.h"

class MiqtVirtualQPageSetupDialog : public virtual QPageSetupDialog {
public:

	MiqtVirtualQPageSetupDialog(QWidget* parent): QPageSetupDialog(parent) {};
	MiqtVirtualQPageSetupDialog(QPrinter* printer): QPageSetupDialog(printer) {};
	MiqtVirtualQPageSetupDialog(): QPageSetupDialog() {};
	MiqtVirtualQPageSetupDialog(QPrinter* printer, QWidget* parent): QPageSetupDialog(printer, parent) {};

	virtual ~MiqtVirtualQPageSetupDialog() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QPageSetupDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QPageSetupDialog_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QPageSetupDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__Done == 0) {
			QPageSetupDialog::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QPageSetupDialog_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int result) {

		QPageSetupDialog::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QPageSetupDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QPageSetupDialog_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QPageSetupDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QPageSetupDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPageSetupDialog_SizeHint(const_cast<MiqtVirtualQPageSetupDialog*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QPageSetupDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QPageSetupDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPageSetupDialog_MinimumSizeHint(const_cast<MiqtVirtualQPageSetupDialog*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QPageSetupDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QPageSetupDialog::open();
			return;
		}
		

		miqt_exec_callback_QPageSetupDialog_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QPageSetupDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QPageSetupDialog::accept();
			return;
		}
		

		miqt_exec_callback_QPageSetupDialog_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QPageSetupDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QPageSetupDialog::reject();
			return;
		}
		

		miqt_exec_callback_QPageSetupDialog_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QPageSetupDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QPageSetupDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QPageSetupDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QPageSetupDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QPageSetupDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QPageSetupDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QPageSetupDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QPageSetupDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QPageSetupDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QPageSetupDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QPageSetupDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QPageSetupDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QPageSetupDialog::eventFilter(param1, param2);

	}

};

void QPageSetupDialog_new(QWidget* parent, QPageSetupDialog** outptr_QPageSetupDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQPageSetupDialog* ret = new MiqtVirtualQPageSetupDialog(parent);
	*outptr_QPageSetupDialog = ret;
	*outptr_QDialog = static_cast<QDialog*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QPageSetupDialog_new2(QPrinter* printer, QPageSetupDialog** outptr_QPageSetupDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQPageSetupDialog* ret = new MiqtVirtualQPageSetupDialog(printer);
	*outptr_QPageSetupDialog = ret;
	*outptr_QDialog = static_cast<QDialog*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QPageSetupDialog_new3(QPageSetupDialog** outptr_QPageSetupDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQPageSetupDialog* ret = new MiqtVirtualQPageSetupDialog();
	*outptr_QPageSetupDialog = ret;
	*outptr_QDialog = static_cast<QDialog*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QPageSetupDialog_new4(QPrinter* printer, QWidget* parent, QPageSetupDialog** outptr_QPageSetupDialog, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQPageSetupDialog* ret = new MiqtVirtualQPageSetupDialog(printer, parent);
	*outptr_QPageSetupDialog = ret;
	*outptr_QDialog = static_cast<QDialog*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

QMetaObject* QPageSetupDialog_MetaObject(const QPageSetupDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPageSetupDialog_Metacast(QPageSetupDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPageSetupDialog_Tr(const char* s) {
	QString _ret = QPageSetupDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPageSetupDialog_Exec(QPageSetupDialog* self) {
	return self->exec();
}

void QPageSetupDialog_Done(QPageSetupDialog* self, int result) {
	self->done(static_cast<int>(result));
}

QPrinter* QPageSetupDialog_Printer(QPageSetupDialog* self) {
	return self->printer();
}

struct miqt_string QPageSetupDialog_Tr2(const char* s, const char* c) {
	QString _ret = QPageSetupDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPageSetupDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPageSetupDialog_override_virtual_Exec(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) )->handle__Exec = slot;
}

int QPageSetupDialog_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_Exec();
}

void QPageSetupDialog_override_virtual_Done(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) )->handle__Done = slot;
}

void QPageSetupDialog_virtualbase_Done(void* self, int result) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_Done(result);
}

void QPageSetupDialog_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) )->handle__SetVisible = slot;
}

void QPageSetupDialog_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_SetVisible(visible);
}

void QPageSetupDialog_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) )->handle__SizeHint = slot;
}

QSize* QPageSetupDialog_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_SizeHint();
}

void QPageSetupDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QPageSetupDialog_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_MinimumSizeHint();
}

void QPageSetupDialog_override_virtual_Open(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) )->handle__Open = slot;
}

void QPageSetupDialog_virtualbase_Open(void* self) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_Open();
}

void QPageSetupDialog_override_virtual_Accept(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) )->handle__Accept = slot;
}

void QPageSetupDialog_virtualbase_Accept(void* self) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_Accept();
}

void QPageSetupDialog_override_virtual_Reject(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) )->handle__Reject = slot;
}

void QPageSetupDialog_virtualbase_Reject(void* self) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_Reject();
}

void QPageSetupDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) )->handle__KeyPressEvent = slot;
}

void QPageSetupDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_KeyPressEvent(param1);
}

void QPageSetupDialog_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) )->handle__CloseEvent = slot;
}

void QPageSetupDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_CloseEvent(param1);
}

void QPageSetupDialog_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) )->handle__ShowEvent = slot;
}

void QPageSetupDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_ShowEvent(param1);
}

void QPageSetupDialog_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) )->handle__ResizeEvent = slot;
}

void QPageSetupDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_ResizeEvent(param1);
}

void QPageSetupDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) )->handle__ContextMenuEvent = slot;
}

void QPageSetupDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_ContextMenuEvent(param1);
}

void QPageSetupDialog_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) )->handle__EventFilter = slot;
}

bool QPageSetupDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_EventFilter(param1, param2);
}

void QPageSetupDialog_Delete(QPageSetupDialog* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQPageSetupDialog*>( self );
	} else {
		delete self;
	}
}

