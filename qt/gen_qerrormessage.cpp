#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QErrorMessage>
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
#include <qerrormessage.h>
#include "gen_qerrormessage.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QErrorMessage_Done(void*, intptr_t, int);
void miqt_exec_callback_QErrorMessage_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QErrorMessage_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QErrorMessage_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QErrorMessage_MinimumSizeHint(void*, intptr_t);
void miqt_exec_callback_QErrorMessage_Open(void*, intptr_t);
int miqt_exec_callback_QErrorMessage_Exec(void*, intptr_t);
void miqt_exec_callback_QErrorMessage_Accept(void*, intptr_t);
void miqt_exec_callback_QErrorMessage_Reject(void*, intptr_t);
void miqt_exec_callback_QErrorMessage_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QErrorMessage_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QErrorMessage_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QErrorMessage_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QErrorMessage_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QErrorMessage_EventFilter(void*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QErrorMessage_DevType(void*, intptr_t);
int miqt_exec_callback_QErrorMessage_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QErrorMessage_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QErrorMessage_PaintEngine(void*, intptr_t);
bool miqt_exec_callback_QErrorMessage_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QErrorMessage_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QErrorMessage_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QErrorMessage_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QErrorMessage_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QErrorMessage_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QErrorMessage_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QErrorMessage_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QErrorMessage_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QErrorMessage_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QErrorMessage_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QErrorMessage_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QErrorMessage_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QErrorMessage_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QErrorMessage_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QErrorMessage_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QErrorMessage_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QErrorMessage_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QErrorMessage_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QErrorMessage_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QErrorMessage_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QErrorMessage_Metric(void*, intptr_t, int);
void miqt_exec_callback_QErrorMessage_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QErrorMessage_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QErrorMessage_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QErrorMessage_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QErrorMessage_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QErrorMessage_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QErrorMessage_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QErrorMessage_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QErrorMessage_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QErrorMessage_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QErrorMessage_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQErrorMessage final : public QErrorMessage {
public:

	MiqtVirtualQErrorMessage(QWidget* parent): QErrorMessage(parent) {};
	MiqtVirtualQErrorMessage(): QErrorMessage() {};

	virtual ~MiqtVirtualQErrorMessage() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int param1) override {
		if (handle__Done == 0) {
			QErrorMessage::done(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QErrorMessage_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int param1) {

		QErrorMessage::done(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QErrorMessage::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QErrorMessage_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QErrorMessage::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QErrorMessage::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QErrorMessage_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QErrorMessage::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QErrorMessage::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QErrorMessage_SizeHint(const_cast<MiqtVirtualQErrorMessage*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QErrorMessage::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QErrorMessage::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QErrorMessage_MinimumSizeHint(const_cast<MiqtVirtualQErrorMessage*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QErrorMessage::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QErrorMessage::open();
			return;
		}
		

		miqt_exec_callback_QErrorMessage_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QErrorMessage::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QErrorMessage::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QErrorMessage_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QErrorMessage::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QErrorMessage::accept();
			return;
		}
		

		miqt_exec_callback_QErrorMessage_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QErrorMessage::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QErrorMessage::reject();
			return;
		}
		

		miqt_exec_callback_QErrorMessage_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QErrorMessage::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QErrorMessage::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QErrorMessage::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QErrorMessage::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QErrorMessage::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QErrorMessage::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QErrorMessage::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QErrorMessage::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QErrorMessage::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QErrorMessage::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QErrorMessage::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QErrorMessage::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QErrorMessage_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QErrorMessage::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QErrorMessage::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QErrorMessage_DevType(const_cast<MiqtVirtualQErrorMessage*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QErrorMessage::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QErrorMessage::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QErrorMessage_HeightForWidth(const_cast<MiqtVirtualQErrorMessage*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QErrorMessage::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QErrorMessage::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QErrorMessage_HasHeightForWidth(const_cast<MiqtVirtualQErrorMessage*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QErrorMessage::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QErrorMessage::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QErrorMessage_PaintEngine(const_cast<MiqtVirtualQErrorMessage*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QErrorMessage::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QErrorMessage::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QErrorMessage_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QErrorMessage::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QErrorMessage::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QErrorMessage::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QErrorMessage::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QErrorMessage::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QErrorMessage::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QErrorMessage::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QErrorMessage::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QErrorMessage::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QErrorMessage::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QErrorMessage::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QErrorMessage::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QErrorMessage::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QErrorMessage::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QErrorMessage::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QErrorMessage::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QErrorMessage::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QErrorMessage::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QErrorMessage::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QErrorMessage::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QErrorMessage::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QErrorMessage::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QErrorMessage::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QErrorMessage::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QErrorMessage::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QErrorMessage::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QErrorMessage::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QErrorMessage::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QErrorMessage::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QErrorMessage::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QErrorMessage::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QErrorMessage::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QErrorMessage::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QErrorMessage::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QErrorMessage::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QErrorMessage::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QErrorMessage::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QErrorMessage::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QErrorMessage::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QErrorMessage::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QErrorMessage_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QErrorMessage::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QErrorMessage::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QErrorMessage_Metric(const_cast<MiqtVirtualQErrorMessage*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QErrorMessage::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QErrorMessage::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QErrorMessage_InitPainter(const_cast<MiqtVirtualQErrorMessage*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QErrorMessage::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QErrorMessage::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QErrorMessage_Redirected(const_cast<MiqtVirtualQErrorMessage*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QErrorMessage::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QErrorMessage::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QErrorMessage_SharedPainter(const_cast<MiqtVirtualQErrorMessage*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QErrorMessage::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QErrorMessage::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QErrorMessage_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QErrorMessage::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QErrorMessage::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QErrorMessage_InputMethodQuery(const_cast<MiqtVirtualQErrorMessage*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QErrorMessage::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QErrorMessage::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QErrorMessage_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QErrorMessage::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QErrorMessage::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QErrorMessage::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QErrorMessage::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QErrorMessage::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QErrorMessage::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QErrorMessage_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QErrorMessage::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QErrorMessage::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QErrorMessage_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QErrorMessage::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QErrorMessage::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QErrorMessage_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QErrorMessage::disconnectNotify(*signal);

	}

};

QErrorMessage* QErrorMessage_new(QWidget* parent) {
	return new MiqtVirtualQErrorMessage(parent);
}

QErrorMessage* QErrorMessage_new2() {
	return new MiqtVirtualQErrorMessage();
}

void QErrorMessage_virtbase(QErrorMessage* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QErrorMessage_MetaObject(const QErrorMessage* self) {
	return (QMetaObject*) self->metaObject();
}

void* QErrorMessage_Metacast(QErrorMessage* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QErrorMessage_Tr(const char* s) {
	QString _ret = QErrorMessage::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QErrorMessage_TrUtf8(const char* s) {
	QString _ret = QErrorMessage::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QErrorMessage* QErrorMessage_QtHandler() {
	return QErrorMessage::qtHandler();
}

void QErrorMessage_ShowMessage(QErrorMessage* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->showMessage(message_QString);
}

void QErrorMessage_ShowMessage2(QErrorMessage* self, struct miqt_string message, struct miqt_string typeVal) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	QString typeVal_QString = QString::fromUtf8(typeVal.data, typeVal.len);
	self->showMessage(message_QString, typeVal_QString);
}

struct miqt_string QErrorMessage_Tr2(const char* s, const char* c) {
	QString _ret = QErrorMessage::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QErrorMessage_Tr3(const char* s, const char* c, int n) {
	QString _ret = QErrorMessage::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QErrorMessage_TrUtf82(const char* s, const char* c) {
	QString _ret = QErrorMessage::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QErrorMessage_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QErrorMessage::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QErrorMessage_override_virtual_Done(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Done = slot;
	return true;
}

void QErrorMessage_virtualbase_Done(void* self, int param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_Done(param1);
}

bool QErrorMessage_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_ChangeEvent(e);
}

bool QErrorMessage_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QErrorMessage_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_SetVisible(visible);
}

bool QErrorMessage_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QErrorMessage_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_SizeHint();
}

bool QErrorMessage_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QErrorMessage_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_MinimumSizeHint();
}

bool QErrorMessage_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

void QErrorMessage_virtualbase_Open(void* self) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_Open();
}

bool QErrorMessage_override_virtual_Exec(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Exec = slot;
	return true;
}

int QErrorMessage_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_Exec();
}

bool QErrorMessage_override_virtual_Accept(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Accept = slot;
	return true;
}

void QErrorMessage_virtualbase_Accept(void* self) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_Accept();
}

bool QErrorMessage_override_virtual_Reject(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reject = slot;
	return true;
}

void QErrorMessage_virtualbase_Reject(void* self) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_Reject();
}

bool QErrorMessage_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QErrorMessage_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_CloseEvent(param1);
}

bool QErrorMessage_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_ShowEvent(param1);
}

bool QErrorMessage_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QErrorMessage_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QErrorMessage_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QErrorMessage_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QErrorMessage_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QErrorMessage_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_DevType();
}

bool QErrorMessage_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QErrorMessage_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QErrorMessage_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QErrorMessage_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_HasHeightForWidth();
}

bool QErrorMessage_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QErrorMessage_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_PaintEngine();
}

bool QErrorMessage_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QErrorMessage_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_Event(event);
}

bool QErrorMessage_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_MousePressEvent(event);
}

bool QErrorMessage_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QErrorMessage_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QErrorMessage_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QErrorMessage_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_WheelEvent(event);
}

bool QErrorMessage_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QErrorMessage_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_FocusInEvent(event);
}

bool QErrorMessage_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QErrorMessage_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_EnterEvent(event);
}

bool QErrorMessage_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_LeaveEvent(event);
}

bool QErrorMessage_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_PaintEvent(event);
}

bool QErrorMessage_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_MoveEvent(event);
}

bool QErrorMessage_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_TabletEvent(event);
}

bool QErrorMessage_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_ActionEvent(event);
}

bool QErrorMessage_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QErrorMessage_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QErrorMessage_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QErrorMessage_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_DropEvent(event);
}

bool QErrorMessage_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_HideEvent(event);
}

bool QErrorMessage_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QErrorMessage_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QErrorMessage_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QErrorMessage_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_Metric(param1);
}

bool QErrorMessage_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QErrorMessage_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_InitPainter(painter);
}

bool QErrorMessage_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QErrorMessage_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_Redirected(offset);
}

bool QErrorMessage_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QErrorMessage_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_SharedPainter();
}

bool QErrorMessage_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QErrorMessage_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QErrorMessage_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQErrorMessage*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QErrorMessage_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QErrorMessage_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QErrorMessage_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_TimerEvent(event);
}

bool QErrorMessage_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_ChildEvent(event);
}

bool QErrorMessage_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QErrorMessage_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_CustomEvent(event);
}

bool QErrorMessage_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QErrorMessage_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QErrorMessage_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQErrorMessage* self_cast = dynamic_cast<MiqtVirtualQErrorMessage*>( (QErrorMessage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QErrorMessage_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQErrorMessage*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QErrorMessage_Delete(QErrorMessage* self) {
	delete self;
}

