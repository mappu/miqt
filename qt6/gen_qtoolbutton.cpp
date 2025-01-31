#include <QAbstractButton>
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
#include <QInputMethodEvent>
#include <QKeyEvent>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionToolButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QToolButton>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtoolbutton.h>
#include "gen_qtoolbutton.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QToolButton_Triggered(intptr_t, QAction*);
QSize* miqt_exec_callback_QToolButton_SizeHint(const QToolButton*, intptr_t);
QSize* miqt_exec_callback_QToolButton_MinimumSizeHint(const QToolButton*, intptr_t);
bool miqt_exec_callback_QToolButton_Event(QToolButton*, intptr_t, QEvent*);
void miqt_exec_callback_QToolButton_MousePressEvent(QToolButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolButton_MouseReleaseEvent(QToolButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolButton_PaintEvent(QToolButton*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QToolButton_ActionEvent(QToolButton*, intptr_t, QActionEvent*);
void miqt_exec_callback_QToolButton_EnterEvent(QToolButton*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QToolButton_LeaveEvent(QToolButton*, intptr_t, QEvent*);
void miqt_exec_callback_QToolButton_TimerEvent(QToolButton*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QToolButton_ChangeEvent(QToolButton*, intptr_t, QEvent*);
bool miqt_exec_callback_QToolButton_HitButton(const QToolButton*, intptr_t, QPoint*);
void miqt_exec_callback_QToolButton_CheckStateSet(QToolButton*, intptr_t);
void miqt_exec_callback_QToolButton_NextCheckState(QToolButton*, intptr_t);
void miqt_exec_callback_QToolButton_InitStyleOption(const QToolButton*, intptr_t, QStyleOptionToolButton*);
void miqt_exec_callback_QToolButton_KeyPressEvent(QToolButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QToolButton_KeyReleaseEvent(QToolButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QToolButton_MouseMoveEvent(QToolButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolButton_FocusInEvent(QToolButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QToolButton_FocusOutEvent(QToolButton*, intptr_t, QFocusEvent*);
int miqt_exec_callback_QToolButton_DevType(const QToolButton*, intptr_t);
void miqt_exec_callback_QToolButton_SetVisible(QToolButton*, intptr_t, bool);
int miqt_exec_callback_QToolButton_HeightForWidth(const QToolButton*, intptr_t, int);
bool miqt_exec_callback_QToolButton_HasHeightForWidth(const QToolButton*, intptr_t);
QPaintEngine* miqt_exec_callback_QToolButton_PaintEngine(const QToolButton*, intptr_t);
void miqt_exec_callback_QToolButton_MouseDoubleClickEvent(QToolButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolButton_WheelEvent(QToolButton*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QToolButton_MoveEvent(QToolButton*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QToolButton_ResizeEvent(QToolButton*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QToolButton_CloseEvent(QToolButton*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QToolButton_ContextMenuEvent(QToolButton*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QToolButton_TabletEvent(QToolButton*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QToolButton_DragEnterEvent(QToolButton*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QToolButton_DragMoveEvent(QToolButton*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QToolButton_DragLeaveEvent(QToolButton*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QToolButton_DropEvent(QToolButton*, intptr_t, QDropEvent*);
void miqt_exec_callback_QToolButton_ShowEvent(QToolButton*, intptr_t, QShowEvent*);
void miqt_exec_callback_QToolButton_HideEvent(QToolButton*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QToolButton_NativeEvent(QToolButton*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QToolButton_Metric(const QToolButton*, intptr_t, int);
void miqt_exec_callback_QToolButton_InitPainter(const QToolButton*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QToolButton_Redirected(const QToolButton*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QToolButton_SharedPainter(const QToolButton*, intptr_t);
void miqt_exec_callback_QToolButton_InputMethodEvent(QToolButton*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QToolButton_InputMethodQuery(const QToolButton*, intptr_t, int);
bool miqt_exec_callback_QToolButton_FocusNextPrevChild(QToolButton*, intptr_t, bool);
bool miqt_exec_callback_QToolButton_EventFilter(QToolButton*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QToolButton_ChildEvent(QToolButton*, intptr_t, QChildEvent*);
void miqt_exec_callback_QToolButton_CustomEvent(QToolButton*, intptr_t, QEvent*);
void miqt_exec_callback_QToolButton_ConnectNotify(QToolButton*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QToolButton_DisconnectNotify(QToolButton*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQToolButton final : public QToolButton {
public:

	MiqtVirtualQToolButton(QWidget* parent): QToolButton(parent) {};
	MiqtVirtualQToolButton(): QToolButton() {};

	virtual ~MiqtVirtualQToolButton() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QToolButton::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QToolButton_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QToolButton::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QToolButton::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QToolButton_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QToolButton::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QToolButton::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QToolButton_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QToolButton::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QToolButton::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QToolButton::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QToolButton::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QToolButton::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QToolButton::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QToolButton::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* param1) override {
		if (handle__ActionEvent == 0) {
			QToolButton::actionEvent(param1);
			return;
		}
		
		QActionEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* param1) {

		QToolButton::actionEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* param1) override {
		if (handle__EnterEvent == 0) {
			QToolButton::enterEvent(param1);
			return;
		}
		
		QEnterEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* param1) {

		QToolButton::enterEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* param1) override {
		if (handle__LeaveEvent == 0) {
			QToolButton::leaveEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* param1) {

		QToolButton::leaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__TimerEvent == 0) {
			QToolButton::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* param1) {

		QToolButton::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QToolButton::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QToolButton::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (handle__HitButton == 0) {
			return QToolButton::hitButton(pos);
		}
		
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);

		bool callback_return_value = miqt_exec_callback_QToolButton_HitButton(this, handle__HitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HitButton(QPoint* pos) const {

		return QToolButton::hitButton(*pos);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CheckStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__CheckStateSet == 0) {
			QToolButton::checkStateSet();
			return;
		}
		

		miqt_exec_callback_QToolButton_CheckStateSet(this, handle__CheckStateSet);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CheckStateSet() {

		QToolButton::checkStateSet();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__NextCheckState == 0) {
			QToolButton::nextCheckState();
			return;
		}
		

		miqt_exec_callback_QToolButton_NextCheckState(this, handle__NextCheckState);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_NextCheckState() {

		QToolButton::nextCheckState();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionToolButton* option) const override {
		if (handle__InitStyleOption == 0) {
			QToolButton::initStyleOption(option);
			return;
		}
		
		QStyleOptionToolButton* sigval1 = option;

		miqt_exec_callback_QToolButton_InitStyleOption(this, handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionToolButton* option) const {

		QToolButton::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__KeyPressEvent == 0) {
			QToolButton::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QToolButton_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* e) {

		QToolButton::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__KeyReleaseEvent == 0) {
			QToolButton::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QToolButton_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* e) {

		QToolButton::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__MouseMoveEvent == 0) {
			QToolButton::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QToolButton_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* e) {

		QToolButton::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__FocusInEvent == 0) {
			QToolButton::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QToolButton_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* e) {

		QToolButton::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__FocusOutEvent == 0) {
			QToolButton::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QToolButton_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* e) {

		QToolButton::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QToolButton::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QToolButton_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QToolButton::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QToolButton::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QToolButton_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QToolButton::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QToolButton::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QToolButton_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QToolButton::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QToolButton::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QToolButton_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QToolButton::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QToolButton::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QToolButton_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QToolButton::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QToolButton::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QToolButton::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QToolButton::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QToolButton::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QToolButton::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QToolButton::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QToolButton::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QToolButton::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QToolButton::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QToolButton::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QToolButton::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QToolButton::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QToolButton::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QToolButton::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QToolButton::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QToolButton::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QToolButton::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QToolButton::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QToolButton::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QToolButton::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QToolButton::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QToolButton::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QToolButton::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QToolButton::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QToolButton::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QToolButton::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QToolButton::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QToolButton_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QToolButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QToolButton::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QToolButton_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QToolButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QToolButton::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QToolButton_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QToolButton::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QToolButton::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QToolButton_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QToolButton::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QToolButton::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QToolButton_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QToolButton::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QToolButton::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QToolButton_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QToolButton::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QToolButton::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QToolButton_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QToolButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QToolButton::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QToolButton_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QToolButton::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QToolButton::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QToolButton_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QToolButton::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QToolButton::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QToolButton::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QToolButton::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QToolButton_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QToolButton::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QToolButton::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QToolButton_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QToolButton::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QToolButton::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QToolButton_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QToolButton::disconnectNotify(*signal);

	}

};

QToolButton* QToolButton_new(QWidget* parent) {
	return new MiqtVirtualQToolButton(parent);
}

QToolButton* QToolButton_new2() {
	return new MiqtVirtualQToolButton();
}

void QToolButton_virtbase(QToolButton* src, QAbstractButton** outptr_QAbstractButton) {
	*outptr_QAbstractButton = static_cast<QAbstractButton*>(src);
}

QMetaObject* QToolButton_MetaObject(const QToolButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QToolButton_Metacast(QToolButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QToolButton_Tr(const char* s) {
	QString _ret = QToolButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QToolButton_SizeHint(const QToolButton* self) {
	return new QSize(self->sizeHint());
}

QSize* QToolButton_MinimumSizeHint(const QToolButton* self) {
	return new QSize(self->minimumSizeHint());
}

int QToolButton_ToolButtonStyle(const QToolButton* self) {
	Qt::ToolButtonStyle _ret = self->toolButtonStyle();
	return static_cast<int>(_ret);
}

int QToolButton_ArrowType(const QToolButton* self) {
	Qt::ArrowType _ret = self->arrowType();
	return static_cast<int>(_ret);
}

void QToolButton_SetArrowType(QToolButton* self, int typeVal) {
	self->setArrowType(static_cast<Qt::ArrowType>(typeVal));
}

void QToolButton_SetMenu(QToolButton* self, QMenu* menu) {
	self->setMenu(menu);
}

QMenu* QToolButton_Menu(const QToolButton* self) {
	return self->menu();
}

void QToolButton_SetPopupMode(QToolButton* self, int mode) {
	self->setPopupMode(static_cast<QToolButton::ToolButtonPopupMode>(mode));
}

int QToolButton_PopupMode(const QToolButton* self) {
	QToolButton::ToolButtonPopupMode _ret = self->popupMode();
	return static_cast<int>(_ret);
}

QAction* QToolButton_DefaultAction(const QToolButton* self) {
	return self->defaultAction();
}

void QToolButton_SetAutoRaise(QToolButton* self, bool enable) {
	self->setAutoRaise(enable);
}

bool QToolButton_AutoRaise(const QToolButton* self) {
	return self->autoRaise();
}

void QToolButton_ShowMenu(QToolButton* self) {
	self->showMenu();
}

void QToolButton_SetToolButtonStyle(QToolButton* self, int style) {
	self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(style));
}

void QToolButton_SetDefaultAction(QToolButton* self, QAction* defaultAction) {
	self->setDefaultAction(defaultAction);
}

void QToolButton_Triggered(QToolButton* self, QAction* param1) {
	self->triggered(param1);
}

void QToolButton_connect_Triggered(QToolButton* self, intptr_t slot) {
	MiqtVirtualQToolButton::connect(self, static_cast<void (QToolButton::*)(QAction*)>(&QToolButton::triggered), self, [=](QAction* param1) {
		QAction* sigval1 = param1;
		miqt_exec_callback_QToolButton_Triggered(slot, sigval1);
	});
}

struct miqt_string QToolButton_Tr2(const char* s, const char* c) {
	QString _ret = QToolButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QToolButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QToolButton_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QToolButton_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_SizeHint();
}

bool QToolButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QToolButton_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_MinimumSizeHint();
}

bool QToolButton_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QToolButton_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQToolButton*)(self) )->virtualbase_Event(e);
}

bool QToolButton_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QToolButton_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_MousePressEvent(param1);
}

bool QToolButton_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QToolButton_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

bool QToolButton_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QToolButton_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_PaintEvent(param1);
}

bool QToolButton_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QToolButton_virtualbase_ActionEvent(void* self, QActionEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_ActionEvent(param1);
}

bool QToolButton_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QToolButton_virtualbase_EnterEvent(void* self, QEnterEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_EnterEvent(param1);
}

bool QToolButton_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QToolButton_virtualbase_LeaveEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_LeaveEvent(param1);
}

bool QToolButton_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QToolButton_virtualbase_TimerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_TimerEvent(param1);
}

bool QToolButton_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QToolButton_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QToolButton_override_virtual_HitButton(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HitButton = slot;
	return true;
}

bool QToolButton_virtualbase_HitButton(const void* self, QPoint* pos) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_HitButton(pos);
}

bool QToolButton_override_virtual_CheckStateSet(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CheckStateSet = slot;
	return true;
}

void QToolButton_virtualbase_CheckStateSet(void* self) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_CheckStateSet();
}

bool QToolButton_override_virtual_NextCheckState(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NextCheckState = slot;
	return true;
}

void QToolButton_virtualbase_NextCheckState(void* self) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_NextCheckState();
}

bool QToolButton_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QToolButton_virtualbase_InitStyleOption(const void* self, QStyleOptionToolButton* option) {
	( (const MiqtVirtualQToolButton*)(self) )->virtualbase_InitStyleOption(option);
}

bool QToolButton_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QToolButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_KeyPressEvent(e);
}

bool QToolButton_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QToolButton_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_KeyReleaseEvent(e);
}

bool QToolButton_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QToolButton_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_MouseMoveEvent(e);
}

bool QToolButton_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QToolButton_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_FocusInEvent(e);
}

bool QToolButton_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QToolButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_FocusOutEvent(e);
}

bool QToolButton_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QToolButton_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_DevType();
}

bool QToolButton_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QToolButton_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_SetVisible(visible);
}

bool QToolButton_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QToolButton_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QToolButton_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QToolButton_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_HasHeightForWidth();
}

bool QToolButton_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QToolButton_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_PaintEngine();
}

bool QToolButton_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QToolButton_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QToolButton_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QToolButton_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_WheelEvent(event);
}

bool QToolButton_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QToolButton_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_MoveEvent(event);
}

bool QToolButton_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QToolButton_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_ResizeEvent(event);
}

bool QToolButton_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QToolButton_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_CloseEvent(event);
}

bool QToolButton_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QToolButton_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QToolButton_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QToolButton_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_TabletEvent(event);
}

bool QToolButton_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QToolButton_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QToolButton_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QToolButton_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QToolButton_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QToolButton_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QToolButton_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QToolButton_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_DropEvent(event);
}

bool QToolButton_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QToolButton_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_ShowEvent(event);
}

bool QToolButton_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QToolButton_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_HideEvent(event);
}

bool QToolButton_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QToolButton_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQToolButton*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QToolButton_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QToolButton_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_Metric(param1);
}

bool QToolButton_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QToolButton_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQToolButton*)(self) )->virtualbase_InitPainter(painter);
}

bool QToolButton_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QToolButton_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_Redirected(offset);
}

bool QToolButton_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QToolButton_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_SharedPainter();
}

bool QToolButton_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QToolButton_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QToolButton_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QToolButton_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQToolButton*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QToolButton_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QToolButton_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQToolButton*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QToolButton_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QToolButton_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQToolButton*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QToolButton_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QToolButton_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_ChildEvent(event);
}

bool QToolButton_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QToolButton_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_CustomEvent(event);
}

bool QToolButton_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QToolButton_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QToolButton_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQToolButton* self_cast = dynamic_cast<MiqtVirtualQToolButton*>( (QToolButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QToolButton_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQToolButton*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QToolButton_Delete(QToolButton* self) {
	delete self;
}

