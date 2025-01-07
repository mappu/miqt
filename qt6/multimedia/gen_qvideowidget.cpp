#include <QActionEvent>
#include <QByteArray>
#include <QCloseEvent>
#include <QContextMenuEvent>
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
#include <QVideoSink>
#include <QVideoWidget>
#include <QWheelEvent>
#include <QWidget>
#include <qvideowidget.h>
#include "gen_qvideowidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QVideoWidget_FullScreenChanged(intptr_t, bool);
void miqt_exec_callback_QVideoWidget_AspectRatioModeChanged(intptr_t, int);
QSize* miqt_exec_callback_QVideoWidget_SizeHint(void*, intptr_t);
bool miqt_exec_callback_QVideoWidget_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoWidget_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QVideoWidget_HideEvent(void*, intptr_t, QHideEvent*);
void miqt_exec_callback_QVideoWidget_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QVideoWidget_MoveEvent(void*, intptr_t, QMoveEvent*);
int miqt_exec_callback_QVideoWidget_DevType(void*, intptr_t);
void miqt_exec_callback_QVideoWidget_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QVideoWidget_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QVideoWidget_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QVideoWidget_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QVideoWidget_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QVideoWidget_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QVideoWidget_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QVideoWidget_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QVideoWidget_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QVideoWidget_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QVideoWidget_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QVideoWidget_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoWidget_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QVideoWidget_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QVideoWidget_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QVideoWidget_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QVideoWidget_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QVideoWidget_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QVideoWidget_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QVideoWidget_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QVideoWidget_DropEvent(void*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QVideoWidget_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QVideoWidget_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QVideoWidget_Metric(void*, intptr_t, int);
void miqt_exec_callback_QVideoWidget_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QVideoWidget_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QVideoWidget_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QVideoWidget_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QVideoWidget_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QVideoWidget_FocusNextPrevChild(void*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQVideoWidget : public virtual QVideoWidget {
public:

	MiqtVirtualQVideoWidget(QWidget* parent): QVideoWidget(parent) {};
	MiqtVirtualQVideoWidget(): QVideoWidget() {};

	virtual ~MiqtVirtualQVideoWidget() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QVideoWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QVideoWidget_SizeHint(const_cast<MiqtVirtualQVideoWidget*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QVideoWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QVideoWidget::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QVideoWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QVideoWidget::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QVideoWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QVideoWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QVideoWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QVideoWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QVideoWidget::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QVideoWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QVideoWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QVideoWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QVideoWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QVideoWidget_DevType(const_cast<MiqtVirtualQVideoWidget*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QVideoWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QVideoWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QVideoWidget_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QVideoWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QVideoWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QVideoWidget_MinimumSizeHint(const_cast<MiqtVirtualQVideoWidget*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QVideoWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QVideoWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QVideoWidget_HeightForWidth(const_cast<MiqtVirtualQVideoWidget*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QVideoWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QVideoWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QVideoWidget_HasHeightForWidth(const_cast<MiqtVirtualQVideoWidget*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QVideoWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QVideoWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QVideoWidget_PaintEngine(const_cast<MiqtVirtualQVideoWidget*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QVideoWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QVideoWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QVideoWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QVideoWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QVideoWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QVideoWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QVideoWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QVideoWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QVideoWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QVideoWidget::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QVideoWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QVideoWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QVideoWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QVideoWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QVideoWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QVideoWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QVideoWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QVideoWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QVideoWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QVideoWidget::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QVideoWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QVideoWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QVideoWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QVideoWidget::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QVideoWidget::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QVideoWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QVideoWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QVideoWidget::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QVideoWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QVideoWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QVideoWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QVideoWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QVideoWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QVideoWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QVideoWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QVideoWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QVideoWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QVideoWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QVideoWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QVideoWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QVideoWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QVideoWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QVideoWidget::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QVideoWidget_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QVideoWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QVideoWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QVideoWidget_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QVideoWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QVideoWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QVideoWidget_Metric(const_cast<MiqtVirtualQVideoWidget*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QVideoWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QVideoWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QVideoWidget_InitPainter(const_cast<MiqtVirtualQVideoWidget*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QVideoWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QVideoWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QVideoWidget_Redirected(const_cast<MiqtVirtualQVideoWidget*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QVideoWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QVideoWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QVideoWidget_SharedPainter(const_cast<MiqtVirtualQVideoWidget*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QVideoWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QVideoWidget::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QVideoWidget_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QVideoWidget::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QVideoWidget::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QVideoWidget_InputMethodQuery(const_cast<MiqtVirtualQVideoWidget*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QVideoWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QVideoWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QVideoWidget_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QVideoWidget::focusNextPrevChild(next);

	}

};

QVideoWidget* QVideoWidget_new(QWidget* parent) {
	return new MiqtVirtualQVideoWidget(parent);
}

QVideoWidget* QVideoWidget_new2() {
	return new MiqtVirtualQVideoWidget();
}

void QVideoWidget_virtbase(QVideoWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QVideoWidget_MetaObject(const QVideoWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoWidget_Metacast(QVideoWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoWidget_Tr(const char* s) {
	QString _ret = QVideoWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVideoSink* QVideoWidget_VideoSink(const QVideoWidget* self) {
	return self->videoSink();
}

int QVideoWidget_AspectRatioMode(const QVideoWidget* self) {
	Qt::AspectRatioMode _ret = self->aspectRatioMode();
	return static_cast<int>(_ret);
}

QSize* QVideoWidget_SizeHint(const QVideoWidget* self) {
	return new QSize(self->sizeHint());
}

void QVideoWidget_SetFullScreen(QVideoWidget* self, bool fullScreen) {
	self->setFullScreen(fullScreen);
}

void QVideoWidget_SetAspectRatioMode(QVideoWidget* self, int mode) {
	self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

void QVideoWidget_FullScreenChanged(QVideoWidget* self, bool fullScreen) {
	self->fullScreenChanged(fullScreen);
}

void QVideoWidget_connect_FullScreenChanged(QVideoWidget* self, intptr_t slot) {
	MiqtVirtualQVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(bool)>(&QVideoWidget::fullScreenChanged), self, [=](bool fullScreen) {
		bool sigval1 = fullScreen;
		miqt_exec_callback_QVideoWidget_FullScreenChanged(slot, sigval1);
	});
}

void QVideoWidget_AspectRatioModeChanged(QVideoWidget* self, int mode) {
	self->aspectRatioModeChanged(static_cast<Qt::AspectRatioMode>(mode));
}

void QVideoWidget_connect_AspectRatioModeChanged(QVideoWidget* self, intptr_t slot) {
	MiqtVirtualQVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(Qt::AspectRatioMode)>(&QVideoWidget::aspectRatioModeChanged), self, [=](Qt::AspectRatioMode mode) {
		Qt::AspectRatioMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		miqt_exec_callback_QVideoWidget_AspectRatioModeChanged(slot, sigval1);
	});
}

struct miqt_string QVideoWidget_Tr2(const char* s, const char* c) {
	QString _ret = QVideoWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVideoWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__SizeHint = slot;
}

QSize* QVideoWidget_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_SizeHint();
}

void QVideoWidget_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__Event = slot;
}

bool QVideoWidget_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_Event(event);
}

void QVideoWidget_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__ShowEvent = slot;
}

void QVideoWidget_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_ShowEvent(event);
}

void QVideoWidget_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__HideEvent = slot;
}

void QVideoWidget_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_HideEvent(event);
}

void QVideoWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__ResizeEvent = slot;
}

void QVideoWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_ResizeEvent(event);
}

void QVideoWidget_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__MoveEvent = slot;
}

void QVideoWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_MoveEvent(event);
}

void QVideoWidget_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__DevType = slot;
}

int QVideoWidget_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_DevType();
}

void QVideoWidget_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__SetVisible = slot;
}

void QVideoWidget_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_SetVisible(visible);
}

void QVideoWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QVideoWidget_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_MinimumSizeHint();
}

void QVideoWidget_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__HeightForWidth = slot;
}

int QVideoWidget_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_HeightForWidth(param1);
}

void QVideoWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__HasHeightForWidth = slot;
}

bool QVideoWidget_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_HasHeightForWidth();
}

void QVideoWidget_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QVideoWidget_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_PaintEngine();
}

void QVideoWidget_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__MousePressEvent = slot;
}

void QVideoWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_MousePressEvent(event);
}

void QVideoWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__MouseReleaseEvent = slot;
}

void QVideoWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QVideoWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QVideoWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QVideoWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__MouseMoveEvent = slot;
}

void QVideoWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QVideoWidget_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__WheelEvent = slot;
}

void QVideoWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_WheelEvent(event);
}

void QVideoWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__KeyPressEvent = slot;
}

void QVideoWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_KeyPressEvent(event);
}

void QVideoWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__KeyReleaseEvent = slot;
}

void QVideoWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QVideoWidget_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__FocusInEvent = slot;
}

void QVideoWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_FocusInEvent(event);
}

void QVideoWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__FocusOutEvent = slot;
}

void QVideoWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_FocusOutEvent(event);
}

void QVideoWidget_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__EnterEvent = slot;
}

void QVideoWidget_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_EnterEvent(event);
}

void QVideoWidget_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__LeaveEvent = slot;
}

void QVideoWidget_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_LeaveEvent(event);
}

void QVideoWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__PaintEvent = slot;
}

void QVideoWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_PaintEvent(event);
}

void QVideoWidget_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__CloseEvent = slot;
}

void QVideoWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_CloseEvent(event);
}

void QVideoWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__ContextMenuEvent = slot;
}

void QVideoWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QVideoWidget_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__TabletEvent = slot;
}

void QVideoWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_TabletEvent(event);
}

void QVideoWidget_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__ActionEvent = slot;
}

void QVideoWidget_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_ActionEvent(event);
}

void QVideoWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__DragEnterEvent = slot;
}

void QVideoWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_DragEnterEvent(event);
}

void QVideoWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__DragMoveEvent = slot;
}

void QVideoWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_DragMoveEvent(event);
}

void QVideoWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__DragLeaveEvent = slot;
}

void QVideoWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QVideoWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__DropEvent = slot;
}

void QVideoWidget_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_DropEvent(event);
}

void QVideoWidget_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__NativeEvent = slot;
}

bool QVideoWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QVideoWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__ChangeEvent = slot;
}

void QVideoWidget_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_ChangeEvent(param1);
}

void QVideoWidget_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__Metric = slot;
}

int QVideoWidget_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_Metric(param1);
}

void QVideoWidget_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__InitPainter = slot;
}

void QVideoWidget_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_InitPainter(painter);
}

void QVideoWidget_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QVideoWidget_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_Redirected(offset);
}

void QVideoWidget_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__SharedPainter = slot;
}

QPainter* QVideoWidget_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_SharedPainter();
}

void QVideoWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__InputMethodEvent = slot;
}

void QVideoWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QVideoWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QVideoWidget_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQVideoWidget*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QVideoWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QVideoWidget_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQVideoWidget*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QVideoWidget_Delete(QVideoWidget* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQVideoWidget*>( self );
	} else {
		delete self;
	}
}

