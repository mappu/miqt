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
#include <QPrintPreviewDialog>
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
#include <qprintpreviewdialog.h>
#include "gen_qprintpreviewdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPrintPreviewDialog_PaintRequested(intptr_t, QPrinter*);
void miqt_exec_callback_QPrintPreviewDialog_SetVisible(void*, intptr_t, bool);
void miqt_exec_callback_QPrintPreviewDialog_Done(void*, intptr_t, int);
QSize* miqt_exec_callback_QPrintPreviewDialog_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QPrintPreviewDialog_MinimumSizeHint(void*, intptr_t);
void miqt_exec_callback_QPrintPreviewDialog_Open(void*, intptr_t);
int miqt_exec_callback_QPrintPreviewDialog_Exec(void*, intptr_t);
void miqt_exec_callback_QPrintPreviewDialog_Accept(void*, intptr_t);
void miqt_exec_callback_QPrintPreviewDialog_Reject(void*, intptr_t);
void miqt_exec_callback_QPrintPreviewDialog_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPrintPreviewDialog_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPrintPreviewDialog_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPrintPreviewDialog_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPrintPreviewDialog_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QPrintPreviewDialog_EventFilter(void*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QPrintPreviewDialog_DevType(void*, intptr_t);
int miqt_exec_callback_QPrintPreviewDialog_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QPrintPreviewDialog_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QPrintPreviewDialog_PaintEngine(void*, intptr_t);
bool miqt_exec_callback_QPrintPreviewDialog_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewDialog_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewDialog_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewDialog_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewDialog_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewDialog_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QPrintPreviewDialog_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPrintPreviewDialog_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPrintPreviewDialog_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPrintPreviewDialog_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QPrintPreviewDialog_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewDialog_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPrintPreviewDialog_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPrintPreviewDialog_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPrintPreviewDialog_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPrintPreviewDialog_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPrintPreviewDialog_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPrintPreviewDialog_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPrintPreviewDialog_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPrintPreviewDialog_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPrintPreviewDialog_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QPrintPreviewDialog_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QPrintPreviewDialog_Metric(void*, intptr_t, int);
void miqt_exec_callback_QPrintPreviewDialog_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPrintPreviewDialog_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPrintPreviewDialog_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QPrintPreviewDialog_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QPrintPreviewDialog_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QPrintPreviewDialog_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QPrintPreviewDialog_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPrintPreviewDialog_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPrintPreviewDialog_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewDialog_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPrintPreviewDialog_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPrintPreviewDialog final : public QPrintPreviewDialog {
public:

	MiqtVirtualQPrintPreviewDialog(QWidget* parent): QPrintPreviewDialog(parent) {};
	MiqtVirtualQPrintPreviewDialog(): QPrintPreviewDialog() {};
	MiqtVirtualQPrintPreviewDialog(QPrinter* printer): QPrintPreviewDialog(printer) {};
	MiqtVirtualQPrintPreviewDialog(QWidget* parent, Qt::WindowFlags flags): QPrintPreviewDialog(parent, flags) {};
	MiqtVirtualQPrintPreviewDialog(QPrinter* printer, QWidget* parent): QPrintPreviewDialog(printer, parent) {};
	MiqtVirtualQPrintPreviewDialog(QPrinter* printer, QWidget* parent, Qt::WindowFlags flags): QPrintPreviewDialog(printer, parent, flags) {};

	virtual ~MiqtVirtualQPrintPreviewDialog() override = default;

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QPrintPreviewDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPrintPreviewDialog_DevType(const_cast<MiqtVirtualQPrintPreviewDialog*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QPrintPreviewDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QPrintPreviewDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QPrintPreviewDialog_HeightForWidth(const_cast<MiqtVirtualQPrintPreviewDialog*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QPrintPreviewDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QPrintPreviewDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QPrintPreviewDialog_HasHeightForWidth(const_cast<MiqtVirtualQPrintPreviewDialog*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QPrintPreviewDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QPrintPreviewDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPrintPreviewDialog_PaintEngine(const_cast<MiqtVirtualQPrintPreviewDialog*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QPrintPreviewDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QPrintPreviewDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPrintPreviewDialog_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QPrintPreviewDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QPrintPreviewDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QPrintPreviewDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QPrintPreviewDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QPrintPreviewDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QPrintPreviewDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QPrintPreviewDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QPrintPreviewDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QPrintPreviewDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QPrintPreviewDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QPrintPreviewDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QPrintPreviewDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QPrintPreviewDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QPrintPreviewDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QPrintPreviewDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QPrintPreviewDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QPrintPreviewDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QPrintPreviewDialog::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QPrintPreviewDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QPrintPreviewDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QPrintPreviewDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QPrintPreviewDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QPrintPreviewDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QPrintPreviewDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QPrintPreviewDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QPrintPreviewDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QPrintPreviewDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QPrintPreviewDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QPrintPreviewDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QPrintPreviewDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QPrintPreviewDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QPrintPreviewDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QPrintPreviewDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QPrintPreviewDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QPrintPreviewDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QPrintPreviewDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QPrintPreviewDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QPrintPreviewDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QPrintPreviewDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QPrintPreviewDialog::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QPrintPreviewDialog_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QPrintPreviewDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QPrintPreviewDialog::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewDialog_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QPrintPreviewDialog::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QPrintPreviewDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QPrintPreviewDialog_Metric(const_cast<MiqtVirtualQPrintPreviewDialog*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QPrintPreviewDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QPrintPreviewDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPrintPreviewDialog_InitPainter(const_cast<MiqtVirtualQPrintPreviewDialog*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QPrintPreviewDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QPrintPreviewDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPrintPreviewDialog_Redirected(const_cast<MiqtVirtualQPrintPreviewDialog*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QPrintPreviewDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QPrintPreviewDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPrintPreviewDialog_SharedPainter(const_cast<MiqtVirtualQPrintPreviewDialog*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QPrintPreviewDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QPrintPreviewDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewDialog_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QPrintPreviewDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QPrintPreviewDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPrintPreviewDialog_InputMethodQuery(const_cast<MiqtVirtualQPrintPreviewDialog*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QPrintPreviewDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QPrintPreviewDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QPrintPreviewDialog_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QPrintPreviewDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QPrintPreviewDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QPrintPreviewDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QPrintPreviewDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QPrintPreviewDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QPrintPreviewDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewDialog_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QPrintPreviewDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QPrintPreviewDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPrintPreviewDialog_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QPrintPreviewDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QPrintPreviewDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPrintPreviewDialog_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QPrintPreviewDialog::disconnectNotify(*signal);

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

bool QPrintPreviewDialog_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_SetVisible(visible);
}

bool QPrintPreviewDialog_override_virtual_Done(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Done = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_Done(void* self, int result) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_Done(result);
}

bool QPrintPreviewDialog_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QPrintPreviewDialog_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_SizeHint();
}

bool QPrintPreviewDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QPrintPreviewDialog_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_MinimumSizeHint();
}

bool QPrintPreviewDialog_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_Open(void* self) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_Open();
}

bool QPrintPreviewDialog_override_virtual_Exec(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Exec = slot;
	return true;
}

int QPrintPreviewDialog_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_Exec();
}

bool QPrintPreviewDialog_override_virtual_Accept(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Accept = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_Accept(void* self) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_Accept();
}

bool QPrintPreviewDialog_override_virtual_Reject(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reject = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_Reject(void* self) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_Reject();
}

bool QPrintPreviewDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QPrintPreviewDialog_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_CloseEvent(param1);
}

bool QPrintPreviewDialog_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_ShowEvent(param1);
}

bool QPrintPreviewDialog_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QPrintPreviewDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QPrintPreviewDialog_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QPrintPreviewDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QPrintPreviewDialog_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QPrintPreviewDialog_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_DevType();
}

bool QPrintPreviewDialog_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QPrintPreviewDialog_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QPrintPreviewDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QPrintPreviewDialog_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_HasHeightForWidth();
}

bool QPrintPreviewDialog_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QPrintPreviewDialog_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_PaintEngine();
}

bool QPrintPreviewDialog_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QPrintPreviewDialog_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_Event(event);
}

bool QPrintPreviewDialog_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_MousePressEvent(event);
}

bool QPrintPreviewDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QPrintPreviewDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QPrintPreviewDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QPrintPreviewDialog_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_WheelEvent(event);
}

bool QPrintPreviewDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QPrintPreviewDialog_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_FocusInEvent(event);
}

bool QPrintPreviewDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QPrintPreviewDialog_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_EnterEvent(event);
}

bool QPrintPreviewDialog_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_LeaveEvent(event);
}

bool QPrintPreviewDialog_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_PaintEvent(event);
}

bool QPrintPreviewDialog_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_MoveEvent(event);
}

bool QPrintPreviewDialog_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_TabletEvent(event);
}

bool QPrintPreviewDialog_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_ActionEvent(event);
}

bool QPrintPreviewDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QPrintPreviewDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QPrintPreviewDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QPrintPreviewDialog_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_DropEvent(event);
}

bool QPrintPreviewDialog_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_HideEvent(event);
}

bool QPrintPreviewDialog_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QPrintPreviewDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QPrintPreviewDialog_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QPrintPreviewDialog_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QPrintPreviewDialog_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_Metric(param1);
}

bool QPrintPreviewDialog_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_InitPainter(painter);
}

bool QPrintPreviewDialog_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QPrintPreviewDialog_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_Redirected(offset);
}

bool QPrintPreviewDialog_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QPrintPreviewDialog_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_SharedPainter();
}

bool QPrintPreviewDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QPrintPreviewDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QPrintPreviewDialog_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QPrintPreviewDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QPrintPreviewDialog_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QPrintPreviewDialog_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_TimerEvent(event);
}

bool QPrintPreviewDialog_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_ChildEvent(event);
}

bool QPrintPreviewDialog_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_CustomEvent(event);
}

bool QPrintPreviewDialog_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QPrintPreviewDialog_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewDialog* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewDialog*>( (QPrintPreviewDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QPrintPreviewDialog_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPrintPreviewDialog*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QPrintPreviewDialog_Delete(QPrintPreviewDialog* self) {
	delete self;
}

