#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
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
#include <QMetaMethod>
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
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWizard>
#include <QWizardPage>
#include <qwizard.h>
#include "gen_qwizard.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWizard_CurrentIdChanged(intptr_t, int);
void miqt_exec_callback_QWizard_HelpRequested(intptr_t);
void miqt_exec_callback_QWizard_CustomButtonClicked(intptr_t, int);
void miqt_exec_callback_QWizard_PageAdded(intptr_t, int);
void miqt_exec_callback_QWizard_PageRemoved(intptr_t, int);
bool miqt_exec_callback_QWizard_ValidateCurrentPage(void*, intptr_t);
int miqt_exec_callback_QWizard_NextId(void*, intptr_t);
void miqt_exec_callback_QWizard_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QWizard_SizeHint(void*, intptr_t);
bool miqt_exec_callback_QWizard_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QWizard_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QWizard_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QWizard_Done(void*, intptr_t, int);
void miqt_exec_callback_QWizard_InitializePage(void*, intptr_t, int);
void miqt_exec_callback_QWizard_CleanupPage(void*, intptr_t, int);
QSize* miqt_exec_callback_QWizard_MinimumSizeHint(void*, intptr_t);
void miqt_exec_callback_QWizard_Open(void*, intptr_t);
int miqt_exec_callback_QWizard_Exec(void*, intptr_t);
void miqt_exec_callback_QWizard_Accept(void*, intptr_t);
void miqt_exec_callback_QWizard_Reject(void*, intptr_t);
void miqt_exec_callback_QWizard_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWizard_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QWizard_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QWizard_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QWizard_EventFilter(void*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QWizard_DevType(void*, intptr_t);
int miqt_exec_callback_QWizard_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QWizard_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QWizard_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QWizard_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizard_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizard_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizard_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizard_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QWizard_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWizard_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWizard_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWizard_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QWizard_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QWizard_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QWizard_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QWizard_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QWizard_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QWizard_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QWizard_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QWizard_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QWizard_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QWizard_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QWizard_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QWizard_Metric(void*, intptr_t, int);
void miqt_exec_callback_QWizard_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QWizard_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QWizard_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QWizard_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QWizard_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QWizard_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QWizard_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWizard_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWizard_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QWizard_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWizard_DisconnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWizardPage_CompleteChanged(intptr_t);
void miqt_exec_callback_QWizardPage_InitializePage(void*, intptr_t);
void miqt_exec_callback_QWizardPage_CleanupPage(void*, intptr_t);
bool miqt_exec_callback_QWizardPage_ValidatePage(void*, intptr_t);
bool miqt_exec_callback_QWizardPage_IsComplete(void*, intptr_t);
int miqt_exec_callback_QWizardPage_NextId(void*, intptr_t);
int miqt_exec_callback_QWizardPage_DevType(void*, intptr_t);
void miqt_exec_callback_QWizardPage_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QWizardPage_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QWizardPage_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QWizardPage_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QWizardPage_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QWizardPage_PaintEngine(void*, intptr_t);
bool miqt_exec_callback_QWizardPage_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QWizardPage_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizardPage_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizardPage_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizardPage_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWizardPage_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QWizardPage_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWizardPage_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWizardPage_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWizardPage_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWizardPage_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QWizardPage_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QWizardPage_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QWizardPage_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QWizardPage_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QWizardPage_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QWizardPage_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QWizardPage_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QWizardPage_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QWizardPage_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QWizardPage_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QWizardPage_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QWizardPage_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QWizardPage_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QWizardPage_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QWizardPage_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QWizardPage_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QWizardPage_Metric(void*, intptr_t, int);
void miqt_exec_callback_QWizardPage_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QWizardPage_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QWizardPage_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QWizardPage_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QWizardPage_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QWizardPage_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QWizardPage_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWizardPage_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWizardPage_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWizardPage_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QWizardPage_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWizardPage_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWizard final : public QWizard {
public:

	MiqtVirtualQWizard(QWidget* parent): QWizard(parent) {};
	MiqtVirtualQWizard(): QWizard() {};
	MiqtVirtualQWizard(QWidget* parent, Qt::WindowFlags flags): QWizard(parent, flags) {};

	virtual ~MiqtVirtualQWizard() override = default;

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QWizard::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QWizard_DevType(const_cast<MiqtVirtualQWizard*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QWizard::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QWizard::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QWizard_HeightForWidth(const_cast<MiqtVirtualQWizard*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QWizard::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QWizard::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QWizard_HasHeightForWidth(const_cast<MiqtVirtualQWizard*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QWizard::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QWizard::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QWizard_PaintEngine(const_cast<MiqtVirtualQWizard*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QWizard::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QWizard::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizard_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QWizard::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QWizard::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizard_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QWizard::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QWizard::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizard_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QWizard::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QWizard::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWizard_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QWizard::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QWizard::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QWizard_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QWizard::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QWizard::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWizard_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QWizard::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QWizard::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWizard_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QWizard::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QWizard::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWizard_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QWizard::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QWizard::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QWizard_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QWizard::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QWizard::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWizard_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QWizard::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QWizard::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QWizard_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QWizard::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QWizard::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QWizard_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QWizard::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QWizard::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QWizard_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QWizard::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QWizard::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QWizard_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QWizard::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QWizard::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QWizard_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QWizard::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QWizard::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QWizard_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QWizard::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QWizard::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QWizard_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QWizard::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QWizard::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QWizard_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QWizard::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QWizard::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		qintptr* result_ret = result;
		intptr_t* sigval3 = (intptr_t*)(result_ret);

		bool callback_return_value = miqt_exec_callback_QWizard_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QWizard::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QWizard::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QWizard_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QWizard::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QWizard::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QWizard_Metric(const_cast<MiqtVirtualQWizard*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QWizard::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QWizard::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QWizard_InitPainter(const_cast<MiqtVirtualQWizard*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QWizard::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QWizard::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QWizard_Redirected(const_cast<MiqtVirtualQWizard*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QWizard::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QWizard::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QWizard_SharedPainter(const_cast<MiqtVirtualQWizard*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QWizard::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QWizard::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QWizard_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QWizard::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QWizard::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QWizard_InputMethodQuery(const_cast<MiqtVirtualQWizard*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QWizard::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QWizard::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QWizard_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QWizard::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QWizard::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWizard_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QWizard::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QWizard::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWizard_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QWizard::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QWizard::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWizard_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QWizard::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QWizard::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWizard_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QWizard::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QWizard::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWizard_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QWizard::disconnectNotify(*signal);

	}

};

QWizard* QWizard_new(QWidget* parent) {
	return new MiqtVirtualQWizard(parent);
}

QWizard* QWizard_new2() {
	return new MiqtVirtualQWizard();
}

QWizard* QWizard_new3(QWidget* parent, int flags) {
	return new MiqtVirtualQWizard(parent, static_cast<Qt::WindowFlags>(flags));
}

void QWizard_virtbase(QWizard* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
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

bool QWizard_override_virtual_ValidateCurrentPage(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ValidateCurrentPage = slot;
	return true;
}

bool QWizard_virtualbase_ValidateCurrentPage(void* self) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_ValidateCurrentPage();
}

bool QWizard_override_virtual_NextId(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NextId = slot;
	return true;
}

int QWizard_virtualbase_NextId(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_NextId();
}

bool QWizard_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QWizard_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_SetVisible(visible);
}

bool QWizard_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QWizard_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_SizeHint();
}

bool QWizard_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QWizard_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_Event(event);
}

bool QWizard_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QWizard_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_ResizeEvent(event);
}

bool QWizard_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QWizard_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_PaintEvent(event);
}

bool QWizard_override_virtual_Done(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Done = slot;
	return true;
}

void QWizard_virtualbase_Done(void* self, int result) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_Done(result);
}

bool QWizard_override_virtual_InitializePage(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitializePage = slot;
	return true;
}

void QWizard_virtualbase_InitializePage(void* self, int id) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_InitializePage(id);
}

bool QWizard_override_virtual_CleanupPage(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CleanupPage = slot;
	return true;
}

void QWizard_virtualbase_CleanupPage(void* self, int id) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_CleanupPage(id);
}

bool QWizard_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QWizard_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_MinimumSizeHint();
}

bool QWizard_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

void QWizard_virtualbase_Open(void* self) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_Open();
}

bool QWizard_override_virtual_Exec(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Exec = slot;
	return true;
}

int QWizard_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_Exec();
}

bool QWizard_override_virtual_Accept(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Accept = slot;
	return true;
}

void QWizard_virtualbase_Accept(void* self) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_Accept();
}

bool QWizard_override_virtual_Reject(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reject = slot;
	return true;
}

void QWizard_virtualbase_Reject(void* self) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_Reject();
}

bool QWizard_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QWizard_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QWizard_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QWizard_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_CloseEvent(param1);
}

bool QWizard_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QWizard_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_ShowEvent(param1);
}

bool QWizard_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QWizard_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QWizard_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QWizard_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QWizard_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QWizard_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_DevType();
}

bool QWizard_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QWizard_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QWizard_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QWizard_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_HasHeightForWidth();
}

bool QWizard_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QWizard_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_PaintEngine();
}

bool QWizard_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QWizard_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_MousePressEvent(event);
}

bool QWizard_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QWizard_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QWizard_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QWizard_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QWizard_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QWizard_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QWizard_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QWizard_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_WheelEvent(event);
}

bool QWizard_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QWizard_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QWizard_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QWizard_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_FocusInEvent(event);
}

bool QWizard_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QWizard_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QWizard_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QWizard_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_EnterEvent(event);
}

bool QWizard_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QWizard_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_LeaveEvent(event);
}

bool QWizard_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QWizard_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_MoveEvent(event);
}

bool QWizard_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QWizard_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_TabletEvent(event);
}

bool QWizard_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QWizard_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_ActionEvent(event);
}

bool QWizard_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QWizard_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QWizard_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QWizard_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QWizard_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QWizard_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QWizard_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QWizard_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_DropEvent(event);
}

bool QWizard_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QWizard_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_HideEvent(event);
}

bool QWizard_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QWizard_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QWizard_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QWizard_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QWizard_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QWizard_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_Metric(param1);
}

bool QWizard_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QWizard_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQWizard*)(self) )->virtualbase_InitPainter(painter);
}

bool QWizard_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QWizard_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_Redirected(offset);
}

bool QWizard_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QWizard_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_SharedPainter();
}

bool QWizard_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QWizard_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QWizard_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QWizard_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQWizard*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QWizard_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QWizard_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQWizard*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QWizard_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QWizard_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_TimerEvent(event);
}

bool QWizard_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QWizard_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_ChildEvent(event);
}

bool QWizard_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QWizard_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_CustomEvent(event);
}

bool QWizard_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QWizard_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QWizard_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWizard* self_cast = dynamic_cast<MiqtVirtualQWizard*>( (QWizard*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QWizard_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWizard*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QWizard_Delete(QWizard* self) {
	delete self;
}

class MiqtVirtualQWizardPage final : public QWizardPage {
public:

	MiqtVirtualQWizardPage(QWidget* parent): QWizardPage(parent) {};
	MiqtVirtualQWizardPage(): QWizardPage() {};

	virtual ~MiqtVirtualQWizardPage() override = default;

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
		intptr_t* sigval3 = (intptr_t*)(result_ret);

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QWizardPage::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWizardPage_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QWizardPage::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QWizardPage::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QWizardPage::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QWizardPage::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QWizardPage::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QWizardPage::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWizardPage_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QWizardPage::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QWizardPage::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWizardPage_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QWizardPage::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QWizardPage::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWizardPage_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QWizardPage::disconnectNotify(*signal);

	}

};

QWizardPage* QWizardPage_new(QWidget* parent) {
	return new MiqtVirtualQWizardPage(parent);
}

QWizardPage* QWizardPage_new2() {
	return new MiqtVirtualQWizardPage();
}

void QWizardPage_virtbase(QWizardPage* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
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

bool QWizardPage_override_virtual_InitializePage(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitializePage = slot;
	return true;
}

void QWizardPage_virtualbase_InitializePage(void* self) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_InitializePage();
}

bool QWizardPage_override_virtual_CleanupPage(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CleanupPage = slot;
	return true;
}

void QWizardPage_virtualbase_CleanupPage(void* self) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_CleanupPage();
}

bool QWizardPage_override_virtual_ValidatePage(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ValidatePage = slot;
	return true;
}

bool QWizardPage_virtualbase_ValidatePage(void* self) {
	return ( (MiqtVirtualQWizardPage*)(self) )->virtualbase_ValidatePage();
}

bool QWizardPage_override_virtual_IsComplete(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsComplete = slot;
	return true;
}

bool QWizardPage_virtualbase_IsComplete(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_IsComplete();
}

bool QWizardPage_override_virtual_NextId(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NextId = slot;
	return true;
}

int QWizardPage_virtualbase_NextId(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_NextId();
}

bool QWizardPage_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QWizardPage_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_DevType();
}

bool QWizardPage_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QWizardPage_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_SetVisible(visible);
}

bool QWizardPage_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QWizardPage_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_SizeHint();
}

bool QWizardPage_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QWizardPage_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_MinimumSizeHint();
}

bool QWizardPage_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QWizardPage_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QWizardPage_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QWizardPage_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_HasHeightForWidth();
}

bool QWizardPage_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QWizardPage_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_PaintEngine();
}

bool QWizardPage_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QWizardPage_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWizardPage*)(self) )->virtualbase_Event(event);
}

bool QWizardPage_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QWizardPage_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_MousePressEvent(event);
}

bool QWizardPage_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QWizardPage_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QWizardPage_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QWizardPage_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QWizardPage_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QWizardPage_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QWizardPage_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QWizardPage_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_WheelEvent(event);
}

bool QWizardPage_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QWizardPage_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QWizardPage_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QWizardPage_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QWizardPage_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QWizardPage_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_FocusInEvent(event);
}

bool QWizardPage_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QWizardPage_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QWizardPage_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QWizardPage_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_EnterEvent(event);
}

bool QWizardPage_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QWizardPage_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_LeaveEvent(event);
}

bool QWizardPage_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QWizardPage_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_PaintEvent(event);
}

bool QWizardPage_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QWizardPage_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_MoveEvent(event);
}

bool QWizardPage_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QWizardPage_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_ResizeEvent(event);
}

bool QWizardPage_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QWizardPage_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_CloseEvent(event);
}

bool QWizardPage_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QWizardPage_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QWizardPage_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QWizardPage_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_TabletEvent(event);
}

bool QWizardPage_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QWizardPage_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_ActionEvent(event);
}

bool QWizardPage_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QWizardPage_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QWizardPage_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QWizardPage_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QWizardPage_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QWizardPage_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QWizardPage_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QWizardPage_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_DropEvent(event);
}

bool QWizardPage_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QWizardPage_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_ShowEvent(event);
}

bool QWizardPage_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QWizardPage_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_HideEvent(event);
}

bool QWizardPage_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QWizardPage_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQWizardPage*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QWizardPage_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QWizardPage_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QWizardPage_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QWizardPage_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_Metric(param1);
}

bool QWizardPage_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QWizardPage_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_InitPainter(painter);
}

bool QWizardPage_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QWizardPage_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_Redirected(offset);
}

bool QWizardPage_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QWizardPage_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_SharedPainter();
}

bool QWizardPage_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QWizardPage_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QWizardPage_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QWizardPage_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQWizardPage*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QWizardPage_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QWizardPage_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQWizardPage*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QWizardPage_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QWizardPage_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWizardPage*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QWizardPage_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QWizardPage_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_TimerEvent(event);
}

bool QWizardPage_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QWizardPage_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_ChildEvent(event);
}

bool QWizardPage_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QWizardPage_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_CustomEvent(event);
}

bool QWizardPage_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QWizardPage_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QWizardPage_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWizardPage* self_cast = dynamic_cast<MiqtVirtualQWizardPage*>( (QWizardPage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QWizardPage_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWizardPage*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QWizardPage_Delete(QWizardPage* self) {
	delete self;
}

