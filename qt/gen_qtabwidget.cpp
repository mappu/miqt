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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabBar>
#include <QTabWidget>
#include <QTabletEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtabwidget.h>
#include "gen_qtabwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTabWidget_CurrentChanged(intptr_t, int);
void miqt_exec_callback_QTabWidget_TabCloseRequested(intptr_t, int);
void miqt_exec_callback_QTabWidget_TabBarClicked(intptr_t, int);
void miqt_exec_callback_QTabWidget_TabBarDoubleClicked(intptr_t, int);
QSize* miqt_exec_callback_QTabWidget_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QTabWidget_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QTabWidget_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QTabWidget_HasHeightForWidth(void*, intptr_t);
void miqt_exec_callback_QTabWidget_TabInserted(void*, intptr_t, int);
void miqt_exec_callback_QTabWidget_TabRemoved(void*, intptr_t, int);
void miqt_exec_callback_QTabWidget_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTabWidget_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTabWidget_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTabWidget_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTabWidget_ChangeEvent(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QTabWidget_Event(void*, intptr_t, QEvent*);
int miqt_exec_callback_QTabWidget_DevType(void*, intptr_t);
void miqt_exec_callback_QTabWidget_SetVisible(void*, intptr_t, bool);
QPaintEngine* miqt_exec_callback_QTabWidget_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QTabWidget_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTabWidget_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTabWidget_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTabWidget_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTabWidget_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QTabWidget_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTabWidget_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTabWidget_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTabWidget_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QTabWidget_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QTabWidget_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTabWidget_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTabWidget_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTabWidget_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTabWidget_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTabWidget_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTabWidget_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QTabWidget_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTabWidget_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTabWidget_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QTabWidget_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QTabWidget_Metric(void*, intptr_t, int);
void miqt_exec_callback_QTabWidget_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTabWidget_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTabWidget_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QTabWidget_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QTabWidget_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QTabWidget_FocusNextPrevChild(void*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTabWidget final : public QTabWidget {
public:

	MiqtVirtualQTabWidget(QWidget* parent): QTabWidget(parent) {};
	MiqtVirtualQTabWidget(): QTabWidget() {};

	virtual ~MiqtVirtualQTabWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QTabWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTabWidget_SizeHint(const_cast<MiqtVirtualQTabWidget*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QTabWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QTabWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QTabWidget_MinimumSizeHint(const_cast<MiqtVirtualQTabWidget*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QTabWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int width) const override {
		if (handle__HeightForWidth == 0) {
			return QTabWidget::heightForWidth(width);
		}
		
		int sigval1 = width;

		int callback_return_value = miqt_exec_callback_QTabWidget_HeightForWidth(const_cast<MiqtVirtualQTabWidget*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int width) const {

		return QTabWidget::heightForWidth(static_cast<int>(width));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QTabWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QTabWidget_HasHeightForWidth(const_cast<MiqtVirtualQTabWidget*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QTabWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabInserted(int index) override {
		if (handle__TabInserted == 0) {
			QTabWidget::tabInserted(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QTabWidget_TabInserted(this, handle__TabInserted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabInserted(int index) {

		QTabWidget::tabInserted(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabRemoved(int index) override {
		if (handle__TabRemoved == 0) {
			QTabWidget::tabRemoved(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QTabWidget_TabRemoved(this, handle__TabRemoved, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabRemoved(int index) {

		QTabWidget::tabRemoved(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QTabWidget::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QTabWidget_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QTabWidget::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QTabWidget::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QTabWidget_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QTabWidget::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QTabWidget::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QTabWidget_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QTabWidget::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QTabWidget::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QTabWidget_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QTabWidget::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QTabWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QTabWidget_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QTabWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QTabWidget::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QTabWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QTabWidget::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QTabWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QTabWidget_DevType(const_cast<MiqtVirtualQTabWidget*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QTabWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QTabWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QTabWidget_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QTabWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QTabWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QTabWidget_PaintEngine(const_cast<MiqtVirtualQTabWidget*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QTabWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QTabWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QTabWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QTabWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QTabWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QTabWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QTabWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QTabWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QTabWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QTabWidget::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QTabWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QTabWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QTabWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QTabWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QTabWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QTabWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QTabWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QTabWidget::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QTabWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QTabWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QTabWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QTabWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QTabWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QTabWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QTabWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QTabWidget::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QTabWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QTabWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QTabWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QTabWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QTabWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QTabWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QTabWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QTabWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QTabWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QTabWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QTabWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QTabWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QTabWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QTabWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QTabWidget_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QTabWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QTabWidget::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QTabWidget_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QTabWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QTabWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QTabWidget_Metric(const_cast<MiqtVirtualQTabWidget*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QTabWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QTabWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QTabWidget_InitPainter(const_cast<MiqtVirtualQTabWidget*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QTabWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QTabWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QTabWidget_Redirected(const_cast<MiqtVirtualQTabWidget*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QTabWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QTabWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QTabWidget_SharedPainter(const_cast<MiqtVirtualQTabWidget*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QTabWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QTabWidget::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QTabWidget_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QTabWidget::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QTabWidget::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QTabWidget_InputMethodQuery(const_cast<MiqtVirtualQTabWidget*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QTabWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QTabWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QTabWidget_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QTabWidget::focusNextPrevChild(next);

	}

};

QTabWidget* QTabWidget_new(QWidget* parent) {
	return new MiqtVirtualQTabWidget(parent);
}

QTabWidget* QTabWidget_new2() {
	return new MiqtVirtualQTabWidget();
}

void QTabWidget_virtbase(QTabWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QTabWidget_MetaObject(const QTabWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTabWidget_Metacast(QTabWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTabWidget_Tr(const char* s) {
	QString _ret = QTabWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTabWidget_TrUtf8(const char* s) {
	QString _ret = QTabWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTabWidget_AddTab(QTabWidget* self, QWidget* widget, struct miqt_string param2) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	return self->addTab(widget, param2_QString);
}

int QTabWidget_AddTab2(QTabWidget* self, QWidget* widget, QIcon* icon, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return self->addTab(widget, *icon, label_QString);
}

int QTabWidget_InsertTab(QTabWidget* self, int index, QWidget* widget, struct miqt_string param3) {
	QString param3_QString = QString::fromUtf8(param3.data, param3.len);
	return self->insertTab(static_cast<int>(index), widget, param3_QString);
}

int QTabWidget_InsertTab2(QTabWidget* self, int index, QWidget* widget, QIcon* icon, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return self->insertTab(static_cast<int>(index), widget, *icon, label_QString);
}

void QTabWidget_RemoveTab(QTabWidget* self, int index) {
	self->removeTab(static_cast<int>(index));
}

bool QTabWidget_IsTabEnabled(const QTabWidget* self, int index) {
	return self->isTabEnabled(static_cast<int>(index));
}

void QTabWidget_SetTabEnabled(QTabWidget* self, int index, bool enabled) {
	self->setTabEnabled(static_cast<int>(index), enabled);
}

bool QTabWidget_IsTabVisible(const QTabWidget* self, int index) {
	return self->isTabVisible(static_cast<int>(index));
}

void QTabWidget_SetTabVisible(QTabWidget* self, int index, bool visible) {
	self->setTabVisible(static_cast<int>(index), visible);
}

struct miqt_string QTabWidget_TabText(const QTabWidget* self, int index) {
	QString _ret = self->tabText(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTabWidget_SetTabText(QTabWidget* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setTabText(static_cast<int>(index), text_QString);
}

QIcon* QTabWidget_TabIcon(const QTabWidget* self, int index) {
	return new QIcon(self->tabIcon(static_cast<int>(index)));
}

void QTabWidget_SetTabIcon(QTabWidget* self, int index, QIcon* icon) {
	self->setTabIcon(static_cast<int>(index), *icon);
}

void QTabWidget_SetTabToolTip(QTabWidget* self, int index, struct miqt_string tip) {
	QString tip_QString = QString::fromUtf8(tip.data, tip.len);
	self->setTabToolTip(static_cast<int>(index), tip_QString);
}

struct miqt_string QTabWidget_TabToolTip(const QTabWidget* self, int index) {
	QString _ret = self->tabToolTip(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTabWidget_SetTabWhatsThis(QTabWidget* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setTabWhatsThis(static_cast<int>(index), text_QString);
}

struct miqt_string QTabWidget_TabWhatsThis(const QTabWidget* self, int index) {
	QString _ret = self->tabWhatsThis(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTabWidget_CurrentIndex(const QTabWidget* self) {
	return self->currentIndex();
}

QWidget* QTabWidget_CurrentWidget(const QTabWidget* self) {
	return self->currentWidget();
}

QWidget* QTabWidget_Widget(const QTabWidget* self, int index) {
	return self->widget(static_cast<int>(index));
}

int QTabWidget_IndexOf(const QTabWidget* self, QWidget* widget) {
	return self->indexOf(widget);
}

int QTabWidget_Count(const QTabWidget* self) {
	return self->count();
}

int QTabWidget_TabPosition(const QTabWidget* self) {
	QTabWidget::TabPosition _ret = self->tabPosition();
	return static_cast<int>(_ret);
}

void QTabWidget_SetTabPosition(QTabWidget* self, int position) {
	self->setTabPosition(static_cast<QTabWidget::TabPosition>(position));
}

bool QTabWidget_TabsClosable(const QTabWidget* self) {
	return self->tabsClosable();
}

void QTabWidget_SetTabsClosable(QTabWidget* self, bool closeable) {
	self->setTabsClosable(closeable);
}

bool QTabWidget_IsMovable(const QTabWidget* self) {
	return self->isMovable();
}

void QTabWidget_SetMovable(QTabWidget* self, bool movable) {
	self->setMovable(movable);
}

int QTabWidget_TabShape(const QTabWidget* self) {
	QTabWidget::TabShape _ret = self->tabShape();
	return static_cast<int>(_ret);
}

void QTabWidget_SetTabShape(QTabWidget* self, int s) {
	self->setTabShape(static_cast<QTabWidget::TabShape>(s));
}

QSize* QTabWidget_SizeHint(const QTabWidget* self) {
	return new QSize(self->sizeHint());
}

QSize* QTabWidget_MinimumSizeHint(const QTabWidget* self) {
	return new QSize(self->minimumSizeHint());
}

int QTabWidget_HeightForWidth(const QTabWidget* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

bool QTabWidget_HasHeightForWidth(const QTabWidget* self) {
	return self->hasHeightForWidth();
}

void QTabWidget_SetCornerWidget(QTabWidget* self, QWidget* w) {
	self->setCornerWidget(w);
}

QWidget* QTabWidget_CornerWidget(const QTabWidget* self) {
	return self->cornerWidget();
}

int QTabWidget_ElideMode(const QTabWidget* self) {
	Qt::TextElideMode _ret = self->elideMode();
	return static_cast<int>(_ret);
}

void QTabWidget_SetElideMode(QTabWidget* self, int mode) {
	self->setElideMode(static_cast<Qt::TextElideMode>(mode));
}

QSize* QTabWidget_IconSize(const QTabWidget* self) {
	return new QSize(self->iconSize());
}

void QTabWidget_SetIconSize(QTabWidget* self, QSize* size) {
	self->setIconSize(*size);
}

bool QTabWidget_UsesScrollButtons(const QTabWidget* self) {
	return self->usesScrollButtons();
}

void QTabWidget_SetUsesScrollButtons(QTabWidget* self, bool useButtons) {
	self->setUsesScrollButtons(useButtons);
}

bool QTabWidget_DocumentMode(const QTabWidget* self) {
	return self->documentMode();
}

void QTabWidget_SetDocumentMode(QTabWidget* self, bool set) {
	self->setDocumentMode(set);
}

bool QTabWidget_TabBarAutoHide(const QTabWidget* self) {
	return self->tabBarAutoHide();
}

void QTabWidget_SetTabBarAutoHide(QTabWidget* self, bool enabled) {
	self->setTabBarAutoHide(enabled);
}

void QTabWidget_Clear(QTabWidget* self) {
	self->clear();
}

QTabBar* QTabWidget_TabBar(const QTabWidget* self) {
	return self->tabBar();
}

void QTabWidget_SetCurrentIndex(QTabWidget* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QTabWidget_SetCurrentWidget(QTabWidget* self, QWidget* widget) {
	self->setCurrentWidget(widget);
}

void QTabWidget_CurrentChanged(QTabWidget* self, int index) {
	self->currentChanged(static_cast<int>(index));
}

void QTabWidget_connect_CurrentChanged(QTabWidget* self, intptr_t slot) {
	MiqtVirtualQTabWidget::connect(self, static_cast<void (QTabWidget::*)(int)>(&QTabWidget::currentChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QTabWidget_CurrentChanged(slot, sigval1);
	});
}

void QTabWidget_TabCloseRequested(QTabWidget* self, int index) {
	self->tabCloseRequested(static_cast<int>(index));
}

void QTabWidget_connect_TabCloseRequested(QTabWidget* self, intptr_t slot) {
	MiqtVirtualQTabWidget::connect(self, static_cast<void (QTabWidget::*)(int)>(&QTabWidget::tabCloseRequested), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QTabWidget_TabCloseRequested(slot, sigval1);
	});
}

void QTabWidget_TabBarClicked(QTabWidget* self, int index) {
	self->tabBarClicked(static_cast<int>(index));
}

void QTabWidget_connect_TabBarClicked(QTabWidget* self, intptr_t slot) {
	MiqtVirtualQTabWidget::connect(self, static_cast<void (QTabWidget::*)(int)>(&QTabWidget::tabBarClicked), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QTabWidget_TabBarClicked(slot, sigval1);
	});
}

void QTabWidget_TabBarDoubleClicked(QTabWidget* self, int index) {
	self->tabBarDoubleClicked(static_cast<int>(index));
}

void QTabWidget_connect_TabBarDoubleClicked(QTabWidget* self, intptr_t slot) {
	MiqtVirtualQTabWidget::connect(self, static_cast<void (QTabWidget::*)(int)>(&QTabWidget::tabBarDoubleClicked), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QTabWidget_TabBarDoubleClicked(slot, sigval1);
	});
}

struct miqt_string QTabWidget_Tr2(const char* s, const char* c) {
	QString _ret = QTabWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTabWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTabWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTabWidget_TrUtf82(const char* s, const char* c) {
	QString _ret = QTabWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTabWidget_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTabWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTabWidget_SetCornerWidget2(QTabWidget* self, QWidget* w, int corner) {
	self->setCornerWidget(w, static_cast<Qt::Corner>(corner));
}

QWidget* QTabWidget_CornerWidget1(const QTabWidget* self, int corner) {
	return self->cornerWidget(static_cast<Qt::Corner>(corner));
}

bool QTabWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QTabWidget_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_SizeHint();
}

bool QTabWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QTabWidget_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_MinimumSizeHint();
}

bool QTabWidget_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QTabWidget_virtualbase_HeightForWidth(const void* self, int width) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_HeightForWidth(width);
}

bool QTabWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QTabWidget_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_HasHeightForWidth();
}

bool QTabWidget_override_virtual_TabInserted(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabInserted = slot;
	return true;
}

void QTabWidget_virtualbase_TabInserted(void* self, int index) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_TabInserted(index);
}

bool QTabWidget_override_virtual_TabRemoved(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabRemoved = slot;
	return true;
}

void QTabWidget_virtualbase_TabRemoved(void* self, int index) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_TabRemoved(index);
}

bool QTabWidget_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QTabWidget_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_ShowEvent(param1);
}

bool QTabWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QTabWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QTabWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QTabWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QTabWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QTabWidget_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_PaintEvent(param1);
}

bool QTabWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QTabWidget_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QTabWidget_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QTabWidget_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQTabWidget*)(self) )->virtualbase_Event(param1);
}

bool QTabWidget_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QTabWidget_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_DevType();
}

bool QTabWidget_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QTabWidget_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_SetVisible(visible);
}

bool QTabWidget_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QTabWidget_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_PaintEngine();
}

bool QTabWidget_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QTabWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_MousePressEvent(event);
}

bool QTabWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QTabWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QTabWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QTabWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QTabWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QTabWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QTabWidget_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QTabWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_WheelEvent(event);
}

bool QTabWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QTabWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QTabWidget_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QTabWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_FocusInEvent(event);
}

bool QTabWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QTabWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QTabWidget_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QTabWidget_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_EnterEvent(event);
}

bool QTabWidget_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QTabWidget_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_LeaveEvent(event);
}

bool QTabWidget_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QTabWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_MoveEvent(event);
}

bool QTabWidget_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QTabWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_CloseEvent(event);
}

bool QTabWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QTabWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QTabWidget_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QTabWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_TabletEvent(event);
}

bool QTabWidget_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QTabWidget_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_ActionEvent(event);
}

bool QTabWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QTabWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QTabWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QTabWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QTabWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QTabWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QTabWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QTabWidget_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_DropEvent(event);
}

bool QTabWidget_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QTabWidget_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_HideEvent(event);
}

bool QTabWidget_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QTabWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQTabWidget*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QTabWidget_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QTabWidget_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_Metric(param1);
}

bool QTabWidget_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QTabWidget_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_InitPainter(painter);
}

bool QTabWidget_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QTabWidget_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_Redirected(offset);
}

bool QTabWidget_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QTabWidget_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_SharedPainter();
}

bool QTabWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QTabWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQTabWidget*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QTabWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QTabWidget_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQTabWidget*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QTabWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QTabWidget_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQTabWidget*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QTabWidget_Delete(QTabWidget* self) {
	delete self;
}

