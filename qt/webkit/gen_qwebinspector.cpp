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
#include <QWebInspector>
#include <QWebPage>
#include <QWheelEvent>
#include <QWidget>
#include <qwebinspector.h>
#include "gen_qwebinspector.h"
#include "_cgo_export.h"

class MiqtVirtualQWebInspector : public virtual QWebInspector {
public:

	MiqtVirtualQWebInspector(QWidget* parent): QWebInspector(parent) {};
	MiqtVirtualQWebInspector(): QWebInspector() {};

	virtual ~MiqtVirtualQWebInspector() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QWebInspector::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWebInspector_SizeHint(const_cast<MiqtVirtualQWebInspector*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QWebInspector::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QWebInspector::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QWebInspector_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QWebInspector::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QWebInspector::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QWebInspector::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QWebInspector::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QWebInspector::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QWebInspector::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QWebInspector::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QWebInspector::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QWebInspector::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QWebInspector::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QWebInspector_DevType(const_cast<MiqtVirtualQWebInspector*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QWebInspector::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QWebInspector::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QWebInspector_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QWebInspector::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QWebInspector::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWebInspector_MinimumSizeHint(const_cast<MiqtVirtualQWebInspector*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QWebInspector::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QWebInspector::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QWebInspector_HeightForWidth(const_cast<MiqtVirtualQWebInspector*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QWebInspector::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QWebInspector::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QWebInspector_HasHeightForWidth(const_cast<MiqtVirtualQWebInspector*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QWebInspector::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QWebInspector::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QWebInspector_PaintEngine(const_cast<MiqtVirtualQWebInspector*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QWebInspector::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QWebInspector::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QWebInspector::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QWebInspector::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QWebInspector::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QWebInspector::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QWebInspector::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QWebInspector::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QWebInspector::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QWebInspector::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QWebInspector::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QWebInspector::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QWebInspector::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QWebInspector::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QWebInspector::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QWebInspector::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QWebInspector::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QWebInspector::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QWebInspector::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QWebInspector::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QWebInspector::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QWebInspector::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QWebInspector::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QWebInspector::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QWebInspector::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QWebInspector::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QWebInspector::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QWebInspector::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QWebInspector::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QWebInspector::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QWebInspector::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QWebInspector::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QWebInspector::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QWebInspector::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QWebInspector::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QWebInspector::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QWebInspector::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QWebInspector::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QWebInspector::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QWebInspector::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QWebInspector::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QWebInspector::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QWebInspector_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QWebInspector::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QWebInspector::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QWebInspector_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QWebInspector::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QWebInspector::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QWebInspector_Metric(const_cast<MiqtVirtualQWebInspector*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QWebInspector::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QWebInspector::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QWebInspector_InitPainter(const_cast<MiqtVirtualQWebInspector*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QWebInspector::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QWebInspector::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QWebInspector_Redirected(const_cast<MiqtVirtualQWebInspector*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QWebInspector::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QWebInspector::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QWebInspector_SharedPainter(const_cast<MiqtVirtualQWebInspector*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QWebInspector::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QWebInspector::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QWebInspector_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QWebInspector::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QWebInspector::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QWebInspector_InputMethodQuery(const_cast<MiqtVirtualQWebInspector*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QWebInspector::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QWebInspector::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QWebInspector_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QWebInspector::focusNextPrevChild(next);

	}

};

void QWebInspector_new(QWidget* parent, QWebInspector** outptr_QWebInspector, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQWebInspector* ret = new MiqtVirtualQWebInspector(parent);
	*outptr_QWebInspector = ret;
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QWebInspector_new2(QWebInspector** outptr_QWebInspector, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQWebInspector* ret = new MiqtVirtualQWebInspector();
	*outptr_QWebInspector = ret;
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

QMetaObject* QWebInspector_MetaObject(const QWebInspector* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebInspector_Metacast(QWebInspector* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebInspector_Tr(const char* s) {
	QString _ret = QWebInspector::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebInspector_TrUtf8(const char* s) {
	QString _ret = QWebInspector::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebInspector_SetPage(QWebInspector* self, QWebPage* page) {
	self->setPage(page);
}

QWebPage* QWebInspector_Page(const QWebInspector* self) {
	return self->page();
}

QSize* QWebInspector_SizeHint(const QWebInspector* self) {
	return new QSize(self->sizeHint());
}

bool QWebInspector_Event(QWebInspector* self, QEvent* param1) {
	return self->event(param1);
}

struct miqt_string QWebInspector_Tr2(const char* s, const char* c) {
	QString _ret = QWebInspector::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebInspector_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebInspector::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebInspector_TrUtf82(const char* s, const char* c) {
	QString _ret = QWebInspector::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebInspector_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebInspector::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebInspector_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__SizeHint = slot;
}

QSize* QWebInspector_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_SizeHint();
}

void QWebInspector_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__Event = slot;
}

bool QWebInspector_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQWebInspector*)(self) )->virtualbase_Event(param1);
}

void QWebInspector_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__ResizeEvent = slot;
}

void QWebInspector_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_ResizeEvent(event);
}

void QWebInspector_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__ShowEvent = slot;
}

void QWebInspector_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_ShowEvent(event);
}

void QWebInspector_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__HideEvent = slot;
}

void QWebInspector_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_HideEvent(event);
}

void QWebInspector_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__CloseEvent = slot;
}

void QWebInspector_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_CloseEvent(event);
}

void QWebInspector_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__DevType = slot;
}

int QWebInspector_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_DevType();
}

void QWebInspector_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__SetVisible = slot;
}

void QWebInspector_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_SetVisible(visible);
}

void QWebInspector_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QWebInspector_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_MinimumSizeHint();
}

void QWebInspector_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__HeightForWidth = slot;
}

int QWebInspector_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_HeightForWidth(param1);
}

void QWebInspector_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__HasHeightForWidth = slot;
}

bool QWebInspector_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_HasHeightForWidth();
}

void QWebInspector_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QWebInspector_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_PaintEngine();
}

void QWebInspector_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__MousePressEvent = slot;
}

void QWebInspector_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_MousePressEvent(event);
}

void QWebInspector_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__MouseReleaseEvent = slot;
}

void QWebInspector_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QWebInspector_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QWebInspector_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QWebInspector_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__MouseMoveEvent = slot;
}

void QWebInspector_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QWebInspector_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__WheelEvent = slot;
}

void QWebInspector_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_WheelEvent(event);
}

void QWebInspector_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__KeyPressEvent = slot;
}

void QWebInspector_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_KeyPressEvent(event);
}

void QWebInspector_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__KeyReleaseEvent = slot;
}

void QWebInspector_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QWebInspector_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__FocusInEvent = slot;
}

void QWebInspector_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_FocusInEvent(event);
}

void QWebInspector_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__FocusOutEvent = slot;
}

void QWebInspector_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_FocusOutEvent(event);
}

void QWebInspector_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__EnterEvent = slot;
}

void QWebInspector_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_EnterEvent(event);
}

void QWebInspector_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__LeaveEvent = slot;
}

void QWebInspector_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_LeaveEvent(event);
}

void QWebInspector_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__PaintEvent = slot;
}

void QWebInspector_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_PaintEvent(event);
}

void QWebInspector_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__MoveEvent = slot;
}

void QWebInspector_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_MoveEvent(event);
}

void QWebInspector_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__ContextMenuEvent = slot;
}

void QWebInspector_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QWebInspector_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__TabletEvent = slot;
}

void QWebInspector_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_TabletEvent(event);
}

void QWebInspector_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__ActionEvent = slot;
}

void QWebInspector_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_ActionEvent(event);
}

void QWebInspector_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__DragEnterEvent = slot;
}

void QWebInspector_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_DragEnterEvent(event);
}

void QWebInspector_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__DragMoveEvent = slot;
}

void QWebInspector_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_DragMoveEvent(event);
}

void QWebInspector_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__DragLeaveEvent = slot;
}

void QWebInspector_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QWebInspector_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__DropEvent = slot;
}

void QWebInspector_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_DropEvent(event);
}

void QWebInspector_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__NativeEvent = slot;
}

bool QWebInspector_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQWebInspector*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QWebInspector_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__ChangeEvent = slot;
}

void QWebInspector_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_ChangeEvent(param1);
}

void QWebInspector_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__Metric = slot;
}

int QWebInspector_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_Metric(param1);
}

void QWebInspector_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__InitPainter = slot;
}

void QWebInspector_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_InitPainter(painter);
}

void QWebInspector_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QWebInspector_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_Redirected(offset);
}

void QWebInspector_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__SharedPainter = slot;
}

QPainter* QWebInspector_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_SharedPainter();
}

void QWebInspector_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__InputMethodEvent = slot;
}

void QWebInspector_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QWebInspector_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QWebInspector_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QWebInspector_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QWebInspector_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQWebInspector*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QWebInspector_Delete(QWebInspector* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQWebInspector*>( self );
	} else {
		delete self;
	}
}

