#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialogButtonBox>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
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
#include <QPoint>
#include <QPushButton>
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
#include <qdialogbuttonbox.h>
#include "gen_qdialogbuttonbox.h"
#include "_cgo_export.h"

class MiqtVirtualQDialogButtonBox : public virtual QDialogButtonBox {
public:

	MiqtVirtualQDialogButtonBox(QWidget* parent): QDialogButtonBox(parent) {};
	MiqtVirtualQDialogButtonBox(): QDialogButtonBox() {};
	MiqtVirtualQDialogButtonBox(Qt::Orientation orientation): QDialogButtonBox(orientation) {};
	MiqtVirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons): QDialogButtonBox(buttons) {};
	MiqtVirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons, Qt::Orientation orientation): QDialogButtonBox(buttons, orientation) {};
	MiqtVirtualQDialogButtonBox(Qt::Orientation orientation, QWidget* parent): QDialogButtonBox(orientation, parent) {};
	MiqtVirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons, QWidget* parent): QDialogButtonBox(buttons, parent) {};
	MiqtVirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons, Qt::Orientation orientation, QWidget* parent): QDialogButtonBox(buttons, orientation, parent) {};

	virtual ~MiqtVirtualQDialogButtonBox() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QDialogButtonBox::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QDialogButtonBox::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QDialogButtonBox::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDialogButtonBox_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QDialogButtonBox::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QDialogButtonBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QDialogButtonBox_DevType(const_cast<MiqtVirtualQDialogButtonBox*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QDialogButtonBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QDialogButtonBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QDialogButtonBox_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QDialogButtonBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QDialogButtonBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDialogButtonBox_SizeHint(const_cast<MiqtVirtualQDialogButtonBox*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QDialogButtonBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QDialogButtonBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDialogButtonBox_MinimumSizeHint(const_cast<MiqtVirtualQDialogButtonBox*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QDialogButtonBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QDialogButtonBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QDialogButtonBox_HeightForWidth(const_cast<MiqtVirtualQDialogButtonBox*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QDialogButtonBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QDialogButtonBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QDialogButtonBox_HasHeightForWidth(const_cast<MiqtVirtualQDialogButtonBox*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QDialogButtonBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QDialogButtonBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QDialogButtonBox_PaintEngine(const_cast<MiqtVirtualQDialogButtonBox*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QDialogButtonBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QDialogButtonBox::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QDialogButtonBox::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QDialogButtonBox::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QDialogButtonBox::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QDialogButtonBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QDialogButtonBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QDialogButtonBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QDialogButtonBox::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QDialogButtonBox::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QDialogButtonBox::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QDialogButtonBox::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QDialogButtonBox::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QDialogButtonBox::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QDialogButtonBox::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QDialogButtonBox::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QDialogButtonBox::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QDialogButtonBox::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QDialogButtonBox::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QDialogButtonBox::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QDialogButtonBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QDialogButtonBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QDialogButtonBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QDialogButtonBox::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QDialogButtonBox::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QDialogButtonBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QDialogButtonBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QDialogButtonBox::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QDialogButtonBox::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QDialogButtonBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QDialogButtonBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QDialogButtonBox::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QDialogButtonBox::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QDialogButtonBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QDialogButtonBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QDialogButtonBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QDialogButtonBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QDialogButtonBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QDialogButtonBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QDialogButtonBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QDialogButtonBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QDialogButtonBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QDialogButtonBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QDialogButtonBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QDialogButtonBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QDialogButtonBox::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QDialogButtonBox::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QDialogButtonBox::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QDialogButtonBox_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QDialogButtonBox::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QDialogButtonBox::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QDialogButtonBox_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QDialogButtonBox::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QDialogButtonBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QDialogButtonBox_Metric(const_cast<MiqtVirtualQDialogButtonBox*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QDialogButtonBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QDialogButtonBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QDialogButtonBox_InitPainter(const_cast<MiqtVirtualQDialogButtonBox*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QDialogButtonBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QDialogButtonBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QDialogButtonBox_Redirected(const_cast<MiqtVirtualQDialogButtonBox*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QDialogButtonBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QDialogButtonBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QDialogButtonBox_SharedPainter(const_cast<MiqtVirtualQDialogButtonBox*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QDialogButtonBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QDialogButtonBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QDialogButtonBox_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QDialogButtonBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QDialogButtonBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QDialogButtonBox_InputMethodQuery(const_cast<MiqtVirtualQDialogButtonBox*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QDialogButtonBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QDialogButtonBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QDialogButtonBox_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QDialogButtonBox::focusNextPrevChild(next);

	}

};

QDialogButtonBox* QDialogButtonBox_new(QWidget* parent) {
	return new MiqtVirtualQDialogButtonBox(parent);
}

QDialogButtonBox* QDialogButtonBox_new2() {
	return new MiqtVirtualQDialogButtonBox();
}

QDialogButtonBox* QDialogButtonBox_new3(int orientation) {
	return new MiqtVirtualQDialogButtonBox(static_cast<Qt::Orientation>(orientation));
}

QDialogButtonBox* QDialogButtonBox_new4(int buttons) {
	return new MiqtVirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons));
}

QDialogButtonBox* QDialogButtonBox_new5(int buttons, int orientation) {
	return new MiqtVirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), static_cast<Qt::Orientation>(orientation));
}

QDialogButtonBox* QDialogButtonBox_new6(int orientation, QWidget* parent) {
	return new MiqtVirtualQDialogButtonBox(static_cast<Qt::Orientation>(orientation), parent);
}

QDialogButtonBox* QDialogButtonBox_new7(int buttons, QWidget* parent) {
	return new MiqtVirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), parent);
}

QDialogButtonBox* QDialogButtonBox_new8(int buttons, int orientation, QWidget* parent) {
	return new MiqtVirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), static_cast<Qt::Orientation>(orientation), parent);
}

void QDialogButtonBox_virtbase(QDialogButtonBox* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QDialogButtonBox_MetaObject(const QDialogButtonBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDialogButtonBox_Metacast(QDialogButtonBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDialogButtonBox_Tr(const char* s) {
	QString _ret = QDialogButtonBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDialogButtonBox_TrUtf8(const char* s) {
	QString _ret = QDialogButtonBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDialogButtonBox_SetOrientation(QDialogButtonBox* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QDialogButtonBox_Orientation(const QDialogButtonBox* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QDialogButtonBox_AddButton(QDialogButtonBox* self, QAbstractButton* button, int role) {
	self->addButton(button, static_cast<QDialogButtonBox::ButtonRole>(role));
}

QPushButton* QDialogButtonBox_AddButton2(QDialogButtonBox* self, struct miqt_string text, int role) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addButton(text_QString, static_cast<QDialogButtonBox::ButtonRole>(role));
}

QPushButton* QDialogButtonBox_AddButtonWithButton(QDialogButtonBox* self, int button) {
	return self->addButton(static_cast<QDialogButtonBox::StandardButton>(button));
}

void QDialogButtonBox_RemoveButton(QDialogButtonBox* self, QAbstractButton* button) {
	self->removeButton(button);
}

void QDialogButtonBox_Clear(QDialogButtonBox* self) {
	self->clear();
}

struct miqt_array /* of QAbstractButton* */  QDialogButtonBox_Buttons(const QDialogButtonBox* self) {
	QList<QAbstractButton *> _ret = self->buttons();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractButton** _arr = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QDialogButtonBox_ButtonRole(const QDialogButtonBox* self, QAbstractButton* button) {
	QDialogButtonBox::ButtonRole _ret = self->buttonRole(button);
	return static_cast<int>(_ret);
}

void QDialogButtonBox_SetStandardButtons(QDialogButtonBox* self, int buttons) {
	self->setStandardButtons(static_cast<QDialogButtonBox::StandardButtons>(buttons));
}

int QDialogButtonBox_StandardButtons(const QDialogButtonBox* self) {
	QDialogButtonBox::StandardButtons _ret = self->standardButtons();
	return static_cast<int>(_ret);
}

int QDialogButtonBox_StandardButton(const QDialogButtonBox* self, QAbstractButton* button) {
	QDialogButtonBox::StandardButton _ret = self->standardButton(button);
	return static_cast<int>(_ret);
}

QPushButton* QDialogButtonBox_Button(const QDialogButtonBox* self, int which) {
	return self->button(static_cast<QDialogButtonBox::StandardButton>(which));
}

void QDialogButtonBox_SetCenterButtons(QDialogButtonBox* self, bool center) {
	self->setCenterButtons(center);
}

bool QDialogButtonBox_CenterButtons(const QDialogButtonBox* self) {
	return self->centerButtons();
}

void QDialogButtonBox_Clicked(QDialogButtonBox* self, QAbstractButton* button) {
	self->clicked(button);
}

void QDialogButtonBox_connect_Clicked(QDialogButtonBox* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)(QAbstractButton*)>(&QDialogButtonBox::clicked), self, [=](QAbstractButton* button) {
		QAbstractButton* sigval1 = button;
		miqt_exec_callback_QDialogButtonBox_Clicked(slot, sigval1);
	});
}

void QDialogButtonBox_Accepted(QDialogButtonBox* self) {
	self->accepted();
}

void QDialogButtonBox_connect_Accepted(QDialogButtonBox* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)()>(&QDialogButtonBox::accepted), self, [=]() {
		miqt_exec_callback_QDialogButtonBox_Accepted(slot);
	});
}

void QDialogButtonBox_HelpRequested(QDialogButtonBox* self) {
	self->helpRequested();
}

void QDialogButtonBox_connect_HelpRequested(QDialogButtonBox* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)()>(&QDialogButtonBox::helpRequested), self, [=]() {
		miqt_exec_callback_QDialogButtonBox_HelpRequested(slot);
	});
}

void QDialogButtonBox_Rejected(QDialogButtonBox* self) {
	self->rejected();
}

void QDialogButtonBox_connect_Rejected(QDialogButtonBox* self, intptr_t slot) {
	MiqtVirtualQDialogButtonBox::connect(self, static_cast<void (QDialogButtonBox::*)()>(&QDialogButtonBox::rejected), self, [=]() {
		miqt_exec_callback_QDialogButtonBox_Rejected(slot);
	});
}

struct miqt_string QDialogButtonBox_Tr2(const char* s, const char* c) {
	QString _ret = QDialogButtonBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDialogButtonBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDialogButtonBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDialogButtonBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QDialogButtonBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDialogButtonBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDialogButtonBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDialogButtonBox_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__ChangeEvent = slot;
}

void QDialogButtonBox_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_ChangeEvent(event);
}

void QDialogButtonBox_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__Event = slot;
}

bool QDialogButtonBox_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_Event(event);
}

void QDialogButtonBox_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__DevType = slot;
}

int QDialogButtonBox_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_DevType();
}

void QDialogButtonBox_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__SetVisible = slot;
}

void QDialogButtonBox_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_SetVisible(visible);
}

void QDialogButtonBox_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__SizeHint = slot;
}

QSize* QDialogButtonBox_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_SizeHint();
}

void QDialogButtonBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QDialogButtonBox_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_MinimumSizeHint();
}

void QDialogButtonBox_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__HeightForWidth = slot;
}

int QDialogButtonBox_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_HeightForWidth(param1);
}

void QDialogButtonBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__HasHeightForWidth = slot;
}

bool QDialogButtonBox_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_HasHeightForWidth();
}

void QDialogButtonBox_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QDialogButtonBox_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_PaintEngine();
}

void QDialogButtonBox_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__MousePressEvent = slot;
}

void QDialogButtonBox_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_MousePressEvent(event);
}

void QDialogButtonBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__MouseReleaseEvent = slot;
}

void QDialogButtonBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QDialogButtonBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QDialogButtonBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QDialogButtonBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__MouseMoveEvent = slot;
}

void QDialogButtonBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QDialogButtonBox_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__WheelEvent = slot;
}

void QDialogButtonBox_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_WheelEvent(event);
}

void QDialogButtonBox_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__KeyPressEvent = slot;
}

void QDialogButtonBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_KeyPressEvent(event);
}

void QDialogButtonBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__KeyReleaseEvent = slot;
}

void QDialogButtonBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QDialogButtonBox_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__FocusInEvent = slot;
}

void QDialogButtonBox_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_FocusInEvent(event);
}

void QDialogButtonBox_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__FocusOutEvent = slot;
}

void QDialogButtonBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_FocusOutEvent(event);
}

void QDialogButtonBox_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__EnterEvent = slot;
}

void QDialogButtonBox_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_EnterEvent(event);
}

void QDialogButtonBox_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__LeaveEvent = slot;
}

void QDialogButtonBox_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_LeaveEvent(event);
}

void QDialogButtonBox_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__PaintEvent = slot;
}

void QDialogButtonBox_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_PaintEvent(event);
}

void QDialogButtonBox_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__MoveEvent = slot;
}

void QDialogButtonBox_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_MoveEvent(event);
}

void QDialogButtonBox_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__ResizeEvent = slot;
}

void QDialogButtonBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_ResizeEvent(event);
}

void QDialogButtonBox_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__CloseEvent = slot;
}

void QDialogButtonBox_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_CloseEvent(event);
}

void QDialogButtonBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__ContextMenuEvent = slot;
}

void QDialogButtonBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QDialogButtonBox_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__TabletEvent = slot;
}

void QDialogButtonBox_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_TabletEvent(event);
}

void QDialogButtonBox_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__ActionEvent = slot;
}

void QDialogButtonBox_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_ActionEvent(event);
}

void QDialogButtonBox_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__DragEnterEvent = slot;
}

void QDialogButtonBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_DragEnterEvent(event);
}

void QDialogButtonBox_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__DragMoveEvent = slot;
}

void QDialogButtonBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_DragMoveEvent(event);
}

void QDialogButtonBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__DragLeaveEvent = slot;
}

void QDialogButtonBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QDialogButtonBox_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__DropEvent = slot;
}

void QDialogButtonBox_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_DropEvent(event);
}

void QDialogButtonBox_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__ShowEvent = slot;
}

void QDialogButtonBox_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_ShowEvent(event);
}

void QDialogButtonBox_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__HideEvent = slot;
}

void QDialogButtonBox_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_HideEvent(event);
}

void QDialogButtonBox_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__NativeEvent = slot;
}

bool QDialogButtonBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QDialogButtonBox_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__Metric = slot;
}

int QDialogButtonBox_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_Metric(param1);
}

void QDialogButtonBox_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__InitPainter = slot;
}

void QDialogButtonBox_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_InitPainter(painter);
}

void QDialogButtonBox_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QDialogButtonBox_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_Redirected(offset);
}

void QDialogButtonBox_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__SharedPainter = slot;
}

QPainter* QDialogButtonBox_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_SharedPainter();
}

void QDialogButtonBox_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__InputMethodEvent = slot;
}

void QDialogButtonBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QDialogButtonBox_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QDialogButtonBox_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QDialogButtonBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQDialogButtonBox*>( (QDialogButtonBox*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QDialogButtonBox_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQDialogButtonBox*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QDialogButtonBox_Delete(QDialogButtonBox* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQDialogButtonBox*>( self );
	} else {
		delete self;
	}
}

