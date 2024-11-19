#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QMenu>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
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
#include <qmdisubwindow.h>
#include "gen_qmdisubwindow.h"
#include "_cgo_export.h"

class MiqtVirtualQMdiSubWindow : public virtual QMdiSubWindow {
public:

	MiqtVirtualQMdiSubWindow(QWidget* parent): QMdiSubWindow(parent) {};
	MiqtVirtualQMdiSubWindow(): QMdiSubWindow() {};
	MiqtVirtualQMdiSubWindow(QWidget* parent, Qt::WindowFlags flags): QMdiSubWindow(parent, flags) {};

	virtual ~MiqtVirtualQMdiSubWindow() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QMdiSubWindow::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMdiSubWindow_SizeHint(const_cast<MiqtVirtualQMdiSubWindow*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QMdiSubWindow::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QMdiSubWindow::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMdiSubWindow_MinimumSizeHint(const_cast<MiqtVirtualQMdiSubWindow*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QMdiSubWindow::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QMdiSubWindow::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMdiSubWindow_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QMdiSubWindow::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QMdiSubWindow::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMdiSubWindow_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QMdiSubWindow::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* showEvent) override {
		if (handle__ShowEvent == 0) {
			QMdiSubWindow::showEvent(showEvent);
			return;
		}
		
		QShowEvent* sigval1 = showEvent;

		miqt_exec_callback_QMdiSubWindow_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* showEvent) {

		QMdiSubWindow::showEvent(showEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* hideEvent) override {
		if (handle__HideEvent == 0) {
			QMdiSubWindow::hideEvent(hideEvent);
			return;
		}
		
		QHideEvent* sigval1 = hideEvent;

		miqt_exec_callback_QMdiSubWindow_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* hideEvent) {

		QMdiSubWindow::hideEvent(hideEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* changeEvent) override {
		if (handle__ChangeEvent == 0) {
			QMdiSubWindow::changeEvent(changeEvent);
			return;
		}
		
		QEvent* sigval1 = changeEvent;

		miqt_exec_callback_QMdiSubWindow_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* changeEvent) {

		QMdiSubWindow::changeEvent(changeEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* closeEvent) override {
		if (handle__CloseEvent == 0) {
			QMdiSubWindow::closeEvent(closeEvent);
			return;
		}
		
		QCloseEvent* sigval1 = closeEvent;

		miqt_exec_callback_QMdiSubWindow_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* closeEvent) {

		QMdiSubWindow::closeEvent(closeEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* leaveEvent) override {
		if (handle__LeaveEvent == 0) {
			QMdiSubWindow::leaveEvent(leaveEvent);
			return;
		}
		
		QEvent* sigval1 = leaveEvent;

		miqt_exec_callback_QMdiSubWindow_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* leaveEvent) {

		QMdiSubWindow::leaveEvent(leaveEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* resizeEvent) override {
		if (handle__ResizeEvent == 0) {
			QMdiSubWindow::resizeEvent(resizeEvent);
			return;
		}
		
		QResizeEvent* sigval1 = resizeEvent;

		miqt_exec_callback_QMdiSubWindow_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* resizeEvent) {

		QMdiSubWindow::resizeEvent(resizeEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* timerEvent) override {
		if (handle__TimerEvent == 0) {
			QMdiSubWindow::timerEvent(timerEvent);
			return;
		}
		
		QTimerEvent* sigval1 = timerEvent;

		miqt_exec_callback_QMdiSubWindow_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* timerEvent) {

		QMdiSubWindow::timerEvent(timerEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* moveEvent) override {
		if (handle__MoveEvent == 0) {
			QMdiSubWindow::moveEvent(moveEvent);
			return;
		}
		
		QMoveEvent* sigval1 = moveEvent;

		miqt_exec_callback_QMdiSubWindow_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* moveEvent) {

		QMdiSubWindow::moveEvent(moveEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* paintEvent) override {
		if (handle__PaintEvent == 0) {
			QMdiSubWindow::paintEvent(paintEvent);
			return;
		}
		
		QPaintEvent* sigval1 = paintEvent;

		miqt_exec_callback_QMdiSubWindow_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* paintEvent) {

		QMdiSubWindow::paintEvent(paintEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* mouseEvent) override {
		if (handle__MousePressEvent == 0) {
			QMdiSubWindow::mousePressEvent(mouseEvent);
			return;
		}
		
		QMouseEvent* sigval1 = mouseEvent;

		miqt_exec_callback_QMdiSubWindow_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* mouseEvent) {

		QMdiSubWindow::mousePressEvent(mouseEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* mouseEvent) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
			return;
		}
		
		QMouseEvent* sigval1 = mouseEvent;

		miqt_exec_callback_QMdiSubWindow_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* mouseEvent) {

		QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* mouseEvent) override {
		if (handle__MouseReleaseEvent == 0) {
			QMdiSubWindow::mouseReleaseEvent(mouseEvent);
			return;
		}
		
		QMouseEvent* sigval1 = mouseEvent;

		miqt_exec_callback_QMdiSubWindow_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* mouseEvent) {

		QMdiSubWindow::mouseReleaseEvent(mouseEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* mouseEvent) override {
		if (handle__MouseMoveEvent == 0) {
			QMdiSubWindow::mouseMoveEvent(mouseEvent);
			return;
		}
		
		QMouseEvent* sigval1 = mouseEvent;

		miqt_exec_callback_QMdiSubWindow_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* mouseEvent) {

		QMdiSubWindow::mouseMoveEvent(mouseEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* keyEvent) override {
		if (handle__KeyPressEvent == 0) {
			QMdiSubWindow::keyPressEvent(keyEvent);
			return;
		}
		
		QKeyEvent* sigval1 = keyEvent;

		miqt_exec_callback_QMdiSubWindow_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* keyEvent) {

		QMdiSubWindow::keyPressEvent(keyEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* contextMenuEvent) override {
		if (handle__ContextMenuEvent == 0) {
			QMdiSubWindow::contextMenuEvent(contextMenuEvent);
			return;
		}
		
		QContextMenuEvent* sigval1 = contextMenuEvent;

		miqt_exec_callback_QMdiSubWindow_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* contextMenuEvent) {

		QMdiSubWindow::contextMenuEvent(contextMenuEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* focusInEvent) override {
		if (handle__FocusInEvent == 0) {
			QMdiSubWindow::focusInEvent(focusInEvent);
			return;
		}
		
		QFocusEvent* sigval1 = focusInEvent;

		miqt_exec_callback_QMdiSubWindow_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* focusInEvent) {

		QMdiSubWindow::focusInEvent(focusInEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* focusOutEvent) override {
		if (handle__FocusOutEvent == 0) {
			QMdiSubWindow::focusOutEvent(focusOutEvent);
			return;
		}
		
		QFocusEvent* sigval1 = focusOutEvent;

		miqt_exec_callback_QMdiSubWindow_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* focusOutEvent) {

		QMdiSubWindow::focusOutEvent(focusOutEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* childEvent) override {
		if (handle__ChildEvent == 0) {
			QMdiSubWindow::childEvent(childEvent);
			return;
		}
		
		QChildEvent* sigval1 = childEvent;

		miqt_exec_callback_QMdiSubWindow_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* childEvent) {

		QMdiSubWindow::childEvent(childEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QMdiSubWindow::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QMdiSubWindow_DevType(const_cast<MiqtVirtualQMdiSubWindow*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QMdiSubWindow::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QMdiSubWindow::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QMdiSubWindow_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QMdiSubWindow::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QMdiSubWindow::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QMdiSubWindow_HeightForWidth(const_cast<MiqtVirtualQMdiSubWindow*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QMdiSubWindow::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QMdiSubWindow::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QMdiSubWindow_HasHeightForWidth(const_cast<MiqtVirtualQMdiSubWindow*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QMdiSubWindow::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QMdiSubWindow::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QMdiSubWindow_PaintEngine(const_cast<MiqtVirtualQMdiSubWindow*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QMdiSubWindow::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QMdiSubWindow::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QMdiSubWindow_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QMdiSubWindow::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QMdiSubWindow::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QMdiSubWindow_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QMdiSubWindow::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QMdiSubWindow::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMdiSubWindow_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QMdiSubWindow::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QMdiSubWindow::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QMdiSubWindow_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QMdiSubWindow::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QMdiSubWindow::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QMdiSubWindow_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QMdiSubWindow::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QMdiSubWindow::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QMdiSubWindow_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QMdiSubWindow::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QMdiSubWindow::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QMdiSubWindow_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QMdiSubWindow::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QMdiSubWindow::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QMdiSubWindow_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QMdiSubWindow::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QMdiSubWindow::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QMdiSubWindow_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QMdiSubWindow::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QMdiSubWindow::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QMdiSubWindow_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QMdiSubWindow::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QMdiSubWindow::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QMdiSubWindow_Metric(const_cast<MiqtVirtualQMdiSubWindow*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QMdiSubWindow::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QMdiSubWindow::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QMdiSubWindow_InitPainter(const_cast<MiqtVirtualQMdiSubWindow*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QMdiSubWindow::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QMdiSubWindow::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QMdiSubWindow_Redirected(const_cast<MiqtVirtualQMdiSubWindow*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QMdiSubWindow::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QMdiSubWindow::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QMdiSubWindow_SharedPainter(const_cast<MiqtVirtualQMdiSubWindow*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QMdiSubWindow::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QMdiSubWindow::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QMdiSubWindow_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QMdiSubWindow::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QMdiSubWindow::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QMdiSubWindow_InputMethodQuery(const_cast<MiqtVirtualQMdiSubWindow*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QMdiSubWindow::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QMdiSubWindow::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QMdiSubWindow_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QMdiSubWindow::focusNextPrevChild(next);

	}

};

void QMdiSubWindow_new(QWidget* parent, QMdiSubWindow** outptr_QMdiSubWindow, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQMdiSubWindow* ret = new MiqtVirtualQMdiSubWindow(parent);
	*outptr_QMdiSubWindow = ret;
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QMdiSubWindow_new2(QMdiSubWindow** outptr_QMdiSubWindow, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQMdiSubWindow* ret = new MiqtVirtualQMdiSubWindow();
	*outptr_QMdiSubWindow = ret;
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QMdiSubWindow_new3(QWidget* parent, int flags, QMdiSubWindow** outptr_QMdiSubWindow, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQMdiSubWindow* ret = new MiqtVirtualQMdiSubWindow(parent, static_cast<Qt::WindowFlags>(flags));
	*outptr_QMdiSubWindow = ret;
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

QMetaObject* QMdiSubWindow_MetaObject(const QMdiSubWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMdiSubWindow_Metacast(QMdiSubWindow* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMdiSubWindow_Tr(const char* s) {
	QString _ret = QMdiSubWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMdiSubWindow_TrUtf8(const char* s) {
	QString _ret = QMdiSubWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QMdiSubWindow_SizeHint(const QMdiSubWindow* self) {
	return new QSize(self->sizeHint());
}

QSize* QMdiSubWindow_MinimumSizeHint(const QMdiSubWindow* self) {
	return new QSize(self->minimumSizeHint());
}

void QMdiSubWindow_SetWidget(QMdiSubWindow* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QMdiSubWindow_Widget(const QMdiSubWindow* self) {
	return self->widget();
}

QWidget* QMdiSubWindow_MaximizedButtonsWidget(const QMdiSubWindow* self) {
	return self->maximizedButtonsWidget();
}

QWidget* QMdiSubWindow_MaximizedSystemMenuIconWidget(const QMdiSubWindow* self) {
	return self->maximizedSystemMenuIconWidget();
}

bool QMdiSubWindow_IsShaded(const QMdiSubWindow* self) {
	return self->isShaded();
}

void QMdiSubWindow_SetOption(QMdiSubWindow* self, int option) {
	self->setOption(static_cast<QMdiSubWindow::SubWindowOption>(option));
}

bool QMdiSubWindow_TestOption(const QMdiSubWindow* self, int param1) {
	return self->testOption(static_cast<QMdiSubWindow::SubWindowOption>(param1));
}

void QMdiSubWindow_SetKeyboardSingleStep(QMdiSubWindow* self, int step) {
	self->setKeyboardSingleStep(static_cast<int>(step));
}

int QMdiSubWindow_KeyboardSingleStep(const QMdiSubWindow* self) {
	return self->keyboardSingleStep();
}

void QMdiSubWindow_SetKeyboardPageStep(QMdiSubWindow* self, int step) {
	self->setKeyboardPageStep(static_cast<int>(step));
}

int QMdiSubWindow_KeyboardPageStep(const QMdiSubWindow* self) {
	return self->keyboardPageStep();
}

void QMdiSubWindow_SetSystemMenu(QMdiSubWindow* self, QMenu* systemMenu) {
	self->setSystemMenu(systemMenu);
}

QMenu* QMdiSubWindow_SystemMenu(const QMdiSubWindow* self) {
	return self->systemMenu();
}

QMdiArea* QMdiSubWindow_MdiArea(const QMdiSubWindow* self) {
	return self->mdiArea();
}

void QMdiSubWindow_WindowStateChanged(QMdiSubWindow* self, int oldState, int newState) {
	self->windowStateChanged(static_cast<Qt::WindowStates>(oldState), static_cast<Qt::WindowStates>(newState));
}

void QMdiSubWindow_connect_WindowStateChanged(QMdiSubWindow* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow::connect(self, static_cast<void (QMdiSubWindow::*)(Qt::WindowStates, Qt::WindowStates)>(&QMdiSubWindow::windowStateChanged), self, [=](Qt::WindowStates oldState, Qt::WindowStates newState) {
		Qt::WindowStates oldState_ret = oldState;
		int sigval1 = static_cast<int>(oldState_ret);
		Qt::WindowStates newState_ret = newState;
		int sigval2 = static_cast<int>(newState_ret);
		miqt_exec_callback_QMdiSubWindow_WindowStateChanged(slot, sigval1, sigval2);
	});
}

void QMdiSubWindow_AboutToActivate(QMdiSubWindow* self) {
	self->aboutToActivate();
}

void QMdiSubWindow_connect_AboutToActivate(QMdiSubWindow* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow::connect(self, static_cast<void (QMdiSubWindow::*)()>(&QMdiSubWindow::aboutToActivate), self, [=]() {
		miqt_exec_callback_QMdiSubWindow_AboutToActivate(slot);
	});
}

void QMdiSubWindow_ShowSystemMenu(QMdiSubWindow* self) {
	self->showSystemMenu();
}

void QMdiSubWindow_ShowShaded(QMdiSubWindow* self) {
	self->showShaded();
}

struct miqt_string QMdiSubWindow_Tr2(const char* s, const char* c) {
	QString _ret = QMdiSubWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMdiSubWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMdiSubWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMdiSubWindow_TrUtf82(const char* s, const char* c) {
	QString _ret = QMdiSubWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMdiSubWindow_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMdiSubWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMdiSubWindow_SetOption2(QMdiSubWindow* self, int option, bool on) {
	self->setOption(static_cast<QMdiSubWindow::SubWindowOption>(option), on);
}

void QMdiSubWindow_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__SizeHint = slot;
}

QSize* QMdiSubWindow_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_SizeHint();
}

void QMdiSubWindow_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QMdiSubWindow_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_MinimumSizeHint();
}

void QMdiSubWindow_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__EventFilter = slot;
}

bool QMdiSubWindow_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_EventFilter(object, event);
}

void QMdiSubWindow_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__Event = slot;
}

bool QMdiSubWindow_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_Event(event);
}

void QMdiSubWindow_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__ShowEvent = slot;
}

void QMdiSubWindow_virtualbase_ShowEvent(void* self, QShowEvent* showEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_ShowEvent(showEvent);
}

void QMdiSubWindow_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__HideEvent = slot;
}

void QMdiSubWindow_virtualbase_HideEvent(void* self, QHideEvent* hideEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_HideEvent(hideEvent);
}

void QMdiSubWindow_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__ChangeEvent = slot;
}

void QMdiSubWindow_virtualbase_ChangeEvent(void* self, QEvent* changeEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_ChangeEvent(changeEvent);
}

void QMdiSubWindow_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__CloseEvent = slot;
}

void QMdiSubWindow_virtualbase_CloseEvent(void* self, QCloseEvent* closeEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_CloseEvent(closeEvent);
}

void QMdiSubWindow_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__LeaveEvent = slot;
}

void QMdiSubWindow_virtualbase_LeaveEvent(void* self, QEvent* leaveEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_LeaveEvent(leaveEvent);
}

void QMdiSubWindow_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__ResizeEvent = slot;
}

void QMdiSubWindow_virtualbase_ResizeEvent(void* self, QResizeEvent* resizeEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_ResizeEvent(resizeEvent);
}

void QMdiSubWindow_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__TimerEvent = slot;
}

void QMdiSubWindow_virtualbase_TimerEvent(void* self, QTimerEvent* timerEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_TimerEvent(timerEvent);
}

void QMdiSubWindow_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__MoveEvent = slot;
}

void QMdiSubWindow_virtualbase_MoveEvent(void* self, QMoveEvent* moveEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_MoveEvent(moveEvent);
}

void QMdiSubWindow_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__PaintEvent = slot;
}

void QMdiSubWindow_virtualbase_PaintEvent(void* self, QPaintEvent* paintEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_PaintEvent(paintEvent);
}

void QMdiSubWindow_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__MousePressEvent = slot;
}

void QMdiSubWindow_virtualbase_MousePressEvent(void* self, QMouseEvent* mouseEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_MousePressEvent(mouseEvent);
}

void QMdiSubWindow_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QMdiSubWindow_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* mouseEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_MouseDoubleClickEvent(mouseEvent);
}

void QMdiSubWindow_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__MouseReleaseEvent = slot;
}

void QMdiSubWindow_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* mouseEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_MouseReleaseEvent(mouseEvent);
}

void QMdiSubWindow_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__MouseMoveEvent = slot;
}

void QMdiSubWindow_virtualbase_MouseMoveEvent(void* self, QMouseEvent* mouseEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_MouseMoveEvent(mouseEvent);
}

void QMdiSubWindow_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__KeyPressEvent = slot;
}

void QMdiSubWindow_virtualbase_KeyPressEvent(void* self, QKeyEvent* keyEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_KeyPressEvent(keyEvent);
}

void QMdiSubWindow_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__ContextMenuEvent = slot;
}

void QMdiSubWindow_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* contextMenuEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_ContextMenuEvent(contextMenuEvent);
}

void QMdiSubWindow_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__FocusInEvent = slot;
}

void QMdiSubWindow_virtualbase_FocusInEvent(void* self, QFocusEvent* focusInEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_FocusInEvent(focusInEvent);
}

void QMdiSubWindow_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__FocusOutEvent = slot;
}

void QMdiSubWindow_virtualbase_FocusOutEvent(void* self, QFocusEvent* focusOutEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_FocusOutEvent(focusOutEvent);
}

void QMdiSubWindow_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__ChildEvent = slot;
}

void QMdiSubWindow_virtualbase_ChildEvent(void* self, QChildEvent* childEvent) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_ChildEvent(childEvent);
}

void QMdiSubWindow_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__DevType = slot;
}

int QMdiSubWindow_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_DevType();
}

void QMdiSubWindow_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__SetVisible = slot;
}

void QMdiSubWindow_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_SetVisible(visible);
}

void QMdiSubWindow_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__HeightForWidth = slot;
}

int QMdiSubWindow_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_HeightForWidth(param1);
}

void QMdiSubWindow_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__HasHeightForWidth = slot;
}

bool QMdiSubWindow_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_HasHeightForWidth();
}

void QMdiSubWindow_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QMdiSubWindow_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_PaintEngine();
}

void QMdiSubWindow_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__WheelEvent = slot;
}

void QMdiSubWindow_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_WheelEvent(event);
}

void QMdiSubWindow_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__KeyReleaseEvent = slot;
}

void QMdiSubWindow_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QMdiSubWindow_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__EnterEvent = slot;
}

void QMdiSubWindow_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_EnterEvent(event);
}

void QMdiSubWindow_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__TabletEvent = slot;
}

void QMdiSubWindow_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_TabletEvent(event);
}

void QMdiSubWindow_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__ActionEvent = slot;
}

void QMdiSubWindow_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_ActionEvent(event);
}

void QMdiSubWindow_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__DragEnterEvent = slot;
}

void QMdiSubWindow_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_DragEnterEvent(event);
}

void QMdiSubWindow_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__DragMoveEvent = slot;
}

void QMdiSubWindow_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_DragMoveEvent(event);
}

void QMdiSubWindow_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__DragLeaveEvent = slot;
}

void QMdiSubWindow_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QMdiSubWindow_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__DropEvent = slot;
}

void QMdiSubWindow_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_DropEvent(event);
}

void QMdiSubWindow_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__NativeEvent = slot;
}

bool QMdiSubWindow_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QMdiSubWindow_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__Metric = slot;
}

int QMdiSubWindow_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_Metric(param1);
}

void QMdiSubWindow_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__InitPainter = slot;
}

void QMdiSubWindow_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_InitPainter(painter);
}

void QMdiSubWindow_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QMdiSubWindow_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_Redirected(offset);
}

void QMdiSubWindow_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__SharedPainter = slot;
}

QPainter* QMdiSubWindow_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_SharedPainter();
}

void QMdiSubWindow_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__InputMethodEvent = slot;
}

void QMdiSubWindow_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QMdiSubWindow_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QMdiSubWindow_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QMdiSubWindow_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QMdiSubWindow_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQMdiSubWindow*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QMdiSubWindow_Delete(QMdiSubWindow* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQMdiSubWindow*>( self );
	} else {
		delete self;
	}
}

