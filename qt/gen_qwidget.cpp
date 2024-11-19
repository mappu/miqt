#include <QAction>
#include <QActionEvent>
#include <QBackingStore>
#include <QBitmap>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QGraphicsEffect>
#include <QGraphicsProxyWidget>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWidgetData>
#include <QWindow>
#include <qwidget.h>
#include "gen_qwidget.h"
#include "_cgo_export.h"

void QWidgetData_new(QWidgetData* param1, QWidgetData** outptr_QWidgetData) {
	QWidgetData* ret = new QWidgetData(*param1);
	*outptr_QWidgetData = ret;
}

void QWidgetData_OperatorAssign(QWidgetData* self, QWidgetData* param1) {
	self->operator=(*param1);
}

void QWidgetData_Delete(QWidgetData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWidgetData*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQWidget : public virtual QWidget {
public:

	MiqtVirtualQWidget(QWidget* parent): QWidget(parent) {};
	MiqtVirtualQWidget(): QWidget() {};
	MiqtVirtualQWidget(QWidget* parent, Qt::WindowFlags f): QWidget(parent, f) {};

	virtual ~MiqtVirtualQWidget() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QWidget_DevType(const_cast<MiqtVirtualQWidget*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QWidget_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWidget_SizeHint(const_cast<MiqtVirtualQWidget*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWidget_MinimumSizeHint(const_cast<MiqtVirtualQWidget*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QWidget_HeightForWidth(const_cast<MiqtVirtualQWidget*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QWidget_HasHeightForWidth(const_cast<MiqtVirtualQWidget*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QWidget_PaintEngine(const_cast<MiqtVirtualQWidget*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QWidget::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QWidget::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWidget_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWidget_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWidget_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWidget_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QWidget::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QWidget_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWidget_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWidget_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWidget_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWidget_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QWidget::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWidget_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWidget_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QWidget::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QWidget_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QWidget::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QWidget_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QWidget::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QWidget_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QWidget_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QWidget::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QWidget_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QWidget_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QWidget_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QWidget_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QWidget_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QWidget_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QWidget_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QWidget_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QWidget::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QWidget_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QWidget_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QWidget_Metric(const_cast<MiqtVirtualQWidget*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QWidget_InitPainter(const_cast<MiqtVirtualQWidget*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QWidget_Redirected(const_cast<MiqtVirtualQWidget*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QWidget_SharedPainter(const_cast<MiqtVirtualQWidget*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QWidget::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QWidget_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QWidget::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QWidget::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QWidget_InputMethodQuery(const_cast<MiqtVirtualQWidget*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QWidget_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QWidget::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWidget_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QWidget::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWidget_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWidget_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWidget_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWidget_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWidget_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QWidget::disconnectNotify(*signal);

	}

};

void QWidget_new(QWidget* parent, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQWidget* ret = new MiqtVirtualQWidget(parent);
	*outptr_QWidget = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QWidget_new2(QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQWidget* ret = new MiqtVirtualQWidget();
	*outptr_QWidget = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QWidget_new3(QWidget* parent, int f, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQWidget* ret = new MiqtVirtualQWidget(parent, static_cast<Qt::WindowFlags>(f));
	*outptr_QWidget = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

QMetaObject* QWidget_MetaObject(const QWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWidget_Metacast(QWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWidget_Tr(const char* s) {
	QString _ret = QWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWidget_TrUtf8(const char* s) {
	QString _ret = QWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QWidget_DevType(const QWidget* self) {
	return self->devType();
}

uintptr_t QWidget_WinId(const QWidget* self) {
	WId _ret = self->winId();
	return static_cast<uintptr_t>(_ret);
}

void QWidget_CreateWinId(QWidget* self) {
	self->createWinId();
}

uintptr_t QWidget_InternalWinId(const QWidget* self) {
	WId _ret = self->internalWinId();
	return static_cast<uintptr_t>(_ret);
}

uintptr_t QWidget_EffectiveWinId(const QWidget* self) {
	WId _ret = self->effectiveWinId();
	return static_cast<uintptr_t>(_ret);
}

QStyle* QWidget_Style(const QWidget* self) {
	return self->style();
}

void QWidget_SetStyle(QWidget* self, QStyle* style) {
	self->setStyle(style);
}

bool QWidget_IsTopLevel(const QWidget* self) {
	return self->isTopLevel();
}

bool QWidget_IsWindow(const QWidget* self) {
	return self->isWindow();
}

bool QWidget_IsModal(const QWidget* self) {
	return self->isModal();
}

int QWidget_WindowModality(const QWidget* self) {
	Qt::WindowModality _ret = self->windowModality();
	return static_cast<int>(_ret);
}

void QWidget_SetWindowModality(QWidget* self, int windowModality) {
	self->setWindowModality(static_cast<Qt::WindowModality>(windowModality));
}

bool QWidget_IsEnabled(const QWidget* self) {
	return self->isEnabled();
}

bool QWidget_IsEnabledTo(const QWidget* self, QWidget* param1) {
	return self->isEnabledTo(param1);
}

bool QWidget_IsEnabledToTLW(const QWidget* self) {
	return self->isEnabledToTLW();
}

void QWidget_SetEnabled(QWidget* self, bool enabled) {
	self->setEnabled(enabled);
}

void QWidget_SetDisabled(QWidget* self, bool disabled) {
	self->setDisabled(disabled);
}

void QWidget_SetWindowModified(QWidget* self, bool windowModified) {
	self->setWindowModified(windowModified);
}

QRect* QWidget_FrameGeometry(const QWidget* self) {
	return new QRect(self->frameGeometry());
}

QRect* QWidget_Geometry(const QWidget* self) {
	const QRect& _ret = self->geometry();
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

QRect* QWidget_NormalGeometry(const QWidget* self) {
	return new QRect(self->normalGeometry());
}

int QWidget_X(const QWidget* self) {
	return self->x();
}

int QWidget_Y(const QWidget* self) {
	return self->y();
}

QPoint* QWidget_Pos(const QWidget* self) {
	return new QPoint(self->pos());
}

QSize* QWidget_FrameSize(const QWidget* self) {
	return new QSize(self->frameSize());
}

QSize* QWidget_Size(const QWidget* self) {
	return new QSize(self->size());
}

int QWidget_Width(const QWidget* self) {
	return self->width();
}

int QWidget_Height(const QWidget* self) {
	return self->height();
}

QRect* QWidget_Rect(const QWidget* self) {
	return new QRect(self->rect());
}

QRect* QWidget_ChildrenRect(const QWidget* self) {
	return new QRect(self->childrenRect());
}

QRegion* QWidget_ChildrenRegion(const QWidget* self) {
	return new QRegion(self->childrenRegion());
}

QSize* QWidget_MinimumSize(const QWidget* self) {
	return new QSize(self->minimumSize());
}

QSize* QWidget_MaximumSize(const QWidget* self) {
	return new QSize(self->maximumSize());
}

int QWidget_MinimumWidth(const QWidget* self) {
	return self->minimumWidth();
}

int QWidget_MinimumHeight(const QWidget* self) {
	return self->minimumHeight();
}

int QWidget_MaximumWidth(const QWidget* self) {
	return self->maximumWidth();
}

int QWidget_MaximumHeight(const QWidget* self) {
	return self->maximumHeight();
}

void QWidget_SetMinimumSize(QWidget* self, QSize* minimumSize) {
	self->setMinimumSize(*minimumSize);
}

void QWidget_SetMinimumSize2(QWidget* self, int minw, int minh) {
	self->setMinimumSize(static_cast<int>(minw), static_cast<int>(minh));
}

void QWidget_SetMaximumSize(QWidget* self, QSize* maximumSize) {
	self->setMaximumSize(*maximumSize);
}

void QWidget_SetMaximumSize2(QWidget* self, int maxw, int maxh) {
	self->setMaximumSize(static_cast<int>(maxw), static_cast<int>(maxh));
}

void QWidget_SetMinimumWidth(QWidget* self, int minw) {
	self->setMinimumWidth(static_cast<int>(minw));
}

void QWidget_SetMinimumHeight(QWidget* self, int minh) {
	self->setMinimumHeight(static_cast<int>(minh));
}

void QWidget_SetMaximumWidth(QWidget* self, int maxw) {
	self->setMaximumWidth(static_cast<int>(maxw));
}

void QWidget_SetMaximumHeight(QWidget* self, int maxh) {
	self->setMaximumHeight(static_cast<int>(maxh));
}

QSize* QWidget_SizeIncrement(const QWidget* self) {
	return new QSize(self->sizeIncrement());
}

void QWidget_SetSizeIncrement(QWidget* self, QSize* sizeIncrement) {
	self->setSizeIncrement(*sizeIncrement);
}

void QWidget_SetSizeIncrement2(QWidget* self, int w, int h) {
	self->setSizeIncrement(static_cast<int>(w), static_cast<int>(h));
}

QSize* QWidget_BaseSize(const QWidget* self) {
	return new QSize(self->baseSize());
}

void QWidget_SetBaseSize(QWidget* self, QSize* baseSize) {
	self->setBaseSize(*baseSize);
}

void QWidget_SetBaseSize2(QWidget* self, int basew, int baseh) {
	self->setBaseSize(static_cast<int>(basew), static_cast<int>(baseh));
}

void QWidget_SetFixedSize(QWidget* self, QSize* fixedSize) {
	self->setFixedSize(*fixedSize);
}

void QWidget_SetFixedSize2(QWidget* self, int w, int h) {
	self->setFixedSize(static_cast<int>(w), static_cast<int>(h));
}

void QWidget_SetFixedWidth(QWidget* self, int w) {
	self->setFixedWidth(static_cast<int>(w));
}

void QWidget_SetFixedHeight(QWidget* self, int h) {
	self->setFixedHeight(static_cast<int>(h));
}

QPoint* QWidget_MapToGlobal(const QWidget* self, QPoint* param1) {
	return new QPoint(self->mapToGlobal(*param1));
}

QPoint* QWidget_MapFromGlobal(const QWidget* self, QPoint* param1) {
	return new QPoint(self->mapFromGlobal(*param1));
}

QPoint* QWidget_MapToParent(const QWidget* self, QPoint* param1) {
	return new QPoint(self->mapToParent(*param1));
}

QPoint* QWidget_MapFromParent(const QWidget* self, QPoint* param1) {
	return new QPoint(self->mapFromParent(*param1));
}

QPoint* QWidget_MapTo(const QWidget* self, QWidget* param1, QPoint* param2) {
	return new QPoint(self->mapTo(param1, *param2));
}

QPoint* QWidget_MapFrom(const QWidget* self, QWidget* param1, QPoint* param2) {
	return new QPoint(self->mapFrom(param1, *param2));
}

QWidget* QWidget_Window(const QWidget* self) {
	return self->window();
}

QWidget* QWidget_NativeParentWidget(const QWidget* self) {
	return self->nativeParentWidget();
}

QWidget* QWidget_TopLevelWidget(const QWidget* self) {
	return self->topLevelWidget();
}

QPalette* QWidget_Palette(const QWidget* self) {
	const QPalette& _ret = self->palette();
	// Cast returned reference into pointer
	return const_cast<QPalette*>(&_ret);
}

void QWidget_SetPalette(QWidget* self, QPalette* palette) {
	self->setPalette(*palette);
}

void QWidget_SetBackgroundRole(QWidget* self, int backgroundRole) {
	self->setBackgroundRole(static_cast<QPalette::ColorRole>(backgroundRole));
}

int QWidget_BackgroundRole(const QWidget* self) {
	QPalette::ColorRole _ret = self->backgroundRole();
	return static_cast<int>(_ret);
}

void QWidget_SetForegroundRole(QWidget* self, int foregroundRole) {
	self->setForegroundRole(static_cast<QPalette::ColorRole>(foregroundRole));
}

int QWidget_ForegroundRole(const QWidget* self) {
	QPalette::ColorRole _ret = self->foregroundRole();
	return static_cast<int>(_ret);
}

QFont* QWidget_Font(const QWidget* self) {
	const QFont& _ret = self->font();
	// Cast returned reference into pointer
	return const_cast<QFont*>(&_ret);
}

void QWidget_SetFont(QWidget* self, QFont* font) {
	self->setFont(*font);
}

QFontMetrics* QWidget_FontMetrics(const QWidget* self) {
	return new QFontMetrics(self->fontMetrics());
}

QFontInfo* QWidget_FontInfo(const QWidget* self) {
	return new QFontInfo(self->fontInfo());
}

QCursor* QWidget_Cursor(const QWidget* self) {
	return new QCursor(self->cursor());
}

void QWidget_SetCursor(QWidget* self, QCursor* cursor) {
	self->setCursor(*cursor);
}

void QWidget_UnsetCursor(QWidget* self) {
	self->unsetCursor();
}

void QWidget_SetMouseTracking(QWidget* self, bool enable) {
	self->setMouseTracking(enable);
}

bool QWidget_HasMouseTracking(const QWidget* self) {
	return self->hasMouseTracking();
}

bool QWidget_UnderMouse(const QWidget* self) {
	return self->underMouse();
}

void QWidget_SetTabletTracking(QWidget* self, bool enable) {
	self->setTabletTracking(enable);
}

bool QWidget_HasTabletTracking(const QWidget* self) {
	return self->hasTabletTracking();
}

void QWidget_SetMask(QWidget* self, QBitmap* mask) {
	self->setMask(*mask);
}

void QWidget_SetMaskWithMask(QWidget* self, QRegion* mask) {
	self->setMask(*mask);
}

QRegion* QWidget_Mask(const QWidget* self) {
	return new QRegion(self->mask());
}

void QWidget_ClearMask(QWidget* self) {
	self->clearMask();
}

void QWidget_Render(QWidget* self, QPaintDevice* target) {
	self->render(target);
}

void QWidget_RenderWithPainter(QWidget* self, QPainter* painter) {
	self->render(painter);
}

QPixmap* QWidget_Grab(QWidget* self) {
	return new QPixmap(self->grab());
}

QGraphicsEffect* QWidget_GraphicsEffect(const QWidget* self) {
	return self->graphicsEffect();
}

void QWidget_SetGraphicsEffect(QWidget* self, QGraphicsEffect* effect) {
	self->setGraphicsEffect(effect);
}

void QWidget_GrabGesture(QWidget* self, int typeVal) {
	self->grabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QWidget_UngrabGesture(QWidget* self, int typeVal) {
	self->ungrabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QWidget_SetWindowTitle(QWidget* self, struct miqt_string windowTitle) {
	QString windowTitle_QString = QString::fromUtf8(windowTitle.data, windowTitle.len);
	self->setWindowTitle(windowTitle_QString);
}

void QWidget_SetStyleSheet(QWidget* self, struct miqt_string styleSheet) {
	QString styleSheet_QString = QString::fromUtf8(styleSheet.data, styleSheet.len);
	self->setStyleSheet(styleSheet_QString);
}

struct miqt_string QWidget_StyleSheet(const QWidget* self) {
	QString _ret = self->styleSheet();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWidget_WindowTitle(const QWidget* self) {
	QString _ret = self->windowTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_SetWindowIcon(QWidget* self, QIcon* icon) {
	self->setWindowIcon(*icon);
}

QIcon* QWidget_WindowIcon(const QWidget* self) {
	return new QIcon(self->windowIcon());
}

void QWidget_SetWindowIconText(QWidget* self, struct miqt_string windowIconText) {
	QString windowIconText_QString = QString::fromUtf8(windowIconText.data, windowIconText.len);
	self->setWindowIconText(windowIconText_QString);
}

struct miqt_string QWidget_WindowIconText(const QWidget* self) {
	QString _ret = self->windowIconText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_SetWindowRole(QWidget* self, struct miqt_string windowRole) {
	QString windowRole_QString = QString::fromUtf8(windowRole.data, windowRole.len);
	self->setWindowRole(windowRole_QString);
}

struct miqt_string QWidget_WindowRole(const QWidget* self) {
	QString _ret = self->windowRole();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_SetWindowFilePath(QWidget* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->setWindowFilePath(filePath_QString);
}

struct miqt_string QWidget_WindowFilePath(const QWidget* self) {
	QString _ret = self->windowFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_SetWindowOpacity(QWidget* self, double level) {
	self->setWindowOpacity(static_cast<qreal>(level));
}

double QWidget_WindowOpacity(const QWidget* self) {
	qreal _ret = self->windowOpacity();
	return static_cast<double>(_ret);
}

bool QWidget_IsWindowModified(const QWidget* self) {
	return self->isWindowModified();
}

void QWidget_SetToolTip(QWidget* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string QWidget_ToolTip(const QWidget* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_SetToolTipDuration(QWidget* self, int msec) {
	self->setToolTipDuration(static_cast<int>(msec));
}

int QWidget_ToolTipDuration(const QWidget* self) {
	return self->toolTipDuration();
}

void QWidget_SetStatusTip(QWidget* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QWidget_StatusTip(const QWidget* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_SetWhatsThis(QWidget* self, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(whatsThis_QString);
}

struct miqt_string QWidget_WhatsThis(const QWidget* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWidget_AccessibleName(const QWidget* self) {
	QString _ret = self->accessibleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_SetAccessibleName(QWidget* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setAccessibleName(name_QString);
}

struct miqt_string QWidget_AccessibleDescription(const QWidget* self) {
	QString _ret = self->accessibleDescription();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_SetAccessibleDescription(QWidget* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setAccessibleDescription(description_QString);
}

void QWidget_SetLayoutDirection(QWidget* self, int direction) {
	self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

int QWidget_LayoutDirection(const QWidget* self) {
	Qt::LayoutDirection _ret = self->layoutDirection();
	return static_cast<int>(_ret);
}

void QWidget_UnsetLayoutDirection(QWidget* self) {
	self->unsetLayoutDirection();
}

void QWidget_SetLocale(QWidget* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QWidget_Locale(const QWidget* self) {
	return new QLocale(self->locale());
}

void QWidget_UnsetLocale(QWidget* self) {
	self->unsetLocale();
}

bool QWidget_IsRightToLeft(const QWidget* self) {
	return self->isRightToLeft();
}

bool QWidget_IsLeftToRight(const QWidget* self) {
	return self->isLeftToRight();
}

void QWidget_SetFocus(QWidget* self) {
	self->setFocus();
}

bool QWidget_IsActiveWindow(const QWidget* self) {
	return self->isActiveWindow();
}

void QWidget_ActivateWindow(QWidget* self) {
	self->activateWindow();
}

void QWidget_ClearFocus(QWidget* self) {
	self->clearFocus();
}

void QWidget_SetFocusWithReason(QWidget* self, int reason) {
	self->setFocus(static_cast<Qt::FocusReason>(reason));
}

int QWidget_FocusPolicy(const QWidget* self) {
	Qt::FocusPolicy _ret = self->focusPolicy();
	return static_cast<int>(_ret);
}

void QWidget_SetFocusPolicy(QWidget* self, int policy) {
	self->setFocusPolicy(static_cast<Qt::FocusPolicy>(policy));
}

bool QWidget_HasFocus(const QWidget* self) {
	return self->hasFocus();
}

void QWidget_SetTabOrder(QWidget* param1, QWidget* param2) {
	QWidget::setTabOrder(param1, param2);
}

void QWidget_SetFocusProxy(QWidget* self, QWidget* focusProxy) {
	self->setFocusProxy(focusProxy);
}

QWidget* QWidget_FocusProxy(const QWidget* self) {
	return self->focusProxy();
}

int QWidget_ContextMenuPolicy(const QWidget* self) {
	Qt::ContextMenuPolicy _ret = self->contextMenuPolicy();
	return static_cast<int>(_ret);
}

void QWidget_SetContextMenuPolicy(QWidget* self, int policy) {
	self->setContextMenuPolicy(static_cast<Qt::ContextMenuPolicy>(policy));
}

void QWidget_GrabMouse(QWidget* self) {
	self->grabMouse();
}

void QWidget_GrabMouseWithQCursor(QWidget* self, QCursor* param1) {
	self->grabMouse(*param1);
}

void QWidget_ReleaseMouse(QWidget* self) {
	self->releaseMouse();
}

void QWidget_GrabKeyboard(QWidget* self) {
	self->grabKeyboard();
}

void QWidget_ReleaseKeyboard(QWidget* self) {
	self->releaseKeyboard();
}

int QWidget_GrabShortcut(QWidget* self, QKeySequence* key) {
	return self->grabShortcut(*key);
}

void QWidget_ReleaseShortcut(QWidget* self, int id) {
	self->releaseShortcut(static_cast<int>(id));
}

void QWidget_SetShortcutEnabled(QWidget* self, int id) {
	self->setShortcutEnabled(static_cast<int>(id));
}

void QWidget_SetShortcutAutoRepeat(QWidget* self, int id) {
	self->setShortcutAutoRepeat(static_cast<int>(id));
}

QWidget* QWidget_MouseGrabber() {
	return QWidget::mouseGrabber();
}

QWidget* QWidget_KeyboardGrabber() {
	return QWidget::keyboardGrabber();
}

bool QWidget_UpdatesEnabled(const QWidget* self) {
	return self->updatesEnabled();
}

void QWidget_SetUpdatesEnabled(QWidget* self, bool enable) {
	self->setUpdatesEnabled(enable);
}

QGraphicsProxyWidget* QWidget_GraphicsProxyWidget(const QWidget* self) {
	return self->graphicsProxyWidget();
}

void QWidget_Update(QWidget* self) {
	self->update();
}

void QWidget_Repaint(QWidget* self) {
	self->repaint();
}

void QWidget_Update2(QWidget* self, int x, int y, int w, int h) {
	self->update(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QWidget_UpdateWithQRect(QWidget* self, QRect* param1) {
	self->update(*param1);
}

void QWidget_UpdateWithQRegion(QWidget* self, QRegion* param1) {
	self->update(*param1);
}

void QWidget_Repaint2(QWidget* self, int x, int y, int w, int h) {
	self->repaint(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QWidget_RepaintWithQRect(QWidget* self, QRect* param1) {
	self->repaint(*param1);
}

void QWidget_RepaintWithQRegion(QWidget* self, QRegion* param1) {
	self->repaint(*param1);
}

void QWidget_SetVisible(QWidget* self, bool visible) {
	self->setVisible(visible);
}

void QWidget_SetHidden(QWidget* self, bool hidden) {
	self->setHidden(hidden);
}

void QWidget_Show(QWidget* self) {
	self->show();
}

void QWidget_Hide(QWidget* self) {
	self->hide();
}

void QWidget_ShowMinimized(QWidget* self) {
	self->showMinimized();
}

void QWidget_ShowMaximized(QWidget* self) {
	self->showMaximized();
}

void QWidget_ShowFullScreen(QWidget* self) {
	self->showFullScreen();
}

void QWidget_ShowNormal(QWidget* self) {
	self->showNormal();
}

bool QWidget_Close(QWidget* self) {
	return self->close();
}

void QWidget_Raise(QWidget* self) {
	self->raise();
}

void QWidget_Lower(QWidget* self) {
	self->lower();
}

void QWidget_StackUnder(QWidget* self, QWidget* param1) {
	self->stackUnder(param1);
}

void QWidget_Move(QWidget* self, int x, int y) {
	self->move(static_cast<int>(x), static_cast<int>(y));
}

void QWidget_MoveWithQPoint(QWidget* self, QPoint* param1) {
	self->move(*param1);
}

void QWidget_Resize(QWidget* self, int w, int h) {
	self->resize(static_cast<int>(w), static_cast<int>(h));
}

void QWidget_ResizeWithQSize(QWidget* self, QSize* param1) {
	self->resize(*param1);
}

void QWidget_SetGeometry(QWidget* self, int x, int y, int w, int h) {
	self->setGeometry(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QWidget_SetGeometryWithGeometry(QWidget* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

struct miqt_string QWidget_SaveGeometry(const QWidget* self) {
	QByteArray _qb = self->saveGeometry();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QWidget_RestoreGeometry(QWidget* self, struct miqt_string geometry) {
	QByteArray geometry_QByteArray(geometry.data, geometry.len);
	return self->restoreGeometry(geometry_QByteArray);
}

void QWidget_AdjustSize(QWidget* self) {
	self->adjustSize();
}

bool QWidget_IsVisible(const QWidget* self) {
	return self->isVisible();
}

bool QWidget_IsVisibleTo(const QWidget* self, QWidget* param1) {
	return self->isVisibleTo(param1);
}

bool QWidget_IsHidden(const QWidget* self) {
	return self->isHidden();
}

bool QWidget_IsMinimized(const QWidget* self) {
	return self->isMinimized();
}

bool QWidget_IsMaximized(const QWidget* self) {
	return self->isMaximized();
}

bool QWidget_IsFullScreen(const QWidget* self) {
	return self->isFullScreen();
}

int QWidget_WindowState(const QWidget* self) {
	Qt::WindowStates _ret = self->windowState();
	return static_cast<int>(_ret);
}

void QWidget_SetWindowState(QWidget* self, int state) {
	self->setWindowState(static_cast<Qt::WindowStates>(state));
}

void QWidget_OverrideWindowState(QWidget* self, int state) {
	self->overrideWindowState(static_cast<Qt::WindowStates>(state));
}

QSize* QWidget_SizeHint(const QWidget* self) {
	return new QSize(self->sizeHint());
}

QSize* QWidget_MinimumSizeHint(const QWidget* self) {
	return new QSize(self->minimumSizeHint());
}

QSizePolicy* QWidget_SizePolicy(const QWidget* self) {
	return new QSizePolicy(self->sizePolicy());
}

void QWidget_SetSizePolicy(QWidget* self, QSizePolicy* sizePolicy) {
	self->setSizePolicy(*sizePolicy);
}

void QWidget_SetSizePolicy2(QWidget* self, int horizontal, int vertical) {
	self->setSizePolicy(static_cast<QSizePolicy::Policy>(horizontal), static_cast<QSizePolicy::Policy>(vertical));
}

int QWidget_HeightForWidth(const QWidget* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

bool QWidget_HasHeightForWidth(const QWidget* self) {
	return self->hasHeightForWidth();
}

QRegion* QWidget_VisibleRegion(const QWidget* self) {
	return new QRegion(self->visibleRegion());
}

void QWidget_SetContentsMargins(QWidget* self, int left, int top, int right, int bottom) {
	self->setContentsMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

void QWidget_SetContentsMarginsWithMargins(QWidget* self, QMargins* margins) {
	self->setContentsMargins(*margins);
}

void QWidget_GetContentsMargins(const QWidget* self, int* left, int* top, int* right, int* bottom) {
	self->getContentsMargins(static_cast<int*>(left), static_cast<int*>(top), static_cast<int*>(right), static_cast<int*>(bottom));
}

QMargins* QWidget_ContentsMargins(const QWidget* self) {
	return new QMargins(self->contentsMargins());
}

QRect* QWidget_ContentsRect(const QWidget* self) {
	return new QRect(self->contentsRect());
}

QLayout* QWidget_Layout(const QWidget* self) {
	return self->layout();
}

void QWidget_SetLayout(QWidget* self, QLayout* layout) {
	self->setLayout(layout);
}

void QWidget_UpdateGeometry(QWidget* self) {
	self->updateGeometry();
}

void QWidget_SetParent(QWidget* self, QWidget* parent) {
	self->setParent(parent);
}

void QWidget_SetParent2(QWidget* self, QWidget* parent, int f) {
	self->setParent(parent, static_cast<Qt::WindowFlags>(f));
}

void QWidget_Scroll(QWidget* self, int dx, int dy) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy));
}

void QWidget_Scroll2(QWidget* self, int dx, int dy, QRect* param3) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), *param3);
}

QWidget* QWidget_FocusWidget(const QWidget* self) {
	return self->focusWidget();
}

QWidget* QWidget_NextInFocusChain(const QWidget* self) {
	return self->nextInFocusChain();
}

QWidget* QWidget_PreviousInFocusChain(const QWidget* self) {
	return self->previousInFocusChain();
}

bool QWidget_AcceptDrops(const QWidget* self) {
	return self->acceptDrops();
}

void QWidget_SetAcceptDrops(QWidget* self, bool on) {
	self->setAcceptDrops(on);
}

void QWidget_AddAction(QWidget* self, QAction* action) {
	self->addAction(action);
}

void QWidget_AddActions(QWidget* self, struct miqt_array /* of QAction* */  actions) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	self->addActions(actions_QList);
}

void QWidget_InsertActions(QWidget* self, QAction* before, struct miqt_array /* of QAction* */  actions) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	self->insertActions(before, actions_QList);
}

void QWidget_InsertAction(QWidget* self, QAction* before, QAction* action) {
	self->insertAction(before, action);
}

void QWidget_RemoveAction(QWidget* self, QAction* action) {
	self->removeAction(action);
}

struct miqt_array /* of QAction* */  QWidget_Actions(const QWidget* self) {
	QList<QAction *> _ret = self->actions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QWidget* QWidget_ParentWidget(const QWidget* self) {
	return self->parentWidget();
}

void QWidget_SetWindowFlags(QWidget* self, int typeVal) {
	self->setWindowFlags(static_cast<Qt::WindowFlags>(typeVal));
}

int QWidget_WindowFlags(const QWidget* self) {
	Qt::WindowFlags _ret = self->windowFlags();
	return static_cast<int>(_ret);
}

void QWidget_SetWindowFlag(QWidget* self, int param1) {
	self->setWindowFlag(static_cast<Qt::WindowType>(param1));
}

void QWidget_OverrideWindowFlags(QWidget* self, int typeVal) {
	self->overrideWindowFlags(static_cast<Qt::WindowFlags>(typeVal));
}

int QWidget_WindowType(const QWidget* self) {
	Qt::WindowType _ret = self->windowType();
	return static_cast<int>(_ret);
}

QWidget* QWidget_Find(uintptr_t param1) {
	return QWidget::find(static_cast<WId>(param1));
}

QWidget* QWidget_ChildAt(const QWidget* self, int x, int y) {
	return self->childAt(static_cast<int>(x), static_cast<int>(y));
}

QWidget* QWidget_ChildAtWithQPoint(const QWidget* self, QPoint* p) {
	return self->childAt(*p);
}

void QWidget_SetAttribute(QWidget* self, int param1) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(param1));
}

bool QWidget_TestAttribute(const QWidget* self, int param1) {
	return self->testAttribute(static_cast<Qt::WidgetAttribute>(param1));
}

QPaintEngine* QWidget_PaintEngine(const QWidget* self) {
	return self->paintEngine();
}

void QWidget_EnsurePolished(const QWidget* self) {
	self->ensurePolished();
}

bool QWidget_IsAncestorOf(const QWidget* self, QWidget* child) {
	return self->isAncestorOf(child);
}

bool QWidget_AutoFillBackground(const QWidget* self) {
	return self->autoFillBackground();
}

void QWidget_SetAutoFillBackground(QWidget* self, bool enabled) {
	self->setAutoFillBackground(enabled);
}

QBackingStore* QWidget_BackingStore(const QWidget* self) {
	return self->backingStore();
}

QWindow* QWidget_WindowHandle(const QWidget* self) {
	return self->windowHandle();
}

QScreen* QWidget_Screen(const QWidget* self) {
	return self->screen();
}

QWidget* QWidget_CreateWindowContainer(QWindow* window) {
	return QWidget::createWindowContainer(window);
}

void QWidget_WindowTitleChanged(QWidget* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->windowTitleChanged(title_QString);
}

void QWidget_connect_WindowTitleChanged(QWidget* self, intptr_t slot) {
	MiqtVirtualQWidget::connect(self, static_cast<void (QWidget::*)(const QString&)>(&QWidget::windowTitleChanged), self, [=](const QString& title) {
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string title_ms;
		title_ms.len = title_b.length();
		title_ms.data = static_cast<char*>(malloc(title_ms.len));
		memcpy(title_ms.data, title_b.data(), title_ms.len);
		struct miqt_string sigval1 = title_ms;
		miqt_exec_callback_QWidget_WindowTitleChanged(slot, sigval1);
	});
}

void QWidget_WindowIconChanged(QWidget* self, QIcon* icon) {
	self->windowIconChanged(*icon);
}

void QWidget_connect_WindowIconChanged(QWidget* self, intptr_t slot) {
	MiqtVirtualQWidget::connect(self, static_cast<void (QWidget::*)(const QIcon&)>(&QWidget::windowIconChanged), self, [=](const QIcon& icon) {
		const QIcon& icon_ret = icon;
		// Cast returned reference into pointer
		QIcon* sigval1 = const_cast<QIcon*>(&icon_ret);
		miqt_exec_callback_QWidget_WindowIconChanged(slot, sigval1);
	});
}

void QWidget_WindowIconTextChanged(QWidget* self, struct miqt_string iconText) {
	QString iconText_QString = QString::fromUtf8(iconText.data, iconText.len);
	self->windowIconTextChanged(iconText_QString);
}

void QWidget_connect_WindowIconTextChanged(QWidget* self, intptr_t slot) {
	MiqtVirtualQWidget::connect(self, static_cast<void (QWidget::*)(const QString&)>(&QWidget::windowIconTextChanged), self, [=](const QString& iconText) {
		const QString iconText_ret = iconText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray iconText_b = iconText_ret.toUtf8();
		struct miqt_string iconText_ms;
		iconText_ms.len = iconText_b.length();
		iconText_ms.data = static_cast<char*>(malloc(iconText_ms.len));
		memcpy(iconText_ms.data, iconText_b.data(), iconText_ms.len);
		struct miqt_string sigval1 = iconText_ms;
		miqt_exec_callback_QWidget_WindowIconTextChanged(slot, sigval1);
	});
}

void QWidget_CustomContextMenuRequested(QWidget* self, QPoint* pos) {
	self->customContextMenuRequested(*pos);
}

void QWidget_connect_CustomContextMenuRequested(QWidget* self, intptr_t slot) {
	MiqtVirtualQWidget::connect(self, static_cast<void (QWidget::*)(const QPoint&)>(&QWidget::customContextMenuRequested), self, [=](const QPoint& pos) {
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
		miqt_exec_callback_QWidget_CustomContextMenuRequested(slot, sigval1);
	});
}

QVariant* QWidget_InputMethodQuery(const QWidget* self, int param1) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

int QWidget_InputMethodHints(const QWidget* self) {
	Qt::InputMethodHints _ret = self->inputMethodHints();
	return static_cast<int>(_ret);
}

void QWidget_SetInputMethodHints(QWidget* self, int hints) {
	self->setInputMethodHints(static_cast<Qt::InputMethodHints>(hints));
}

struct miqt_string QWidget_Tr2(const char* s, const char* c) {
	QString _ret = QWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWidget_TrUtf82(const char* s, const char* c) {
	QString _ret = QWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWidget_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidget_Render2(QWidget* self, QPaintDevice* target, QPoint* targetOffset) {
	self->render(target, *targetOffset);
}

void QWidget_Render3(QWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion) {
	self->render(target, *targetOffset, *sourceRegion);
}

void QWidget_Render4(QWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags) {
	self->render(target, *targetOffset, *sourceRegion, static_cast<QWidget::RenderFlags>(renderFlags));
}

void QWidget_Render22(QWidget* self, QPainter* painter, QPoint* targetOffset) {
	self->render(painter, *targetOffset);
}

void QWidget_Render32(QWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion) {
	self->render(painter, *targetOffset, *sourceRegion);
}

void QWidget_Render42(QWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags) {
	self->render(painter, *targetOffset, *sourceRegion, static_cast<QWidget::RenderFlags>(renderFlags));
}

QPixmap* QWidget_Grab1(QWidget* self, QRect* rectangle) {
	return new QPixmap(self->grab(*rectangle));
}

void QWidget_GrabGesture2(QWidget* self, int typeVal, int flags) {
	self->grabGesture(static_cast<Qt::GestureType>(typeVal), static_cast<Qt::GestureFlags>(flags));
}

int QWidget_GrabShortcut2(QWidget* self, QKeySequence* key, int context) {
	return self->grabShortcut(*key, static_cast<Qt::ShortcutContext>(context));
}

void QWidget_SetShortcutEnabled2(QWidget* self, int id, bool enable) {
	self->setShortcutEnabled(static_cast<int>(id), enable);
}

void QWidget_SetShortcutAutoRepeat2(QWidget* self, int id, bool enable) {
	self->setShortcutAutoRepeat(static_cast<int>(id), enable);
}

void QWidget_SetWindowFlag2(QWidget* self, int param1, bool on) {
	self->setWindowFlag(static_cast<Qt::WindowType>(param1), on);
}

void QWidget_SetAttribute2(QWidget* self, int param1, bool on) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(param1), on);
}

QWidget* QWidget_CreateWindowContainer2(QWindow* window, QWidget* parent) {
	return QWidget::createWindowContainer(window, parent);
}

QWidget* QWidget_CreateWindowContainer3(QWindow* window, QWidget* parent, int flags) {
	return QWidget::createWindowContainer(window, parent, static_cast<Qt::WindowFlags>(flags));
}

void QWidget_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__DevType = slot;
}

int QWidget_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_DevType();
}

void QWidget_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__SetVisible = slot;
}

void QWidget_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_SetVisible(visible);
}

void QWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__SizeHint = slot;
}

QSize* QWidget_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_SizeHint();
}

void QWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QWidget_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_MinimumSizeHint();
}

void QWidget_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__HeightForWidth = slot;
}

int QWidget_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_HeightForWidth(param1);
}

void QWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__HasHeightForWidth = slot;
}

bool QWidget_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_HasHeightForWidth();
}

void QWidget_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QWidget_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_PaintEngine();
}

void QWidget_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__Event = slot;
}

bool QWidget_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWidget*)(self) )->virtualbase_Event(event);
}

void QWidget_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__MousePressEvent = slot;
}

void QWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_MousePressEvent(event);
}

void QWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__MouseReleaseEvent = slot;
}

void QWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__MouseMoveEvent = slot;
}

void QWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QWidget_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__WheelEvent = slot;
}

void QWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_WheelEvent(event);
}

void QWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__KeyPressEvent = slot;
}

void QWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_KeyPressEvent(event);
}

void QWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__KeyReleaseEvent = slot;
}

void QWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QWidget_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__FocusInEvent = slot;
}

void QWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_FocusInEvent(event);
}

void QWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__FocusOutEvent = slot;
}

void QWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_FocusOutEvent(event);
}

void QWidget_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__EnterEvent = slot;
}

void QWidget_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_EnterEvent(event);
}

void QWidget_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__LeaveEvent = slot;
}

void QWidget_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_LeaveEvent(event);
}

void QWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__PaintEvent = slot;
}

void QWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_PaintEvent(event);
}

void QWidget_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__MoveEvent = slot;
}

void QWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_MoveEvent(event);
}

void QWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__ResizeEvent = slot;
}

void QWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_ResizeEvent(event);
}

void QWidget_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__CloseEvent = slot;
}

void QWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_CloseEvent(event);
}

void QWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__ContextMenuEvent = slot;
}

void QWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QWidget_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__TabletEvent = slot;
}

void QWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_TabletEvent(event);
}

void QWidget_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__ActionEvent = slot;
}

void QWidget_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_ActionEvent(event);
}

void QWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__DragEnterEvent = slot;
}

void QWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_DragEnterEvent(event);
}

void QWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__DragMoveEvent = slot;
}

void QWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_DragMoveEvent(event);
}

void QWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__DragLeaveEvent = slot;
}

void QWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__DropEvent = slot;
}

void QWidget_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_DropEvent(event);
}

void QWidget_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__ShowEvent = slot;
}

void QWidget_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_ShowEvent(event);
}

void QWidget_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__HideEvent = slot;
}

void QWidget_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_HideEvent(event);
}

void QWidget_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__NativeEvent = slot;
}

bool QWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQWidget*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__ChangeEvent = slot;
}

void QWidget_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_ChangeEvent(param1);
}

void QWidget_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__Metric = slot;
}

int QWidget_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_Metric(param1);
}

void QWidget_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__InitPainter = slot;
}

void QWidget_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQWidget*)(self) )->virtualbase_InitPainter(painter);
}

void QWidget_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QWidget_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_Redirected(offset);
}

void QWidget_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__SharedPainter = slot;
}

QPainter* QWidget_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_SharedPainter();
}

void QWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__InputMethodEvent = slot;
}

void QWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QWidget_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQWidget*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QWidget_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQWidget*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QWidget_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__EventFilter = slot;
}

bool QWidget_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWidget*)(self) )->virtualbase_EventFilter(watched, event);
}

void QWidget_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__TimerEvent = slot;
}

void QWidget_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_TimerEvent(event);
}

void QWidget_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__ChildEvent = slot;
}

void QWidget_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_ChildEvent(event);
}

void QWidget_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__CustomEvent = slot;
}

void QWidget_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_CustomEvent(event);
}

void QWidget_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__ConnectNotify = slot;
}

void QWidget_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_ConnectNotify(signal);
}

void QWidget_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidget*>( (QWidget*)(self) )->handle__DisconnectNotify = slot;
}

void QWidget_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWidget*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QWidget_Delete(QWidget* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQWidget*>( self );
	} else {
		delete self;
	}
}

