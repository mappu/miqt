#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
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
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qpushbutton.h>
#include "gen_qpushbutton.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QPushButton_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QPushButton_MinimumSizeHint(void*, intptr_t);
bool miqt_exec_callback_QPushButton_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPushButton_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPushButton_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPushButton_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPushButton_FocusOutEvent(void*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QPushButton_HitButton(void*, intptr_t, QPoint*);
void miqt_exec_callback_QPushButton_CheckStateSet(void*, intptr_t);
void miqt_exec_callback_QPushButton_NextCheckState(void*, intptr_t);
void miqt_exec_callback_QPushButton_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPushButton_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPushButton_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPushButton_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPushButton_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPushButton_TimerEvent(void*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QPushButton_DevType(void*, intptr_t);
void miqt_exec_callback_QPushButton_SetVisible(void*, intptr_t, bool);
int miqt_exec_callback_QPushButton_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QPushButton_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QPushButton_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QPushButton_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPushButton_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QPushButton_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPushButton_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPushButton_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPushButton_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPushButton_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPushButton_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QPushButton_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPushButton_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPushButton_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPushButton_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPushButton_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPushButton_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPushButton_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPushButton_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPushButton_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QPushButton_Metric(void*, intptr_t, int);
void miqt_exec_callback_QPushButton_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPushButton_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPushButton_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QPushButton_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QPushButton_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QPushButton_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QPushButton_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPushButton_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPushButton_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QPushButton_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPushButton_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPushButton final : public QPushButton {
public:

	MiqtVirtualQPushButton(QWidget* parent): QPushButton(parent) {};
	MiqtVirtualQPushButton(): QPushButton() {};
	MiqtVirtualQPushButton(const QString& text): QPushButton(text) {};
	MiqtVirtualQPushButton(const QIcon& icon, const QString& text): QPushButton(icon, text) {};
	MiqtVirtualQPushButton(const QString& text, QWidget* parent): QPushButton(text, parent) {};
	MiqtVirtualQPushButton(const QIcon& icon, const QString& text, QWidget* parent): QPushButton(icon, text, parent) {};

	virtual ~MiqtVirtualQPushButton() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QPushButton::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPushButton_SizeHint(const_cast<MiqtVirtualQPushButton*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QPushButton::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QPushButton::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPushButton_MinimumSizeHint(const_cast<MiqtVirtualQPushButton*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QPushButton::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QPushButton::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QPushButton_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QPushButton::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QPushButton::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QPushButton_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QPushButton::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QPushButton::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QPushButton_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QPushButton::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__FocusInEvent == 0) {
			QPushButton::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QPushButton_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* param1) {

		QPushButton::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__FocusOutEvent == 0) {
			QPushButton::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QPushButton_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* param1) {

		QPushButton::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (handle__HitButton == 0) {
			return QPushButton::hitButton(pos);
		}
		
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);

		bool callback_return_value = miqt_exec_callback_QPushButton_HitButton(const_cast<MiqtVirtualQPushButton*>(this), handle__HitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HitButton(QPoint* pos) const {

		return QPushButton::hitButton(*pos);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CheckStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__CheckStateSet == 0) {
			QPushButton::checkStateSet();
			return;
		}
		

		miqt_exec_callback_QPushButton_CheckStateSet(this, handle__CheckStateSet);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CheckStateSet() {

		QPushButton::checkStateSet();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__NextCheckState == 0) {
			QPushButton::nextCheckState();
			return;
		}
		

		miqt_exec_callback_QPushButton_NextCheckState(this, handle__NextCheckState);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_NextCheckState() {

		QPushButton::nextCheckState();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__KeyReleaseEvent == 0) {
			QPushButton::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* e) {

		QPushButton::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QPushButton::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QPushButton::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QPushButton::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QPushButton::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (handle__MouseMoveEvent == 0) {
			QPushButton::mouseMoveEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* e) {

		QPushButton::mouseMoveEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QPushButton::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QPushButton::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__TimerEvent == 0) {
			QPushButton::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QPushButton_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* e) {

		QPushButton::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QPushButton::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPushButton_DevType(const_cast<MiqtVirtualQPushButton*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QPushButton::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QPushButton::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QPushButton_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QPushButton::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QPushButton::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QPushButton_HeightForWidth(const_cast<MiqtVirtualQPushButton*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QPushButton::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QPushButton::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QPushButton_HasHeightForWidth(const_cast<MiqtVirtualQPushButton*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QPushButton::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QPushButton::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPushButton_PaintEngine(const_cast<MiqtVirtualQPushButton*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QPushButton::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QPushButton::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QPushButton::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QPushButton::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QPushButton::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QPushButton::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QPushButton::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QPushButton::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QPushButton::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QPushButton::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QPushButton::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QPushButton::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QPushButton::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QPushButton::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QPushButton::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QPushButton::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QPushButton::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QPushButton::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QPushButton::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QPushButton::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QPushButton::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QPushButton::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QPushButton::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QPushButton::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QPushButton::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QPushButton::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QPushButton::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QPushButton::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QPushButton::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QPushButton::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QPushButton::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QPushButton::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QPushButton::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QPushButton::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QPushButton_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QPushButton::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QPushButton::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QPushButton_Metric(const_cast<MiqtVirtualQPushButton*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QPushButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QPushButton::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPushButton_InitPainter(const_cast<MiqtVirtualQPushButton*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QPushButton::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QPushButton::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPushButton_Redirected(const_cast<MiqtVirtualQPushButton*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QPushButton::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QPushButton::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPushButton_SharedPainter(const_cast<MiqtVirtualQPushButton*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QPushButton::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QPushButton::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QPushButton_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QPushButton::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QPushButton::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPushButton_InputMethodQuery(const_cast<MiqtVirtualQPushButton*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QPushButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QPushButton::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QPushButton_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QPushButton::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QPushButton::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPushButton_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QPushButton::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QPushButton::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QPushButton::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QPushButton::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPushButton_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QPushButton::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QPushButton::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPushButton_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QPushButton::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QPushButton::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPushButton_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QPushButton::disconnectNotify(*signal);

	}

};

QPushButton* QPushButton_new(QWidget* parent) {
	return new MiqtVirtualQPushButton(parent);
}

QPushButton* QPushButton_new2() {
	return new MiqtVirtualQPushButton();
}

QPushButton* QPushButton_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQPushButton(text_QString);
}

QPushButton* QPushButton_new4(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQPushButton(*icon, text_QString);
}

QPushButton* QPushButton_new5(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQPushButton(text_QString, parent);
}

QPushButton* QPushButton_new6(QIcon* icon, struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQPushButton(*icon, text_QString, parent);
}

void QPushButton_virtbase(QPushButton* src, QAbstractButton** outptr_QAbstractButton) {
	*outptr_QAbstractButton = static_cast<QAbstractButton*>(src);
}

QMetaObject* QPushButton_MetaObject(const QPushButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPushButton_Metacast(QPushButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPushButton_Tr(const char* s) {
	QString _ret = QPushButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPushButton_TrUtf8(const char* s) {
	QString _ret = QPushButton::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QPushButton_SizeHint(const QPushButton* self) {
	return new QSize(self->sizeHint());
}

QSize* QPushButton_MinimumSizeHint(const QPushButton* self) {
	return new QSize(self->minimumSizeHint());
}

bool QPushButton_AutoDefault(const QPushButton* self) {
	return self->autoDefault();
}

void QPushButton_SetAutoDefault(QPushButton* self, bool autoDefault) {
	self->setAutoDefault(autoDefault);
}

bool QPushButton_IsDefault(const QPushButton* self) {
	return self->isDefault();
}

void QPushButton_SetDefault(QPushButton* self, bool defaultVal) {
	self->setDefault(defaultVal);
}

void QPushButton_SetMenu(QPushButton* self, QMenu* menu) {
	self->setMenu(menu);
}

QMenu* QPushButton_Menu(const QPushButton* self) {
	return self->menu();
}

void QPushButton_SetFlat(QPushButton* self, bool flat) {
	self->setFlat(flat);
}

bool QPushButton_IsFlat(const QPushButton* self) {
	return self->isFlat();
}

void QPushButton_ShowMenu(QPushButton* self) {
	self->showMenu();
}

struct miqt_string QPushButton_Tr2(const char* s, const char* c) {
	QString _ret = QPushButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPushButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPushButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPushButton_TrUtf82(const char* s, const char* c) {
	QString _ret = QPushButton::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPushButton_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPushButton::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPushButton_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QPushButton_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_SizeHint();
}

bool QPushButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QPushButton_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_MinimumSizeHint();
}

bool QPushButton_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QPushButton_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQPushButton*)(self) )->virtualbase_Event(e);
}

bool QPushButton_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QPushButton_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_PaintEvent(param1);
}

bool QPushButton_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QPushButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QPushButton_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QPushButton_virtualbase_FocusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_FocusInEvent(param1);
}

bool QPushButton_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QPushButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_FocusOutEvent(param1);
}

bool QPushButton_override_virtual_HitButton(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HitButton = slot;
	return true;
}

bool QPushButton_virtualbase_HitButton(const void* self, QPoint* pos) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_HitButton(pos);
}

bool QPushButton_override_virtual_CheckStateSet(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CheckStateSet = slot;
	return true;
}

void QPushButton_virtualbase_CheckStateSet(void* self) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_CheckStateSet();
}

bool QPushButton_override_virtual_NextCheckState(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NextCheckState = slot;
	return true;
}

void QPushButton_virtualbase_NextCheckState(void* self) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_NextCheckState();
}

bool QPushButton_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QPushButton_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_KeyReleaseEvent(e);
}

bool QPushButton_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QPushButton_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_MousePressEvent(e);
}

bool QPushButton_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QPushButton_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_MouseReleaseEvent(e);
}

bool QPushButton_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QPushButton_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_MouseMoveEvent(e);
}

bool QPushButton_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QPushButton_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_ChangeEvent(e);
}

bool QPushButton_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QPushButton_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_TimerEvent(e);
}

bool QPushButton_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QPushButton_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_DevType();
}

bool QPushButton_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QPushButton_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_SetVisible(visible);
}

bool QPushButton_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QPushButton_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QPushButton_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QPushButton_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_HasHeightForWidth();
}

bool QPushButton_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QPushButton_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_PaintEngine();
}

bool QPushButton_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QPushButton_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QPushButton_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QPushButton_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_WheelEvent(event);
}

bool QPushButton_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QPushButton_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_EnterEvent(event);
}

bool QPushButton_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QPushButton_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_LeaveEvent(event);
}

bool QPushButton_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QPushButton_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_MoveEvent(event);
}

bool QPushButton_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QPushButton_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_ResizeEvent(event);
}

bool QPushButton_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QPushButton_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_CloseEvent(event);
}

bool QPushButton_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QPushButton_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QPushButton_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QPushButton_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_TabletEvent(event);
}

bool QPushButton_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QPushButton_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_ActionEvent(event);
}

bool QPushButton_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QPushButton_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QPushButton_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QPushButton_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QPushButton_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QPushButton_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QPushButton_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QPushButton_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_DropEvent(event);
}

bool QPushButton_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QPushButton_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_ShowEvent(event);
}

bool QPushButton_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QPushButton_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_HideEvent(event);
}

bool QPushButton_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QPushButton_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQPushButton*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QPushButton_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QPushButton_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_Metric(param1);
}

bool QPushButton_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QPushButton_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPushButton*)(self) )->virtualbase_InitPainter(painter);
}

bool QPushButton_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QPushButton_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_Redirected(offset);
}

bool QPushButton_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QPushButton_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_SharedPainter();
}

bool QPushButton_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QPushButton_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QPushButton_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QPushButton_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQPushButton*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QPushButton_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QPushButton_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQPushButton*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QPushButton_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QPushButton_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQPushButton*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QPushButton_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QPushButton_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_ChildEvent(event);
}

bool QPushButton_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QPushButton_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_CustomEvent(event);
}

bool QPushButton_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QPushButton_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QPushButton_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QPushButton_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPushButton*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QPushButton_Delete(QPushButton* self) {
	delete self;
}

