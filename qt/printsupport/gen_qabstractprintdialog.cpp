#include <QAbstractPrintDialog>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QEvent>
#include <QKeyEvent>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPrinter>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qabstractprintdialog.h>
#include "gen_qabstractprintdialog.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQAbstractPrintDialog : public virtual QAbstractPrintDialog {
public:

	MiqtVirtualQAbstractPrintDialog(QPrinter* printer): QAbstractPrintDialog(printer) {};
	MiqtVirtualQAbstractPrintDialog(QPrinter* printer, QWidget* parent): QAbstractPrintDialog(printer, parent) {};

	virtual ~MiqtVirtualQAbstractPrintDialog() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QAbstractPrintDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QAbstractPrintDialog_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QAbstractPrintDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QAbstractPrintDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractPrintDialog_SizeHint(const_cast<MiqtVirtualQAbstractPrintDialog*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QAbstractPrintDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QAbstractPrintDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractPrintDialog_MinimumSizeHint(const_cast<MiqtVirtualQAbstractPrintDialog*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QAbstractPrintDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QAbstractPrintDialog::open();
			return;
		}
		

		miqt_exec_callback_QAbstractPrintDialog_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QAbstractPrintDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QAbstractPrintDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractPrintDialog_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QAbstractPrintDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int param1) override {
		if (handle__Done == 0) {
			QAbstractPrintDialog::done(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int param1) {

		QAbstractPrintDialog::done(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QAbstractPrintDialog::accept();
			return;
		}
		

		miqt_exec_callback_QAbstractPrintDialog_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QAbstractPrintDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QAbstractPrintDialog::reject();
			return;
		}
		

		miqt_exec_callback_QAbstractPrintDialog_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QAbstractPrintDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QAbstractPrintDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QAbstractPrintDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QAbstractPrintDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QAbstractPrintDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QAbstractPrintDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QAbstractPrintDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QAbstractPrintDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QAbstractPrintDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QAbstractPrintDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QAbstractPrintDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QAbstractPrintDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QAbstractPrintDialog_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QAbstractPrintDialog::eventFilter(param1, param2);

	}

};

QAbstractPrintDialog* QAbstractPrintDialog_new(QPrinter* printer) {
	return new MiqtVirtualQAbstractPrintDialog(printer);
}

QAbstractPrintDialog* QAbstractPrintDialog_new2(QPrinter* printer, QWidget* parent) {
	return new MiqtVirtualQAbstractPrintDialog(printer, parent);
}

void QAbstractPrintDialog_virtbase(QAbstractPrintDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QAbstractPrintDialog_MetaObject(const QAbstractPrintDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractPrintDialog_Metacast(QAbstractPrintDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractPrintDialog_Tr(const char* s) {
	QString _ret = QAbstractPrintDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractPrintDialog_TrUtf8(const char* s) {
	QString _ret = QAbstractPrintDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractPrintDialog_AddEnabledOption(QAbstractPrintDialog* self, int option) {
	self->addEnabledOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

void QAbstractPrintDialog_SetEnabledOptions(QAbstractPrintDialog* self, int options) {
	self->setEnabledOptions(static_cast<QAbstractPrintDialog::PrintDialogOptions>(options));
}

int QAbstractPrintDialog_EnabledOptions(const QAbstractPrintDialog* self) {
	QAbstractPrintDialog::PrintDialogOptions _ret = self->enabledOptions();
	return static_cast<int>(_ret);
}

bool QAbstractPrintDialog_IsOptionEnabled(const QAbstractPrintDialog* self, int option) {
	return self->isOptionEnabled(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

void QAbstractPrintDialog_SetOptionTabs(QAbstractPrintDialog* self, struct miqt_array /* of QWidget* */  tabs) {
	QList<QWidget *> tabs_QList;
	tabs_QList.reserve(tabs.len);
	QWidget** tabs_arr = static_cast<QWidget**>(tabs.data);
	for(size_t i = 0; i < tabs.len; ++i) {
		tabs_QList.push_back(tabs_arr[i]);
	}
	self->setOptionTabs(tabs_QList);
}

void QAbstractPrintDialog_SetPrintRange(QAbstractPrintDialog* self, int rangeVal) {
	self->setPrintRange(static_cast<QAbstractPrintDialog::PrintRange>(rangeVal));
}

int QAbstractPrintDialog_PrintRange(const QAbstractPrintDialog* self) {
	QAbstractPrintDialog::PrintRange _ret = self->printRange();
	return static_cast<int>(_ret);
}

void QAbstractPrintDialog_SetMinMax(QAbstractPrintDialog* self, int min, int max) {
	self->setMinMax(static_cast<int>(min), static_cast<int>(max));
}

int QAbstractPrintDialog_MinPage(const QAbstractPrintDialog* self) {
	return self->minPage();
}

int QAbstractPrintDialog_MaxPage(const QAbstractPrintDialog* self) {
	return self->maxPage();
}

void QAbstractPrintDialog_SetFromTo(QAbstractPrintDialog* self, int fromPage, int toPage) {
	self->setFromTo(static_cast<int>(fromPage), static_cast<int>(toPage));
}

int QAbstractPrintDialog_FromPage(const QAbstractPrintDialog* self) {
	return self->fromPage();
}

int QAbstractPrintDialog_ToPage(const QAbstractPrintDialog* self) {
	return self->toPage();
}

QPrinter* QAbstractPrintDialog_Printer(const QAbstractPrintDialog* self) {
	return self->printer();
}

struct miqt_string QAbstractPrintDialog_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractPrintDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractPrintDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractPrintDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractPrintDialog_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractPrintDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractPrintDialog_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractPrintDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractPrintDialog_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) )->handle__SetVisible = slot;
}

void QAbstractPrintDialog_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_SetVisible(visible);
}

void QAbstractPrintDialog_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) )->handle__SizeHint = slot;
}

QSize* QAbstractPrintDialog_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_SizeHint();
}

void QAbstractPrintDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QAbstractPrintDialog_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_MinimumSizeHint();
}

void QAbstractPrintDialog_override_virtual_Open(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) )->handle__Open = slot;
}

void QAbstractPrintDialog_virtualbase_Open(void* self) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_Open();
}

void QAbstractPrintDialog_override_virtual_Exec(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) )->handle__Exec = slot;
}

int QAbstractPrintDialog_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_Exec();
}

void QAbstractPrintDialog_override_virtual_Done(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) )->handle__Done = slot;
}

void QAbstractPrintDialog_virtualbase_Done(void* self, int param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_Done(param1);
}

void QAbstractPrintDialog_override_virtual_Accept(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) )->handle__Accept = slot;
}

void QAbstractPrintDialog_virtualbase_Accept(void* self) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_Accept();
}

void QAbstractPrintDialog_override_virtual_Reject(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) )->handle__Reject = slot;
}

void QAbstractPrintDialog_virtualbase_Reject(void* self) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_Reject();
}

void QAbstractPrintDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) )->handle__KeyPressEvent = slot;
}

void QAbstractPrintDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_KeyPressEvent(param1);
}

void QAbstractPrintDialog_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) )->handle__CloseEvent = slot;
}

void QAbstractPrintDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_CloseEvent(param1);
}

void QAbstractPrintDialog_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) )->handle__ShowEvent = slot;
}

void QAbstractPrintDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_ShowEvent(param1);
}

void QAbstractPrintDialog_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) )->handle__ResizeEvent = slot;
}

void QAbstractPrintDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_ResizeEvent(param1);
}

void QAbstractPrintDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) )->handle__ContextMenuEvent = slot;
}

void QAbstractPrintDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_ContextMenuEvent(param1);
}

void QAbstractPrintDialog_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) )->handle__EventFilter = slot;
}

bool QAbstractPrintDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_EventFilter(param1, param2);
}

void QAbstractPrintDialog_Delete(QAbstractPrintDialog* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( self );
	} else {
		delete self;
	}
}

