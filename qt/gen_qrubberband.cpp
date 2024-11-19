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
#include <QRect>
#include <QResizeEvent>
#include <QRubberBand>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qrubberband.h>
#include "gen_qrubberband.h"
#include "_cgo_export.h"

class MiqtVirtualQRubberBand : public virtual QRubberBand {
public:

	MiqtVirtualQRubberBand(QRubberBand::Shape param1): QRubberBand(param1) {};
	MiqtVirtualQRubberBand(QRubberBand::Shape param1, QWidget* param2): QRubberBand(param1, param2) {};

	virtual ~MiqtVirtualQRubberBand() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QRubberBand::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QRubberBand_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QRubberBand::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QRubberBand::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QRubberBand_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QRubberBand::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QRubberBand::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QRubberBand_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QRubberBand::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QRubberBand::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QRubberBand_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QRubberBand::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QRubberBand::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QRubberBand_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QRubberBand::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* param1) override {
		if (handle__MoveEvent == 0) {
			QRubberBand::moveEvent(param1);
			return;
		}
		
		QMoveEvent* sigval1 = param1;

		miqt_exec_callback_QRubberBand_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* param1) {

		QRubberBand::moveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QRubberBand::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QRubberBand_DevType(const_cast<MiqtVirtualQRubberBand*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QRubberBand::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QRubberBand::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QRubberBand_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QRubberBand::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QRubberBand::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QRubberBand_SizeHint(const_cast<MiqtVirtualQRubberBand*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QRubberBand::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QRubberBand::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QRubberBand_MinimumSizeHint(const_cast<MiqtVirtualQRubberBand*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QRubberBand::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QRubberBand::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QRubberBand_HeightForWidth(const_cast<MiqtVirtualQRubberBand*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QRubberBand::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QRubberBand::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QRubberBand_HasHeightForWidth(const_cast<MiqtVirtualQRubberBand*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QRubberBand::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QRubberBand::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QRubberBand_PaintEngine(const_cast<MiqtVirtualQRubberBand*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QRubberBand::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QRubberBand::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QRubberBand::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QRubberBand::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QRubberBand::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QRubberBand::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QRubberBand::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QRubberBand::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QRubberBand::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QRubberBand::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QRubberBand::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QRubberBand::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QRubberBand::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QRubberBand::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QRubberBand::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QRubberBand::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QRubberBand::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QRubberBand::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QRubberBand::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QRubberBand::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QRubberBand::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QRubberBand::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QRubberBand::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QRubberBand::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QRubberBand::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QRubberBand::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QRubberBand::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QRubberBand::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QRubberBand::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QRubberBand::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QRubberBand::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QRubberBand::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QRubberBand::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QRubberBand::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QRubberBand::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QRubberBand::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QRubberBand::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QRubberBand::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QRubberBand::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QRubberBand::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QRubberBand_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QRubberBand::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QRubberBand::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QRubberBand_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QRubberBand::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QRubberBand::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QRubberBand_Metric(const_cast<MiqtVirtualQRubberBand*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QRubberBand::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QRubberBand::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QRubberBand_InitPainter(const_cast<MiqtVirtualQRubberBand*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QRubberBand::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QRubberBand::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QRubberBand_Redirected(const_cast<MiqtVirtualQRubberBand*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QRubberBand::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QRubberBand::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QRubberBand_SharedPainter(const_cast<MiqtVirtualQRubberBand*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QRubberBand::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QRubberBand::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QRubberBand_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QRubberBand::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QRubberBand::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QRubberBand_InputMethodQuery(const_cast<MiqtVirtualQRubberBand*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QRubberBand::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QRubberBand::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QRubberBand_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QRubberBand::focusNextPrevChild(next);

	}

};

void QRubberBand_new(int param1, QRubberBand** outptr_QRubberBand, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQRubberBand* ret = new MiqtVirtualQRubberBand(static_cast<QRubberBand::Shape>(param1));
	*outptr_QRubberBand = ret;
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QRubberBand_new2(int param1, QWidget* param2, QRubberBand** outptr_QRubberBand, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQRubberBand* ret = new MiqtVirtualQRubberBand(static_cast<QRubberBand::Shape>(param1), param2);
	*outptr_QRubberBand = ret;
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

QMetaObject* QRubberBand_MetaObject(const QRubberBand* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRubberBand_Metacast(QRubberBand* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRubberBand_Tr(const char* s) {
	QString _ret = QRubberBand::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRubberBand_TrUtf8(const char* s) {
	QString _ret = QRubberBand::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRubberBand_Shape(const QRubberBand* self) {
	QRubberBand::Shape _ret = self->shape();
	return static_cast<int>(_ret);
}

void QRubberBand_SetGeometry(QRubberBand* self, QRect* r) {
	self->setGeometry(*r);
}

void QRubberBand_SetGeometry2(QRubberBand* self, int x, int y, int w, int h) {
	self->setGeometry(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QRubberBand_Move(QRubberBand* self, int x, int y) {
	self->move(static_cast<int>(x), static_cast<int>(y));
}

void QRubberBand_MoveWithQPoint(QRubberBand* self, QPoint* p) {
	self->move(*p);
}

void QRubberBand_Resize(QRubberBand* self, int w, int h) {
	self->resize(static_cast<int>(w), static_cast<int>(h));
}

void QRubberBand_ResizeWithQSize(QRubberBand* self, QSize* s) {
	self->resize(*s);
}

struct miqt_string QRubberBand_Tr2(const char* s, const char* c) {
	QString _ret = QRubberBand::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRubberBand_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRubberBand::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRubberBand_TrUtf82(const char* s, const char* c) {
	QString _ret = QRubberBand::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRubberBand_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QRubberBand::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRubberBand_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__Event = slot;
}

bool QRubberBand_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQRubberBand*)(self) )->virtualbase_Event(e);
}

void QRubberBand_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__PaintEvent = slot;
}

void QRubberBand_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_PaintEvent(param1);
}

void QRubberBand_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__ChangeEvent = slot;
}

void QRubberBand_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_ChangeEvent(param1);
}

void QRubberBand_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__ShowEvent = slot;
}

void QRubberBand_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_ShowEvent(param1);
}

void QRubberBand_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__ResizeEvent = slot;
}

void QRubberBand_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_ResizeEvent(param1);
}

void QRubberBand_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__MoveEvent = slot;
}

void QRubberBand_virtualbase_MoveEvent(void* self, QMoveEvent* param1) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_MoveEvent(param1);
}

void QRubberBand_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__DevType = slot;
}

int QRubberBand_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_DevType();
}

void QRubberBand_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__SetVisible = slot;
}

void QRubberBand_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_SetVisible(visible);
}

void QRubberBand_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__SizeHint = slot;
}

QSize* QRubberBand_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_SizeHint();
}

void QRubberBand_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QRubberBand_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_MinimumSizeHint();
}

void QRubberBand_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__HeightForWidth = slot;
}

int QRubberBand_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_HeightForWidth(param1);
}

void QRubberBand_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__HasHeightForWidth = slot;
}

bool QRubberBand_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_HasHeightForWidth();
}

void QRubberBand_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QRubberBand_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_PaintEngine();
}

void QRubberBand_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__MousePressEvent = slot;
}

void QRubberBand_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_MousePressEvent(event);
}

void QRubberBand_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__MouseReleaseEvent = slot;
}

void QRubberBand_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QRubberBand_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QRubberBand_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QRubberBand_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__MouseMoveEvent = slot;
}

void QRubberBand_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QRubberBand_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__WheelEvent = slot;
}

void QRubberBand_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_WheelEvent(event);
}

void QRubberBand_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__KeyPressEvent = slot;
}

void QRubberBand_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_KeyPressEvent(event);
}

void QRubberBand_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__KeyReleaseEvent = slot;
}

void QRubberBand_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QRubberBand_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__FocusInEvent = slot;
}

void QRubberBand_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_FocusInEvent(event);
}

void QRubberBand_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__FocusOutEvent = slot;
}

void QRubberBand_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_FocusOutEvent(event);
}

void QRubberBand_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__EnterEvent = slot;
}

void QRubberBand_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_EnterEvent(event);
}

void QRubberBand_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__LeaveEvent = slot;
}

void QRubberBand_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_LeaveEvent(event);
}

void QRubberBand_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__CloseEvent = slot;
}

void QRubberBand_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_CloseEvent(event);
}

void QRubberBand_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__ContextMenuEvent = slot;
}

void QRubberBand_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QRubberBand_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__TabletEvent = slot;
}

void QRubberBand_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_TabletEvent(event);
}

void QRubberBand_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__ActionEvent = slot;
}

void QRubberBand_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_ActionEvent(event);
}

void QRubberBand_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__DragEnterEvent = slot;
}

void QRubberBand_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_DragEnterEvent(event);
}

void QRubberBand_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__DragMoveEvent = slot;
}

void QRubberBand_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_DragMoveEvent(event);
}

void QRubberBand_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__DragLeaveEvent = slot;
}

void QRubberBand_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QRubberBand_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__DropEvent = slot;
}

void QRubberBand_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_DropEvent(event);
}

void QRubberBand_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__HideEvent = slot;
}

void QRubberBand_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_HideEvent(event);
}

void QRubberBand_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__NativeEvent = slot;
}

bool QRubberBand_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQRubberBand*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QRubberBand_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__Metric = slot;
}

int QRubberBand_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_Metric(param1);
}

void QRubberBand_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__InitPainter = slot;
}

void QRubberBand_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_InitPainter(painter);
}

void QRubberBand_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QRubberBand_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_Redirected(offset);
}

void QRubberBand_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__SharedPainter = slot;
}

QPainter* QRubberBand_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_SharedPainter();
}

void QRubberBand_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__InputMethodEvent = slot;
}

void QRubberBand_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQRubberBand*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QRubberBand_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QRubberBand_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQRubberBand*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QRubberBand_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQRubberBand*>( (QRubberBand*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QRubberBand_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQRubberBand*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QRubberBand_Delete(QRubberBand* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQRubberBand*>( self );
	} else {
		delete self;
	}
}

