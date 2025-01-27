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
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
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
#include <QRadioButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qradiobutton.h>
#include "gen_qradiobutton.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QRadioButton_SizeHint(const QRadioButton*, intptr_t);
QSize* miqt_exec_callback_QRadioButton_MinimumSizeHint(const QRadioButton*, intptr_t);
bool miqt_exec_callback_QRadioButton_Event(QRadioButton*, intptr_t, QEvent*);
bool miqt_exec_callback_QRadioButton_HitButton(const QRadioButton*, intptr_t, QPoint*);
void miqt_exec_callback_QRadioButton_PaintEvent(QRadioButton*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QRadioButton_MouseMoveEvent(QRadioButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRadioButton_InitStyleOption(const QRadioButton*, intptr_t, QStyleOptionButton*);
void miqt_exec_callback_QRadioButton_CheckStateSet(QRadioButton*, intptr_t);
void miqt_exec_callback_QRadioButton_NextCheckState(QRadioButton*, intptr_t);
void miqt_exec_callback_QRadioButton_KeyPressEvent(QRadioButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QRadioButton_KeyReleaseEvent(QRadioButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QRadioButton_MousePressEvent(QRadioButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRadioButton_MouseReleaseEvent(QRadioButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRadioButton_FocusInEvent(QRadioButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QRadioButton_FocusOutEvent(QRadioButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QRadioButton_ChangeEvent(QRadioButton*, intptr_t, QEvent*);
void miqt_exec_callback_QRadioButton_TimerEvent(QRadioButton*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QRadioButton_DevType(const QRadioButton*, intptr_t);
void miqt_exec_callback_QRadioButton_SetVisible(QRadioButton*, intptr_t, bool);
int miqt_exec_callback_QRadioButton_HeightForWidth(const QRadioButton*, intptr_t, int);
bool miqt_exec_callback_QRadioButton_HasHeightForWidth(const QRadioButton*, intptr_t);
QPaintEngine* miqt_exec_callback_QRadioButton_PaintEngine(const QRadioButton*, intptr_t);
void miqt_exec_callback_QRadioButton_MouseDoubleClickEvent(QRadioButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRadioButton_WheelEvent(QRadioButton*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QRadioButton_EnterEvent(QRadioButton*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QRadioButton_LeaveEvent(QRadioButton*, intptr_t, QEvent*);
void miqt_exec_callback_QRadioButton_MoveEvent(QRadioButton*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QRadioButton_ResizeEvent(QRadioButton*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QRadioButton_CloseEvent(QRadioButton*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QRadioButton_ContextMenuEvent(QRadioButton*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QRadioButton_TabletEvent(QRadioButton*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QRadioButton_ActionEvent(QRadioButton*, intptr_t, QActionEvent*);
void miqt_exec_callback_QRadioButton_DragEnterEvent(QRadioButton*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QRadioButton_DragMoveEvent(QRadioButton*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QRadioButton_DragLeaveEvent(QRadioButton*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QRadioButton_DropEvent(QRadioButton*, intptr_t, QDropEvent*);
void miqt_exec_callback_QRadioButton_ShowEvent(QRadioButton*, intptr_t, QShowEvent*);
void miqt_exec_callback_QRadioButton_HideEvent(QRadioButton*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QRadioButton_NativeEvent(QRadioButton*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QRadioButton_Metric(const QRadioButton*, intptr_t, int);
void miqt_exec_callback_QRadioButton_InitPainter(const QRadioButton*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QRadioButton_Redirected(const QRadioButton*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QRadioButton_SharedPainter(const QRadioButton*, intptr_t);
void miqt_exec_callback_QRadioButton_InputMethodEvent(QRadioButton*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QRadioButton_InputMethodQuery(const QRadioButton*, intptr_t, int);
bool miqt_exec_callback_QRadioButton_FocusNextPrevChild(QRadioButton*, intptr_t, bool);
bool miqt_exec_callback_QRadioButton_EventFilter(QRadioButton*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QRadioButton_ChildEvent(QRadioButton*, intptr_t, QChildEvent*);
void miqt_exec_callback_QRadioButton_CustomEvent(QRadioButton*, intptr_t, QEvent*);
void miqt_exec_callback_QRadioButton_ConnectNotify(QRadioButton*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRadioButton_DisconnectNotify(QRadioButton*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQRadioButton final : public QRadioButton {
public:

	MiqtVirtualQRadioButton(QWidget* parent): QRadioButton(parent) {};
	MiqtVirtualQRadioButton(): QRadioButton() {};
	MiqtVirtualQRadioButton(const QString& text): QRadioButton(text) {};
	MiqtVirtualQRadioButton(const QString& text, QWidget* parent): QRadioButton(text, parent) {};

	virtual ~MiqtVirtualQRadioButton() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QRadioButton::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QRadioButton_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QRadioButton::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QRadioButton::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QRadioButton_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QRadioButton::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QRadioButton::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QRadioButton_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QRadioButton::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& param1) const override {
		if (handle__HitButton == 0) {
			return QRadioButton::hitButton(param1);
		}
		
		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);

		bool callback_return_value = miqt_exec_callback_QRadioButton_HitButton(this, handle__HitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HitButton(QPoint* param1) const {

		return QRadioButton::hitButton(*param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QRadioButton::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QRadioButton_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QRadioButton::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QRadioButton::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QRadioButton_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QRadioButton::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionButton* button) const override {
		if (handle__InitStyleOption == 0) {
			QRadioButton::initStyleOption(button);
			return;
		}
		
		QStyleOptionButton* sigval1 = button;

		miqt_exec_callback_QRadioButton_InitStyleOption(this, handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionButton* button) const {

		QRadioButton::initStyleOption(button);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CheckStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__CheckStateSet == 0) {
			QRadioButton::checkStateSet();
			return;
		}
		

		miqt_exec_callback_QRadioButton_CheckStateSet(this, handle__CheckStateSet);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CheckStateSet() {

		QRadioButton::checkStateSet();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__NextCheckState == 0) {
			QRadioButton::nextCheckState();
			return;
		}
		

		miqt_exec_callback_QRadioButton_NextCheckState(this, handle__NextCheckState);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_NextCheckState() {

		QRadioButton::nextCheckState();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__KeyPressEvent == 0) {
			QRadioButton::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* e) {

		QRadioButton::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__KeyReleaseEvent == 0) {
			QRadioButton::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* e) {

		QRadioButton::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QRadioButton::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QRadioButton::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QRadioButton::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QRadioButton::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__FocusInEvent == 0) {
			QRadioButton::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* e) {

		QRadioButton::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__FocusOutEvent == 0) {
			QRadioButton::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* e) {

		QRadioButton::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QRadioButton::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QRadioButton::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__TimerEvent == 0) {
			QRadioButton::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QRadioButton_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* e) {

		QRadioButton::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QRadioButton::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QRadioButton_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QRadioButton::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QRadioButton::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QRadioButton_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QRadioButton::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QRadioButton::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QRadioButton_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QRadioButton::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QRadioButton::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QRadioButton_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QRadioButton::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QRadioButton::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QRadioButton_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QRadioButton::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QRadioButton::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QRadioButton::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QRadioButton::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QRadioButton::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QRadioButton::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QRadioButton::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QRadioButton::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QRadioButton::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QRadioButton::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QRadioButton::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QRadioButton::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QRadioButton::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QRadioButton::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QRadioButton::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QRadioButton::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QRadioButton::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QRadioButton::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QRadioButton::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QRadioButton::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QRadioButton::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QRadioButton::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QRadioButton::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QRadioButton::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QRadioButton::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QRadioButton::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QRadioButton::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QRadioButton::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QRadioButton::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QRadioButton::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QRadioButton::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QRadioButton::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QRadioButton::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QRadioButton::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QRadioButton_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QRadioButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QRadioButton::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QRadioButton_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QRadioButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QRadioButton::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QRadioButton_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QRadioButton::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QRadioButton::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QRadioButton_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QRadioButton::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QRadioButton::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QRadioButton_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QRadioButton::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QRadioButton::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QRadioButton_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QRadioButton::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QRadioButton::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QRadioButton_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QRadioButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QRadioButton::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QRadioButton_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QRadioButton::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QRadioButton::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QRadioButton_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QRadioButton::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QRadioButton::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QRadioButton::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QRadioButton::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRadioButton_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QRadioButton::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QRadioButton::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRadioButton_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QRadioButton::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QRadioButton::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRadioButton_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QRadioButton::disconnectNotify(*signal);

	}

};

QRadioButton* QRadioButton_new(QWidget* parent) {
	return new MiqtVirtualQRadioButton(parent);
}

QRadioButton* QRadioButton_new2() {
	return new MiqtVirtualQRadioButton();
}

QRadioButton* QRadioButton_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQRadioButton(text_QString);
}

QRadioButton* QRadioButton_new4(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQRadioButton(text_QString, parent);
}

void QRadioButton_virtbase(QRadioButton* src, QAbstractButton** outptr_QAbstractButton) {
	*outptr_QAbstractButton = static_cast<QAbstractButton*>(src);
}

QMetaObject* QRadioButton_MetaObject(const QRadioButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRadioButton_Metacast(QRadioButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRadioButton_Tr(const char* s) {
	QString _ret = QRadioButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QRadioButton_SizeHint(const QRadioButton* self) {
	return new QSize(self->sizeHint());
}

QSize* QRadioButton_MinimumSizeHint(const QRadioButton* self) {
	return new QSize(self->minimumSizeHint());
}

struct miqt_string QRadioButton_Tr2(const char* s, const char* c) {
	QString _ret = QRadioButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRadioButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRadioButton_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QRadioButton_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_SizeHint();
}

bool QRadioButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QRadioButton_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_MinimumSizeHint();
}

bool QRadioButton_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QRadioButton_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQRadioButton*)(self) )->virtualbase_Event(e);
}

bool QRadioButton_override_virtual_HitButton(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HitButton = slot;
	return true;
}

bool QRadioButton_virtualbase_HitButton(const void* self, QPoint* param1) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_HitButton(param1);
}

bool QRadioButton_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QRadioButton_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_PaintEvent(param1);
}

bool QRadioButton_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QRadioButton_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_MouseMoveEvent(param1);
}

bool QRadioButton_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QRadioButton_virtualbase_InitStyleOption(const void* self, QStyleOptionButton* button) {
	( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_InitStyleOption(button);
}

bool QRadioButton_override_virtual_CheckStateSet(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CheckStateSet = slot;
	return true;
}

void QRadioButton_virtualbase_CheckStateSet(void* self) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_CheckStateSet();
}

bool QRadioButton_override_virtual_NextCheckState(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NextCheckState = slot;
	return true;
}

void QRadioButton_virtualbase_NextCheckState(void* self) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_NextCheckState();
}

bool QRadioButton_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QRadioButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_KeyPressEvent(e);
}

bool QRadioButton_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QRadioButton_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_KeyReleaseEvent(e);
}

bool QRadioButton_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QRadioButton_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_MousePressEvent(e);
}

bool QRadioButton_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QRadioButton_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_MouseReleaseEvent(e);
}

bool QRadioButton_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QRadioButton_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_FocusInEvent(e);
}

bool QRadioButton_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QRadioButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_FocusOutEvent(e);
}

bool QRadioButton_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QRadioButton_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_ChangeEvent(e);
}

bool QRadioButton_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QRadioButton_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_TimerEvent(e);
}

bool QRadioButton_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QRadioButton_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_DevType();
}

bool QRadioButton_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QRadioButton_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_SetVisible(visible);
}

bool QRadioButton_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QRadioButton_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QRadioButton_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QRadioButton_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_HasHeightForWidth();
}

bool QRadioButton_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QRadioButton_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_PaintEngine();
}

bool QRadioButton_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QRadioButton_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QRadioButton_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QRadioButton_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_WheelEvent(event);
}

bool QRadioButton_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QRadioButton_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_EnterEvent(event);
}

bool QRadioButton_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QRadioButton_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_LeaveEvent(event);
}

bool QRadioButton_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QRadioButton_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_MoveEvent(event);
}

bool QRadioButton_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QRadioButton_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_ResizeEvent(event);
}

bool QRadioButton_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QRadioButton_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_CloseEvent(event);
}

bool QRadioButton_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QRadioButton_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QRadioButton_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QRadioButton_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_TabletEvent(event);
}

bool QRadioButton_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QRadioButton_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_ActionEvent(event);
}

bool QRadioButton_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QRadioButton_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QRadioButton_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QRadioButton_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QRadioButton_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QRadioButton_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QRadioButton_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QRadioButton_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_DropEvent(event);
}

bool QRadioButton_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QRadioButton_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_ShowEvent(event);
}

bool QRadioButton_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QRadioButton_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_HideEvent(event);
}

bool QRadioButton_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QRadioButton_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQRadioButton*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QRadioButton_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QRadioButton_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_Metric(param1);
}

bool QRadioButton_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QRadioButton_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_InitPainter(painter);
}

bool QRadioButton_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QRadioButton_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_Redirected(offset);
}

bool QRadioButton_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QRadioButton_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_SharedPainter();
}

bool QRadioButton_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QRadioButton_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QRadioButton_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QRadioButton_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQRadioButton*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QRadioButton_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QRadioButton_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQRadioButton*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QRadioButton_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QRadioButton_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQRadioButton*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QRadioButton_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QRadioButton_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_ChildEvent(event);
}

bool QRadioButton_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QRadioButton_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_CustomEvent(event);
}

bool QRadioButton_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QRadioButton_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QRadioButton_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRadioButton* self_cast = dynamic_cast<MiqtVirtualQRadioButton*>( (QRadioButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QRadioButton_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRadioButton*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QRadioButton_Delete(QRadioButton* self) {
	delete self;
}

