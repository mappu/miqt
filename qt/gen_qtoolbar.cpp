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
#include <QToolBar>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtoolbar.h>
#include "gen_qtoolbar.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QToolBar_ActionTriggered(intptr_t, QAction*);
void miqt_exec_callback_QToolBar_MovableChanged(intptr_t, bool);
void miqt_exec_callback_QToolBar_AllowedAreasChanged(intptr_t, int);
void miqt_exec_callback_QToolBar_OrientationChanged(intptr_t, int);
void miqt_exec_callback_QToolBar_IconSizeChanged(intptr_t, QSize*);
void miqt_exec_callback_QToolBar_ToolButtonStyleChanged(intptr_t, int);
void miqt_exec_callback_QToolBar_TopLevelChanged(intptr_t, bool);
void miqt_exec_callback_QToolBar_VisibilityChanged(intptr_t, bool);
void miqt_exec_callback_QToolBar_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QToolBar_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QToolBar_PaintEvent(void*, intptr_t, QPaintEvent*);
bool miqt_exec_callback_QToolBar_Event(void*, intptr_t, QEvent*);
int miqt_exec_callback_QToolBar_DevType(void*, intptr_t);
void miqt_exec_callback_QToolBar_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QToolBar_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QToolBar_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QToolBar_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QToolBar_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QToolBar_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QToolBar_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBar_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBar_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBar_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBar_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QToolBar_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QToolBar_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QToolBar_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QToolBar_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QToolBar_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QToolBar_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QToolBar_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QToolBar_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QToolBar_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QToolBar_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QToolBar_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QToolBar_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QToolBar_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QToolBar_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QToolBar_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QToolBar_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QToolBar_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QToolBar_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QToolBar_Metric(void*, intptr_t, int);
void miqt_exec_callback_QToolBar_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QToolBar_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QToolBar_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QToolBar_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QToolBar_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QToolBar_FocusNextPrevChild(void*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQToolBar final : public QToolBar {
public:

	MiqtVirtualQToolBar(QWidget* parent): QToolBar(parent) {};
	MiqtVirtualQToolBar(const QString& title): QToolBar(title) {};
	MiqtVirtualQToolBar(): QToolBar() {};
	MiqtVirtualQToolBar(const QString& title, QWidget* parent): QToolBar(title, parent) {};

	virtual ~MiqtVirtualQToolBar() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QToolBar::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QToolBar::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QToolBar::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QToolBar::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QToolBar::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QToolBar::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QToolBar::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QToolBar_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QToolBar::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QToolBar::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QToolBar_DevType(const_cast<MiqtVirtualQToolBar*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QToolBar::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QToolBar::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QToolBar_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QToolBar::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QToolBar::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QToolBar_SizeHint(const_cast<MiqtVirtualQToolBar*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QToolBar::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QToolBar::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QToolBar_MinimumSizeHint(const_cast<MiqtVirtualQToolBar*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QToolBar::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QToolBar::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QToolBar_HeightForWidth(const_cast<MiqtVirtualQToolBar*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QToolBar::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QToolBar::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QToolBar_HasHeightForWidth(const_cast<MiqtVirtualQToolBar*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QToolBar::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QToolBar::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QToolBar_PaintEngine(const_cast<MiqtVirtualQToolBar*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QToolBar::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QToolBar::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QToolBar::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QToolBar::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QToolBar::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QToolBar::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QToolBar::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QToolBar::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QToolBar::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QToolBar::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QToolBar::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QToolBar::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QToolBar::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QToolBar::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QToolBar::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QToolBar::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QToolBar::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QToolBar::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QToolBar::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QToolBar::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QToolBar::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QToolBar::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QToolBar::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QToolBar::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QToolBar::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QToolBar::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QToolBar::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QToolBar::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QToolBar::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QToolBar::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QToolBar::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QToolBar::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QToolBar::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QToolBar::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QToolBar::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QToolBar::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QToolBar::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QToolBar::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QToolBar::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QToolBar::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QToolBar::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QToolBar::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QToolBar::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QToolBar::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QToolBar_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QToolBar::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QToolBar::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QToolBar_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QToolBar::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QToolBar::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QToolBar_Metric(const_cast<MiqtVirtualQToolBar*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QToolBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QToolBar::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QToolBar_InitPainter(const_cast<MiqtVirtualQToolBar*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QToolBar::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QToolBar::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QToolBar_Redirected(const_cast<MiqtVirtualQToolBar*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QToolBar::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QToolBar::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QToolBar_SharedPainter(const_cast<MiqtVirtualQToolBar*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QToolBar::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QToolBar::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QToolBar_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QToolBar::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QToolBar::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QToolBar_InputMethodQuery(const_cast<MiqtVirtualQToolBar*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QToolBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QToolBar::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QToolBar_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QToolBar::focusNextPrevChild(next);

	}

};

QToolBar* QToolBar_new(QWidget* parent) {
	return new MiqtVirtualQToolBar(parent);
}

QToolBar* QToolBar_new2(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new MiqtVirtualQToolBar(title_QString);
}

QToolBar* QToolBar_new3() {
	return new MiqtVirtualQToolBar();
}

QToolBar* QToolBar_new4(struct miqt_string title, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new MiqtVirtualQToolBar(title_QString, parent);
}

void QToolBar_virtbase(QToolBar* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QToolBar_MetaObject(const QToolBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QToolBar_Metacast(QToolBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QToolBar_Tr(const char* s) {
	QString _ret = QToolBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBar_TrUtf8(const char* s) {
	QString _ret = QToolBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QToolBar_SetMovable(QToolBar* self, bool movable) {
	self->setMovable(movable);
}

bool QToolBar_IsMovable(const QToolBar* self) {
	return self->isMovable();
}

void QToolBar_SetAllowedAreas(QToolBar* self, int areas) {
	self->setAllowedAreas(static_cast<Qt::ToolBarAreas>(areas));
}

int QToolBar_AllowedAreas(const QToolBar* self) {
	Qt::ToolBarAreas _ret = self->allowedAreas();
	return static_cast<int>(_ret);
}

bool QToolBar_IsAreaAllowed(const QToolBar* self, int area) {
	return self->isAreaAllowed(static_cast<Qt::ToolBarArea>(area));
}

void QToolBar_SetOrientation(QToolBar* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QToolBar_Orientation(const QToolBar* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QToolBar_Clear(QToolBar* self) {
	self->clear();
}

QAction* QToolBar_AddAction(QToolBar* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(text_QString);
}

QAction* QToolBar_AddAction2(QToolBar* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(*icon, text_QString);
}

QAction* QToolBar_AddSeparator(QToolBar* self) {
	return self->addSeparator();
}

QAction* QToolBar_InsertSeparator(QToolBar* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QToolBar_AddWidget(QToolBar* self, QWidget* widget) {
	return self->addWidget(widget);
}

QAction* QToolBar_InsertWidget(QToolBar* self, QAction* before, QWidget* widget) {
	return self->insertWidget(before, widget);
}

QRect* QToolBar_ActionGeometry(const QToolBar* self, QAction* action) {
	return new QRect(self->actionGeometry(action));
}

QAction* QToolBar_ActionAt(const QToolBar* self, QPoint* p) {
	return self->actionAt(*p);
}

QAction* QToolBar_ActionAt2(const QToolBar* self, int x, int y) {
	return self->actionAt(static_cast<int>(x), static_cast<int>(y));
}

QAction* QToolBar_ToggleViewAction(const QToolBar* self) {
	return self->toggleViewAction();
}

QSize* QToolBar_IconSize(const QToolBar* self) {
	return new QSize(self->iconSize());
}

int QToolBar_ToolButtonStyle(const QToolBar* self) {
	Qt::ToolButtonStyle _ret = self->toolButtonStyle();
	return static_cast<int>(_ret);
}

QWidget* QToolBar_WidgetForAction(const QToolBar* self, QAction* action) {
	return self->widgetForAction(action);
}

bool QToolBar_IsFloatable(const QToolBar* self) {
	return self->isFloatable();
}

void QToolBar_SetFloatable(QToolBar* self, bool floatable) {
	self->setFloatable(floatable);
}

bool QToolBar_IsFloating(const QToolBar* self) {
	return self->isFloating();
}

void QToolBar_SetIconSize(QToolBar* self, QSize* iconSize) {
	self->setIconSize(*iconSize);
}

void QToolBar_SetToolButtonStyle(QToolBar* self, int toolButtonStyle) {
	self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QToolBar_ActionTriggered(QToolBar* self, QAction* action) {
	self->actionTriggered(action);
}

void QToolBar_connect_ActionTriggered(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(QAction*)>(&QToolBar::actionTriggered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QToolBar_ActionTriggered(slot, sigval1);
	});
}

void QToolBar_MovableChanged(QToolBar* self, bool movable) {
	self->movableChanged(movable);
}

void QToolBar_connect_MovableChanged(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(bool)>(&QToolBar::movableChanged), self, [=](bool movable) {
		bool sigval1 = movable;
		miqt_exec_callback_QToolBar_MovableChanged(slot, sigval1);
	});
}

void QToolBar_AllowedAreasChanged(QToolBar* self, int allowedAreas) {
	self->allowedAreasChanged(static_cast<Qt::ToolBarAreas>(allowedAreas));
}

void QToolBar_connect_AllowedAreasChanged(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(Qt::ToolBarAreas)>(&QToolBar::allowedAreasChanged), self, [=](Qt::ToolBarAreas allowedAreas) {
		Qt::ToolBarAreas allowedAreas_ret = allowedAreas;
		int sigval1 = static_cast<int>(allowedAreas_ret);
		miqt_exec_callback_QToolBar_AllowedAreasChanged(slot, sigval1);
	});
}

void QToolBar_OrientationChanged(QToolBar* self, int orientation) {
	self->orientationChanged(static_cast<Qt::Orientation>(orientation));
}

void QToolBar_connect_OrientationChanged(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(Qt::Orientation)>(&QToolBar::orientationChanged), self, [=](Qt::Orientation orientation) {
		Qt::Orientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		miqt_exec_callback_QToolBar_OrientationChanged(slot, sigval1);
	});
}

void QToolBar_IconSizeChanged(QToolBar* self, QSize* iconSize) {
	self->iconSizeChanged(*iconSize);
}

void QToolBar_connect_IconSizeChanged(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(const QSize&)>(&QToolBar::iconSizeChanged), self, [=](const QSize& iconSize) {
		const QSize& iconSize_ret = iconSize;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&iconSize_ret);
		miqt_exec_callback_QToolBar_IconSizeChanged(slot, sigval1);
	});
}

void QToolBar_ToolButtonStyleChanged(QToolBar* self, int toolButtonStyle) {
	self->toolButtonStyleChanged(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QToolBar_connect_ToolButtonStyleChanged(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(Qt::ToolButtonStyle)>(&QToolBar::toolButtonStyleChanged), self, [=](Qt::ToolButtonStyle toolButtonStyle) {
		Qt::ToolButtonStyle toolButtonStyle_ret = toolButtonStyle;
		int sigval1 = static_cast<int>(toolButtonStyle_ret);
		miqt_exec_callback_QToolBar_ToolButtonStyleChanged(slot, sigval1);
	});
}

void QToolBar_TopLevelChanged(QToolBar* self, bool topLevel) {
	self->topLevelChanged(topLevel);
}

void QToolBar_connect_TopLevelChanged(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(bool)>(&QToolBar::topLevelChanged), self, [=](bool topLevel) {
		bool sigval1 = topLevel;
		miqt_exec_callback_QToolBar_TopLevelChanged(slot, sigval1);
	});
}

void QToolBar_VisibilityChanged(QToolBar* self, bool visible) {
	self->visibilityChanged(visible);
}

void QToolBar_connect_VisibilityChanged(QToolBar* self, intptr_t slot) {
	MiqtVirtualQToolBar::connect(self, static_cast<void (QToolBar::*)(bool)>(&QToolBar::visibilityChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QToolBar_VisibilityChanged(slot, sigval1);
	});
}

struct miqt_string QToolBar_Tr2(const char* s, const char* c) {
	QString _ret = QToolBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QToolBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBar_TrUtf82(const char* s, const char* c) {
	QString _ret = QToolBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBar_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QToolBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QToolBar_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QToolBar_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_ActionEvent(event);
}

bool QToolBar_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QToolBar_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_ChangeEvent(event);
}

bool QToolBar_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QToolBar_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_PaintEvent(event);
}

bool QToolBar_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QToolBar_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQToolBar*)(self) )->virtualbase_Event(event);
}

bool QToolBar_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QToolBar_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQToolBar*)(self) )->virtualbase_DevType();
}

bool QToolBar_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QToolBar_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_SetVisible(visible);
}

bool QToolBar_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QToolBar_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQToolBar*)(self) )->virtualbase_SizeHint();
}

bool QToolBar_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QToolBar_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQToolBar*)(self) )->virtualbase_MinimumSizeHint();
}

bool QToolBar_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QToolBar_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQToolBar*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QToolBar_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QToolBar_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQToolBar*)(self) )->virtualbase_HasHeightForWidth();
}

bool QToolBar_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QToolBar_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQToolBar*)(self) )->virtualbase_PaintEngine();
}

bool QToolBar_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QToolBar_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_MousePressEvent(event);
}

bool QToolBar_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QToolBar_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QToolBar_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QToolBar_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QToolBar_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QToolBar_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QToolBar_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QToolBar_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_WheelEvent(event);
}

bool QToolBar_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QToolBar_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QToolBar_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QToolBar_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QToolBar_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QToolBar_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_FocusInEvent(event);
}

bool QToolBar_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QToolBar_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QToolBar_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QToolBar_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_EnterEvent(event);
}

bool QToolBar_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QToolBar_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_LeaveEvent(event);
}

bool QToolBar_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QToolBar_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_MoveEvent(event);
}

bool QToolBar_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QToolBar_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_ResizeEvent(event);
}

bool QToolBar_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QToolBar_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_CloseEvent(event);
}

bool QToolBar_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QToolBar_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QToolBar_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QToolBar_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_TabletEvent(event);
}

bool QToolBar_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QToolBar_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QToolBar_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QToolBar_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QToolBar_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QToolBar_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QToolBar_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QToolBar_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_DropEvent(event);
}

bool QToolBar_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QToolBar_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_ShowEvent(event);
}

bool QToolBar_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QToolBar_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_HideEvent(event);
}

bool QToolBar_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QToolBar_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQToolBar*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QToolBar_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QToolBar_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQToolBar*)(self) )->virtualbase_Metric(param1);
}

bool QToolBar_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QToolBar_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQToolBar*)(self) )->virtualbase_InitPainter(painter);
}

bool QToolBar_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QToolBar_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQToolBar*)(self) )->virtualbase_Redirected(offset);
}

bool QToolBar_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QToolBar_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQToolBar*)(self) )->virtualbase_SharedPainter();
}

bool QToolBar_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QToolBar_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQToolBar*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QToolBar_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QToolBar_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQToolBar*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QToolBar_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQToolBar* self_cast = dynamic_cast<MiqtVirtualQToolBar*>( (QToolBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QToolBar_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQToolBar*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QToolBar_Delete(QToolBar* self) {
	delete self;
}

