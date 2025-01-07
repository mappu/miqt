#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QEvent>
#include <QKeyEvent>
#include <QLabel>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QProgressBar>
#include <QProgressDialog>
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qprogressdialog.h>
#include "gen_qprogressdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QProgressDialog_Canceled(intptr_t);
QSize* miqt_exec_callback_QProgressDialog_SizeHint(void*, intptr_t);
void miqt_exec_callback_QProgressDialog_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QProgressDialog_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QProgressDialog_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressDialog_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QProgressDialog_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QProgressDialog_MinimumSizeHint(void*, intptr_t);
void miqt_exec_callback_QProgressDialog_Open(void*, intptr_t);
int miqt_exec_callback_QProgressDialog_Exec(void*, intptr_t);
void miqt_exec_callback_QProgressDialog_Done(void*, intptr_t, int);
void miqt_exec_callback_QProgressDialog_Accept(void*, intptr_t);
void miqt_exec_callback_QProgressDialog_Reject(void*, intptr_t);
void miqt_exec_callback_QProgressDialog_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QProgressDialog_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QProgressDialog_EventFilter(void*, intptr_t, QObject*, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQProgressDialog : public virtual QProgressDialog {
public:

	MiqtVirtualQProgressDialog(QWidget* parent): QProgressDialog(parent) {};
	MiqtVirtualQProgressDialog(): QProgressDialog() {};
	MiqtVirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum): QProgressDialog(labelText, cancelButtonText, minimum, maximum) {};
	MiqtVirtualQProgressDialog(QWidget* parent, Qt::WindowFlags flags): QProgressDialog(parent, flags) {};
	MiqtVirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum, QWidget* parent): QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent) {};
	MiqtVirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum, QWidget* parent, Qt::WindowFlags flags): QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags) {};

	virtual ~MiqtVirtualQProgressDialog() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QProgressDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QProgressDialog_SizeHint(const_cast<MiqtVirtualQProgressDialog*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QProgressDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QProgressDialog::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QProgressDialog::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QProgressDialog::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QProgressDialog::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QProgressDialog::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QProgressDialog::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QProgressDialog::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QProgressDialog::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QProgressDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QProgressDialog_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QProgressDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QProgressDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QProgressDialog_MinimumSizeHint(const_cast<MiqtVirtualQProgressDialog*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QProgressDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QProgressDialog::open();
			return;
		}
		

		miqt_exec_callback_QProgressDialog_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QProgressDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QProgressDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QProgressDialog_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QProgressDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int param1) override {
		if (handle__Done == 0) {
			QProgressDialog::done(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QProgressDialog_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int param1) {

		QProgressDialog::done(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QProgressDialog::accept();
			return;
		}
		

		miqt_exec_callback_QProgressDialog_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QProgressDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QProgressDialog::reject();
			return;
		}
		

		miqt_exec_callback_QProgressDialog_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QProgressDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QProgressDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QProgressDialog_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QProgressDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QProgressDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QProgressDialog_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QProgressDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QProgressDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QProgressDialog_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QProgressDialog::eventFilter(param1, param2);

	}

};

QProgressDialog* QProgressDialog_new(QWidget* parent) {
	return new MiqtVirtualQProgressDialog(parent);
}

QProgressDialog* QProgressDialog_new2() {
	return new MiqtVirtualQProgressDialog();
}

QProgressDialog* QProgressDialog_new3(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	QString cancelButtonText_QString = QString::fromUtf8(cancelButtonText.data, cancelButtonText.len);
	return new MiqtVirtualQProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum));
}

QProgressDialog* QProgressDialog_new4(QWidget* parent, int flags) {
	return new MiqtVirtualQProgressDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QProgressDialog* QProgressDialog_new5(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum, QWidget* parent) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	QString cancelButtonText_QString = QString::fromUtf8(cancelButtonText.data, cancelButtonText.len);
	return new MiqtVirtualQProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum), parent);
}

QProgressDialog* QProgressDialog_new6(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum, QWidget* parent, int flags) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	QString cancelButtonText_QString = QString::fromUtf8(cancelButtonText.data, cancelButtonText.len);
	return new MiqtVirtualQProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum), parent, static_cast<Qt::WindowFlags>(flags));
}

void QProgressDialog_virtbase(QProgressDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QProgressDialog_MetaObject(const QProgressDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QProgressDialog_Metacast(QProgressDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QProgressDialog_Tr(const char* s) {
	QString _ret = QProgressDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressDialog_TrUtf8(const char* s) {
	QString _ret = QProgressDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProgressDialog_SetLabel(QProgressDialog* self, QLabel* label) {
	self->setLabel(label);
}

void QProgressDialog_SetCancelButton(QProgressDialog* self, QPushButton* button) {
	self->setCancelButton(button);
}

void QProgressDialog_SetBar(QProgressDialog* self, QProgressBar* bar) {
	self->setBar(bar);
}

bool QProgressDialog_WasCanceled(const QProgressDialog* self) {
	return self->wasCanceled();
}

int QProgressDialog_Minimum(const QProgressDialog* self) {
	return self->minimum();
}

int QProgressDialog_Maximum(const QProgressDialog* self) {
	return self->maximum();
}

int QProgressDialog_Value(const QProgressDialog* self) {
	return self->value();
}

QSize* QProgressDialog_SizeHint(const QProgressDialog* self) {
	return new QSize(self->sizeHint());
}

struct miqt_string QProgressDialog_LabelText(const QProgressDialog* self) {
	QString _ret = self->labelText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QProgressDialog_MinimumDuration(const QProgressDialog* self) {
	return self->minimumDuration();
}

void QProgressDialog_SetAutoReset(QProgressDialog* self, bool reset) {
	self->setAutoReset(reset);
}

bool QProgressDialog_AutoReset(const QProgressDialog* self) {
	return self->autoReset();
}

void QProgressDialog_SetAutoClose(QProgressDialog* self, bool close) {
	self->setAutoClose(close);
}

bool QProgressDialog_AutoClose(const QProgressDialog* self) {
	return self->autoClose();
}

void QProgressDialog_Cancel(QProgressDialog* self) {
	self->cancel();
}

void QProgressDialog_Reset(QProgressDialog* self) {
	self->reset();
}

void QProgressDialog_SetMaximum(QProgressDialog* self, int maximum) {
	self->setMaximum(static_cast<int>(maximum));
}

void QProgressDialog_SetMinimum(QProgressDialog* self, int minimum) {
	self->setMinimum(static_cast<int>(minimum));
}

void QProgressDialog_SetRange(QProgressDialog* self, int minimum, int maximum) {
	self->setRange(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QProgressDialog_SetValue(QProgressDialog* self, int progress) {
	self->setValue(static_cast<int>(progress));
}

void QProgressDialog_SetLabelText(QProgressDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setLabelText(text_QString);
}

void QProgressDialog_SetCancelButtonText(QProgressDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setCancelButtonText(text_QString);
}

void QProgressDialog_SetMinimumDuration(QProgressDialog* self, int ms) {
	self->setMinimumDuration(static_cast<int>(ms));
}

void QProgressDialog_Canceled(QProgressDialog* self) {
	self->canceled();
}

void QProgressDialog_connect_Canceled(QProgressDialog* self, intptr_t slot) {
	MiqtVirtualQProgressDialog::connect(self, static_cast<void (QProgressDialog::*)()>(&QProgressDialog::canceled), self, [=]() {
		miqt_exec_callback_QProgressDialog_Canceled(slot);
	});
}

struct miqt_string QProgressDialog_Tr2(const char* s, const char* c) {
	QString _ret = QProgressDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QProgressDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressDialog_TrUtf82(const char* s, const char* c) {
	QString _ret = QProgressDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressDialog_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QProgressDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProgressDialog_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) )->handle__SizeHint = slot;
}

QSize* QProgressDialog_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_SizeHint();
}

void QProgressDialog_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) )->handle__ResizeEvent = slot;
}

void QProgressDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_ResizeEvent(event);
}

void QProgressDialog_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) )->handle__CloseEvent = slot;
}

void QProgressDialog_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_CloseEvent(event);
}

void QProgressDialog_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) )->handle__ChangeEvent = slot;
}

void QProgressDialog_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_ChangeEvent(event);
}

void QProgressDialog_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) )->handle__ShowEvent = slot;
}

void QProgressDialog_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_ShowEvent(event);
}

void QProgressDialog_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) )->handle__SetVisible = slot;
}

void QProgressDialog_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_SetVisible(visible);
}

void QProgressDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QProgressDialog_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_MinimumSizeHint();
}

void QProgressDialog_override_virtual_Open(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) )->handle__Open = slot;
}

void QProgressDialog_virtualbase_Open(void* self) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_Open();
}

void QProgressDialog_override_virtual_Exec(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) )->handle__Exec = slot;
}

int QProgressDialog_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_Exec();
}

void QProgressDialog_override_virtual_Done(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) )->handle__Done = slot;
}

void QProgressDialog_virtualbase_Done(void* self, int param1) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_Done(param1);
}

void QProgressDialog_override_virtual_Accept(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) )->handle__Accept = slot;
}

void QProgressDialog_virtualbase_Accept(void* self) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_Accept();
}

void QProgressDialog_override_virtual_Reject(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) )->handle__Reject = slot;
}

void QProgressDialog_virtualbase_Reject(void* self) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_Reject();
}

void QProgressDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) )->handle__KeyPressEvent = slot;
}

void QProgressDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_KeyPressEvent(param1);
}

void QProgressDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) )->handle__ContextMenuEvent = slot;
}

void QProgressDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_ContextMenuEvent(param1);
}

void QProgressDialog_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) )->handle__EventFilter = slot;
}

bool QProgressDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_EventFilter(param1, param2);
}

void QProgressDialog_Delete(QProgressDialog* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQProgressDialog*>( self );
	} else {
		delete self;
	}
}

