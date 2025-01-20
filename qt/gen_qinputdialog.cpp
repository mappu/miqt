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
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputDialog>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
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
#include <qinputdialog.h>
#include "gen_qinputdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QInputDialog_TextValueChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QInputDialog_TextValueSelected(intptr_t, struct miqt_string);
void miqt_exec_callback_QInputDialog_IntValueChanged(intptr_t, int);
void miqt_exec_callback_QInputDialog_IntValueSelected(intptr_t, int);
void miqt_exec_callback_QInputDialog_DoubleValueChanged(intptr_t, double);
void miqt_exec_callback_QInputDialog_DoubleValueSelected(intptr_t, double);
QSize* miqt_exec_callback_QInputDialog_MinimumSizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QInputDialog_SizeHint(void*, intptr_t);
void miqt_exec_callback_QInputDialog_SetVisible(void*, intptr_t, bool);
void miqt_exec_callback_QInputDialog_Done(void*, intptr_t, int);
void miqt_exec_callback_QInputDialog_Open(void*, intptr_t);
int miqt_exec_callback_QInputDialog_Exec(void*, intptr_t);
void miqt_exec_callback_QInputDialog_Accept(void*, intptr_t);
void miqt_exec_callback_QInputDialog_Reject(void*, intptr_t);
void miqt_exec_callback_QInputDialog_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QInputDialog_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QInputDialog_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QInputDialog_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QInputDialog_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QInputDialog_EventFilter(void*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QInputDialog_DevType(void*, intptr_t);
int miqt_exec_callback_QInputDialog_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QInputDialog_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QInputDialog_PaintEngine(void*, intptr_t);
bool miqt_exec_callback_QInputDialog_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QInputDialog_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QInputDialog_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QInputDialog_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QInputDialog_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QInputDialog_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QInputDialog_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QInputDialog_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QInputDialog_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QInputDialog_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QInputDialog_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QInputDialog_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QInputDialog_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QInputDialog_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QInputDialog_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QInputDialog_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QInputDialog_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QInputDialog_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QInputDialog_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QInputDialog_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QInputDialog_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QInputDialog_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QInputDialog_Metric(void*, intptr_t, int);
void miqt_exec_callback_QInputDialog_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QInputDialog_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QInputDialog_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QInputDialog_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QInputDialog_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QInputDialog_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QInputDialog_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QInputDialog_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QInputDialog_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QInputDialog_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QInputDialog_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQInputDialog final : public QInputDialog {
public:

	MiqtVirtualQInputDialog(QWidget* parent): QInputDialog(parent) {};
	MiqtVirtualQInputDialog(): QInputDialog() {};
	MiqtVirtualQInputDialog(QWidget* parent, Qt::WindowFlags flags): QInputDialog(parent, flags) {};

	virtual ~MiqtVirtualQInputDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QInputDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QInputDialog_MinimumSizeHint(const_cast<MiqtVirtualQInputDialog*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QInputDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QInputDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QInputDialog_SizeHint(const_cast<MiqtVirtualQInputDialog*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QInputDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QInputDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QInputDialog_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QInputDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__Done == 0) {
			QInputDialog::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QInputDialog_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int result) {

		QInputDialog::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QInputDialog::open();
			return;
		}
		

		miqt_exec_callback_QInputDialog_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QInputDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QInputDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QInputDialog_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QInputDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QInputDialog::accept();
			return;
		}
		

		miqt_exec_callback_QInputDialog_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QInputDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QInputDialog::reject();
			return;
		}
		

		miqt_exec_callback_QInputDialog_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QInputDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QInputDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QInputDialog_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QInputDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QInputDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QInputDialog_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QInputDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QInputDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QInputDialog_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QInputDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QInputDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QInputDialog_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QInputDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QInputDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QInputDialog_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QInputDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QInputDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QInputDialog_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QInputDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QInputDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QInputDialog_DevType(const_cast<MiqtVirtualQInputDialog*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QInputDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QInputDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QInputDialog_HeightForWidth(const_cast<MiqtVirtualQInputDialog*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QInputDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QInputDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QInputDialog_HasHeightForWidth(const_cast<MiqtVirtualQInputDialog*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QInputDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QInputDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QInputDialog_PaintEngine(const_cast<MiqtVirtualQInputDialog*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QInputDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QInputDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QInputDialog_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QInputDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QInputDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QInputDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QInputDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QInputDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QInputDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QInputDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QInputDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QInputDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QInputDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QInputDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QInputDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QInputDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QInputDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QInputDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QInputDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QInputDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QInputDialog::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QInputDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QInputDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QInputDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QInputDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QInputDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QInputDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QInputDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QInputDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QInputDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QInputDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QInputDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QInputDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QInputDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QInputDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QInputDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QInputDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QInputDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QInputDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QInputDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QInputDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QInputDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QInputDialog::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QInputDialog_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QInputDialog::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QInputDialog::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QInputDialog_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QInputDialog::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QInputDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QInputDialog_Metric(const_cast<MiqtVirtualQInputDialog*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QInputDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QInputDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QInputDialog_InitPainter(const_cast<MiqtVirtualQInputDialog*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QInputDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QInputDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QInputDialog_Redirected(const_cast<MiqtVirtualQInputDialog*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QInputDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QInputDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QInputDialog_SharedPainter(const_cast<MiqtVirtualQInputDialog*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QInputDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QInputDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QInputDialog_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QInputDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QInputDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QInputDialog_InputMethodQuery(const_cast<MiqtVirtualQInputDialog*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QInputDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QInputDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QInputDialog_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QInputDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QInputDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QInputDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QInputDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QInputDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QInputDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QInputDialog_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QInputDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QInputDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QInputDialog_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QInputDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QInputDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QInputDialog_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QInputDialog::disconnectNotify(*signal);

	}

};

QInputDialog* QInputDialog_new(QWidget* parent) {
	return new MiqtVirtualQInputDialog(parent);
}

QInputDialog* QInputDialog_new2() {
	return new MiqtVirtualQInputDialog();
}

QInputDialog* QInputDialog_new3(QWidget* parent, int flags) {
	return new MiqtVirtualQInputDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

void QInputDialog_virtbase(QInputDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QInputDialog_MetaObject(const QInputDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QInputDialog_Metacast(QInputDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QInputDialog_Tr(const char* s) {
	QString _ret = QInputDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_TrUtf8(const char* s) {
	QString _ret = QInputDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QInputDialog_SetInputMode(QInputDialog* self, int mode) {
	self->setInputMode(static_cast<QInputDialog::InputMode>(mode));
}

int QInputDialog_InputMode(const QInputDialog* self) {
	QInputDialog::InputMode _ret = self->inputMode();
	return static_cast<int>(_ret);
}

void QInputDialog_SetLabelText(QInputDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setLabelText(text_QString);
}

struct miqt_string QInputDialog_LabelText(const QInputDialog* self) {
	QString _ret = self->labelText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QInputDialog_SetOption(QInputDialog* self, int option) {
	self->setOption(static_cast<QInputDialog::InputDialogOption>(option));
}

bool QInputDialog_TestOption(const QInputDialog* self, int option) {
	return self->testOption(static_cast<QInputDialog::InputDialogOption>(option));
}

void QInputDialog_SetOptions(QInputDialog* self, int options) {
	self->setOptions(static_cast<QInputDialog::InputDialogOptions>(options));
}

int QInputDialog_Options(const QInputDialog* self) {
	QInputDialog::InputDialogOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QInputDialog_SetTextValue(QInputDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setTextValue(text_QString);
}

struct miqt_string QInputDialog_TextValue(const QInputDialog* self) {
	QString _ret = self->textValue();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QInputDialog_SetTextEchoMode(QInputDialog* self, int mode) {
	self->setTextEchoMode(static_cast<QLineEdit::EchoMode>(mode));
}

int QInputDialog_TextEchoMode(const QInputDialog* self) {
	QLineEdit::EchoMode _ret = self->textEchoMode();
	return static_cast<int>(_ret);
}

void QInputDialog_SetComboBoxEditable(QInputDialog* self, bool editable) {
	self->setComboBoxEditable(editable);
}

bool QInputDialog_IsComboBoxEditable(const QInputDialog* self) {
	return self->isComboBoxEditable();
}

void QInputDialog_SetComboBoxItems(QInputDialog* self, struct miqt_array /* of struct miqt_string */  items) {
	QStringList items_QList;
	items_QList.reserve(items.len);
	struct miqt_string* items_arr = static_cast<struct miqt_string*>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
		items_QList.push_back(items_arr_i_QString);
	}
	self->setComboBoxItems(items_QList);
}

struct miqt_array /* of struct miqt_string */  QInputDialog_ComboBoxItems(const QInputDialog* self) {
	QStringList _ret = self->comboBoxItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QInputDialog_SetIntValue(QInputDialog* self, int value) {
	self->setIntValue(static_cast<int>(value));
}

int QInputDialog_IntValue(const QInputDialog* self) {
	return self->intValue();
}

void QInputDialog_SetIntMinimum(QInputDialog* self, int min) {
	self->setIntMinimum(static_cast<int>(min));
}

int QInputDialog_IntMinimum(const QInputDialog* self) {
	return self->intMinimum();
}

void QInputDialog_SetIntMaximum(QInputDialog* self, int max) {
	self->setIntMaximum(static_cast<int>(max));
}

int QInputDialog_IntMaximum(const QInputDialog* self) {
	return self->intMaximum();
}

void QInputDialog_SetIntRange(QInputDialog* self, int min, int max) {
	self->setIntRange(static_cast<int>(min), static_cast<int>(max));
}

void QInputDialog_SetIntStep(QInputDialog* self, int step) {
	self->setIntStep(static_cast<int>(step));
}

int QInputDialog_IntStep(const QInputDialog* self) {
	return self->intStep();
}

void QInputDialog_SetDoubleValue(QInputDialog* self, double value) {
	self->setDoubleValue(static_cast<double>(value));
}

double QInputDialog_DoubleValue(const QInputDialog* self) {
	return self->doubleValue();
}

void QInputDialog_SetDoubleMinimum(QInputDialog* self, double min) {
	self->setDoubleMinimum(static_cast<double>(min));
}

double QInputDialog_DoubleMinimum(const QInputDialog* self) {
	return self->doubleMinimum();
}

void QInputDialog_SetDoubleMaximum(QInputDialog* self, double max) {
	self->setDoubleMaximum(static_cast<double>(max));
}

double QInputDialog_DoubleMaximum(const QInputDialog* self) {
	return self->doubleMaximum();
}

void QInputDialog_SetDoubleRange(QInputDialog* self, double min, double max) {
	self->setDoubleRange(static_cast<double>(min), static_cast<double>(max));
}

void QInputDialog_SetDoubleDecimals(QInputDialog* self, int decimals) {
	self->setDoubleDecimals(static_cast<int>(decimals));
}

int QInputDialog_DoubleDecimals(const QInputDialog* self) {
	return self->doubleDecimals();
}

void QInputDialog_SetOkButtonText(QInputDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setOkButtonText(text_QString);
}

struct miqt_string QInputDialog_OkButtonText(const QInputDialog* self) {
	QString _ret = self->okButtonText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QInputDialog_SetCancelButtonText(QInputDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setCancelButtonText(text_QString);
}

struct miqt_string QInputDialog_CancelButtonText(const QInputDialog* self) {
	QString _ret = self->cancelButtonText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QInputDialog_MinimumSizeHint(const QInputDialog* self) {
	return new QSize(self->minimumSizeHint());
}

QSize* QInputDialog_SizeHint(const QInputDialog* self) {
	return new QSize(self->sizeHint());
}

void QInputDialog_SetVisible(QInputDialog* self, bool visible) {
	self->setVisible(visible);
}

struct miqt_string QInputDialog_GetText(QWidget* parent, struct miqt_string title, struct miqt_string label) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_GetMultiLineText(QWidget* parent, struct miqt_string title, struct miqt_string label) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_GetItem(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QStringList items_QList;
	items_QList.reserve(items.len);
	struct miqt_string* items_arr = static_cast<struct miqt_string*>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QInputDialog_GetInt(QWidget* parent, struct miqt_string title, struct miqt_string label) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getInt(parent, title_QString, label_QString);
}

double QInputDialog_GetDouble(QWidget* parent, struct miqt_string title, struct miqt_string label) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString);
}

double QInputDialog_GetDouble2(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags, double step) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals), ok, static_cast<Qt::WindowFlags>(flags), static_cast<double>(step));
}

void QInputDialog_SetDoubleStep(QInputDialog* self, double step) {
	self->setDoubleStep(static_cast<double>(step));
}

double QInputDialog_DoubleStep(const QInputDialog* self) {
	return self->doubleStep();
}

void QInputDialog_TextValueChanged(QInputDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->textValueChanged(text_QString);
}

void QInputDialog_connect_TextValueChanged(QInputDialog* self, intptr_t slot) {
	MiqtVirtualQInputDialog::connect(self, static_cast<void (QInputDialog::*)(const QString&)>(&QInputDialog::textValueChanged), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_QInputDialog_TextValueChanged(slot, sigval1);
	});
}

void QInputDialog_TextValueSelected(QInputDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->textValueSelected(text_QString);
}

void QInputDialog_connect_TextValueSelected(QInputDialog* self, intptr_t slot) {
	MiqtVirtualQInputDialog::connect(self, static_cast<void (QInputDialog::*)(const QString&)>(&QInputDialog::textValueSelected), self, [=](const QString& text) {
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval1 = text_ms;
		miqt_exec_callback_QInputDialog_TextValueSelected(slot, sigval1);
	});
}

void QInputDialog_IntValueChanged(QInputDialog* self, int value) {
	self->intValueChanged(static_cast<int>(value));
}

void QInputDialog_connect_IntValueChanged(QInputDialog* self, intptr_t slot) {
	MiqtVirtualQInputDialog::connect(self, static_cast<void (QInputDialog::*)(int)>(&QInputDialog::intValueChanged), self, [=](int value) {
		int sigval1 = value;
		miqt_exec_callback_QInputDialog_IntValueChanged(slot, sigval1);
	});
}

void QInputDialog_IntValueSelected(QInputDialog* self, int value) {
	self->intValueSelected(static_cast<int>(value));
}

void QInputDialog_connect_IntValueSelected(QInputDialog* self, intptr_t slot) {
	MiqtVirtualQInputDialog::connect(self, static_cast<void (QInputDialog::*)(int)>(&QInputDialog::intValueSelected), self, [=](int value) {
		int sigval1 = value;
		miqt_exec_callback_QInputDialog_IntValueSelected(slot, sigval1);
	});
}

void QInputDialog_DoubleValueChanged(QInputDialog* self, double value) {
	self->doubleValueChanged(static_cast<double>(value));
}

void QInputDialog_connect_DoubleValueChanged(QInputDialog* self, intptr_t slot) {
	MiqtVirtualQInputDialog::connect(self, static_cast<void (QInputDialog::*)(double)>(&QInputDialog::doubleValueChanged), self, [=](double value) {
		double sigval1 = value;
		miqt_exec_callback_QInputDialog_DoubleValueChanged(slot, sigval1);
	});
}

void QInputDialog_DoubleValueSelected(QInputDialog* self, double value) {
	self->doubleValueSelected(static_cast<double>(value));
}

void QInputDialog_connect_DoubleValueSelected(QInputDialog* self, intptr_t slot) {
	MiqtVirtualQInputDialog::connect(self, static_cast<void (QInputDialog::*)(double)>(&QInputDialog::doubleValueSelected), self, [=](double value) {
		double sigval1 = value;
		miqt_exec_callback_QInputDialog_DoubleValueSelected(slot, sigval1);
	});
}

void QInputDialog_Done(QInputDialog* self, int result) {
	self->done(static_cast<int>(result));
}

struct miqt_string QInputDialog_Tr2(const char* s, const char* c) {
	QString _ret = QInputDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QInputDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_TrUtf82(const char* s, const char* c) {
	QString _ret = QInputDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QInputDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QInputDialog_SetOption2(QInputDialog* self, int option, bool on) {
	self->setOption(static_cast<QInputDialog::InputDialogOption>(option), on);
}

struct miqt_string QInputDialog_GetText4(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_GetText5(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_GetText6(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text, bool* ok) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_GetText7(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok, static_cast<Qt::WindowFlags>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_GetText8(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text, bool* ok, int flags, int inputMethodHints) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_GetMultiLineText4(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_GetMultiLineText5(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text, bool* ok) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_GetMultiLineText6(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok, static_cast<Qt::WindowFlags>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_GetMultiLineText7(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text, bool* ok, int flags, int inputMethodHints) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_GetItem5(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items, int current) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QStringList items_QList;
	items_QList.reserve(items.len);
	struct miqt_string* items_arr = static_cast<struct miqt_string*>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_GetItem6(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items, int current, bool editable) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QStringList items_QList;
	items_QList.reserve(items.len);
	struct miqt_string* items_arr = static_cast<struct miqt_string*>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_GetItem7(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items, int current, bool editable, bool* ok) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QStringList items_QList;
	items_QList.reserve(items.len);
	struct miqt_string* items_arr = static_cast<struct miqt_string*>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_GetItem8(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items, int current, bool editable, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QStringList items_QList;
	items_QList.reserve(items.len);
	struct miqt_string* items_arr = static_cast<struct miqt_string*>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok, static_cast<Qt::WindowFlags>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputDialog_GetItem9(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items, int current, bool editable, bool* ok, int flags, int inputMethodHints) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	QStringList items_QList;
	items_QList.reserve(items.len);
	struct miqt_string* items_arr = static_cast<struct miqt_string*>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
		items_QList.push_back(items_arr_i_QString);
	}
	QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QInputDialog_GetInt4(QWidget* parent, struct miqt_string title, struct miqt_string label, int value) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value));
}

int QInputDialog_GetInt5(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue));
}

int QInputDialog_GetInt6(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue));
}

int QInputDialog_GetInt7(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue, int step) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue), static_cast<int>(step));
}

int QInputDialog_GetInt8(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue, int step, bool* ok) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue), static_cast<int>(step), ok);
}

int QInputDialog_GetInt9(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue, int step, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue), static_cast<int>(step), ok, static_cast<Qt::WindowFlags>(flags));
}

double QInputDialog_GetDouble4(QWidget* parent, struct miqt_string title, struct miqt_string label, double value) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value));
}

double QInputDialog_GetDouble5(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue));
}

double QInputDialog_GetDouble6(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue));
}

double QInputDialog_GetDouble7(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals));
}

double QInputDialog_GetDouble8(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals), ok);
}

double QInputDialog_GetDouble9(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals), ok, static_cast<Qt::WindowFlags>(flags));
}

bool QInputDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QInputDialog_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_MinimumSizeHint();
}

bool QInputDialog_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QInputDialog_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_SizeHint();
}

bool QInputDialog_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QInputDialog_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_SetVisible(visible);
}

bool QInputDialog_override_virtual_Done(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Done = slot;
	return true;
}

void QInputDialog_virtualbase_Done(void* self, int result) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_Done(result);
}

bool QInputDialog_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

void QInputDialog_virtualbase_Open(void* self) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_Open();
}

bool QInputDialog_override_virtual_Exec(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Exec = slot;
	return true;
}

int QInputDialog_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQInputDialog*)(self) )->virtualbase_Exec();
}

bool QInputDialog_override_virtual_Accept(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Accept = slot;
	return true;
}

void QInputDialog_virtualbase_Accept(void* self) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_Accept();
}

bool QInputDialog_override_virtual_Reject(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reject = slot;
	return true;
}

void QInputDialog_virtualbase_Reject(void* self) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_Reject();
}

bool QInputDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QInputDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QInputDialog_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QInputDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_CloseEvent(param1);
}

bool QInputDialog_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QInputDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_ShowEvent(param1);
}

bool QInputDialog_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QInputDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QInputDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QInputDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QInputDialog_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QInputDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQInputDialog*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QInputDialog_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QInputDialog_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_DevType();
}

bool QInputDialog_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QInputDialog_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QInputDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QInputDialog_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_HasHeightForWidth();
}

bool QInputDialog_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QInputDialog_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_PaintEngine();
}

bool QInputDialog_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QInputDialog_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQInputDialog*)(self) )->virtualbase_Event(event);
}

bool QInputDialog_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QInputDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_MousePressEvent(event);
}

bool QInputDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QInputDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QInputDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QInputDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QInputDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QInputDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QInputDialog_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QInputDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_WheelEvent(event);
}

bool QInputDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QInputDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QInputDialog_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QInputDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_FocusInEvent(event);
}

bool QInputDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QInputDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QInputDialog_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QInputDialog_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_EnterEvent(event);
}

bool QInputDialog_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QInputDialog_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_LeaveEvent(event);
}

bool QInputDialog_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QInputDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_PaintEvent(event);
}

bool QInputDialog_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QInputDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_MoveEvent(event);
}

bool QInputDialog_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QInputDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_TabletEvent(event);
}

bool QInputDialog_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QInputDialog_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_ActionEvent(event);
}

bool QInputDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QInputDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QInputDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QInputDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QInputDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QInputDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QInputDialog_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QInputDialog_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_DropEvent(event);
}

bool QInputDialog_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QInputDialog_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_HideEvent(event);
}

bool QInputDialog_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QInputDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQInputDialog*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QInputDialog_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QInputDialog_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QInputDialog_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QInputDialog_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_Metric(param1);
}

bool QInputDialog_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QInputDialog_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_InitPainter(painter);
}

bool QInputDialog_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QInputDialog_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_Redirected(offset);
}

bool QInputDialog_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QInputDialog_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_SharedPainter();
}

bool QInputDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QInputDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QInputDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QInputDialog_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQInputDialog*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QInputDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QInputDialog_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQInputDialog*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QInputDialog_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QInputDialog_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_TimerEvent(event);
}

bool QInputDialog_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QInputDialog_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_ChildEvent(event);
}

bool QInputDialog_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QInputDialog_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_CustomEvent(event);
}

bool QInputDialog_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QInputDialog_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QInputDialog_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQInputDialog* self_cast = dynamic_cast<MiqtVirtualQInputDialog*>( (QInputDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QInputDialog_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQInputDialog*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QInputDialog_Delete(QInputDialog* self) {
	delete self;
}

