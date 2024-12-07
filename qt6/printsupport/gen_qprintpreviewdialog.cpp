#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QEvent>
#include <QKeyEvent>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPrintPreviewDialog>
#include <QPrinter>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qprintpreviewdialog.h>
#include "gen_qprintpreviewdialog.h"
#include "_cgo_export.h"

class MiqtVirtualQPrintPreviewDialog : public virtual QPrintPreviewDialog {
public:

	MiqtVirtualQPrintPreviewDialog(QWidget* parent): QPrintPreviewDialog(parent) {};
	MiqtVirtualQPrintPreviewDialog(): QPrintPreviewDialog() {};
	MiqtVirtualQPrintPreviewDialog(QPrinter* printer): QPrintPreviewDialog(printer) {};
	MiqtVirtualQPrintPreviewDialog(QWidget* parent, Qt::WindowFlags flags): QPrintPreviewDialog(parent, flags) {};
	MiqtVirtualQPrintPreviewDialog(QPrinter* printer, QWidget* parent): QPrintPreviewDialog(printer, parent) {};
	MiqtVirtualQPrintPreviewDialog(QPrinter* printer, QWidget* parent, Qt::WindowFlags flags): QPrintPreviewDialog(printer, parent, flags) {};

	virtual ~MiqtVirtualQPrintPreviewDialog() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QPrintPreviewDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QPrintPreviewDialog_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QPrintPreviewDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__Done == 0) {
			QPrintPreviewDialog::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QPrintPreviewDialog_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int result) {

		QPrintPreviewDialog::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QPrintPreviewDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPrintPreviewDialog_SizeHint(const_cast<MiqtVirtualQPrintPreviewDialog*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QPrintPreviewDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QPrintPreviewDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPrintPreviewDialog_MinimumSizeHint(const_cast<MiqtVirtualQPrintPreviewDialog*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QPrintPreviewDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QPrintPreviewDialog::open();
			return;
		}
		

		miqt_exec_callback_QPrintPreviewDialog_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QPrintPreviewDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QPrintPreviewDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QPrintPreviewDialog_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QPrintPreviewDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QPrintPreviewDialog::accept();
			return;
		}
		

		miqt_exec_callback_QPrintPreviewDialog_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QPrintPreviewDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QPrintPreviewDialog::reject();
			return;
		}
		

		miqt_exec_callback_QPrintPreviewDialog_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QPrintPreviewDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QPrintPreviewDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewDialog_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QPrintPreviewDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QPrintPreviewDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewDialog_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QPrintPreviewDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QPrintPreviewDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewDialog_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QPrintPreviewDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QPrintPreviewDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewDialog_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QPrintPreviewDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QPrintPreviewDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewDialog_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QPrintPreviewDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QPrintPreviewDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QPrintPreviewDialog_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QPrintPreviewDialog::eventFilter(param1, param2);

	}

};

QPrintPreviewDialog* QPrintPreviewDialog_new(QWidget* parent) {
	return new MiqtVirtualQPrintPreviewDialog(parent);
}

QPrintPreviewDialog* QPrintPreviewDialog_new2() {
	return new MiqtVirtualQPrintPreviewDialog();
}

QPrintPreviewDialog* QPrintPreviewDialog_new3(QPrinter* printer) {
	return new MiqtVirtualQPrintPreviewDialog(printer);
}

QPrintPreviewDialog* QPrintPreviewDialog_new4(QWidget* parent, int flags) {
	return new MiqtVirtualQPrintPreviewDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QPrintPreviewDialog* QPrintPreviewDialog_new5(QPrinter* printer, QWidget* parent) {
	return new MiqtVirtualQPrintPreviewDialog(printer, parent);
}

QPrintPreviewDialog* QPrintPreviewDialog_new6(QPrinter* printer, QWidget* parent, int flags) {
	return new MiqtVirtualQPrintPreviewDialog(printer, parent, static_cast<Qt::WindowFlags>(flags));
}

void QPrintPreviewDialog_virtbase(QPrintPreviewDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QPrintPreviewDialog_MetaObject(const QPrintPreviewDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPrintPreviewDialog_Metacast(QPrintPreviewDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPrintPreviewDialog_Tr(const char* s) {
	QString _ret = QPrintPreviewDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPrinter* QPrintPreviewDialog_Printer(QPrintPreviewDialog* self) {
	return self->printer();
}

void QPrintPreviewDialog_SetVisible(QPrintPreviewDialog* self, bool visible) {
	self->setVisible(visible);
}

void QPrintPreviewDialog_Done(QPrintPreviewDialog* self, int result) {
	self->done(static_cast<int>(result));
}

void QPrintPreviewDialog_PaintRequested(QPrintPreviewDialog* self, QPrinter* printer) {
	self->paintRequested(printer);
}

void QPrintPreviewDialog_connect_PaintRequested(QPrintPreviewDialog* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog::connect(self, static_cast<void (QPrintPreviewDialog::*)(QPrinter*)>(&QPrintPreviewDialog::paintRequested), self, [=](QPrinter* printer) {
		QPrinter* sigval1 = printer;
		miqt_exec_callback_QPrintPreviewDialog_PaintRequested(slot, sigval1);
	});
}

struct miqt_string QPrintPreviewDialog_Tr2(const char* s, const char* c) {
	QString _ret = QPrintPreviewDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPrintPreviewDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrintPreviewDialog_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) )->handle__SetVisible = slot;
}

void QPrintPreviewDialog_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_SetVisible(visible);
}

void QPrintPreviewDialog_override_virtual_Done(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) )->handle__Done = slot;
}

void QPrintPreviewDialog_virtualbase_Done(void* self, int result) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_Done(result);
}

void QPrintPreviewDialog_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) )->handle__SizeHint = slot;
}

QSize* QPrintPreviewDialog_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_SizeHint();
}

void QPrintPreviewDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QPrintPreviewDialog_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_MinimumSizeHint();
}

void QPrintPreviewDialog_override_virtual_Open(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) )->handle__Open = slot;
}

void QPrintPreviewDialog_virtualbase_Open(void* self) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_Open();
}

void QPrintPreviewDialog_override_virtual_Exec(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) )->handle__Exec = slot;
}

int QPrintPreviewDialog_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_Exec();
}

void QPrintPreviewDialog_override_virtual_Accept(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) )->handle__Accept = slot;
}

void QPrintPreviewDialog_virtualbase_Accept(void* self) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_Accept();
}

void QPrintPreviewDialog_override_virtual_Reject(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) )->handle__Reject = slot;
}

void QPrintPreviewDialog_virtualbase_Reject(void* self) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_Reject();
}

void QPrintPreviewDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) )->handle__KeyPressEvent = slot;
}

void QPrintPreviewDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_KeyPressEvent(param1);
}

void QPrintPreviewDialog_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) )->handle__CloseEvent = slot;
}

void QPrintPreviewDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_CloseEvent(param1);
}

void QPrintPreviewDialog_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) )->handle__ShowEvent = slot;
}

void QPrintPreviewDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_ShowEvent(param1);
}

void QPrintPreviewDialog_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) )->handle__ResizeEvent = slot;
}

void QPrintPreviewDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_ResizeEvent(param1);
}

void QPrintPreviewDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) )->handle__ContextMenuEvent = slot;
}

void QPrintPreviewDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_ContextMenuEvent(param1);
}

void QPrintPreviewDialog_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) )->handle__EventFilter = slot;
}

bool QPrintPreviewDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_EventFilter(param1, param2);
}

void QPrintPreviewDialog_Delete(QPrintPreviewDialog* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( self );
	} else {
		delete self;
	}
}

