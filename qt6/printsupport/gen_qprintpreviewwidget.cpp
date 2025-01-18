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
#include <QPrintPreviewWidget>
#include <QPrinter>
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
#include <qprintpreviewwidget.h>
#include "gen_qprintpreviewwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPrintPreviewWidget_PaintRequested(intptr_t, QPrinter*);
void miqt_exec_callback_QPrintPreviewWidget_PreviewChanged(intptr_t);
void miqt_exec_callback_QPrintPreviewWidget_SetVisible(void*, intptr_t, bool);
int miqt_exec_callback_QPrintPreviewWidget_DevType(void*, intptr_t);
QSize* miqt_exec_callback_QPrintPreviewWidget_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QPrintPreviewWidget_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QPrintPreviewWidget_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QPrintPreviewWidget_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QPrintPreviewWidget_PaintEngine(void*, intptr_t);
bool miqt_exec_callback_QPrintPreviewWidget_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewWidget_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewWidget_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewWidget_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewWidget_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewWidget_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QPrintPreviewWidget_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPrintPreviewWidget_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPrintPreviewWidget_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPrintPreviewWidget_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPrintPreviewWidget_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QPrintPreviewWidget_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewWidget_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPrintPreviewWidget_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPrintPreviewWidget_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPrintPreviewWidget_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPrintPreviewWidget_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QPrintPreviewWidget_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPrintPreviewWidget_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPrintPreviewWidget_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPrintPreviewWidget_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPrintPreviewWidget_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPrintPreviewWidget_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPrintPreviewWidget_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPrintPreviewWidget_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPrintPreviewWidget_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QPrintPreviewWidget_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QPrintPreviewWidget_Metric(void*, intptr_t, int);
void miqt_exec_callback_QPrintPreviewWidget_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPrintPreviewWidget_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPrintPreviewWidget_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QPrintPreviewWidget_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QPrintPreviewWidget_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QPrintPreviewWidget_FocusNextPrevChild(void*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPrintPreviewWidget final : public QPrintPreviewWidget {
public:

	MiqtVirtualQPrintPreviewWidget(QWidget* parent): QPrintPreviewWidget(parent) {};
	MiqtVirtualQPrintPreviewWidget(QPrinter* printer): QPrintPreviewWidget(printer) {};
	MiqtVirtualQPrintPreviewWidget(): QPrintPreviewWidget() {};
	MiqtVirtualQPrintPreviewWidget(QPrinter* printer, QWidget* parent): QPrintPreviewWidget(printer, parent) {};
	MiqtVirtualQPrintPreviewWidget(QPrinter* printer, QWidget* parent, Qt::WindowFlags flags): QPrintPreviewWidget(printer, parent, flags) {};
	MiqtVirtualQPrintPreviewWidget(QWidget* parent, Qt::WindowFlags flags): QPrintPreviewWidget(parent, flags) {};

	virtual ~MiqtVirtualQPrintPreviewWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QPrintPreviewWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QPrintPreviewWidget_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QPrintPreviewWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QPrintPreviewWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPrintPreviewWidget_DevType(const_cast<MiqtVirtualQPrintPreviewWidget*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QPrintPreviewWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QPrintPreviewWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_SizeHint(const_cast<MiqtVirtualQPrintPreviewWidget*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QPrintPreviewWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QPrintPreviewWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_MinimumSizeHint(const_cast<MiqtVirtualQPrintPreviewWidget*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QPrintPreviewWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QPrintPreviewWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QPrintPreviewWidget_HeightForWidth(const_cast<MiqtVirtualQPrintPreviewWidget*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QPrintPreviewWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QPrintPreviewWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QPrintPreviewWidget_HasHeightForWidth(const_cast<MiqtVirtualQPrintPreviewWidget*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QPrintPreviewWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QPrintPreviewWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_PaintEngine(const_cast<MiqtVirtualQPrintPreviewWidget*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QPrintPreviewWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QPrintPreviewWidget::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPrintPreviewWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QPrintPreviewWidget::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QPrintPreviewWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QPrintPreviewWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QPrintPreviewWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QPrintPreviewWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QPrintPreviewWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QPrintPreviewWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QPrintPreviewWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QPrintPreviewWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QPrintPreviewWidget::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QPrintPreviewWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QPrintPreviewWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QPrintPreviewWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QPrintPreviewWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QPrintPreviewWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QPrintPreviewWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QPrintPreviewWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QPrintPreviewWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QPrintPreviewWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QPrintPreviewWidget::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QPrintPreviewWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QPrintPreviewWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QPrintPreviewWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QPrintPreviewWidget::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QPrintPreviewWidget::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QPrintPreviewWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QPrintPreviewWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QPrintPreviewWidget::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QPrintPreviewWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QPrintPreviewWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QPrintPreviewWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QPrintPreviewWidget::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QPrintPreviewWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QPrintPreviewWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QPrintPreviewWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QPrintPreviewWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QPrintPreviewWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QPrintPreviewWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QPrintPreviewWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QPrintPreviewWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QPrintPreviewWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QPrintPreviewWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QPrintPreviewWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QPrintPreviewWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QPrintPreviewWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QPrintPreviewWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QPrintPreviewWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QPrintPreviewWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QPrintPreviewWidget_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QPrintPreviewWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QPrintPreviewWidget::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QPrintPreviewWidget_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QPrintPreviewWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QPrintPreviewWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewWidget_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QPrintPreviewWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QPrintPreviewWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QPrintPreviewWidget_Metric(const_cast<MiqtVirtualQPrintPreviewWidget*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QPrintPreviewWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QPrintPreviewWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPrintPreviewWidget_InitPainter(const_cast<MiqtVirtualQPrintPreviewWidget*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QPrintPreviewWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QPrintPreviewWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_Redirected(const_cast<MiqtVirtualQPrintPreviewWidget*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QPrintPreviewWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QPrintPreviewWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_SharedPainter(const_cast<MiqtVirtualQPrintPreviewWidget*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QPrintPreviewWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QPrintPreviewWidget::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QPrintPreviewWidget_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QPrintPreviewWidget::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QPrintPreviewWidget::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_InputMethodQuery(const_cast<MiqtVirtualQPrintPreviewWidget*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QPrintPreviewWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QPrintPreviewWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QPrintPreviewWidget_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QPrintPreviewWidget::focusNextPrevChild(next);

	}

};

QPrintPreviewWidget* QPrintPreviewWidget_new(QWidget* parent) {
	return new MiqtVirtualQPrintPreviewWidget(parent);
}

QPrintPreviewWidget* QPrintPreviewWidget_new2(QPrinter* printer) {
	return new MiqtVirtualQPrintPreviewWidget(printer);
}

QPrintPreviewWidget* QPrintPreviewWidget_new3() {
	return new MiqtVirtualQPrintPreviewWidget();
}

QPrintPreviewWidget* QPrintPreviewWidget_new4(QPrinter* printer, QWidget* parent) {
	return new MiqtVirtualQPrintPreviewWidget(printer, parent);
}

QPrintPreviewWidget* QPrintPreviewWidget_new5(QPrinter* printer, QWidget* parent, int flags) {
	return new MiqtVirtualQPrintPreviewWidget(printer, parent, static_cast<Qt::WindowFlags>(flags));
}

QPrintPreviewWidget* QPrintPreviewWidget_new6(QWidget* parent, int flags) {
	return new MiqtVirtualQPrintPreviewWidget(parent, static_cast<Qt::WindowFlags>(flags));
}

void QPrintPreviewWidget_virtbase(QPrintPreviewWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QPrintPreviewWidget_MetaObject(const QPrintPreviewWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPrintPreviewWidget_Metacast(QPrintPreviewWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPrintPreviewWidget_Tr(const char* s) {
	QString _ret = QPrintPreviewWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QPrintPreviewWidget_ZoomFactor(const QPrintPreviewWidget* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

int QPrintPreviewWidget_Orientation(const QPrintPreviewWidget* self) {
	QPageLayout::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

int QPrintPreviewWidget_ViewMode(const QPrintPreviewWidget* self) {
	QPrintPreviewWidget::ViewMode _ret = self->viewMode();
	return static_cast<int>(_ret);
}

int QPrintPreviewWidget_ZoomMode(const QPrintPreviewWidget* self) {
	QPrintPreviewWidget::ZoomMode _ret = self->zoomMode();
	return static_cast<int>(_ret);
}

int QPrintPreviewWidget_CurrentPage(const QPrintPreviewWidget* self) {
	return self->currentPage();
}

int QPrintPreviewWidget_PageCount(const QPrintPreviewWidget* self) {
	return self->pageCount();
}

void QPrintPreviewWidget_SetVisible(QPrintPreviewWidget* self, bool visible) {
	self->setVisible(visible);
}

void QPrintPreviewWidget_Print(QPrintPreviewWidget* self) {
	self->print();
}

void QPrintPreviewWidget_ZoomIn(QPrintPreviewWidget* self) {
	self->zoomIn();
}

void QPrintPreviewWidget_ZoomOut(QPrintPreviewWidget* self) {
	self->zoomOut();
}

void QPrintPreviewWidget_SetZoomFactor(QPrintPreviewWidget* self, double zoomFactor) {
	self->setZoomFactor(static_cast<qreal>(zoomFactor));
}

void QPrintPreviewWidget_SetOrientation(QPrintPreviewWidget* self, int orientation) {
	self->setOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

void QPrintPreviewWidget_SetViewMode(QPrintPreviewWidget* self, int viewMode) {
	self->setViewMode(static_cast<QPrintPreviewWidget::ViewMode>(viewMode));
}

void QPrintPreviewWidget_SetZoomMode(QPrintPreviewWidget* self, int zoomMode) {
	self->setZoomMode(static_cast<QPrintPreviewWidget::ZoomMode>(zoomMode));
}

void QPrintPreviewWidget_SetCurrentPage(QPrintPreviewWidget* self, int pageNumber) {
	self->setCurrentPage(static_cast<int>(pageNumber));
}

void QPrintPreviewWidget_FitToWidth(QPrintPreviewWidget* self) {
	self->fitToWidth();
}

void QPrintPreviewWidget_FitInView(QPrintPreviewWidget* self) {
	self->fitInView();
}

void QPrintPreviewWidget_SetLandscapeOrientation(QPrintPreviewWidget* self) {
	self->setLandscapeOrientation();
}

void QPrintPreviewWidget_SetPortraitOrientation(QPrintPreviewWidget* self) {
	self->setPortraitOrientation();
}

void QPrintPreviewWidget_SetSinglePageViewMode(QPrintPreviewWidget* self) {
	self->setSinglePageViewMode();
}

void QPrintPreviewWidget_SetFacingPagesViewMode(QPrintPreviewWidget* self) {
	self->setFacingPagesViewMode();
}

void QPrintPreviewWidget_SetAllPagesViewMode(QPrintPreviewWidget* self) {
	self->setAllPagesViewMode();
}

void QPrintPreviewWidget_UpdatePreview(QPrintPreviewWidget* self) {
	self->updatePreview();
}

void QPrintPreviewWidget_PaintRequested(QPrintPreviewWidget* self, QPrinter* printer) {
	self->paintRequested(printer);
}

void QPrintPreviewWidget_connect_PaintRequested(QPrintPreviewWidget* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget::connect(self, static_cast<void (QPrintPreviewWidget::*)(QPrinter*)>(&QPrintPreviewWidget::paintRequested), self, [=](QPrinter* printer) {
		QPrinter* sigval1 = printer;
		miqt_exec_callback_QPrintPreviewWidget_PaintRequested(slot, sigval1);
	});
}

void QPrintPreviewWidget_PreviewChanged(QPrintPreviewWidget* self) {
	self->previewChanged();
}

void QPrintPreviewWidget_connect_PreviewChanged(QPrintPreviewWidget* self, intptr_t slot) {
	MiqtVirtualQPrintPreviewWidget::connect(self, static_cast<void (QPrintPreviewWidget::*)()>(&QPrintPreviewWidget::previewChanged), self, [=]() {
		miqt_exec_callback_QPrintPreviewWidget_PreviewChanged(slot);
	});
}

struct miqt_string QPrintPreviewWidget_Tr2(const char* s, const char* c) {
	QString _ret = QPrintPreviewWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPrintPreviewWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrintPreviewWidget_ZoomIn1(QPrintPreviewWidget* self, double zoom) {
	self->zoomIn(static_cast<qreal>(zoom));
}

void QPrintPreviewWidget_ZoomOut1(QPrintPreviewWidget* self, double zoom) {
	self->zoomOut(static_cast<qreal>(zoom));
}

void QPrintPreviewWidget_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__SetVisible = slot;
}

void QPrintPreviewWidget_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_SetVisible(visible);
}

void QPrintPreviewWidget_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__DevType = slot;
}

int QPrintPreviewWidget_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_DevType();
}

void QPrintPreviewWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__SizeHint = slot;
}

QSize* QPrintPreviewWidget_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_SizeHint();
}

void QPrintPreviewWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QPrintPreviewWidget_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_MinimumSizeHint();
}

void QPrintPreviewWidget_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__HeightForWidth = slot;
}

int QPrintPreviewWidget_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_HeightForWidth(param1);
}

void QPrintPreviewWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__HasHeightForWidth = slot;
}

bool QPrintPreviewWidget_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_HasHeightForWidth();
}

void QPrintPreviewWidget_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QPrintPreviewWidget_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_PaintEngine();
}

void QPrintPreviewWidget_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__Event = slot;
}

bool QPrintPreviewWidget_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_Event(event);
}

void QPrintPreviewWidget_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__MousePressEvent = slot;
}

void QPrintPreviewWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_MousePressEvent(event);
}

void QPrintPreviewWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__MouseReleaseEvent = slot;
}

void QPrintPreviewWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QPrintPreviewWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QPrintPreviewWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QPrintPreviewWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__MouseMoveEvent = slot;
}

void QPrintPreviewWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QPrintPreviewWidget_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__WheelEvent = slot;
}

void QPrintPreviewWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_WheelEvent(event);
}

void QPrintPreviewWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__KeyPressEvent = slot;
}

void QPrintPreviewWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_KeyPressEvent(event);
}

void QPrintPreviewWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__KeyReleaseEvent = slot;
}

void QPrintPreviewWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QPrintPreviewWidget_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__FocusInEvent = slot;
}

void QPrintPreviewWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_FocusInEvent(event);
}

void QPrintPreviewWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__FocusOutEvent = slot;
}

void QPrintPreviewWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_FocusOutEvent(event);
}

void QPrintPreviewWidget_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__EnterEvent = slot;
}

void QPrintPreviewWidget_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_EnterEvent(event);
}

void QPrintPreviewWidget_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__LeaveEvent = slot;
}

void QPrintPreviewWidget_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_LeaveEvent(event);
}

void QPrintPreviewWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__PaintEvent = slot;
}

void QPrintPreviewWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_PaintEvent(event);
}

void QPrintPreviewWidget_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__MoveEvent = slot;
}

void QPrintPreviewWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_MoveEvent(event);
}

void QPrintPreviewWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__ResizeEvent = slot;
}

void QPrintPreviewWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_ResizeEvent(event);
}

void QPrintPreviewWidget_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__CloseEvent = slot;
}

void QPrintPreviewWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_CloseEvent(event);
}

void QPrintPreviewWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__ContextMenuEvent = slot;
}

void QPrintPreviewWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QPrintPreviewWidget_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__TabletEvent = slot;
}

void QPrintPreviewWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_TabletEvent(event);
}

void QPrintPreviewWidget_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__ActionEvent = slot;
}

void QPrintPreviewWidget_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_ActionEvent(event);
}

void QPrintPreviewWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__DragEnterEvent = slot;
}

void QPrintPreviewWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_DragEnterEvent(event);
}

void QPrintPreviewWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__DragMoveEvent = slot;
}

void QPrintPreviewWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_DragMoveEvent(event);
}

void QPrintPreviewWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__DragLeaveEvent = slot;
}

void QPrintPreviewWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QPrintPreviewWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__DropEvent = slot;
}

void QPrintPreviewWidget_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_DropEvent(event);
}

void QPrintPreviewWidget_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__ShowEvent = slot;
}

void QPrintPreviewWidget_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_ShowEvent(event);
}

void QPrintPreviewWidget_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__HideEvent = slot;
}

void QPrintPreviewWidget_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_HideEvent(event);
}

void QPrintPreviewWidget_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__NativeEvent = slot;
}

bool QPrintPreviewWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QPrintPreviewWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__ChangeEvent = slot;
}

void QPrintPreviewWidget_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_ChangeEvent(param1);
}

void QPrintPreviewWidget_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__Metric = slot;
}

int QPrintPreviewWidget_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_Metric(param1);
}

void QPrintPreviewWidget_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__InitPainter = slot;
}

void QPrintPreviewWidget_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_InitPainter(painter);
}

void QPrintPreviewWidget_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QPrintPreviewWidget_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_Redirected(offset);
}

void QPrintPreviewWidget_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__SharedPainter = slot;
}

QPainter* QPrintPreviewWidget_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_SharedPainter();
}

void QPrintPreviewWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__InputMethodEvent = slot;
}

void QPrintPreviewWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QPrintPreviewWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QPrintPreviewWidget_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QPrintPreviewWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QPrintPreviewWidget_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQPrintPreviewWidget*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QPrintPreviewWidget_Delete(QPrintPreviewWidget* self) {
	delete self;
}

