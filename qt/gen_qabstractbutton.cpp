#include <QAbstractButton>
#include <QActionEvent>
#include <QButtonGroup>
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
#include <QKeySequence>
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
#include <qabstractbutton.h>
#include "gen_qabstractbutton.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQAbstractButton : public virtual QAbstractButton {
public:

	MiqtVirtualQAbstractButton(QWidget* parent): QAbstractButton(parent) {};
	MiqtVirtualQAbstractButton(): QAbstractButton() {};

	virtual ~MiqtVirtualQAbstractButton() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (handle__PaintEvent == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QPaintEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (handle__HitButton == 0) {
			return QAbstractButton::hitButton(pos);
		}
		
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractButton_HitButton(const_cast<MiqtVirtualQAbstractButton*>(this), handle__HitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HitButton(QPoint* pos) const {

		return QAbstractButton::hitButton(*pos);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CheckStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__CheckStateSet == 0) {
			QAbstractButton::checkStateSet();
			return;
		}
		

		miqt_exec_callback_QAbstractButton_CheckStateSet(this, handle__CheckStateSet);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CheckStateSet() {

		QAbstractButton::checkStateSet();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__NextCheckState == 0) {
			QAbstractButton::nextCheckState();
			return;
		}
		

		miqt_exec_callback_QAbstractButton_NextCheckState(this, handle__NextCheckState);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_NextCheckState() {

		QAbstractButton::nextCheckState();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QAbstractButton::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QAbstractButton_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QAbstractButton::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__KeyPressEvent == 0) {
			QAbstractButton::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* e) {

		QAbstractButton::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__KeyReleaseEvent == 0) {
			QAbstractButton::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* e) {

		QAbstractButton::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QAbstractButton::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QAbstractButton::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QAbstractButton::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QAbstractButton::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__MouseMoveEvent == 0) {
			QAbstractButton::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* e) {

		QAbstractButton::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__FocusInEvent == 0) {
			QAbstractButton::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* e) {

		QAbstractButton::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__FocusOutEvent == 0) {
			QAbstractButton::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* e) {

		QAbstractButton::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QAbstractButton::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QAbstractButton::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__TimerEvent == 0) {
			QAbstractButton::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QAbstractButton_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* e) {

		QAbstractButton::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QAbstractButton::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractButton_DevType(const_cast<MiqtVirtualQAbstractButton*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QAbstractButton::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QAbstractButton::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QAbstractButton_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QAbstractButton::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QAbstractButton::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractButton_SizeHint(const_cast<MiqtVirtualQAbstractButton*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QAbstractButton::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QAbstractButton::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractButton_MinimumSizeHint(const_cast<MiqtVirtualQAbstractButton*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QAbstractButton::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QAbstractButton::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QAbstractButton_HeightForWidth(const_cast<MiqtVirtualQAbstractButton*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QAbstractButton::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QAbstractButton::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractButton_HasHeightForWidth(const_cast<MiqtVirtualQAbstractButton*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QAbstractButton::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QAbstractButton::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QAbstractButton_PaintEngine(const_cast<MiqtVirtualQAbstractButton*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QAbstractButton::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QAbstractButton::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QAbstractButton::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QAbstractButton::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QAbstractButton::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QAbstractButton::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QAbstractButton::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QAbstractButton::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QAbstractButton::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QAbstractButton::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QAbstractButton::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QAbstractButton::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QAbstractButton::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QAbstractButton::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QAbstractButton::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QAbstractButton::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QAbstractButton::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QAbstractButton::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QAbstractButton::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QAbstractButton::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QAbstractButton::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QAbstractButton::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QAbstractButton::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QAbstractButton::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QAbstractButton::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QAbstractButton::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QAbstractButton::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QAbstractButton::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QAbstractButton::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QAbstractButton::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QAbstractButton::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QAbstractButton::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QAbstractButton_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QAbstractButton::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QAbstractButton::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QAbstractButton_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QAbstractButton::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QAbstractButton::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QAbstractButton_Metric(const_cast<MiqtVirtualQAbstractButton*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QAbstractButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QAbstractButton::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QAbstractButton_InitPainter(const_cast<MiqtVirtualQAbstractButton*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QAbstractButton::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QAbstractButton::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QAbstractButton_Redirected(const_cast<MiqtVirtualQAbstractButton*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QAbstractButton::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QAbstractButton::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QAbstractButton_SharedPainter(const_cast<MiqtVirtualQAbstractButton*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QAbstractButton::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QAbstractButton::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractButton_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QAbstractButton::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QAbstractButton::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractButton_InputMethodQuery(const_cast<MiqtVirtualQAbstractButton*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QAbstractButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QAbstractButton::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QAbstractButton_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QAbstractButton::focusNextPrevChild(next);

	}

};

QAbstractButton* QAbstractButton_new(QWidget* parent) {
	return new MiqtVirtualQAbstractButton(parent);
}

QAbstractButton* QAbstractButton_new2() {
	return new MiqtVirtualQAbstractButton();
}

void QAbstractButton_virtbase(QAbstractButton* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QAbstractButton_MetaObject(const QAbstractButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractButton_Metacast(QAbstractButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractButton_Tr(const char* s) {
	QString _ret = QAbstractButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractButton_TrUtf8(const char* s) {
	QString _ret = QAbstractButton::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractButton_SetText(QAbstractButton* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

struct miqt_string QAbstractButton_Text(const QAbstractButton* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractButton_SetIcon(QAbstractButton* self, QIcon* icon) {
	self->setIcon(*icon);
}

QIcon* QAbstractButton_Icon(const QAbstractButton* self) {
	return new QIcon(self->icon());
}

QSize* QAbstractButton_IconSize(const QAbstractButton* self) {
	return new QSize(self->iconSize());
}

void QAbstractButton_SetShortcut(QAbstractButton* self, QKeySequence* key) {
	self->setShortcut(*key);
}

QKeySequence* QAbstractButton_Shortcut(const QAbstractButton* self) {
	return new QKeySequence(self->shortcut());
}

void QAbstractButton_SetCheckable(QAbstractButton* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QAbstractButton_IsCheckable(const QAbstractButton* self) {
	return self->isCheckable();
}

bool QAbstractButton_IsChecked(const QAbstractButton* self) {
	return self->isChecked();
}

void QAbstractButton_SetDown(QAbstractButton* self, bool down) {
	self->setDown(down);
}

bool QAbstractButton_IsDown(const QAbstractButton* self) {
	return self->isDown();
}

void QAbstractButton_SetAutoRepeat(QAbstractButton* self, bool autoRepeat) {
	self->setAutoRepeat(autoRepeat);
}

bool QAbstractButton_AutoRepeat(const QAbstractButton* self) {
	return self->autoRepeat();
}

void QAbstractButton_SetAutoRepeatDelay(QAbstractButton* self, int autoRepeatDelay) {
	self->setAutoRepeatDelay(static_cast<int>(autoRepeatDelay));
}

int QAbstractButton_AutoRepeatDelay(const QAbstractButton* self) {
	return self->autoRepeatDelay();
}

void QAbstractButton_SetAutoRepeatInterval(QAbstractButton* self, int autoRepeatInterval) {
	self->setAutoRepeatInterval(static_cast<int>(autoRepeatInterval));
}

int QAbstractButton_AutoRepeatInterval(const QAbstractButton* self) {
	return self->autoRepeatInterval();
}

void QAbstractButton_SetAutoExclusive(QAbstractButton* self, bool autoExclusive) {
	self->setAutoExclusive(autoExclusive);
}

bool QAbstractButton_AutoExclusive(const QAbstractButton* self) {
	return self->autoExclusive();
}

QButtonGroup* QAbstractButton_Group(const QAbstractButton* self) {
	return self->group();
}

void QAbstractButton_SetIconSize(QAbstractButton* self, QSize* size) {
	self->setIconSize(*size);
}

void QAbstractButton_AnimateClick(QAbstractButton* self) {
	self->animateClick();
}

void QAbstractButton_Click(QAbstractButton* self) {
	self->click();
}

void QAbstractButton_Toggle(QAbstractButton* self) {
	self->toggle();
}

void QAbstractButton_SetChecked(QAbstractButton* self, bool checked) {
	self->setChecked(checked);
}

void QAbstractButton_Pressed(QAbstractButton* self) {
	self->pressed();
}

void QAbstractButton_connect_Pressed(QAbstractButton* self, intptr_t slot) {
	MiqtVirtualQAbstractButton::connect(self, static_cast<void (QAbstractButton::*)()>(&QAbstractButton::pressed), self, [=]() {
		miqt_exec_callback_QAbstractButton_Pressed(slot);
	});
}

void QAbstractButton_Released(QAbstractButton* self) {
	self->released();
}

void QAbstractButton_connect_Released(QAbstractButton* self, intptr_t slot) {
	MiqtVirtualQAbstractButton::connect(self, static_cast<void (QAbstractButton::*)()>(&QAbstractButton::released), self, [=]() {
		miqt_exec_callback_QAbstractButton_Released(slot);
	});
}

void QAbstractButton_Clicked(QAbstractButton* self) {
	self->clicked();
}

void QAbstractButton_connect_Clicked(QAbstractButton* self, intptr_t slot) {
	MiqtVirtualQAbstractButton::connect(self, static_cast<void (QAbstractButton::*)(bool)>(&QAbstractButton::clicked), self, [=]() {
		miqt_exec_callback_QAbstractButton_Clicked(slot);
	});
}

void QAbstractButton_Toggled(QAbstractButton* self, bool checked) {
	self->toggled(checked);
}

void QAbstractButton_connect_Toggled(QAbstractButton* self, intptr_t slot) {
	MiqtVirtualQAbstractButton::connect(self, static_cast<void (QAbstractButton::*)(bool)>(&QAbstractButton::toggled), self, [=](bool checked) {
		bool sigval1 = checked;
		miqt_exec_callback_QAbstractButton_Toggled(slot, sigval1);
	});
}

struct miqt_string QAbstractButton_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractButton_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractButton::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractButton_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractButton::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractButton_AnimateClick1(QAbstractButton* self, int msec) {
	self->animateClick(static_cast<int>(msec));
}

void QAbstractButton_Clicked1(QAbstractButton* self, bool checked) {
	self->clicked(checked);
}

void QAbstractButton_connect_Clicked1(QAbstractButton* self, intptr_t slot) {
	MiqtVirtualQAbstractButton::connect(self, static_cast<void (QAbstractButton::*)(bool)>(&QAbstractButton::clicked), self, [=](bool checked) {
		bool sigval1 = checked;
		miqt_exec_callback_QAbstractButton_Clicked1(slot, sigval1);
	});
}

void QAbstractButton_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__PaintEvent = slot;
}

void QAbstractButton_override_virtual_HitButton(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__HitButton = slot;
}

bool QAbstractButton_virtualbase_HitButton(const void* self, QPoint* pos) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_HitButton(pos);
}

void QAbstractButton_override_virtual_CheckStateSet(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__CheckStateSet = slot;
}

void QAbstractButton_virtualbase_CheckStateSet(void* self) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_CheckStateSet();
}

void QAbstractButton_override_virtual_NextCheckState(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__NextCheckState = slot;
}

void QAbstractButton_virtualbase_NextCheckState(void* self) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_NextCheckState();
}

void QAbstractButton_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__Event = slot;
}

bool QAbstractButton_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_Event(e);
}

void QAbstractButton_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__KeyPressEvent = slot;
}

void QAbstractButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_KeyPressEvent(e);
}

void QAbstractButton_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__KeyReleaseEvent = slot;
}

void QAbstractButton_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_KeyReleaseEvent(e);
}

void QAbstractButton_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__MousePressEvent = slot;
}

void QAbstractButton_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_MousePressEvent(e);
}

void QAbstractButton_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__MouseReleaseEvent = slot;
}

void QAbstractButton_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_MouseReleaseEvent(e);
}

void QAbstractButton_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__MouseMoveEvent = slot;
}

void QAbstractButton_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_MouseMoveEvent(e);
}

void QAbstractButton_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__FocusInEvent = slot;
}

void QAbstractButton_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_FocusInEvent(e);
}

void QAbstractButton_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__FocusOutEvent = slot;
}

void QAbstractButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_FocusOutEvent(e);
}

void QAbstractButton_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__ChangeEvent = slot;
}

void QAbstractButton_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_ChangeEvent(e);
}

void QAbstractButton_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__TimerEvent = slot;
}

void QAbstractButton_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_TimerEvent(e);
}

void QAbstractButton_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__DevType = slot;
}

int QAbstractButton_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_DevType();
}

void QAbstractButton_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__SetVisible = slot;
}

void QAbstractButton_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_SetVisible(visible);
}

void QAbstractButton_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__SizeHint = slot;
}

QSize* QAbstractButton_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_SizeHint();
}

void QAbstractButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QAbstractButton_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_MinimumSizeHint();
}

void QAbstractButton_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__HeightForWidth = slot;
}

int QAbstractButton_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_HeightForWidth(param1);
}

void QAbstractButton_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__HasHeightForWidth = slot;
}

bool QAbstractButton_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_HasHeightForWidth();
}

void QAbstractButton_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QAbstractButton_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_PaintEngine();
}

void QAbstractButton_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QAbstractButton_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QAbstractButton_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__WheelEvent = slot;
}

void QAbstractButton_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_WheelEvent(event);
}

void QAbstractButton_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__EnterEvent = slot;
}

void QAbstractButton_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_EnterEvent(event);
}

void QAbstractButton_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__LeaveEvent = slot;
}

void QAbstractButton_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_LeaveEvent(event);
}

void QAbstractButton_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__MoveEvent = slot;
}

void QAbstractButton_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_MoveEvent(event);
}

void QAbstractButton_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__ResizeEvent = slot;
}

void QAbstractButton_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_ResizeEvent(event);
}

void QAbstractButton_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__CloseEvent = slot;
}

void QAbstractButton_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_CloseEvent(event);
}

void QAbstractButton_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__ContextMenuEvent = slot;
}

void QAbstractButton_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QAbstractButton_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__TabletEvent = slot;
}

void QAbstractButton_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_TabletEvent(event);
}

void QAbstractButton_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__ActionEvent = slot;
}

void QAbstractButton_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_ActionEvent(event);
}

void QAbstractButton_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__DragEnterEvent = slot;
}

void QAbstractButton_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_DragEnterEvent(event);
}

void QAbstractButton_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__DragMoveEvent = slot;
}

void QAbstractButton_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_DragMoveEvent(event);
}

void QAbstractButton_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__DragLeaveEvent = slot;
}

void QAbstractButton_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QAbstractButton_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__DropEvent = slot;
}

void QAbstractButton_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_DropEvent(event);
}

void QAbstractButton_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__ShowEvent = slot;
}

void QAbstractButton_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_ShowEvent(event);
}

void QAbstractButton_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__HideEvent = slot;
}

void QAbstractButton_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_HideEvent(event);
}

void QAbstractButton_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__NativeEvent = slot;
}

bool QAbstractButton_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QAbstractButton_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__Metric = slot;
}

int QAbstractButton_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_Metric(param1);
}

void QAbstractButton_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__InitPainter = slot;
}

void QAbstractButton_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_InitPainter(painter);
}

void QAbstractButton_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QAbstractButton_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_Redirected(offset);
}

void QAbstractButton_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__SharedPainter = slot;
}

QPainter* QAbstractButton_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_SharedPainter();
}

void QAbstractButton_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__InputMethodEvent = slot;
}

void QAbstractButton_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QAbstractButton_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QAbstractButton_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractButton*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QAbstractButton_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAbstractButton*>( (QAbstractButton*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QAbstractButton_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQAbstractButton*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QAbstractButton_Delete(QAbstractButton* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAbstractButton*>( self );
	} else {
		delete self;
	}
}

