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
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLCDNumber>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qlcdnumber.h>
#include "gen_qlcdnumber.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QLCDNumber_Overflow(intptr_t);
QSize* miqt_exec_callback_QLCDNumber_SizeHint(void*, intptr_t);
bool miqt_exec_callback_QLCDNumber_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QLCDNumber_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QLCDNumber_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QLCDNumber_InitStyleOption(void*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QLCDNumber_DevType(void*, intptr_t);
void miqt_exec_callback_QLCDNumber_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QLCDNumber_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QLCDNumber_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QLCDNumber_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QLCDNumber_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QLCDNumber_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLCDNumber_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLCDNumber_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLCDNumber_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLCDNumber_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QLCDNumber_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QLCDNumber_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QLCDNumber_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QLCDNumber_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QLCDNumber_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QLCDNumber_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QLCDNumber_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QLCDNumber_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QLCDNumber_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QLCDNumber_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QLCDNumber_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QLCDNumber_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QLCDNumber_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QLCDNumber_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QLCDNumber_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QLCDNumber_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QLCDNumber_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QLCDNumber_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QLCDNumber_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QLCDNumber_Metric(void*, intptr_t, int);
void miqt_exec_callback_QLCDNumber_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QLCDNumber_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QLCDNumber_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QLCDNumber_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QLCDNumber_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QLCDNumber_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QLCDNumber_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QLCDNumber_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QLCDNumber_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QLCDNumber_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QLCDNumber_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QLCDNumber_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQLCDNumber final : public QLCDNumber {
public:

	MiqtVirtualQLCDNumber(QWidget* parent): QLCDNumber(parent) {};
	MiqtVirtualQLCDNumber(): QLCDNumber() {};
	MiqtVirtualQLCDNumber(uint numDigits): QLCDNumber(numDigits) {};
	MiqtVirtualQLCDNumber(uint numDigits, QWidget* parent): QLCDNumber(numDigits, parent) {};

	virtual ~MiqtVirtualQLCDNumber() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QLCDNumber::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLCDNumber_SizeHint(const_cast<MiqtVirtualQLCDNumber*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QLCDNumber::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QLCDNumber::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QLCDNumber_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QLCDNumber::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QLCDNumber::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QLCDNumber_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QLCDNumber::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QLCDNumber::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QLCDNumber_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QLCDNumber::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QLCDNumber::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QLCDNumber_InitStyleOption(const_cast<MiqtVirtualQLCDNumber*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QLCDNumber::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QLCDNumber::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QLCDNumber_DevType(const_cast<MiqtVirtualQLCDNumber*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QLCDNumber::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QLCDNumber::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QLCDNumber_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QLCDNumber::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QLCDNumber::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QLCDNumber_MinimumSizeHint(const_cast<MiqtVirtualQLCDNumber*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QLCDNumber::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QLCDNumber::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QLCDNumber_HeightForWidth(const_cast<MiqtVirtualQLCDNumber*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QLCDNumber::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QLCDNumber::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QLCDNumber_HasHeightForWidth(const_cast<MiqtVirtualQLCDNumber*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QLCDNumber::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QLCDNumber::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QLCDNumber_PaintEngine(const_cast<MiqtVirtualQLCDNumber*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QLCDNumber::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QLCDNumber::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QLCDNumber::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QLCDNumber::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QLCDNumber::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QLCDNumber::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QLCDNumber::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QLCDNumber::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QLCDNumber::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QLCDNumber::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QLCDNumber::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QLCDNumber::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QLCDNumber::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QLCDNumber::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QLCDNumber::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QLCDNumber::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QLCDNumber::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QLCDNumber::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QLCDNumber::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QLCDNumber::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QLCDNumber::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QLCDNumber::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QLCDNumber::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QLCDNumber::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QLCDNumber::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QLCDNumber::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QLCDNumber::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QLCDNumber::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QLCDNumber::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QLCDNumber::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QLCDNumber::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QLCDNumber::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QLCDNumber::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QLCDNumber::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QLCDNumber::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QLCDNumber::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QLCDNumber::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QLCDNumber::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QLCDNumber::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QLCDNumber::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QLCDNumber::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QLCDNumber::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QLCDNumber::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QLCDNumber::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QLCDNumber::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QLCDNumber::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QLCDNumber::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QLCDNumber::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QLCDNumber_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QLCDNumber::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QLCDNumber::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QLCDNumber_Metric(const_cast<MiqtVirtualQLCDNumber*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QLCDNumber::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QLCDNumber::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QLCDNumber_InitPainter(const_cast<MiqtVirtualQLCDNumber*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QLCDNumber::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QLCDNumber::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QLCDNumber_Redirected(const_cast<MiqtVirtualQLCDNumber*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QLCDNumber::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QLCDNumber::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QLCDNumber_SharedPainter(const_cast<MiqtVirtualQLCDNumber*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QLCDNumber::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QLCDNumber::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QLCDNumber_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QLCDNumber::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QLCDNumber::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QLCDNumber_InputMethodQuery(const_cast<MiqtVirtualQLCDNumber*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QLCDNumber::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QLCDNumber::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QLCDNumber_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QLCDNumber::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QLCDNumber::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QLCDNumber_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QLCDNumber::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QLCDNumber::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QLCDNumber::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QLCDNumber::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QLCDNumber::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QLCDNumber::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QLCDNumber_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QLCDNumber::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QLCDNumber::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLCDNumber_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QLCDNumber::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QLCDNumber::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QLCDNumber_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QLCDNumber::disconnectNotify(*signal);

	}

};

QLCDNumber* QLCDNumber_new(QWidget* parent) {
	return new MiqtVirtualQLCDNumber(parent);
}

QLCDNumber* QLCDNumber_new2() {
	return new MiqtVirtualQLCDNumber();
}

QLCDNumber* QLCDNumber_new3(unsigned int numDigits) {
	return new MiqtVirtualQLCDNumber(static_cast<uint>(numDigits));
}

QLCDNumber* QLCDNumber_new4(unsigned int numDigits, QWidget* parent) {
	return new MiqtVirtualQLCDNumber(static_cast<uint>(numDigits), parent);
}

void QLCDNumber_virtbase(QLCDNumber* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QLCDNumber_MetaObject(const QLCDNumber* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLCDNumber_Metacast(QLCDNumber* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLCDNumber_Tr(const char* s) {
	QString _ret = QLCDNumber::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLCDNumber_SmallDecimalPoint(const QLCDNumber* self) {
	return self->smallDecimalPoint();
}

int QLCDNumber_DigitCount(const QLCDNumber* self) {
	return self->digitCount();
}

void QLCDNumber_SetDigitCount(QLCDNumber* self, int nDigits) {
	self->setDigitCount(static_cast<int>(nDigits));
}

bool QLCDNumber_CheckOverflow(const QLCDNumber* self, double num) {
	return self->checkOverflow(static_cast<double>(num));
}

bool QLCDNumber_CheckOverflowWithNum(const QLCDNumber* self, int num) {
	return self->checkOverflow(static_cast<int>(num));
}

int QLCDNumber_Mode(const QLCDNumber* self) {
	QLCDNumber::Mode _ret = self->mode();
	return static_cast<int>(_ret);
}

void QLCDNumber_SetMode(QLCDNumber* self, int mode) {
	self->setMode(static_cast<QLCDNumber::Mode>(mode));
}

int QLCDNumber_SegmentStyle(const QLCDNumber* self) {
	QLCDNumber::SegmentStyle _ret = self->segmentStyle();
	return static_cast<int>(_ret);
}

void QLCDNumber_SetSegmentStyle(QLCDNumber* self, int segmentStyle) {
	self->setSegmentStyle(static_cast<QLCDNumber::SegmentStyle>(segmentStyle));
}

double QLCDNumber_Value(const QLCDNumber* self) {
	return self->value();
}

int QLCDNumber_IntValue(const QLCDNumber* self) {
	return self->intValue();
}

QSize* QLCDNumber_SizeHint(const QLCDNumber* self) {
	return new QSize(self->sizeHint());
}

void QLCDNumber_Display(QLCDNumber* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	self->display(str_QString);
}

void QLCDNumber_DisplayWithNum(QLCDNumber* self, int num) {
	self->display(static_cast<int>(num));
}

void QLCDNumber_Display2(QLCDNumber* self, double num) {
	self->display(static_cast<double>(num));
}

void QLCDNumber_SetHexMode(QLCDNumber* self) {
	self->setHexMode();
}

void QLCDNumber_SetDecMode(QLCDNumber* self) {
	self->setDecMode();
}

void QLCDNumber_SetOctMode(QLCDNumber* self) {
	self->setOctMode();
}

void QLCDNumber_SetBinMode(QLCDNumber* self) {
	self->setBinMode();
}

void QLCDNumber_SetSmallDecimalPoint(QLCDNumber* self, bool smallDecimalPoint) {
	self->setSmallDecimalPoint(smallDecimalPoint);
}

void QLCDNumber_Overflow(QLCDNumber* self) {
	self->overflow();
}

void QLCDNumber_connect_Overflow(QLCDNumber* self, intptr_t slot) {
	MiqtVirtualQLCDNumber::connect(self, static_cast<void (QLCDNumber::*)()>(&QLCDNumber::overflow), self, [=]() {
		miqt_exec_callback_QLCDNumber_Overflow(slot);
	});
}

struct miqt_string QLCDNumber_Tr2(const char* s, const char* c) {
	QString _ret = QLCDNumber::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLCDNumber_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLCDNumber::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLCDNumber_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QLCDNumber_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQLCDNumber*)(self) )->virtualbase_SizeHint();
}

bool QLCDNumber_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QLCDNumber_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_Event(e);
}

bool QLCDNumber_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_PaintEvent(param1);
}

bool QLCDNumber_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QLCDNumber_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QLCDNumber_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQLCDNumber*)(self) )->virtualbase_InitStyleOption(option);
}

bool QLCDNumber_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QLCDNumber_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQLCDNumber*)(self) )->virtualbase_DevType();
}

bool QLCDNumber_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QLCDNumber_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_SetVisible(visible);
}

bool QLCDNumber_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QLCDNumber_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQLCDNumber*)(self) )->virtualbase_MinimumSizeHint();
}

bool QLCDNumber_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QLCDNumber_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQLCDNumber*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QLCDNumber_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QLCDNumber_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQLCDNumber*)(self) )->virtualbase_HasHeightForWidth();
}

bool QLCDNumber_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QLCDNumber_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQLCDNumber*)(self) )->virtualbase_PaintEngine();
}

bool QLCDNumber_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_MousePressEvent(event);
}

bool QLCDNumber_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QLCDNumber_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QLCDNumber_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QLCDNumber_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_WheelEvent(event);
}

bool QLCDNumber_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QLCDNumber_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QLCDNumber_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_FocusInEvent(event);
}

bool QLCDNumber_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QLCDNumber_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_EnterEvent(event);
}

bool QLCDNumber_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_LeaveEvent(event);
}

bool QLCDNumber_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_MoveEvent(event);
}

bool QLCDNumber_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_ResizeEvent(event);
}

bool QLCDNumber_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_CloseEvent(event);
}

bool QLCDNumber_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QLCDNumber_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_TabletEvent(event);
}

bool QLCDNumber_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_ActionEvent(event);
}

bool QLCDNumber_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QLCDNumber_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QLCDNumber_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QLCDNumber_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_DropEvent(event);
}

bool QLCDNumber_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_ShowEvent(event);
}

bool QLCDNumber_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_HideEvent(event);
}

bool QLCDNumber_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QLCDNumber_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QLCDNumber_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QLCDNumber_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQLCDNumber*)(self) )->virtualbase_Metric(param1);
}

bool QLCDNumber_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QLCDNumber_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQLCDNumber*)(self) )->virtualbase_InitPainter(painter);
}

bool QLCDNumber_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QLCDNumber_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQLCDNumber*)(self) )->virtualbase_Redirected(offset);
}

bool QLCDNumber_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QLCDNumber_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQLCDNumber*)(self) )->virtualbase_SharedPainter();
}

bool QLCDNumber_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QLCDNumber_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QLCDNumber_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQLCDNumber*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QLCDNumber_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QLCDNumber_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QLCDNumber_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QLCDNumber_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QLCDNumber_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_TimerEvent(event);
}

bool QLCDNumber_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_ChildEvent(event);
}

bool QLCDNumber_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QLCDNumber_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_CustomEvent(event);
}

bool QLCDNumber_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QLCDNumber_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QLCDNumber_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQLCDNumber* self_cast = dynamic_cast<MiqtVirtualQLCDNumber*>( (QLCDNumber*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QLCDNumber_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQLCDNumber*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QLCDNumber_Delete(QLCDNumber* self) {
	delete self;
}

