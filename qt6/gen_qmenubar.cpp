#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
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
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMenu>
#include <QMenuBar>
#include <QMetaMethod>
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
#include <QStyleOptionMenuItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qmenubar.h>
#include "gen_qmenubar.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMenuBar_Triggered(intptr_t, QAction*);
void miqt_exec_callback_QMenuBar_Hovered(intptr_t, QAction*);
QSize* miqt_exec_callback_QMenuBar_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QMenuBar_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QMenuBar_HeightForWidth(void*, intptr_t, int);
void miqt_exec_callback_QMenuBar_SetVisible(void*, intptr_t, bool);
void miqt_exec_callback_QMenuBar_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMenuBar_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMenuBar_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenuBar_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenuBar_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenuBar_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMenuBar_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QMenuBar_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QMenuBar_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QMenuBar_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMenuBar_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMenuBar_TimerEvent(void*, intptr_t, QTimerEvent*);
bool miqt_exec_callback_QMenuBar_EventFilter(void*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QMenuBar_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMenuBar_InitStyleOption(void*, intptr_t, QStyleOptionMenuItem*, QAction*);
int miqt_exec_callback_QMenuBar_DevType(void*, intptr_t);
bool miqt_exec_callback_QMenuBar_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QMenuBar_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QMenuBar_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenuBar_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QMenuBar_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMenuBar_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QMenuBar_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QMenuBar_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QMenuBar_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QMenuBar_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QMenuBar_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QMenuBar_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QMenuBar_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QMenuBar_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QMenuBar_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QMenuBar_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QMenuBar_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QMenuBar_Metric(void*, intptr_t, int);
void miqt_exec_callback_QMenuBar_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QMenuBar_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QMenuBar_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QMenuBar_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QMenuBar_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QMenuBar_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QMenuBar_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMenuBar_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMenuBar_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMenuBar_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMenuBar final : public QMenuBar {
public:

	MiqtVirtualQMenuBar(QWidget* parent): QMenuBar(parent) {};
	MiqtVirtualQMenuBar(): QMenuBar() {};

	virtual ~MiqtVirtualQMenuBar() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QMenuBar::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMenuBar_SizeHint(const_cast<MiqtVirtualQMenuBar*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QMenuBar::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QMenuBar::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMenuBar_MinimumSizeHint(const_cast<MiqtVirtualQMenuBar*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QMenuBar::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QMenuBar::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QMenuBar_HeightForWidth(const_cast<MiqtVirtualQMenuBar*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QMenuBar::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QMenuBar::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QMenuBar_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QMenuBar::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QMenuBar::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QMenuBar::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QMenuBar::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QMenuBar::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QMenuBar::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QMenuBar::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QMenuBar::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QMenuBar::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QMenuBar::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QMenuBar::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* param1) override {
		if (handle__LeaveEvent == 0) {
			QMenuBar::leaveEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* param1) {

		QMenuBar::leaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QMenuBar::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QMenuBar::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QMenuBar::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QMenuBar::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* param1) override {
		if (handle__ActionEvent == 0) {
			QMenuBar::actionEvent(param1);
			return;
		}
		
		QActionEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* param1) {

		QMenuBar::actionEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__FocusOutEvent == 0) {
			QMenuBar::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* param1) {

		QMenuBar::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__FocusInEvent == 0) {
			QMenuBar::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* param1) {

		QMenuBar::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__TimerEvent == 0) {
			QMenuBar::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* param1) {

		QMenuBar::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QMenuBar::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QMenuBar_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QMenuBar::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QMenuBar::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QMenuBar_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QMenuBar::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionMenuItem* option, const QAction* action) const override {
		if (handle__InitStyleOption == 0) {
			QMenuBar::initStyleOption(option, action);
			return;
		}
		
		QStyleOptionMenuItem* sigval1 = option;
		QAction* sigval2 = (QAction*) action;

		miqt_exec_callback_QMenuBar_InitStyleOption(const_cast<MiqtVirtualQMenuBar*>(this), handle__InitStyleOption, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionMenuItem* option, QAction* action) const {

		QMenuBar::initStyleOption(option, action);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QMenuBar::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QMenuBar_DevType(const_cast<MiqtVirtualQMenuBar*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QMenuBar::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QMenuBar::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QMenuBar_HasHeightForWidth(const_cast<MiqtVirtualQMenuBar*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QMenuBar::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QMenuBar::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QMenuBar_PaintEngine(const_cast<MiqtVirtualQMenuBar*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QMenuBar::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QMenuBar::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QMenuBar::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QMenuBar::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QMenuBar::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QMenuBar::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QMenuBar::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QMenuBar::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QMenuBar::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QMenuBar::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QMenuBar::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QMenuBar::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QMenuBar::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QMenuBar::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QMenuBar::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QMenuBar::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QMenuBar::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QMenuBar::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QMenuBar::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QMenuBar::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QMenuBar::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QMenuBar::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QMenuBar::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QMenuBar::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QMenuBar::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QMenuBar::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QMenuBar::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QMenuBar::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QMenuBar::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QMenuBar::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QMenuBar_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QMenuBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QMenuBar::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QMenuBar_Metric(const_cast<MiqtVirtualQMenuBar*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QMenuBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QMenuBar::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QMenuBar_InitPainter(const_cast<MiqtVirtualQMenuBar*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QMenuBar::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QMenuBar::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QMenuBar_Redirected(const_cast<MiqtVirtualQMenuBar*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QMenuBar::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QMenuBar::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QMenuBar_SharedPainter(const_cast<MiqtVirtualQMenuBar*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QMenuBar::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QMenuBar::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QMenuBar_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QMenuBar::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QMenuBar::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QMenuBar_InputMethodQuery(const_cast<MiqtVirtualQMenuBar*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QMenuBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QMenuBar::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QMenuBar_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QMenuBar::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QMenuBar::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QMenuBar::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QMenuBar::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMenuBar_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QMenuBar::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QMenuBar::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMenuBar_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QMenuBar::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QMenuBar::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMenuBar_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QMenuBar::disconnectNotify(*signal);

	}

};

QMenuBar* QMenuBar_new(QWidget* parent) {
	return new MiqtVirtualQMenuBar(parent);
}

QMenuBar* QMenuBar_new2() {
	return new MiqtVirtualQMenuBar();
}

void QMenuBar_virtbase(QMenuBar* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QMenuBar_MetaObject(const QMenuBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMenuBar_Metacast(QMenuBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMenuBar_Tr(const char* s) {
	QString _ret = QMenuBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QMenuBar_AddMenu(QMenuBar* self, QMenu* menu) {
	return self->addMenu(menu);
}

QMenu* QMenuBar_AddMenuWithTitle(QMenuBar* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return self->addMenu(title_QString);
}

QMenu* QMenuBar_AddMenu2(QMenuBar* self, QIcon* icon, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return self->addMenu(*icon, title_QString);
}

QAction* QMenuBar_AddSeparator(QMenuBar* self) {
	return self->addSeparator();
}

QAction* QMenuBar_InsertSeparator(QMenuBar* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QMenuBar_InsertMenu(QMenuBar* self, QAction* before, QMenu* menu) {
	return self->insertMenu(before, menu);
}

void QMenuBar_Clear(QMenuBar* self) {
	self->clear();
}

QAction* QMenuBar_ActiveAction(const QMenuBar* self) {
	return self->activeAction();
}

void QMenuBar_SetActiveAction(QMenuBar* self, QAction* action) {
	self->setActiveAction(action);
}

void QMenuBar_SetDefaultUp(QMenuBar* self, bool defaultUp) {
	self->setDefaultUp(defaultUp);
}

bool QMenuBar_IsDefaultUp(const QMenuBar* self) {
	return self->isDefaultUp();
}

QSize* QMenuBar_SizeHint(const QMenuBar* self) {
	return new QSize(self->sizeHint());
}

QSize* QMenuBar_MinimumSizeHint(const QMenuBar* self) {
	return new QSize(self->minimumSizeHint());
}

int QMenuBar_HeightForWidth(const QMenuBar* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

QRect* QMenuBar_ActionGeometry(const QMenuBar* self, QAction* param1) {
	return new QRect(self->actionGeometry(param1));
}

QAction* QMenuBar_ActionAt(const QMenuBar* self, QPoint* param1) {
	return self->actionAt(*param1);
}

void QMenuBar_SetCornerWidget(QMenuBar* self, QWidget* w) {
	self->setCornerWidget(w);
}

QWidget* QMenuBar_CornerWidget(const QMenuBar* self) {
	return self->cornerWidget();
}

bool QMenuBar_IsNativeMenuBar(const QMenuBar* self) {
	return self->isNativeMenuBar();
}

void QMenuBar_SetNativeMenuBar(QMenuBar* self, bool nativeMenuBar) {
	self->setNativeMenuBar(nativeMenuBar);
}

void QMenuBar_SetVisible(QMenuBar* self, bool visible) {
	self->setVisible(visible);
}

void QMenuBar_Triggered(QMenuBar* self, QAction* action) {
	self->triggered(action);
}

void QMenuBar_connect_Triggered(QMenuBar* self, intptr_t slot) {
	MiqtVirtualQMenuBar::connect(self, static_cast<void (QMenuBar::*)(QAction*)>(&QMenuBar::triggered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QMenuBar_Triggered(slot, sigval1);
	});
}

void QMenuBar_Hovered(QMenuBar* self, QAction* action) {
	self->hovered(action);
}

void QMenuBar_connect_Hovered(QMenuBar* self, intptr_t slot) {
	MiqtVirtualQMenuBar::connect(self, static_cast<void (QMenuBar::*)(QAction*)>(&QMenuBar::hovered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QMenuBar_Hovered(slot, sigval1);
	});
}

struct miqt_string QMenuBar_Tr2(const char* s, const char* c) {
	QString _ret = QMenuBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenuBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMenuBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMenuBar_SetCornerWidget2(QMenuBar* self, QWidget* w, int corner) {
	self->setCornerWidget(w, static_cast<Qt::Corner>(corner));
}

QWidget* QMenuBar_CornerWidget1(const QMenuBar* self, int corner) {
	return self->cornerWidget(static_cast<Qt::Corner>(corner));
}

bool QMenuBar_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QMenuBar_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_SizeHint();
}

bool QMenuBar_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QMenuBar_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_MinimumSizeHint();
}

bool QMenuBar_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QMenuBar_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QMenuBar_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QMenuBar_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_SetVisible(visible);
}

bool QMenuBar_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QMenuBar_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QMenuBar_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QMenuBar_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QMenuBar_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QMenuBar_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

bool QMenuBar_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QMenuBar_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_MousePressEvent(param1);
}

bool QMenuBar_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QMenuBar_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_MouseMoveEvent(param1);
}

bool QMenuBar_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QMenuBar_virtualbase_LeaveEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_LeaveEvent(param1);
}

bool QMenuBar_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QMenuBar_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_PaintEvent(param1);
}

bool QMenuBar_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QMenuBar_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QMenuBar_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QMenuBar_virtualbase_ActionEvent(void* self, QActionEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_ActionEvent(param1);
}

bool QMenuBar_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QMenuBar_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_FocusOutEvent(param1);
}

bool QMenuBar_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QMenuBar_virtualbase_FocusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_FocusInEvent(param1);
}

bool QMenuBar_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QMenuBar_virtualbase_TimerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_TimerEvent(param1);
}

bool QMenuBar_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QMenuBar_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQMenuBar*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QMenuBar_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QMenuBar_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQMenuBar*)(self) )->virtualbase_Event(param1);
}

bool QMenuBar_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QMenuBar_virtualbase_InitStyleOption(const void* self, QStyleOptionMenuItem* option, QAction* action) {
	( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_InitStyleOption(option, action);
}

bool QMenuBar_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QMenuBar_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_DevType();
}

bool QMenuBar_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QMenuBar_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_HasHeightForWidth();
}

bool QMenuBar_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QMenuBar_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_PaintEngine();
}

bool QMenuBar_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QMenuBar_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QMenuBar_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QMenuBar_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_WheelEvent(event);
}

bool QMenuBar_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QMenuBar_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QMenuBar_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QMenuBar_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_EnterEvent(event);
}

bool QMenuBar_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QMenuBar_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_MoveEvent(event);
}

bool QMenuBar_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QMenuBar_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_CloseEvent(event);
}

bool QMenuBar_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QMenuBar_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QMenuBar_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QMenuBar_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_TabletEvent(event);
}

bool QMenuBar_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QMenuBar_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QMenuBar_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QMenuBar_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QMenuBar_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QMenuBar_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QMenuBar_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QMenuBar_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_DropEvent(event);
}

bool QMenuBar_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QMenuBar_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_ShowEvent(event);
}

bool QMenuBar_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QMenuBar_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_HideEvent(event);
}

bool QMenuBar_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QMenuBar_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQMenuBar*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QMenuBar_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QMenuBar_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_Metric(param1);
}

bool QMenuBar_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QMenuBar_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_InitPainter(painter);
}

bool QMenuBar_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QMenuBar_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_Redirected(offset);
}

bool QMenuBar_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QMenuBar_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_SharedPainter();
}

bool QMenuBar_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QMenuBar_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QMenuBar_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QMenuBar_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQMenuBar*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QMenuBar_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QMenuBar_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQMenuBar*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QMenuBar_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QMenuBar_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_ChildEvent(event);
}

bool QMenuBar_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QMenuBar_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_CustomEvent(event);
}

bool QMenuBar_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QMenuBar_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QMenuBar_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMenuBar* self_cast = dynamic_cast<MiqtVirtualQMenuBar*>( (QMenuBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QMenuBar_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMenuBar*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QMenuBar_Delete(QMenuBar* self) {
	delete self;
}

