#include <QAbstractPrintDialog>
#include <QDialog>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPrintDialog>
#include <QPrinter>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qprintdialog.h>
#include "gen_qprintdialog.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQPrintDialog : public virtual QPrintDialog {
public:

	MiqtVirtualQPrintDialog(QWidget* parent): QPrintDialog(parent) {};
	MiqtVirtualQPrintDialog(QPrinter* printer): QPrintDialog(printer) {};
	MiqtVirtualQPrintDialog(): QPrintDialog() {};
	MiqtVirtualQPrintDialog(QPrinter* printer, QWidget* parent): QPrintDialog(printer, parent) {};

	virtual ~MiqtVirtualQPrintDialog() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QPrintDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QPrintDialog_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QPrintDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QPrintDialog::accept();
			return;
		}
		

		miqt_exec_callback_QPrintDialog_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QPrintDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__Done == 0) {
			QPrintDialog::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QPrintDialog_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int result) {

		QPrintDialog::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QPrintDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QPrintDialog_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QPrintDialog::setVisible(visible);

	}

};

QPrintDialog* QPrintDialog_new(QWidget* parent) {
	return new MiqtVirtualQPrintDialog(parent);
}

QPrintDialog* QPrintDialog_new2(QPrinter* printer) {
	return new MiqtVirtualQPrintDialog(printer);
}

QPrintDialog* QPrintDialog_new3() {
	return new MiqtVirtualQPrintDialog();
}

QPrintDialog* QPrintDialog_new4(QPrinter* printer, QWidget* parent) {
	return new MiqtVirtualQPrintDialog(printer, parent);
}

void QPrintDialog_virtbase(QPrintDialog* src, QAbstractPrintDialog** outptr_QAbstractPrintDialog) {
	*outptr_QAbstractPrintDialog = static_cast<QAbstractPrintDialog*>(src);
}

QMetaObject* QPrintDialog_MetaObject(const QPrintDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPrintDialog_Metacast(QPrintDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPrintDialog_Tr(const char* s) {
	QString _ret = QPrintDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintDialog_TrUtf8(const char* s) {
	QString _ret = QPrintDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPrintDialog_Exec(QPrintDialog* self) {
	return self->exec();
}

void QPrintDialog_Accept(QPrintDialog* self) {
	self->accept();
}

void QPrintDialog_Done(QPrintDialog* self, int result) {
	self->done(static_cast<int>(result));
}

void QPrintDialog_SetOption(QPrintDialog* self, int option) {
	self->setOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

bool QPrintDialog_TestOption(const QPrintDialog* self, int option) {
	return self->testOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

void QPrintDialog_SetOptions(QPrintDialog* self, int options) {
	self->setOptions(static_cast<QAbstractPrintDialog::PrintDialogOptions>(options));
}

int QPrintDialog_Options(const QPrintDialog* self) {
	QAbstractPrintDialog::PrintDialogOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QPrintDialog_SetVisible(QPrintDialog* self, bool visible) {
	self->setVisible(visible);
}

void QPrintDialog_Accepted(QPrintDialog* self, QPrinter* printer) {
	self->accepted(printer);
}

void QPrintDialog_connect_Accepted(QPrintDialog* self, intptr_t slot) {
	MiqtVirtualQPrintDialog::connect(self, static_cast<void (QPrintDialog::*)(QPrinter*)>(&QPrintDialog::accepted), self, [=](QPrinter* printer) {
		QPrinter* sigval1 = printer;
		miqt_exec_callback_QPrintDialog_Accepted(slot, sigval1);
	});
}

struct miqt_string QPrintDialog_Tr2(const char* s, const char* c) {
	QString _ret = QPrintDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPrintDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintDialog_TrUtf82(const char* s, const char* c) {
	QString _ret = QPrintDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintDialog_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPrintDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrintDialog_SetOption2(QPrintDialog* self, int option, bool on) {
	self->setOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option), on);
}

void QPrintDialog_override_virtual_Exec(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) )->handle__Exec = slot;
}

int QPrintDialog_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_Exec();
}

void QPrintDialog_override_virtual_Accept(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) )->handle__Accept = slot;
}

void QPrintDialog_virtualbase_Accept(void* self) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_Accept();
}

void QPrintDialog_override_virtual_Done(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) )->handle__Done = slot;
}

void QPrintDialog_virtualbase_Done(void* self, int result) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_Done(result);
}

void QPrintDialog_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) )->handle__SetVisible = slot;
}

void QPrintDialog_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_SetVisible(visible);
}

void QPrintDialog_Delete(QPrintDialog* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQPrintDialog*>( self );
	} else {
		delete self;
	}
}

