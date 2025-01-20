#include <QAbstractPrintDialog>
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
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QPrintDialog>
#include <QPrinter>
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
#include <qprintdialog.h>
#include "gen_qprintdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPrintDialog_Accepted(intptr_t, QPrinter*);
int miqt_exec_callback_QPrintDialog_Exec(void*, intptr_t);
void miqt_exec_callback_QPrintDialog_Accept(void*, intptr_t);
void miqt_exec_callback_QPrintDialog_Done(void*, intptr_t, int);
void miqt_exec_callback_QPrintDialog_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QPrintDialog_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QPrintDialog_MinimumSizeHint(void*, intptr_t);
void miqt_exec_callback_QPrintDialog_Open(void*, intptr_t);
void miqt_exec_callback_QPrintDialog_Reject(void*, intptr_t);
void miqt_exec_callback_QPrintDialog_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPrintDialog_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPrintDialog_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPrintDialog_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPrintDialog_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QPrintDialog_EventFilter(void*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QPrintDialog_DevType(void*, intptr_t);
int miqt_exec_callback_QPrintDialog_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QPrintDialog_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QPrintDialog_PaintEngine(void*, intptr_t);
bool miqt_exec_callback_QPrintDialog_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintDialog_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintDialog_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintDialog_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintDialog_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintDialog_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QPrintDialog_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPrintDialog_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPrintDialog_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPrintDialog_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintDialog_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintDialog_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPrintDialog_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPrintDialog_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPrintDialog_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPrintDialog_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPrintDialog_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPrintDialog_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPrintDialog_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPrintDialog_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPrintDialog_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QPrintDialog_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QPrintDialog_Metric(void*, intptr_t, int);
void miqt_exec_callback_QPrintDialog_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPrintDialog_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPrintDialog_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QPrintDialog_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QPrintDialog_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QPrintDialog_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QPrintDialog_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPrintDialog_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPrintDialog_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintDialog_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPrintDialog_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPrintDialog final : public QPrintDialog {
public:

	MiqtVirtualQPrintDialog(QWidget* parent): QPrintDialog(parent) {};
	MiqtVirtualQPrintDialog(QPrinter* printer): QPrintDialog(printer) {};
	MiqtVirtualQPrintDialog(): QPrintDialog() {};
	MiqtVirtualQPrintDialog(QPrinter* printer, QWidget* parent): QPrintDialog(printer, parent) {};

	virtual ~MiqtVirtualQPrintDialog() override = default;

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QPrintDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPrintDialog_SizeHint(const_cast<MiqtVirtualQPrintDialog*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QPrintDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QPrintDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPrintDialog_MinimumSizeHint(const_cast<MiqtVirtualQPrintDialog*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QPrintDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QPrintDialog::open();
			return;
		}
		

		miqt_exec_callback_QPrintDialog_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QPrintDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QPrintDialog::reject();
			return;
		}
		

		miqt_exec_callback_QPrintDialog_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QPrintDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QPrintDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QPrintDialog_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QPrintDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QPrintDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QPrintDialog_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QPrintDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QPrintDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QPrintDialog_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QPrintDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QPrintDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QPrintDialog_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QPrintDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QPrintDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QPrintDialog_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QPrintDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QPrintDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QPrintDialog_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QPrintDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QPrintDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPrintDialog_DevType(const_cast<MiqtVirtualQPrintDialog*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QPrintDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QPrintDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QPrintDialog_HeightForWidth(const_cast<MiqtVirtualQPrintDialog*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QPrintDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QPrintDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QPrintDialog_HasHeightForWidth(const_cast<MiqtVirtualQPrintDialog*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QPrintDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QPrintDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPrintDialog_PaintEngine(const_cast<MiqtVirtualQPrintDialog*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QPrintDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QPrintDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPrintDialog_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QPrintDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QPrintDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QPrintDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QPrintDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QPrintDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QPrintDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QPrintDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QPrintDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QPrintDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QPrintDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QPrintDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QPrintDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QPrintDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QPrintDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QPrintDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QPrintDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QPrintDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QPrintDialog::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QPrintDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QPrintDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QPrintDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QPrintDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QPrintDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QPrintDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QPrintDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QPrintDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QPrintDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QPrintDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QPrintDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QPrintDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QPrintDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QPrintDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QPrintDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QPrintDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QPrintDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QPrintDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QPrintDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QPrintDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QPrintDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QPrintDialog::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QPrintDialog_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QPrintDialog::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QPrintDialog::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QPrintDialog_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QPrintDialog::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QPrintDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QPrintDialog_Metric(const_cast<MiqtVirtualQPrintDialog*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QPrintDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QPrintDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPrintDialog_InitPainter(const_cast<MiqtVirtualQPrintDialog*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QPrintDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QPrintDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPrintDialog_Redirected(const_cast<MiqtVirtualQPrintDialog*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QPrintDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QPrintDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPrintDialog_SharedPainter(const_cast<MiqtVirtualQPrintDialog*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QPrintDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QPrintDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QPrintDialog_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QPrintDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QPrintDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPrintDialog_InputMethodQuery(const_cast<MiqtVirtualQPrintDialog*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QPrintDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QPrintDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QPrintDialog_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QPrintDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QPrintDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QPrintDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QPrintDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QPrintDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QPrintDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPrintDialog_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QPrintDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QPrintDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPrintDialog_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QPrintDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QPrintDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPrintDialog_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QPrintDialog::disconnectNotify(*signal);

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

bool QPrintDialog_override_virtual_Exec(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Exec = slot;
	return true;
}

int QPrintDialog_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_Exec();
}

bool QPrintDialog_override_virtual_Accept(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Accept = slot;
	return true;
}

void QPrintDialog_virtualbase_Accept(void* self) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_Accept();
}

bool QPrintDialog_override_virtual_Done(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Done = slot;
	return true;
}

void QPrintDialog_virtualbase_Done(void* self, int result) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_Done(result);
}

bool QPrintDialog_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QPrintDialog_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_SetVisible(visible);
}

bool QPrintDialog_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QPrintDialog_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_SizeHint();
}

bool QPrintDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QPrintDialog_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_MinimumSizeHint();
}

bool QPrintDialog_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

void QPrintDialog_virtualbase_Open(void* self) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_Open();
}

bool QPrintDialog_override_virtual_Reject(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reject = slot;
	return true;
}

void QPrintDialog_virtualbase_Reject(void* self) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_Reject();
}

bool QPrintDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QPrintDialog_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_CloseEvent(param1);
}

bool QPrintDialog_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_ShowEvent(param1);
}

bool QPrintDialog_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QPrintDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QPrintDialog_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QPrintDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QPrintDialog_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QPrintDialog_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_DevType();
}

bool QPrintDialog_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QPrintDialog_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QPrintDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QPrintDialog_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_HasHeightForWidth();
}

bool QPrintDialog_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QPrintDialog_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_PaintEngine();
}

bool QPrintDialog_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QPrintDialog_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_Event(event);
}

bool QPrintDialog_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_MousePressEvent(event);
}

bool QPrintDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QPrintDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QPrintDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QPrintDialog_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_WheelEvent(event);
}

bool QPrintDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QPrintDialog_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_FocusInEvent(event);
}

bool QPrintDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QPrintDialog_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_EnterEvent(event);
}

bool QPrintDialog_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_LeaveEvent(event);
}

bool QPrintDialog_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_PaintEvent(event);
}

bool QPrintDialog_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_MoveEvent(event);
}

bool QPrintDialog_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_TabletEvent(event);
}

bool QPrintDialog_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_ActionEvent(event);
}

bool QPrintDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QPrintDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QPrintDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QPrintDialog_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_DropEvent(event);
}

bool QPrintDialog_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_HideEvent(event);
}

bool QPrintDialog_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QPrintDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QPrintDialog_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QPrintDialog_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QPrintDialog_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_Metric(param1);
}

bool QPrintDialog_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QPrintDialog_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_InitPainter(painter);
}

bool QPrintDialog_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QPrintDialog_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_Redirected(offset);
}

bool QPrintDialog_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QPrintDialog_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_SharedPainter();
}

bool QPrintDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QPrintDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QPrintDialog_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintDialog*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QPrintDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QPrintDialog_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QPrintDialog_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_TimerEvent(event);
}

bool QPrintDialog_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_ChildEvent(event);
}

bool QPrintDialog_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QPrintDialog_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_CustomEvent(event);
}

bool QPrintDialog_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QPrintDialog_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QPrintDialog_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPrintDialog* self_cast = dynamic_cast<MiqtVirtualQPrintDialog*>( (QPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QPrintDialog_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPrintDialog*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QPrintDialog_Delete(QPrintDialog* self) {
	delete self;
}

