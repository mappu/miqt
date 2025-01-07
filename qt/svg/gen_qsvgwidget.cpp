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
#include <QSvgRenderer>
#include <QSvgWidget>
#include <QTabletEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsvgwidget.h>
#include "gen_qsvgwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QSvgWidget_SizeHint(void*, intptr_t);
void miqt_exec_callback_QSvgWidget_PaintEvent(void*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QSvgWidget_DevType(void*, intptr_t);
void miqt_exec_callback_QSvgWidget_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QSvgWidget_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QSvgWidget_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QSvgWidget_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QSvgWidget_PaintEngine(void*, intptr_t);
bool miqt_exec_callback_QSvgWidget_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSvgWidget_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSvgWidget_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSvgWidget_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSvgWidget_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSvgWidget_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QSvgWidget_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSvgWidget_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSvgWidget_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSvgWidget_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSvgWidget_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSvgWidget_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSvgWidget_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QSvgWidget_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QSvgWidget_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QSvgWidget_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QSvgWidget_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QSvgWidget_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QSvgWidget_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QSvgWidget_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QSvgWidget_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QSvgWidget_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QSvgWidget_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QSvgWidget_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QSvgWidget_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QSvgWidget_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QSvgWidget_Metric(void*, intptr_t, int);
void miqt_exec_callback_QSvgWidget_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QSvgWidget_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QSvgWidget_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QSvgWidget_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QSvgWidget_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QSvgWidget_FocusNextPrevChild(void*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSvgWidget : public virtual QSvgWidget {
public:

	MiqtVirtualQSvgWidget(QWidget* parent): QSvgWidget(parent) {};
	MiqtVirtualQSvgWidget(): QSvgWidget() {};
	MiqtVirtualQSvgWidget(const QString& file): QSvgWidget(file) {};
	MiqtVirtualQSvgWidget(const QString& file, QWidget* parent): QSvgWidget(file, parent) {};

	virtual ~MiqtVirtualQSvgWidget() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QSvgWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSvgWidget_SizeHint(const_cast<MiqtVirtualQSvgWidget*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QSvgWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QSvgWidget::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QSvgWidget::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QSvgWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QSvgWidget_DevType(const_cast<MiqtVirtualQSvgWidget*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QSvgWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QSvgWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QSvgWidget_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QSvgWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QSvgWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSvgWidget_MinimumSizeHint(const_cast<MiqtVirtualQSvgWidget*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QSvgWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QSvgWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QSvgWidget_HeightForWidth(const_cast<MiqtVirtualQSvgWidget*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QSvgWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QSvgWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QSvgWidget_HasHeightForWidth(const_cast<MiqtVirtualQSvgWidget*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QSvgWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QSvgWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QSvgWidget_PaintEngine(const_cast<MiqtVirtualQSvgWidget*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QSvgWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSvgWidget::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSvgWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSvgWidget::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QSvgWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QSvgWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QSvgWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QSvgWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QSvgWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QSvgWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QSvgWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QSvgWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QSvgWidget::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QSvgWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QSvgWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QSvgWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QSvgWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QSvgWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QSvgWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QSvgWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QSvgWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QSvgWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QSvgWidget::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QSvgWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QSvgWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QSvgWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QSvgWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QSvgWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QSvgWidget::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QSvgWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QSvgWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QSvgWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QSvgWidget::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QSvgWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QSvgWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QSvgWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QSvgWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QSvgWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QSvgWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QSvgWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QSvgWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QSvgWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QSvgWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QSvgWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QSvgWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QSvgWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QSvgWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QSvgWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QSvgWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QSvgWidget_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QSvgWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QSvgWidget::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QSvgWidget_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QSvgWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QSvgWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QSvgWidget_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QSvgWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QSvgWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QSvgWidget_Metric(const_cast<MiqtVirtualQSvgWidget*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QSvgWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QSvgWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QSvgWidget_InitPainter(const_cast<MiqtVirtualQSvgWidget*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QSvgWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QSvgWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QSvgWidget_Redirected(const_cast<MiqtVirtualQSvgWidget*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QSvgWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QSvgWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QSvgWidget_SharedPainter(const_cast<MiqtVirtualQSvgWidget*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QSvgWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QSvgWidget::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QSvgWidget_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QSvgWidget::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QSvgWidget::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QSvgWidget_InputMethodQuery(const_cast<MiqtVirtualQSvgWidget*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QSvgWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QSvgWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QSvgWidget_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QSvgWidget::focusNextPrevChild(next);

	}

};

QSvgWidget* QSvgWidget_new(QWidget* parent) {
	return new MiqtVirtualQSvgWidget(parent);
}

QSvgWidget* QSvgWidget_new2() {
	return new MiqtVirtualQSvgWidget();
}

QSvgWidget* QSvgWidget_new3(struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return new MiqtVirtualQSvgWidget(file_QString);
}

QSvgWidget* QSvgWidget_new4(struct miqt_string file, QWidget* parent) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return new MiqtVirtualQSvgWidget(file_QString, parent);
}

void QSvgWidget_virtbase(QSvgWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QSvgWidget_MetaObject(const QSvgWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSvgWidget_Metacast(QSvgWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSvgWidget_Tr(const char* s) {
	QString _ret = QSvgWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgWidget_TrUtf8(const char* s) {
	QString _ret = QSvgWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSvgRenderer* QSvgWidget_Renderer(const QSvgWidget* self) {
	return self->renderer();
}

QSize* QSvgWidget_SizeHint(const QSvgWidget* self) {
	return new QSize(self->sizeHint());
}

void QSvgWidget_Load(QSvgWidget* self, struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	self->load(file_QString);
}

void QSvgWidget_LoadWithContents(QSvgWidget* self, struct miqt_string contents) {
	QByteArray contents_QByteArray(contents.data, contents.len);
	self->load(contents_QByteArray);
}

struct miqt_string QSvgWidget_Tr2(const char* s, const char* c) {
	QString _ret = QSvgWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSvgWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgWidget_TrUtf82(const char* s, const char* c) {
	QString _ret = QSvgWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgWidget_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSvgWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSvgWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__SizeHint = slot;
}

QSize* QSvgWidget_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQSvgWidget*)(self) )->virtualbase_SizeHint();
}

void QSvgWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__PaintEvent = slot;
}

void QSvgWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_PaintEvent(event);
}

void QSvgWidget_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__DevType = slot;
}

int QSvgWidget_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQSvgWidget*)(self) )->virtualbase_DevType();
}

void QSvgWidget_override_virtual_SetVisible(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__SetVisible = slot;
}

void QSvgWidget_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_SetVisible(visible);
}

void QSvgWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QSvgWidget_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQSvgWidget*)(self) )->virtualbase_MinimumSizeHint();
}

void QSvgWidget_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__HeightForWidth = slot;
}

int QSvgWidget_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQSvgWidget*)(self) )->virtualbase_HeightForWidth(param1);
}

void QSvgWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__HasHeightForWidth = slot;
}

bool QSvgWidget_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQSvgWidget*)(self) )->virtualbase_HasHeightForWidth();
}

void QSvgWidget_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QSvgWidget_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQSvgWidget*)(self) )->virtualbase_PaintEngine();
}

void QSvgWidget_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__Event = slot;
}

bool QSvgWidget_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_Event(event);
}

void QSvgWidget_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__MousePressEvent = slot;
}

void QSvgWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_MousePressEvent(event);
}

void QSvgWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__MouseReleaseEvent = slot;
}

void QSvgWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QSvgWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QSvgWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QSvgWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__MouseMoveEvent = slot;
}

void QSvgWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QSvgWidget_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__WheelEvent = slot;
}

void QSvgWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_WheelEvent(event);
}

void QSvgWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__KeyPressEvent = slot;
}

void QSvgWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_KeyPressEvent(event);
}

void QSvgWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__KeyReleaseEvent = slot;
}

void QSvgWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QSvgWidget_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__FocusInEvent = slot;
}

void QSvgWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_FocusInEvent(event);
}

void QSvgWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__FocusOutEvent = slot;
}

void QSvgWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_FocusOutEvent(event);
}

void QSvgWidget_override_virtual_EnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__EnterEvent = slot;
}

void QSvgWidget_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_EnterEvent(event);
}

void QSvgWidget_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__LeaveEvent = slot;
}

void QSvgWidget_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_LeaveEvent(event);
}

void QSvgWidget_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__MoveEvent = slot;
}

void QSvgWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_MoveEvent(event);
}

void QSvgWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__ResizeEvent = slot;
}

void QSvgWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_ResizeEvent(event);
}

void QSvgWidget_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__CloseEvent = slot;
}

void QSvgWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_CloseEvent(event);
}

void QSvgWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__ContextMenuEvent = slot;
}

void QSvgWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QSvgWidget_override_virtual_TabletEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__TabletEvent = slot;
}

void QSvgWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_TabletEvent(event);
}

void QSvgWidget_override_virtual_ActionEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__ActionEvent = slot;
}

void QSvgWidget_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_ActionEvent(event);
}

void QSvgWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__DragEnterEvent = slot;
}

void QSvgWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_DragEnterEvent(event);
}

void QSvgWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__DragMoveEvent = slot;
}

void QSvgWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_DragMoveEvent(event);
}

void QSvgWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__DragLeaveEvent = slot;
}

void QSvgWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QSvgWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__DropEvent = slot;
}

void QSvgWidget_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_DropEvent(event);
}

void QSvgWidget_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__ShowEvent = slot;
}

void QSvgWidget_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_ShowEvent(event);
}

void QSvgWidget_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__HideEvent = slot;
}

void QSvgWidget_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_HideEvent(event);
}

void QSvgWidget_override_virtual_NativeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__NativeEvent = slot;
}

bool QSvgWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

void QSvgWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__ChangeEvent = slot;
}

void QSvgWidget_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_ChangeEvent(param1);
}

void QSvgWidget_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__Metric = slot;
}

int QSvgWidget_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQSvgWidget*)(self) )->virtualbase_Metric(param1);
}

void QSvgWidget_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__InitPainter = slot;
}

void QSvgWidget_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQSvgWidget*)(self) )->virtualbase_InitPainter(painter);
}

void QSvgWidget_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QSvgWidget_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQSvgWidget*)(self) )->virtualbase_Redirected(offset);
}

void QSvgWidget_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__SharedPainter = slot;
}

QPainter* QSvgWidget_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQSvgWidget*)(self) )->virtualbase_SharedPainter();
}

void QSvgWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__InputMethodEvent = slot;
}

void QSvgWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_InputMethodEvent(param1);
}

void QSvgWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QSvgWidget_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQSvgWidget*)(self) )->virtualbase_InputMethodQuery(param1);
}

void QSvgWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QSvgWidget_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQSvgWidget*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QSvgWidget_Delete(QSvgWidget* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQSvgWidget*>( self );
	} else {
		delete self;
	}
}

