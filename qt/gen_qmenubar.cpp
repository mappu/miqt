#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMenu>
#include <QMenuBar>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
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
#include <qmenubar.h>
#include "gen_qmenubar.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQMenuBar : public virtual QMenuBar {
public:

	MiqtVirtualQMenuBar(QWidget* parent): QMenuBar(parent) {};
	MiqtVirtualQMenuBar(): QMenuBar() {};

	virtual ~MiqtVirtualQMenuBar() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QMenuBar::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMenuBar_SizeHint(const_cast<MiqtVirtualQMenuBar*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QMenuBar::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QMenuBar::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMenuBar_MinimumSizeHint(const_cast<MiqtVirtualQMenuBar*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QMenuBar::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QMenuBar::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QMenuBar_HeightForWidth(const_cast<MiqtVirtualQMenuBar*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QMenuBar::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QMenuBar::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QMenuBar_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QMenuBar::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QMenuBar::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QMenuBar::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QMenuBar::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QMenuBar::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QMenuBar::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QMenuBar::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QMenuBar::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QMenuBar::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QMenuBar::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QMenuBar::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* param1) override {
		if (handle__LeaveEvent == 0) {
			QMenuBar::leaveEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* param1) {

		QMenuBar::leaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QMenuBar::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QMenuBar::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QMenuBar::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QMenuBar::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* param1) override {
		if (handle__ActionEvent == 0) {
			QMenuBar::actionEvent(param1);
			return;
		}
		
		QActionEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* param1) {

		QMenuBar::actionEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__FocusOutEvent == 0) {
			QMenuBar::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* param1) {

		QMenuBar::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__FocusInEvent == 0) {
			QMenuBar::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* param1) {

		QMenuBar::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__TimerEvent == 0) {
			QMenuBar::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* param1) {

		QMenuBar::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QMenuBar::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QMenuBar_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QMenuBar::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QMenuBar::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QMenuBar_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QMenuBar::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QMenuBar::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QMenuBar_DevType(const_cast<MiqtVirtualQMenuBar*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QMenuBar::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QMenuBar::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QMenuBar_HasHeightForWidth(const_cast<MiqtVirtualQMenuBar*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QMenuBar::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QMenuBar::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QMenuBar_PaintEngine(const_cast<MiqtVirtualQMenuBar*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QMenuBar::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QMenuBar::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QMenuBar::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QMenuBar::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QMenuBar::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QMenuBar::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QMenuBar::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QMenuBar::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QMenuBar::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QMenuBar::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QMenuBar::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QMenuBar::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QMenuBar::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QMenuBar::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QMenuBar::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QMenuBar::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QMenuBar::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QMenuBar::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QMenuBar::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QMenuBar::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QMenuBar::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QMenuBar::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QMenuBar::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QMenuBar::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QMenuBar::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QMenuBar::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QMenuBar::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QMenuBar::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QMenuBar::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QMenuBar::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QMenuBar_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QMenuBar::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QMenuBar::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QMenuBar_Metric(const_cast<MiqtVirtualQMenuBar*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QMenuBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QMenuBar::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QMenuBar_InitPainter(const_cast<MiqtVirtualQMenuBar*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QMenuBar::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QMenuBar::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QMenuBar_Redirected(const_cast<MiqtVirtualQMenuBar*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QMenuBar::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QMenuBar::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QMenuBar_SharedPainter(const_cast<MiqtVirtualQMenuBar*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QMenuBar::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QMenuBar::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QMenuBar::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QMenuBar::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QMenuBar_InputMethodQuery(const_cast<MiqtVirtualQMenuBar*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QMenuBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QMenuBar::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QMenuBar_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QMenuBar::focusNextPrevChild(next);

	}

};

QMenuBar* QMenuBar_new(QWidget* parent) {
	return new MiqtVirtualQMenuBar(parent);
}

QMenuBar* QMenuBar_new2() {
	return new MiqtVirtualQMenuBar();
}

void QMenuBar_virtbase(QMenuBar* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QMenuBar_MetaObject(const QMenuBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMenuBar_Metacast(QMenuBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMenuBar_Tr(const char* s) {
	QString _ret = QMenuBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenuBar_TrUtf8(const char* s) {
	QString _ret = QMenuBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QMenuBar_AddAction(QMenuBar* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(text_QString);
}

QAction* QMenuBar_AddMenu(QMenuBar* self, QMenu* menu) {
	return self->addMenu(menu);
}

QMenu* QMenuBar_AddMenuWithTitle(QMenuBar* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return self->addMenu(title_QString);
}

QMenu* QMenuBar_AddMenu2(QMenuBar* self, QIcon* icon, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return self->addMenu(*icon, title_QString);
}

QAction* QMenuBar_AddSeparator(QMenuBar* self) {
	return self->addSeparator();
}

QAction* QMenuBar_InsertSeparator(QMenuBar* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QMenuBar_InsertMenu(QMenuBar* self, QAction* before, QMenu* menu) {
	return self->insertMenu(before, menu);
}

void QMenuBar_Clear(QMenuBar* self) {
	self->clear();
}

QAction* QMenuBar_ActiveAction(const QMenuBar* self) {
	return self->activeAction();
}

void QMenuBar_SetActiveAction(QMenuBar* self, QAction* action) {
	self->setActiveAction(action);
}

void QMenuBar_SetDefaultUp(QMenuBar* self, bool defaultUp) {
	self->setDefaultUp(defaultUp);
}

bool QMenuBar_IsDefaultUp(const QMenuBar* self) {
	return self->isDefaultUp();
}

QSize* QMenuBar_SizeHint(const QMenuBar* self) {
	return new QSize(self->sizeHint());
}

QSize* QMenuBar_MinimumSizeHint(const QMenuBar* self) {
	return new QSize(self->minimumSizeHint());
}

int QMenuBar_HeightForWidth(const QMenuBar* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

QRect* QMenuBar_ActionGeometry(const QMenuBar* self, QAction* param1) {
	return new QRect(self->actionGeometry(param1));
}

QAction* QMenuBar_ActionAt(const QMenuBar* self, QPoint* param1) {
	return self->actionAt(*param1);
}

void QMenuBar_SetCornerWidget(QMenuBar* self, QWidget* w) {
	self->setCornerWidget(w);
}

QWidget* QMenuBar_CornerWidget(const QMenuBar* self) {
	return self->cornerWidget();
}

bool QMenuBar_IsNativeMenuBar(const QMenuBar* self) {
	return self->isNativeMenuBar();
}

void QMenuBar_SetNativeMenuBar(QMenuBar* self, bool nativeMenuBar) {
	self->setNativeMenuBar(nativeMenuBar);
}

void QMenuBar_SetVisible(QMenuBar* self, bool visible) {
	self->setVisible(visible);
}

void QMenuBar_Triggered(QMenuBar* self, QAction* action) {
	self->triggered(action);
}

void QMenuBar_connect_Triggered(QMenuBar* self, intptr_t slot) {
	MiqtVirtualQMenuBar::connect(self, static_cast<void (QMenuBar::*)(QAction*)>(&QMenuBar::triggered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QMenuBar_Triggered(slot, sigval1);
	});
}

void QMenuBar_Hovered(QMenuBar* self, QAction* action) {
	self->hovered(action);
}

void QMenuBar_connect_Hovered(QMenuBar* self, intptr_t slot) {
	MiqtVirtualQMenuBar::connect(self, static_cast<void (QMenuBar::*)(QAction*)>(&QMenuBar::hovered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QMenuBar_Hovered(slot, sigval1);
	});
}

struct miqt_string QMenuBar_Tr2(const char* s, const char* c) {
	QString _ret = QMenuBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenuBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMenuBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenuBar_TrUtf82(const char* s, const char* c) {
	QString _ret = QMenuBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenuBar_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMenuBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMenuBar_SetCornerWidget2(QMenuBar* self, QWidget* w, int corner) {
	self->setCornerWidget(w, static_cast<Qt::Corner>(corner));
}

QWidget* QMenuBar_CornerWidget1(const QMenuBar* self, int corner) {
	return self->cornerWidget(static_cast<Qt::Corner>(corner));
}

void QMenuBar_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__SizeHint = slot;
}

QSize* QMenuBar_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_SizeHint();
}

void QMenuBar_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QMenuBar_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_MinimumSizeHint();
}

void QMenuBar_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__HeightForWidth = slot;
}

int QMenuBar_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_HeightForWidth(param1);
}

void QMenuBar_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__SetVisible = slot;
}

void QMenuBar_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_SetVisible(visible);
}

void QMenuBar_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__ChangeEvent = slot;
}

void QMenuBar_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_ChangeEvent(param1);
}

void QMenuBar_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__KeyPressEvent = slot;
}

void QMenuBar_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_KeyPressEvent(param1);
}

void QMenuBar_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__MouseReleaseEvent = slot;
}

void QMenuBar_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

void QMenuBar_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__MousePressEvent = slot;
}

void QMenuBar_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_MousePressEvent(param1);
}

void QMenuBar_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__MouseMoveEvent = slot;
}

void QMenuBar_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_MouseMoveEvent(param1);
}

void QMenuBar_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__LeaveEvent = slot;
}

void QMenuBar_virtualbase_LeaveEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_LeaveEvent(param1);
}

void QMenuBar_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__PaintEvent = slot;
}

void QMenuBar_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_PaintEvent(param1);
}

void QMenuBar_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__ResizeEvent = slot;
}

void QMenuBar_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_ResizeEvent(param1);
}

void QMenuBar_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__ActionEvent = slot;
}

void QMenuBar_virtualbase_ActionEvent(void* self, QActionEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_ActionEvent(param1);
}

void QMenuBar_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__FocusOutEvent = slot;
}

void QMenuBar_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_FocusOutEvent(param1);
}

void QMenuBar_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__FocusInEvent = slot;
}

void QMenuBar_virtualbase_FocusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_FocusInEvent(param1);
}

void QMenuBar_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__TimerEvent = slot;
}

void QMenuBar_virtualbase_TimerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_TimerEvent(param1);
}

void QMenuBar_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__EventFilter = slot;
}

bool QMenuBar_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQMenuBar*)(self) )->virtualbase_EventFilter(param1, param2);
}

void QMenuBar_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__Event = slot;
}

bool QMenuBar_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQMenuBar*)(self) )->virtualbase_Event(param1);
}

void QMenuBar_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__DevType = slot;
}

int QMenuBar_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_DevType();
}

void QMenuBar_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__HasHeightForWidth = slot;
}

bool QMenuBar_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_HasHeightForWidth();
}

void QMenuBar_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QMenuBar_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_PaintEngine();
}

void QMenuBar_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QMenuBar_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QMenuBar_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__WheelEvent = slot;
}

void QMenuBar_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_WheelEvent(event);
}

void QMenuBar_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__KeyReleaseEvent = slot;
}

void QMenuBar_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QMenuBar_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__EnterEvent = slot;
}

void QMenuBar_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_EnterEvent(event);
}

void QMenuBar_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__MoveEvent = slot;
}

void QMenuBar_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_MoveEvent(event);
}

void QMenuBar_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__CloseEvent = slot;
}

void QMenuBar_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_CloseEvent(event);
}

void QMenuBar_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__ContextMenuEvent = slot;
}

void QMenuBar_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QMenuBar_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__TabletEvent = slot;
}

void QMenuBar_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_TabletEvent(event);
}

void QMenuBar_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__DragEnterEvent = slot;
}

void QMenuBar_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_DragEnterEvent(event);
}

void QMenuBar_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__DragMoveEvent = slot;
}

void QMenuBar_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_DragMoveEvent(event);
}

void QMenuBar_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__DragLeaveEvent = slot;
}

void QMenuBar_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QMenuBar_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__DropEvent = slot;
}

void QMenuBar_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_DropEvent(event);
}

void QMenuBar_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__ShowEvent = slot;
}

void QMenuBar_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_ShowEvent(event);
}

void QMenuBar_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__HideEvent = slot;
}

void QMenuBar_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_HideEvent(event);
}

void QMenuBar_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__NativeEvent = slot;
}

bool QMenuBar_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQMenuBar*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QMenuBar_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__Metric = slot;
}

int QMenuBar_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_Metric(param1);
}

void QMenuBar_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__InitPainter = slot;
}

void QMenuBar_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_InitPainter(painter);
}

void QMenuBar_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QMenuBar_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_Redirected(offset);
}

void QMenuBar_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__SharedPainter = slot;
}

QPainter* QMenuBar_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_SharedPainter();
}

void QMenuBar_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__InputMethodEvent = slot;
}

void QMenuBar_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QMenuBar_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QMenuBar_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QMenuBar_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QMenuBar_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQMenuBar*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QMenuBar_Delete(QMenuBar* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQMenuBar*>( self );
	} else {
		delete self;
	}
}

