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
#include <QList>
#include <QMenu>
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
#include <qmenu.h>
#include "gen_qmenu.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMenu_AboutToShow(intptr_t);
void miqt_exec_callback_QMenu_AboutToHide(intptr_t);
void miqt_exec_callback_QMenu_Triggered(intptr_t, QAction*);
void miqt_exec_callback_QMenu_Hovered(intptr_t, QAction*);
QSize* miqt_exec_callback_QMenu_SizeHint(const QMenu*, intptr_t);
void miqt_exec_callback_QMenu_ChangeEvent(QMenu*, intptr_t, QEvent*);
void miqt_exec_callback_QMenu_KeyPressEvent(QMenu*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMenu_MouseReleaseEvent(QMenu*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenu_MousePressEvent(QMenu*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenu_MouseMoveEvent(QMenu*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenu_WheelEvent(QMenu*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QMenu_EnterEvent(QMenu*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QMenu_LeaveEvent(QMenu*, intptr_t, QEvent*);
void miqt_exec_callback_QMenu_HideEvent(QMenu*, intptr_t, QHideEvent*);
void miqt_exec_callback_QMenu_PaintEvent(QMenu*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QMenu_ActionEvent(QMenu*, intptr_t, QActionEvent*);
void miqt_exec_callback_QMenu_TimerEvent(QMenu*, intptr_t, QTimerEvent*);
bool miqt_exec_callback_QMenu_Event(QMenu*, intptr_t, QEvent*);
bool miqt_exec_callback_QMenu_FocusNextPrevChild(QMenu*, intptr_t, bool);
void miqt_exec_callback_QMenu_InitStyleOption(const QMenu*, intptr_t, QStyleOptionMenuItem*, QAction*);
int miqt_exec_callback_QMenu_DevType(const QMenu*, intptr_t);
void miqt_exec_callback_QMenu_SetVisible(QMenu*, intptr_t, bool);
QSize* miqt_exec_callback_QMenu_MinimumSizeHint(const QMenu*, intptr_t);
int miqt_exec_callback_QMenu_HeightForWidth(const QMenu*, intptr_t, int);
bool miqt_exec_callback_QMenu_HasHeightForWidth(const QMenu*, intptr_t);
QPaintEngine* miqt_exec_callback_QMenu_PaintEngine(const QMenu*, intptr_t);
void miqt_exec_callback_QMenu_MouseDoubleClickEvent(QMenu*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMenu_KeyReleaseEvent(QMenu*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMenu_FocusInEvent(QMenu*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMenu_FocusOutEvent(QMenu*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMenu_MoveEvent(QMenu*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QMenu_ResizeEvent(QMenu*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QMenu_CloseEvent(QMenu*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QMenu_ContextMenuEvent(QMenu*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QMenu_TabletEvent(QMenu*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QMenu_DragEnterEvent(QMenu*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QMenu_DragMoveEvent(QMenu*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QMenu_DragLeaveEvent(QMenu*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QMenu_DropEvent(QMenu*, intptr_t, QDropEvent*);
void miqt_exec_callback_QMenu_ShowEvent(QMenu*, intptr_t, QShowEvent*);
bool miqt_exec_callback_QMenu_NativeEvent(QMenu*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QMenu_Metric(const QMenu*, intptr_t, int);
void miqt_exec_callback_QMenu_InitPainter(const QMenu*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QMenu_Redirected(const QMenu*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QMenu_SharedPainter(const QMenu*, intptr_t);
void miqt_exec_callback_QMenu_InputMethodEvent(QMenu*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QMenu_InputMethodQuery(const QMenu*, intptr_t, int);
bool miqt_exec_callback_QMenu_EventFilter(QMenu*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMenu_ChildEvent(QMenu*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMenu_CustomEvent(QMenu*, intptr_t, QEvent*);
void miqt_exec_callback_QMenu_ConnectNotify(QMenu*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMenu_DisconnectNotify(QMenu*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMenu final : public QMenu {
public:

	MiqtVirtualQMenu(QWidget* parent): QMenu(parent) {};
	MiqtVirtualQMenu(): QMenu() {};
	MiqtVirtualQMenu(const QString& title): QMenu(title) {};
	MiqtVirtualQMenu(const QString& title, QWidget* parent): QMenu(title, parent) {};

	virtual ~MiqtVirtualQMenu() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QMenu::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMenu_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QMenu::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QMenu::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QMenu::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QMenu::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QMenu::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QMenu::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QMenu::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QMenu::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QMenu::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QMenu::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QMenu::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QMenu::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QMenu::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* param1) override {
		if (handle__EnterEvent == 0) {
			QMenu::enterEvent(param1);
			return;
		}
		
		QEnterEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* param1) {

		QMenu::enterEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* param1) override {
		if (handle__LeaveEvent == 0) {
			QMenu::leaveEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* param1) {

		QMenu::leaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* param1) override {
		if (handle__HideEvent == 0) {
			QMenu::hideEvent(param1);
			return;
		}
		
		QHideEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* param1) {

		QMenu::hideEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QMenu::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QMenu::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* param1) override {
		if (handle__ActionEvent == 0) {
			QMenu::actionEvent(param1);
			return;
		}
		
		QActionEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* param1) {

		QMenu::actionEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__TimerEvent == 0) {
			QMenu::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* param1) {

		QMenu::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QMenu::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QMenu_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QMenu::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QMenu::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QMenu_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QMenu::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionMenuItem* option, const QAction* action) const override {
		if (handle__InitStyleOption == 0) {
			QMenu::initStyleOption(option, action);
			return;
		}
		
		QStyleOptionMenuItem* sigval1 = option;
		QAction* sigval2 = (QAction*) action;

		miqt_exec_callback_QMenu_InitStyleOption(this, handle__InitStyleOption, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionMenuItem* option, QAction* action) const {

		QMenu::initStyleOption(option, action);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QMenu::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QMenu_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QMenu::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QMenu::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QMenu_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QMenu::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QMenu::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMenu_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QMenu::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QMenu::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QMenu_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QMenu::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QMenu::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QMenu_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QMenu::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QMenu::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QMenu_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QMenu::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QMenu::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QMenu_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QMenu::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QMenu::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QMenu_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QMenu::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QMenu::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QMenu_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QMenu::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QMenu::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QMenu_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QMenu::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QMenu::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QMenu_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QMenu::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QMenu::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QMenu_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QMenu::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QMenu::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QMenu_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QMenu::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QMenu::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QMenu_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QMenu::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QMenu::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QMenu_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QMenu::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QMenu::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QMenu_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QMenu::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QMenu::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QMenu_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QMenu::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QMenu::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QMenu_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QMenu::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QMenu::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QMenu_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QMenu::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QMenu::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QMenu_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QMenu::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QMenu::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QMenu_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QMenu::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QMenu::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QMenu_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QMenu::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QMenu::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QMenu_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QMenu::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QMenu::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QMenu_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QMenu::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QMenu::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QMenu_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QMenu::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QMenu::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QMenu_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QMenu::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QMenu::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QMenu_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QMenu::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QMenu::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMenu_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QMenu::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QMenu::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMenu_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QMenu::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QMenu::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMenu_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QMenu::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QMenu::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMenu_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QMenu::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QMenu::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMenu_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QMenu::disconnectNotify(*signal);

	}

};

QMenu* QMenu_new(QWidget* parent) {
	return new MiqtVirtualQMenu(parent);
}

QMenu* QMenu_new2() {
	return new MiqtVirtualQMenu();
}

QMenu* QMenu_new3(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new MiqtVirtualQMenu(title_QString);
}

QMenu* QMenu_new4(struct miqt_string title, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new MiqtVirtualQMenu(title_QString, parent);
}

void QMenu_virtbase(QMenu* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QMenu_MetaObject(const QMenu* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMenu_Metacast(QMenu* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMenu_Tr(const char* s) {
	QString _ret = QMenu::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QMenu_AddMenu(QMenu* self, QMenu* menu) {
	return self->addMenu(menu);
}

QMenu* QMenu_AddMenuWithTitle(QMenu* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return self->addMenu(title_QString);
}

QMenu* QMenu_AddMenu2(QMenu* self, QIcon* icon, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return self->addMenu(*icon, title_QString);
}

QAction* QMenu_AddSeparator(QMenu* self) {
	return self->addSeparator();
}

QAction* QMenu_AddSection(QMenu* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addSection(text_QString);
}

QAction* QMenu_AddSection2(QMenu* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addSection(*icon, text_QString);
}

QAction* QMenu_InsertMenu(QMenu* self, QAction* before, QMenu* menu) {
	return self->insertMenu(before, menu);
}

QAction* QMenu_InsertSeparator(QMenu* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QMenu_InsertSection(QMenu* self, QAction* before, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->insertSection(before, text_QString);
}

QAction* QMenu_InsertSection2(QMenu* self, QAction* before, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->insertSection(before, *icon, text_QString);
}

bool QMenu_IsEmpty(const QMenu* self) {
	return self->isEmpty();
}

void QMenu_Clear(QMenu* self) {
	self->clear();
}

void QMenu_SetTearOffEnabled(QMenu* self, bool tearOffEnabled) {
	self->setTearOffEnabled(tearOffEnabled);
}

bool QMenu_IsTearOffEnabled(const QMenu* self) {
	return self->isTearOffEnabled();
}

bool QMenu_IsTearOffMenuVisible(const QMenu* self) {
	return self->isTearOffMenuVisible();
}

void QMenu_ShowTearOffMenu(QMenu* self) {
	self->showTearOffMenu();
}

void QMenu_ShowTearOffMenuWithPos(QMenu* self, QPoint* pos) {
	self->showTearOffMenu(*pos);
}

void QMenu_HideTearOffMenu(QMenu* self) {
	self->hideTearOffMenu();
}

void QMenu_SetDefaultAction(QMenu* self, QAction* defaultAction) {
	self->setDefaultAction(defaultAction);
}

QAction* QMenu_DefaultAction(const QMenu* self) {
	return self->defaultAction();
}

void QMenu_SetActiveAction(QMenu* self, QAction* act) {
	self->setActiveAction(act);
}

QAction* QMenu_ActiveAction(const QMenu* self) {
	return self->activeAction();
}

void QMenu_Popup(QMenu* self, QPoint* pos) {
	self->popup(*pos);
}

QAction* QMenu_Exec(QMenu* self) {
	return self->exec();
}

QAction* QMenu_ExecWithPos(QMenu* self, QPoint* pos) {
	return self->exec(*pos);
}

QAction* QMenu_Exec2(struct miqt_array /* of QAction* */  actions, QPoint* pos) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	return QMenu::exec(actions_QList, *pos);
}

QSize* QMenu_SizeHint(const QMenu* self) {
	return new QSize(self->sizeHint());
}

QRect* QMenu_ActionGeometry(const QMenu* self, QAction* param1) {
	return new QRect(self->actionGeometry(param1));
}

QAction* QMenu_ActionAt(const QMenu* self, QPoint* param1) {
	return self->actionAt(*param1);
}

QAction* QMenu_MenuAction(const QMenu* self) {
	return self->menuAction();
}

QMenu* QMenu_MenuInAction(QAction* action) {
	return QMenu::menuInAction(action);
}

struct miqt_string QMenu_Title(const QMenu* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMenu_SetTitle(QMenu* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

QIcon* QMenu_Icon(const QMenu* self) {
	return new QIcon(self->icon());
}

void QMenu_SetIcon(QMenu* self, QIcon* icon) {
	self->setIcon(*icon);
}

void QMenu_SetNoReplayFor(QMenu* self, QWidget* widget) {
	self->setNoReplayFor(widget);
}

bool QMenu_SeparatorsCollapsible(const QMenu* self) {
	return self->separatorsCollapsible();
}

void QMenu_SetSeparatorsCollapsible(QMenu* self, bool collapse) {
	self->setSeparatorsCollapsible(collapse);
}

bool QMenu_ToolTipsVisible(const QMenu* self) {
	return self->toolTipsVisible();
}

void QMenu_SetToolTipsVisible(QMenu* self, bool visible) {
	self->setToolTipsVisible(visible);
}

void QMenu_AboutToShow(QMenu* self) {
	self->aboutToShow();
}

void QMenu_connect_AboutToShow(QMenu* self, intptr_t slot) {
	MiqtVirtualQMenu::connect(self, static_cast<void (QMenu::*)()>(&QMenu::aboutToShow), self, [=]() {
		miqt_exec_callback_QMenu_AboutToShow(slot);
	});
}

void QMenu_AboutToHide(QMenu* self) {
	self->aboutToHide();
}

void QMenu_connect_AboutToHide(QMenu* self, intptr_t slot) {
	MiqtVirtualQMenu::connect(self, static_cast<void (QMenu::*)()>(&QMenu::aboutToHide), self, [=]() {
		miqt_exec_callback_QMenu_AboutToHide(slot);
	});
}

void QMenu_Triggered(QMenu* self, QAction* action) {
	self->triggered(action);
}

void QMenu_connect_Triggered(QMenu* self, intptr_t slot) {
	MiqtVirtualQMenu::connect(self, static_cast<void (QMenu::*)(QAction*)>(&QMenu::triggered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QMenu_Triggered(slot, sigval1);
	});
}

void QMenu_Hovered(QMenu* self, QAction* action) {
	self->hovered(action);
}

void QMenu_connect_Hovered(QMenu* self, intptr_t slot) {
	MiqtVirtualQMenu::connect(self, static_cast<void (QMenu::*)(QAction*)>(&QMenu::hovered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QMenu_Hovered(slot, sigval1);
	});
}

struct miqt_string QMenu_Tr2(const char* s, const char* c) {
	QString _ret = QMenu::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenu_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMenu::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMenu_Popup2(QMenu* self, QPoint* pos, QAction* at) {
	self->popup(*pos, at);
}

QAction* QMenu_Exec22(QMenu* self, QPoint* pos, QAction* at) {
	return self->exec(*pos, at);
}

QAction* QMenu_Exec3(struct miqt_array /* of QAction* */  actions, QPoint* pos, QAction* at) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	return QMenu::exec(actions_QList, *pos, at);
}

QAction* QMenu_Exec4(struct miqt_array /* of QAction* */  actions, QPoint* pos, QAction* at, QWidget* parent) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	return QMenu::exec(actions_QList, *pos, at, parent);
}

bool QMenu_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QMenu_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_SizeHint();
}

bool QMenu_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QMenu_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QMenu_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QMenu_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QMenu_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QMenu_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

bool QMenu_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QMenu_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_MousePressEvent(param1);
}

bool QMenu_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QMenu_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_MouseMoveEvent(param1);
}

bool QMenu_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QMenu_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_WheelEvent(param1);
}

bool QMenu_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QMenu_virtualbase_EnterEvent(void* self, QEnterEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_EnterEvent(param1);
}

bool QMenu_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QMenu_virtualbase_LeaveEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_LeaveEvent(param1);
}

bool QMenu_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QMenu_virtualbase_HideEvent(void* self, QHideEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_HideEvent(param1);
}

bool QMenu_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QMenu_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_PaintEvent(param1);
}

bool QMenu_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QMenu_virtualbase_ActionEvent(void* self, QActionEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_ActionEvent(param1);
}

bool QMenu_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QMenu_virtualbase_TimerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_TimerEvent(param1);
}

bool QMenu_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QMenu_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQMenu*)(self) )->virtualbase_Event(param1);
}

bool QMenu_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QMenu_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQMenu*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QMenu_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QMenu_virtualbase_InitStyleOption(const void* self, QStyleOptionMenuItem* option, QAction* action) {
	( (const MiqtVirtualQMenu*)(self) )->virtualbase_InitStyleOption(option, action);
}

bool QMenu_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QMenu_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_DevType();
}

bool QMenu_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QMenu_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_SetVisible(visible);
}

bool QMenu_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QMenu_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_MinimumSizeHint();
}

bool QMenu_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QMenu_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QMenu_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QMenu_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_HasHeightForWidth();
}

bool QMenu_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QMenu_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_PaintEngine();
}

bool QMenu_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QMenu_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QMenu_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QMenu_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QMenu_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QMenu_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_FocusInEvent(event);
}

bool QMenu_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QMenu_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QMenu_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QMenu_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_MoveEvent(event);
}

bool QMenu_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QMenu_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_ResizeEvent(event);
}

bool QMenu_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QMenu_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_CloseEvent(event);
}

bool QMenu_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QMenu_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QMenu_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QMenu_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_TabletEvent(event);
}

bool QMenu_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QMenu_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QMenu_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QMenu_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QMenu_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QMenu_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QMenu_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QMenu_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_DropEvent(event);
}

bool QMenu_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QMenu_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_ShowEvent(event);
}

bool QMenu_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QMenu_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQMenu*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QMenu_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QMenu_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_Metric(param1);
}

bool QMenu_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QMenu_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQMenu*)(self) )->virtualbase_InitPainter(painter);
}

bool QMenu_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QMenu_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_Redirected(offset);
}

bool QMenu_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QMenu_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_SharedPainter();
}

bool QMenu_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QMenu_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QMenu_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QMenu_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQMenu*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QMenu_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QMenu_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMenu*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QMenu_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QMenu_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_ChildEvent(event);
}

bool QMenu_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QMenu_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_CustomEvent(event);
}

bool QMenu_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QMenu_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QMenu_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMenu* self_cast = dynamic_cast<MiqtVirtualQMenu*>( (QMenu*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QMenu_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMenu*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QMenu_Delete(QMenu* self) {
	delete self;
}

