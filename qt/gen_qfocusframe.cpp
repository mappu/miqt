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
#include <QFocusFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qfocusframe.h>
#include "gen_qfocusframe.h"
#include "_cgo_export.h"

class MiqtVirtualQFocusFrame : public virtual QFocusFrame {
public:

	MiqtVirtualQFocusFrame(QWidget* parent): QFocusFrame(parent) {};
	MiqtVirtualQFocusFrame(): QFocusFrame() {};

	virtual ~MiqtVirtualQFocusFrame() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QFocusFrame::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QFocusFrame_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QFocusFrame::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QFocusFrame::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QFocusFrame_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QFocusFrame::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QFocusFrame::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QFocusFrame_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QFocusFrame::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QFocusFrame::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QFocusFrame_DevType(const_cast<MiqtVirtualQFocusFrame*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QFocusFrame::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QFocusFrame::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QFocusFrame_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QFocusFrame::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QFocusFrame::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFocusFrame_SizeHint(const_cast<MiqtVirtualQFocusFrame*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QFocusFrame::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QFocusFrame::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFocusFrame_MinimumSizeHint(const_cast<MiqtVirtualQFocusFrame*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QFocusFrame::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QFocusFrame::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QFocusFrame_HeightForWidth(const_cast<MiqtVirtualQFocusFrame*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QFocusFrame::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QFocusFrame::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QFocusFrame_HasHeightForWidth(const_cast<MiqtVirtualQFocusFrame*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QFocusFrame::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QFocusFrame::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QFocusFrame_PaintEngine(const_cast<MiqtVirtualQFocusFrame*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QFocusFrame::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QFocusFrame::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QFocusFrame::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QFocusFrame::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QFocusFrame::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QFocusFrame::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QFocusFrame::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QFocusFrame::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QFocusFrame::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QFocusFrame::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QFocusFrame::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QFocusFrame::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QFocusFrame::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QFocusFrame::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QFocusFrame::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QFocusFrame::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QFocusFrame::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QFocusFrame::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QFocusFrame::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QFocusFrame::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QFocusFrame::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QFocusFrame::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QFocusFrame::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QFocusFrame::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QFocusFrame::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QFocusFrame::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QFocusFrame::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QFocusFrame::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QFocusFrame::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QFocusFrame::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QFocusFrame::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QFocusFrame::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QFocusFrame::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QFocusFrame::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QFocusFrame::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QFocusFrame::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QFocusFrame::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QFocusFrame::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QFocusFrame::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QFocusFrame::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QFocusFrame::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QFocusFrame::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QFocusFrame::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QFocusFrame::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QFocusFrame::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QFocusFrame::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QFocusFrame_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QFocusFrame::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QFocusFrame::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QFocusFrame_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QFocusFrame::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QFocusFrame::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QFocusFrame_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QFocusFrame::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QFocusFrame::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QFocusFrame_Metric(const_cast<MiqtVirtualQFocusFrame*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QFocusFrame::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QFocusFrame::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QFocusFrame_InitPainter(const_cast<MiqtVirtualQFocusFrame*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QFocusFrame::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QFocusFrame::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QFocusFrame_Redirected(const_cast<MiqtVirtualQFocusFrame*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QFocusFrame::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QFocusFrame::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QFocusFrame_SharedPainter(const_cast<MiqtVirtualQFocusFrame*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QFocusFrame::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QFocusFrame::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QFocusFrame_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QFocusFrame::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QFocusFrame::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QFocusFrame_InputMethodQuery(const_cast<MiqtVirtualQFocusFrame*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QFocusFrame::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QFocusFrame::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QFocusFrame_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QFocusFrame::focusNextPrevChild(next);

	}

};

QFocusFrame* QFocusFrame_new(QWidget* parent) {
	return new MiqtVirtualQFocusFrame(parent);
}

QFocusFrame* QFocusFrame_new2() {
	return new MiqtVirtualQFocusFrame();
}

void QFocusFrame_virtbase(QFocusFrame* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QFocusFrame_MetaObject(const QFocusFrame* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFocusFrame_Metacast(QFocusFrame* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFocusFrame_Tr(const char* s) {
	QString _ret = QFocusFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFocusFrame_TrUtf8(const char* s) {
	QString _ret = QFocusFrame::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFocusFrame_SetWidget(QFocusFrame* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QFocusFrame_Widget(const QFocusFrame* self) {
	return self->widget();
}

struct miqt_string QFocusFrame_Tr2(const char* s, const char* c) {
	QString _ret = QFocusFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFocusFrame_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFocusFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFocusFrame_TrUtf82(const char* s, const char* c) {
	QString _ret = QFocusFrame::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFocusFrame_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QFocusFrame::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFocusFrame_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__Event = slot;
}

bool QFocusFrame_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_Event(e);
}

void QFocusFrame_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__EventFilter = slot;
}

bool QFocusFrame_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_EventFilter(param1, param2);
}

void QFocusFrame_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__PaintEvent = slot;
}

void QFocusFrame_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_PaintEvent(param1);
}

void QFocusFrame_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__DevType = slot;
}

int QFocusFrame_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_DevType();
}

void QFocusFrame_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__SetVisible = slot;
}

void QFocusFrame_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_SetVisible(visible);
}

void QFocusFrame_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__SizeHint = slot;
}

QSize* QFocusFrame_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_SizeHint();
}

void QFocusFrame_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QFocusFrame_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_MinimumSizeHint();
}

void QFocusFrame_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__HeightForWidth = slot;
}

int QFocusFrame_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_HeightForWidth(param1);
}

void QFocusFrame_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__HasHeightForWidth = slot;
}

bool QFocusFrame_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_HasHeightForWidth();
}

void QFocusFrame_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QFocusFrame_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_PaintEngine();
}

void QFocusFrame_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__MousePressEvent = slot;
}

void QFocusFrame_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_MousePressEvent(event);
}

void QFocusFrame_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__MouseReleaseEvent = slot;
}

void QFocusFrame_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QFocusFrame_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QFocusFrame_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QFocusFrame_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__MouseMoveEvent = slot;
}

void QFocusFrame_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QFocusFrame_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__WheelEvent = slot;
}

void QFocusFrame_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_WheelEvent(event);
}

void QFocusFrame_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__KeyPressEvent = slot;
}

void QFocusFrame_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_KeyPressEvent(event);
}

void QFocusFrame_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__KeyReleaseEvent = slot;
}

void QFocusFrame_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QFocusFrame_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__FocusInEvent = slot;
}

void QFocusFrame_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_FocusInEvent(event);
}

void QFocusFrame_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__FocusOutEvent = slot;
}

void QFocusFrame_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_FocusOutEvent(event);
}

void QFocusFrame_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__EnterEvent = slot;
}

void QFocusFrame_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_EnterEvent(event);
}

void QFocusFrame_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__LeaveEvent = slot;
}

void QFocusFrame_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_LeaveEvent(event);
}

void QFocusFrame_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__MoveEvent = slot;
}

void QFocusFrame_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_MoveEvent(event);
}

void QFocusFrame_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__ResizeEvent = slot;
}

void QFocusFrame_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_ResizeEvent(event);
}

void QFocusFrame_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__CloseEvent = slot;
}

void QFocusFrame_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_CloseEvent(event);
}

void QFocusFrame_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__ContextMenuEvent = slot;
}

void QFocusFrame_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QFocusFrame_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__TabletEvent = slot;
}

void QFocusFrame_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_TabletEvent(event);
}

void QFocusFrame_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__ActionEvent = slot;
}

void QFocusFrame_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_ActionEvent(event);
}

void QFocusFrame_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__DragEnterEvent = slot;
}

void QFocusFrame_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_DragEnterEvent(event);
}

void QFocusFrame_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__DragMoveEvent = slot;
}

void QFocusFrame_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_DragMoveEvent(event);
}

void QFocusFrame_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__DragLeaveEvent = slot;
}

void QFocusFrame_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QFocusFrame_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__DropEvent = slot;
}

void QFocusFrame_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_DropEvent(event);
}

void QFocusFrame_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__ShowEvent = slot;
}

void QFocusFrame_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_ShowEvent(event);
}

void QFocusFrame_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__HideEvent = slot;
}

void QFocusFrame_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_HideEvent(event);
}

void QFocusFrame_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__NativeEvent = slot;
}

bool QFocusFrame_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QFocusFrame_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__ChangeEvent = slot;
}

void QFocusFrame_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_ChangeEvent(param1);
}

void QFocusFrame_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__Metric = slot;
}

int QFocusFrame_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_Metric(param1);
}

void QFocusFrame_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__InitPainter = slot;
}

void QFocusFrame_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_InitPainter(painter);
}

void QFocusFrame_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QFocusFrame_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_Redirected(offset);
}

void QFocusFrame_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__SharedPainter = slot;
}

QPainter* QFocusFrame_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_SharedPainter();
}

void QFocusFrame_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__InputMethodEvent = slot;
}

void QFocusFrame_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QFocusFrame_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QFocusFrame_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQFocusFrame*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QFocusFrame_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QFocusFrame_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQFocusFrame*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QFocusFrame_Delete(QFocusFrame* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQFocusFrame*>( self );
	} else {
		delete self;
	}
}

