#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWizard>
#include <QWizardPage>
#include <qwizard.h>
#include "gen_qwizard.h"
#include "_cgo_export.h"

class MiqtVirtualQWizard : public virtual QWizard {
public:

	MiqtVirtualQWizard(QWidget* parent): QWizard(parent) {};
	MiqtVirtualQWizard(): QWizard() {};
	MiqtVirtualQWizard(QWidget* parent, Qt::WindowFlags flags): QWizard(parent, flags) {};

	virtual ~MiqtVirtualQWizard() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ValidateCurrentPage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool validateCurrentPage() override {
		if (handle__ValidateCurrentPage == 0) {
			return QWizard::validateCurrentPage();
		}
		

		bool callback_return_value = miqt_exec_callback_QWizard_ValidateCurrentPage(this, handle__ValidateCurrentPage);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ValidateCurrentPage() {

		return QWizard::validateCurrentPage();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NextId = 0;

	// Subclass to allow providing a Go implementation
	virtual int nextId() const override {
		if (handle__NextId == 0) {
			return QWizard::nextId();
		}
		

		int callback_return_value = miqt_exec_callback_QWizard_NextId(const_cast<MiqtVirtualQWizard*>(this), handle__NextId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_NextId() const {

		return QWizard::nextId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QWizard::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QWizard_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QWizard::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QWizard::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWizard_SizeHint(const_cast<MiqtVirtualQWizard*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QWizard::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QWizard::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWizard_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QWizard::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QWizard::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QWizard_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QWizard::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QWizard::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QWizard_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QWizard::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__Done == 0) {
			QWizard::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QWizard_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int result) {

		QWizard::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitializePage = 0;

	// Subclass to allow providing a Go implementation
	virtual void initializePage(int id) override {
		if (handle__InitializePage == 0) {
			QWizard::initializePage(id);
			return;
		}
		
		int sigval1 = id;

		miqt_exec_callback_QWizard_InitializePage(this, handle__InitializePage, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitializePage(int id) {

		QWizard::initializePage(static_cast<int>(id));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CleanupPage = 0;

	// Subclass to allow providing a Go implementation
	virtual void cleanupPage(int id) override {
		if (handle__CleanupPage == 0) {
			QWizard::cleanupPage(id);
			return;
		}
		
		int sigval1 = id;

		miqt_exec_callback_QWizard_CleanupPage(this, handle__CleanupPage, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CleanupPage(int id) {

		QWizard::cleanupPage(static_cast<int>(id));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QWizard::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWizard_MinimumSizeHint(const_cast<MiqtVirtualQWizard*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QWizard::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QWizard::open();
			return;
		}
		

		miqt_exec_callback_QWizard_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QWizard::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QWizard::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QWizard_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QWizard::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QWizard::accept();
			return;
		}
		

		miqt_exec_callback_QWizard_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QWizard::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QWizard::reject();
			return;
		}
		

		miqt_exec_callback_QWizard_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QWizard::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QWizard::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QWizard_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QWizard::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QWizard::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QWizard_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QWizard::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QWizard::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QWizard_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QWizard::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QWizard::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QWizard_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QWizard::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QWizard::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QWizard_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QWizard::eventFilter(param1, param2);

	}

};

void QWizard_new(QWidget* parent, QWizard** outptr_QWizard, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQWizard* ret = new MiqtVirtualQWizard(parent);
	*outptr_QWizard = ret;
	*outptr_QDialog = static_cast<QDialog*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QWizard_new2(QWizard** outptr_QWizard, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQWizard* ret = new MiqtVirtualQWizard();
	*outptr_QWizard = ret;
	*outptr_QDialog = static_cast<QDialog*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QWizard_new3(QWidget* parent, int flags, QWizard** outptr_QWizard, QDialog** outptr_QDialog, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQWizard* ret = new MiqtVirtualQWizard(parent, static_cast<Qt::WindowFlags>(flags));
	*outptr_QWizard = ret;
	*outptr_QDialog = static_cast<QDialog*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

QMetaObject* QWizard_MetaObject(const QWizard* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWizard_Metacast(QWizard* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWizard_Tr(const char* s) {
	QString _ret = QWizard::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QWizard_AddPage(QWizard* self, QWizardPage* page) {
	return self->addPage(page);
}

void QWizard_SetPage(QWizard* self, int id, QWizardPage* page) {
	self->setPage(static_cast<int>(id), page);
}

void QWizard_RemovePage(QWizard* self, int id) {
	self->removePage(static_cast<int>(id));
}

QWizardPage* QWizard_Page(const QWizard* self, int id) {
	return self->page(static_cast<int>(id));
}

bool QWizard_HasVisitedPage(const QWizard* self, int id) {
	return self->hasVisitedPage(static_cast<int>(id));
}

struct miqt_array /* of int */  QWizard_VisitedIds(const QWizard* self) {
	QList<int> _ret = self->visitedIds();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QWizard_PageIds(const QWizard* self) {
	QList<int> _ret = self->pageIds();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QWizard_SetStartId(QWizard* self, int id) {
	self->setStartId(static_cast<int>(id));
}

int QWizard_StartId(const QWizard* self) {
	return self->startId();
}

QWizardPage* QWizard_CurrentPage(const QWizard* self) {
	return self->currentPage();
}

int QWizard_CurrentId(const QWizard* self) {
	return self->currentId();
}

bool QWizard_ValidateCurrentPage(QWizard* self) {
	return self->validateCurrentPage();
}

int QWizard_NextId(const QWizard* self) {
	return self->nextId();
}

void QWizard_SetField(QWizard* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setField(name_QString, *value);
}

QVariant* QWizard_Field(const QWizard* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(self->field(name_QString));
}

void QWizard_SetWizardStyle(QWizard* self, int style) {
	self->setWizardStyle(static_cast<QWizard::WizardStyle>(style));
}

int QWizard_WizardStyle(const QWizard* self) {
	QWizard::WizardStyle _ret = self->wizardStyle();
	return static_cast<int>(_ret);
}

void QWizard_SetOption(QWizard* self, int option) {
	self->setOption(static_cast<QWizard::WizardOption>(option));
}

bool QWizard_TestOption(const QWizard* self, int option) {
	return self->testOption(static_cast<QWizard::WizardOption>(option));
}

void QWizard_SetOptions(QWizard* self, int options) {
	self->setOptions(static_cast<QWizard::WizardOptions>(options));
}

int QWizard_Options(const QWizard* self) {
	QWizard::WizardOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QWizard_SetButtonText(QWizard* self, int which, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setButtonText(static_cast<QWizard::WizardButton>(which), text_QString);
}

struct miqt_string QWizard_ButtonText(const QWizard* self, int which) {
	QString _ret = self->buttonText(static_cast<QWizard::WizardButton>(which));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizard_SetButtonLayout(QWizard* self, struct miqt_array /* of int */  layout) {
	QList<QWizard::WizardButton> layout_QList;
	layout_QList.reserve(layout.len);
	int* layout_arr = static_cast<int*>(layout.data);
	for(size_t i = 0; i < layout.len; ++i) {
		layout_QList.push_back(static_cast<QWizard::WizardButton>(layout_arr[i]));
	}
	self->setButtonLayout(layout_QList);
}

void QWizard_SetButton(QWizard* self, int which, QAbstractButton* button) {
	self->setButton(static_cast<QWizard::WizardButton>(which), button);
}

QAbstractButton* QWizard_Button(const QWizard* self, int which) {
	return self->button(static_cast<QWizard::WizardButton>(which));
}

void QWizard_SetTitleFormat(QWizard* self, int format) {
	self->setTitleFormat(static_cast<Qt::TextFormat>(format));
}

int QWizard_TitleFormat(const QWizard* self) {
	Qt::TextFormat _ret = self->titleFormat();
	return static_cast<int>(_ret);
}

void QWizard_SetSubTitleFormat(QWizard* self, int format) {
	self->setSubTitleFormat(static_cast<Qt::TextFormat>(format));
}

int QWizard_SubTitleFormat(const QWizard* self) {
	Qt::TextFormat _ret = self->subTitleFormat();
	return static_cast<int>(_ret);
}

void QWizard_SetPixmap(QWizard* self, int which, QPixmap* pixmap) {
	self->setPixmap(static_cast<QWizard::WizardPixmap>(which), *pixmap);
}

QPixmap* QWizard_Pixmap(const QWizard* self, int which) {
	return new QPixmap(self->pixmap(static_cast<QWizard::WizardPixmap>(which)));
}

void QWizard_SetSideWidget(QWizard* self, QWidget* widget) {
	self->setSideWidget(widget);
}

QWidget* QWizard_SideWidget(const QWizard* self) {
	return self->sideWidget();
}

void QWizard_SetDefaultProperty(QWizard* self, const char* className, const char* property, const char* changedSignal) {
	self->setDefaultProperty(className, property, changedSignal);
}

void QWizard_SetVisible(QWizard* self, bool visible) {
	self->setVisible(visible);
}

QSize* QWizard_SizeHint(const QWizard* self) {
	return new QSize(self->sizeHint());
}

void QWizard_CurrentIdChanged(QWizard* self, int id) {
	self->currentIdChanged(static_cast<int>(id));
}

void QWizard_connect_CurrentIdChanged(QWizard* self, intptr_t slot) {
	MiqtVirtualQWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::currentIdChanged), self, [=](int id) {
		int sigval1 = id;
		miqt_exec_callback_QWizard_CurrentIdChanged(slot, sigval1);
	});
}

void QWizard_HelpRequested(QWizard* self) {
	self->helpRequested();
}

void QWizard_connect_HelpRequested(QWizard* self, intptr_t slot) {
	MiqtVirtualQWizard::connect(self, static_cast<void (QWizard::*)()>(&QWizard::helpRequested), self, [=]() {
		miqt_exec_callback_QWizard_HelpRequested(slot);
	});
}

void QWizard_CustomButtonClicked(QWizard* self, int which) {
	self->customButtonClicked(static_cast<int>(which));
}

void QWizard_connect_CustomButtonClicked(QWizard* self, intptr_t slot) {
	MiqtVirtualQWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::customButtonClicked), self, [=](int which) {
		int sigval1 = which;
		miqt_exec_callback_QWizard_CustomButtonClicked(slot, sigval1);
	});
}

void QWizard_PageAdded(QWizard* self, int id) {
	self->pageAdded(static_cast<int>(id));
}

void QWizard_connect_PageAdded(QWizard* self, intptr_t slot) {
	MiqtVirtualQWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::pageAdded), self, [=](int id) {
		int sigval1 = id;
		miqt_exec_callback_QWizard_PageAdded(slot, sigval1);
	});
}

void QWizard_PageRemoved(QWizard* self, int id) {
	self->pageRemoved(static_cast<int>(id));
}

void QWizard_connect_PageRemoved(QWizard* self, intptr_t slot) {
	MiqtVirtualQWizard::connect(self, static_cast<void (QWizard::*)(int)>(&QWizard::pageRemoved), self, [=](int id) {
		int sigval1 = id;
		miqt_exec_callback_QWizard_PageRemoved(slot, sigval1);
	});
}

void QWizard_Back(QWizard* self) {
	self->back();
}

void QWizard_Next(QWizard* self) {
	self->next();
}

void QWizard_SetCurrentId(QWizard* self, int id) {
	self->setCurrentId(static_cast<int>(id));
}

void QWizard_Restart(QWizard* self) {
	self->restart();
}

struct miqt_string QWizard_Tr2(const char* s, const char* c) {
	QString _ret = QWizard::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWizard_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWizard::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizard_SetOption2(QWizard* self, int option, bool on) {
	self->setOption(static_cast<QWizard::WizardOption>(option), on);
}

void QWizard_override_virtual_ValidateCurrentPage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__ValidateCurrentPage = slot;
}

bool QWizard_virtualbase_ValidateCurrentPage(void* self) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_ValidateCurrentPage();
}

void QWizard_override_virtual_NextId(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__NextId = slot;
}

int QWizard_virtualbase_NextId(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_NextId();
}

void QWizard_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__SetVisible = slot;
}

void QWizard_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_SetVisible(visible);
}

void QWizard_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__SizeHint = slot;
}

QSize* QWizard_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_SizeHint();
}

void QWizard_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__Event = slot;
}

bool QWizard_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_Event(event);
}

void QWizard_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__ResizeEvent = slot;
}

void QWizard_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_ResizeEvent(event);
}

void QWizard_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__PaintEvent = slot;
}

void QWizard_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_PaintEvent(event);
}

void QWizard_override_virtual_Done(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__Done = slot;
}

void QWizard_virtualbase_Done(void* self, int result) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_Done(result);
}

void QWizard_override_virtual_InitializePage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__InitializePage = slot;
}

void QWizard_virtualbase_InitializePage(void* self, int id) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_InitializePage(id);
}

void QWizard_override_virtual_CleanupPage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__CleanupPage = slot;
}

void QWizard_virtualbase_CleanupPage(void* self, int id) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_CleanupPage(id);
}

void QWizard_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QWizard_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_MinimumSizeHint();
}

void QWizard_override_virtual_Open(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__Open = slot;
}

void QWizard_virtualbase_Open(void* self) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_Open();
}

void QWizard_override_virtual_Exec(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__Exec = slot;
}

int QWizard_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_Exec();
}

void QWizard_override_virtual_Accept(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__Accept = slot;
}

void QWizard_virtualbase_Accept(void* self) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_Accept();
}

void QWizard_override_virtual_Reject(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__Reject = slot;
}

void QWizard_virtualbase_Reject(void* self) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_Reject();
}

void QWizard_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__KeyPressEvent = slot;
}

void QWizard_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_KeyPressEvent(param1);
}

void QWizard_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__CloseEvent = slot;
}

void QWizard_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_CloseEvent(param1);
}

void QWizard_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__ShowEvent = slot;
}

void QWizard_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_ShowEvent(param1);
}

void QWizard_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__ContextMenuEvent = slot;
}

void QWizard_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_ContextMenuEvent(param1);
}

void QWizard_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) )->handle__EventFilter = slot;
}

bool QWizard_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_EventFilter(param1, param2);
}

void QWizard_Delete(QWizard* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQWizard*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQWizardPage : public virtual QWizardPage {
public:

	MiqtVirtualQWizardPage(QWidget* parent): QWizardPage(parent) {};
	MiqtVirtualQWizardPage(): QWizardPage() {};

	virtual ~MiqtVirtualQWizardPage() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitializePage = 0;

	// Subclass to allow providing a Go implementation
	virtual void initializePage() override {
		if (handle__InitializePage == 0) {
			QWizardPage::initializePage();
			return;
		}
		

		miqt_exec_callback_QWizardPage_InitializePage(this, handle__InitializePage);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitializePage() {

		QWizardPage::initializePage();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CleanupPage = 0;

	// Subclass to allow providing a Go implementation
	virtual void cleanupPage() override {
		if (handle__CleanupPage == 0) {
			QWizardPage::cleanupPage();
			return;
		}
		

		miqt_exec_callback_QWizardPage_CleanupPage(this, handle__CleanupPage);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CleanupPage() {

		QWizardPage::cleanupPage();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ValidatePage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool validatePage() override {
		if (handle__ValidatePage == 0) {
			return QWizardPage::validatePage();
		}
		

		bool callback_return_value = miqt_exec_callback_QWizardPage_ValidatePage(this, handle__ValidatePage);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ValidatePage() {

		return QWizardPage::validatePage();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsComplete = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isComplete() const override {
		if (handle__IsComplete == 0) {
			return QWizardPage::isComplete();
		}
		

		bool callback_return_value = miqt_exec_callback_QWizardPage_IsComplete(const_cast<MiqtVirtualQWizardPage*>(this), handle__IsComplete);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsComplete() const {

		return QWizardPage::isComplete();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NextId = 0;

	// Subclass to allow providing a Go implementation
	virtual int nextId() const override {
		if (handle__NextId == 0) {
			return QWizardPage::nextId();
		}
		

		int callback_return_value = miqt_exec_callback_QWizardPage_NextId(const_cast<MiqtVirtualQWizardPage*>(this), handle__NextId);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_NextId() const {

		return QWizardPage::nextId();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QWizardPage::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QWizardPage_DevType(const_cast<MiqtVirtualQWizardPage*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QWizardPage::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QWizardPage::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QWizardPage_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QWizardPage::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QWizardPage::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWizardPage_SizeHint(const_cast<MiqtVirtualQWizardPage*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QWizardPage::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QWizardPage::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWizardPage_MinimumSizeHint(const_cast<MiqtVirtualQWizardPage*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QWizardPage::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QWizardPage::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QWizardPage_HeightForWidth(const_cast<MiqtVirtualQWizardPage*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QWizardPage::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QWizardPage::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QWizardPage_HasHeightForWidth(const_cast<MiqtVirtualQWizardPage*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QWizardPage::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QWizardPage::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QWizardPage_PaintEngine(const_cast<MiqtVirtualQWizardPage*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QWizardPage::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QWizardPage::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWizardPage_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QWizardPage::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QWizardPage::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QWizardPage::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QWizardPage::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QWizardPage::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QWizardPage::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QWizardPage::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QWizardPage::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QWizardPage::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QWizardPage::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QWizardPage::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QWizardPage::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QWizardPage::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QWizardPage::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QWizardPage::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QWizardPage::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QWizardPage::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QWizardPage::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QWizardPage::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QWizardPage::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QWizardPage::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QWizardPage::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QWizardPage::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QWizardPage::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QWizardPage::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QWizardPage::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QWizardPage::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QWizardPage::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QWizardPage::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QWizardPage::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QWizardPage::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QWizardPage::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QWizardPage::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QWizardPage::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QWizardPage::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QWizardPage::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QWizardPage::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QWizardPage::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QWizardPage::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QWizardPage::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QWizardPage::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QWizardPage::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QWizardPage::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QWizardPage::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QWizardPage::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QWizardPage::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QWizardPage::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QWizardPage::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QWizardPage::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QWizardPage::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		qintptr* result_ret = result;
		intptr_t* sigval3 = static_cast<intptr_t*>(result_ret);

		bool callback_return_value = miqt_exec_callback_QWizardPage_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QWizardPage::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QWizardPage::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QWizardPage_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QWizardPage::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QWizardPage::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QWizardPage_Metric(const_cast<MiqtVirtualQWizardPage*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QWizardPage::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QWizardPage::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QWizardPage_InitPainter(const_cast<MiqtVirtualQWizardPage*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QWizardPage::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QWizardPage::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QWizardPage_Redirected(const_cast<MiqtVirtualQWizardPage*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QWizardPage::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QWizardPage::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QWizardPage_SharedPainter(const_cast<MiqtVirtualQWizardPage*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QWizardPage::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QWizardPage::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QWizardPage_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QWizardPage::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QWizardPage::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QWizardPage_InputMethodQuery(const_cast<MiqtVirtualQWizardPage*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QWizardPage::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QWizardPage::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QWizardPage_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QWizardPage::focusNextPrevChild(next);

	}

};

void QWizardPage_new(QWidget* parent, QWizardPage** outptr_QWizardPage, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQWizardPage* ret = new MiqtVirtualQWizardPage(parent);
	*outptr_QWizardPage = ret;
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QWizardPage_new2(QWizardPage** outptr_QWizardPage, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQWizardPage* ret = new MiqtVirtualQWizardPage();
	*outptr_QWizardPage = ret;
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

QMetaObject* QWizardPage_MetaObject(const QWizardPage* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWizardPage_Metacast(QWizardPage* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWizardPage_Tr(const char* s) {
	QString _ret = QWizardPage::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizardPage_SetTitle(QWizardPage* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

struct miqt_string QWizardPage_Title(const QWizardPage* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizardPage_SetSubTitle(QWizardPage* self, struct miqt_string subTitle) {
	QString subTitle_QString = QString::fromUtf8(subTitle.data, subTitle.len);
	self->setSubTitle(subTitle_QString);
}

struct miqt_string QWizardPage_SubTitle(const QWizardPage* self) {
	QString _ret = self->subTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizardPage_SetPixmap(QWizardPage* self, int which, QPixmap* pixmap) {
	self->setPixmap(static_cast<QWizard::WizardPixmap>(which), *pixmap);
}

QPixmap* QWizardPage_Pixmap(const QWizardPage* self, int which) {
	return new QPixmap(self->pixmap(static_cast<QWizard::WizardPixmap>(which)));
}

void QWizardPage_SetFinalPage(QWizardPage* self, bool finalPage) {
	self->setFinalPage(finalPage);
}

bool QWizardPage_IsFinalPage(const QWizardPage* self) {
	return self->isFinalPage();
}

void QWizardPage_SetCommitPage(QWizardPage* self, bool commitPage) {
	self->setCommitPage(commitPage);
}

bool QWizardPage_IsCommitPage(const QWizardPage* self) {
	return self->isCommitPage();
}

void QWizardPage_SetButtonText(QWizardPage* self, int which, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setButtonText(static_cast<QWizard::WizardButton>(which), text_QString);
}

struct miqt_string QWizardPage_ButtonText(const QWizardPage* self, int which) {
	QString _ret = self->buttonText(static_cast<QWizard::WizardButton>(which));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizardPage_InitializePage(QWizardPage* self) {
	self->initializePage();
}

void QWizardPage_CleanupPage(QWizardPage* self) {
	self->cleanupPage();
}

bool QWizardPage_ValidatePage(QWizardPage* self) {
	return self->validatePage();
}

bool QWizardPage_IsComplete(const QWizardPage* self) {
	return self->isComplete();
}

int QWizardPage_NextId(const QWizardPage* self) {
	return self->nextId();
}

void QWizardPage_CompleteChanged(QWizardPage* self) {
	self->completeChanged();
}

void QWizardPage_connect_CompleteChanged(QWizardPage* self, intptr_t slot) {
	MiqtVirtualQWizardPage::connect(self, static_cast<void (QWizardPage::*)()>(&QWizardPage::completeChanged), self, [=]() {
		miqt_exec_callback_QWizardPage_CompleteChanged(slot);
	});
}

struct miqt_string QWizardPage_Tr2(const char* s, const char* c) {
	QString _ret = QWizardPage::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWizardPage_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWizardPage::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWizardPage_override_virtual_InitializePage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__InitializePage = slot;
}

void QWizardPage_virtualbase_InitializePage(void* self) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_InitializePage();
}

void QWizardPage_override_virtual_CleanupPage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__CleanupPage = slot;
}

void QWizardPage_virtualbase_CleanupPage(void* self) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_CleanupPage();
}

void QWizardPage_override_virtual_ValidatePage(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__ValidatePage = slot;
}

bool QWizardPage_virtualbase_ValidatePage(void* self) {
	return ( (MiqtVirtualQWizardPage*)(self) )->virtualbase_ValidatePage();
}

void QWizardPage_override_virtual_IsComplete(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__IsComplete = slot;
}

bool QWizardPage_virtualbase_IsComplete(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_IsComplete();
}

void QWizardPage_override_virtual_NextId(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__NextId = slot;
}

int QWizardPage_virtualbase_NextId(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_NextId();
}

void QWizardPage_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__DevType = slot;
}

int QWizardPage_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_DevType();
}

void QWizardPage_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__SetVisible = slot;
}

void QWizardPage_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_SetVisible(visible);
}

void QWizardPage_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__SizeHint = slot;
}

QSize* QWizardPage_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_SizeHint();
}

void QWizardPage_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QWizardPage_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_MinimumSizeHint();
}

void QWizardPage_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__HeightForWidth = slot;
}

int QWizardPage_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_HeightForWidth(param1);
}

void QWizardPage_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__HasHeightForWidth = slot;
}

bool QWizardPage_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_HasHeightForWidth();
}

void QWizardPage_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QWizardPage_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_PaintEngine();
}

void QWizardPage_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__Event = slot;
}

bool QWizardPage_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWizardPage*)(self) )->virtualbase_Event(event);
}

void QWizardPage_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__MousePressEvent = slot;
}

void QWizardPage_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_MousePressEvent(event);
}

void QWizardPage_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__MouseReleaseEvent = slot;
}

void QWizardPage_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QWizardPage_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QWizardPage_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QWizardPage_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__MouseMoveEvent = slot;
}

void QWizardPage_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QWizardPage_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__WheelEvent = slot;
}

void QWizardPage_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_WheelEvent(event);
}

void QWizardPage_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__KeyPressEvent = slot;
}

void QWizardPage_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_KeyPressEvent(event);
}

void QWizardPage_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__KeyReleaseEvent = slot;
}

void QWizardPage_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QWizardPage_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__FocusInEvent = slot;
}

void QWizardPage_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_FocusInEvent(event);
}

void QWizardPage_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__FocusOutEvent = slot;
}

void QWizardPage_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_FocusOutEvent(event);
}

void QWizardPage_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__EnterEvent = slot;
}

void QWizardPage_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_EnterEvent(event);
}

void QWizardPage_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__LeaveEvent = slot;
}

void QWizardPage_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_LeaveEvent(event);
}

void QWizardPage_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__PaintEvent = slot;
}

void QWizardPage_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_PaintEvent(event);
}

void QWizardPage_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__MoveEvent = slot;
}

void QWizardPage_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_MoveEvent(event);
}

void QWizardPage_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__ResizeEvent = slot;
}

void QWizardPage_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_ResizeEvent(event);
}

void QWizardPage_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__CloseEvent = slot;
}

void QWizardPage_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_CloseEvent(event);
}

void QWizardPage_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__ContextMenuEvent = slot;
}

void QWizardPage_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QWizardPage_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__TabletEvent = slot;
}

void QWizardPage_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_TabletEvent(event);
}

void QWizardPage_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__ActionEvent = slot;
}

void QWizardPage_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_ActionEvent(event);
}

void QWizardPage_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__DragEnterEvent = slot;
}

void QWizardPage_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_DragEnterEvent(event);
}

void QWizardPage_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__DragMoveEvent = slot;
}

void QWizardPage_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_DragMoveEvent(event);
}

void QWizardPage_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__DragLeaveEvent = slot;
}

void QWizardPage_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QWizardPage_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__DropEvent = slot;
}

void QWizardPage_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_DropEvent(event);
}

void QWizardPage_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__ShowEvent = slot;
}

void QWizardPage_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_ShowEvent(event);
}

void QWizardPage_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__HideEvent = slot;
}

void QWizardPage_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_HideEvent(event);
}

void QWizardPage_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__NativeEvent = slot;
}

bool QWizardPage_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQWizardPage*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QWizardPage_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__ChangeEvent = slot;
}

void QWizardPage_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_ChangeEvent(param1);
}

void QWizardPage_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__Metric = slot;
}

int QWizardPage_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_Metric(param1);
}

void QWizardPage_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__InitPainter = slot;
}

void QWizardPage_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_InitPainter(painter);
}

void QWizardPage_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QWizardPage_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_Redirected(offset);
}

void QWizardPage_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__SharedPainter = slot;
}

QPainter* QWizardPage_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_SharedPainter();
}

void QWizardPage_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__InputMethodEvent = slot;
}

void QWizardPage_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QWizardPage_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QWizardPage_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QWizardPage_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QWizardPage_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQWizardPage*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QWizardPage_Delete(QWizardPage* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQWizardPage*>( self );
	} else {
		delete self;
	}
}

