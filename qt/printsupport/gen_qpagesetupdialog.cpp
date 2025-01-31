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
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPageSetupDialog>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QPrinter>
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
#include <qpagesetupdialog.h>
#include "gen_qpagesetupdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QPageSetupDialog_Exec(QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_Done(QPageSetupDialog*, intptr_t, int);
void miqt_exec_callback_QPageSetupDialog_SetVisible(QPageSetupDialog*, intptr_t, bool);
QSize* miqt_exec_callback_QPageSetupDialog_SizeHint(const QPageSetupDialog*, intptr_t);
QSize* miqt_exec_callback_QPageSetupDialog_MinimumSizeHint(const QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_Open(QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_Accept(QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_Reject(QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_KeyPressEvent(QPageSetupDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPageSetupDialog_CloseEvent(QPageSetupDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPageSetupDialog_ShowEvent(QPageSetupDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPageSetupDialog_ResizeEvent(QPageSetupDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPageSetupDialog_ContextMenuEvent(QPageSetupDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QPageSetupDialog_EventFilter(QPageSetupDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QPageSetupDialog_DevType(const QPageSetupDialog*, intptr_t);
int miqt_exec_callback_QPageSetupDialog_HeightForWidth(const QPageSetupDialog*, intptr_t, int);
bool miqt_exec_callback_QPageSetupDialog_HasHeightForWidth(const QPageSetupDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QPageSetupDialog_PaintEngine(const QPageSetupDialog*, intptr_t);
bool miqt_exec_callback_QPageSetupDialog_Event(QPageSetupDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPageSetupDialog_MousePressEvent(QPageSetupDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPageSetupDialog_MouseReleaseEvent(QPageSetupDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPageSetupDialog_MouseDoubleClickEvent(QPageSetupDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPageSetupDialog_MouseMoveEvent(QPageSetupDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPageSetupDialog_WheelEvent(QPageSetupDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QPageSetupDialog_KeyReleaseEvent(QPageSetupDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPageSetupDialog_FocusInEvent(QPageSetupDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPageSetupDialog_FocusOutEvent(QPageSetupDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPageSetupDialog_EnterEvent(QPageSetupDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPageSetupDialog_LeaveEvent(QPageSetupDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPageSetupDialog_PaintEvent(QPageSetupDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPageSetupDialog_MoveEvent(QPageSetupDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPageSetupDialog_TabletEvent(QPageSetupDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPageSetupDialog_ActionEvent(QPageSetupDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPageSetupDialog_DragEnterEvent(QPageSetupDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPageSetupDialog_DragMoveEvent(QPageSetupDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPageSetupDialog_DragLeaveEvent(QPageSetupDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPageSetupDialog_DropEvent(QPageSetupDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPageSetupDialog_HideEvent(QPageSetupDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPageSetupDialog_NativeEvent(QPageSetupDialog*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QPageSetupDialog_ChangeEvent(QPageSetupDialog*, intptr_t, QEvent*);
int miqt_exec_callback_QPageSetupDialog_Metric(const QPageSetupDialog*, intptr_t, int);
void miqt_exec_callback_QPageSetupDialog_InitPainter(const QPageSetupDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPageSetupDialog_Redirected(const QPageSetupDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPageSetupDialog_SharedPainter(const QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_InputMethodEvent(QPageSetupDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QPageSetupDialog_InputMethodQuery(const QPageSetupDialog*, intptr_t, int);
bool miqt_exec_callback_QPageSetupDialog_FocusNextPrevChild(QPageSetupDialog*, intptr_t, bool);
void miqt_exec_callback_QPageSetupDialog_TimerEvent(QPageSetupDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPageSetupDialog_ChildEvent(QPageSetupDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPageSetupDialog_CustomEvent(QPageSetupDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPageSetupDialog_ConnectNotify(QPageSetupDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPageSetupDialog_DisconnectNotify(QPageSetupDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPageSetupDialog final : public QPageSetupDialog {
public:

	MiqtVirtualQPageSetupDialog(QWidget* parent): QPageSetupDialog(parent) {};
	MiqtVirtualQPageSetupDialog(QPrinter* printer): QPageSetupDialog(printer) {};
	MiqtVirtualQPageSetupDialog(): QPageSetupDialog() {};
	MiqtVirtualQPageSetupDialog(QPrinter* printer, QWidget* parent): QPageSetupDialog(printer, parent) {};

	virtual ~MiqtVirtualQPageSetupDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QPageSetupDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QPageSetupDialog_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QPageSetupDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__Done == 0) {
			QPageSetupDialog::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QPageSetupDialog_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int result) {

		QPageSetupDialog::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QPageSetupDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QPageSetupDialog_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QPageSetupDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QPageSetupDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPageSetupDialog_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QPageSetupDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QPageSetupDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QPageSetupDialog_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QPageSetupDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QPageSetupDialog::open();
			return;
		}
		

		miqt_exec_callback_QPageSetupDialog_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QPageSetupDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QPageSetupDialog::accept();
			return;
		}
		

		miqt_exec_callback_QPageSetupDialog_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QPageSetupDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QPageSetupDialog::reject();
			return;
		}
		

		miqt_exec_callback_QPageSetupDialog_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QPageSetupDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QPageSetupDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QPageSetupDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QPageSetupDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QPageSetupDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QPageSetupDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QPageSetupDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QPageSetupDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QPageSetupDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QPageSetupDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QPageSetupDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QPageSetupDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QPageSetupDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QPageSetupDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPageSetupDialog_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QPageSetupDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QPageSetupDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QPageSetupDialog_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QPageSetupDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QPageSetupDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QPageSetupDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QPageSetupDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPageSetupDialog_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QPageSetupDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QPageSetupDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QPageSetupDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QPageSetupDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QPageSetupDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QPageSetupDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QPageSetupDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QPageSetupDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QPageSetupDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QPageSetupDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QPageSetupDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QPageSetupDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QPageSetupDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QPageSetupDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QPageSetupDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QPageSetupDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QPageSetupDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QPageSetupDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QPageSetupDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QPageSetupDialog::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QPageSetupDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QPageSetupDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QPageSetupDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QPageSetupDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QPageSetupDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QPageSetupDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QPageSetupDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QPageSetupDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QPageSetupDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QPageSetupDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QPageSetupDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QPageSetupDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QPageSetupDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QPageSetupDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QPageSetupDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QPageSetupDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QPageSetupDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QPageSetupDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QPageSetupDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QPageSetupDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QPageSetupDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QPageSetupDialog::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QPageSetupDialog::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QPageSetupDialog::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QPageSetupDialog::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QPageSetupDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QPageSetupDialog_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QPageSetupDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QPageSetupDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPageSetupDialog_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QPageSetupDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QPageSetupDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPageSetupDialog_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QPageSetupDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QPageSetupDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPageSetupDialog_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QPageSetupDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QPageSetupDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QPageSetupDialog_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QPageSetupDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QPageSetupDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QPageSetupDialog_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QPageSetupDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QPageSetupDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QPageSetupDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QPageSetupDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QPageSetupDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QPageSetupDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QPageSetupDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QPageSetupDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPageSetupDialog_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QPageSetupDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QPageSetupDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPageSetupDialog_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QPageSetupDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QPageSetupDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPageSetupDialog_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QPageSetupDialog::disconnectNotify(*signal);

	}

};

QPageSetupDialog* QPageSetupDialog_new(QWidget* parent) {
	return new MiqtVirtualQPageSetupDialog(parent);
}

QPageSetupDialog* QPageSetupDialog_new2(QPrinter* printer) {
	return new MiqtVirtualQPageSetupDialog(printer);
}

QPageSetupDialog* QPageSetupDialog_new3() {
	return new MiqtVirtualQPageSetupDialog();
}

QPageSetupDialog* QPageSetupDialog_new4(QPrinter* printer, QWidget* parent) {
	return new MiqtVirtualQPageSetupDialog(printer, parent);
}

void QPageSetupDialog_virtbase(QPageSetupDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QPageSetupDialog_MetaObject(const QPageSetupDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPageSetupDialog_Metacast(QPageSetupDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPageSetupDialog_Tr(const char* s) {
	QString _ret = QPageSetupDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_TrUtf8(const char* s) {
	QString _ret = QPageSetupDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPageSetupDialog_Exec(QPageSetupDialog* self) {
	return self->exec();
}

void QPageSetupDialog_Done(QPageSetupDialog* self, int result) {
	self->done(static_cast<int>(result));
}

QPrinter* QPageSetupDialog_Printer(QPageSetupDialog* self) {
	return self->printer();
}

struct miqt_string QPageSetupDialog_Tr2(const char* s, const char* c) {
	QString _ret = QPageSetupDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPageSetupDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_TrUtf82(const char* s, const char* c) {
	QString _ret = QPageSetupDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPageSetupDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPageSetupDialog_override_virtual_Exec(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Exec = slot;
	return true;
}

int QPageSetupDialog_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_Exec();
}

bool QPageSetupDialog_override_virtual_Done(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Done = slot;
	return true;
}

void QPageSetupDialog_virtualbase_Done(void* self, int result) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_Done(result);
}

bool QPageSetupDialog_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QPageSetupDialog_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_SetVisible(visible);
}

bool QPageSetupDialog_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QPageSetupDialog_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_SizeHint();
}

bool QPageSetupDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QPageSetupDialog_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_MinimumSizeHint();
}

bool QPageSetupDialog_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

void QPageSetupDialog_virtualbase_Open(void* self) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_Open();
}

bool QPageSetupDialog_override_virtual_Accept(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Accept = slot;
	return true;
}

void QPageSetupDialog_virtualbase_Accept(void* self) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_Accept();
}

bool QPageSetupDialog_override_virtual_Reject(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reject = slot;
	return true;
}

void QPageSetupDialog_virtualbase_Reject(void* self) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_Reject();
}

bool QPageSetupDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QPageSetupDialog_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_CloseEvent(param1);
}

bool QPageSetupDialog_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_ShowEvent(param1);
}

bool QPageSetupDialog_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QPageSetupDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QPageSetupDialog_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QPageSetupDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QPageSetupDialog_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QPageSetupDialog_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_DevType();
}

bool QPageSetupDialog_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QPageSetupDialog_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QPageSetupDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QPageSetupDialog_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_HasHeightForWidth();
}

bool QPageSetupDialog_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QPageSetupDialog_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_PaintEngine();
}

bool QPageSetupDialog_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QPageSetupDialog_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_Event(event);
}

bool QPageSetupDialog_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_MousePressEvent(event);
}

bool QPageSetupDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QPageSetupDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QPageSetupDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QPageSetupDialog_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_WheelEvent(event);
}

bool QPageSetupDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QPageSetupDialog_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_FocusInEvent(event);
}

bool QPageSetupDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QPageSetupDialog_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_EnterEvent(event);
}

bool QPageSetupDialog_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_LeaveEvent(event);
}

bool QPageSetupDialog_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_PaintEvent(event);
}

bool QPageSetupDialog_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_MoveEvent(event);
}

bool QPageSetupDialog_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_TabletEvent(event);
}

bool QPageSetupDialog_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_ActionEvent(event);
}

bool QPageSetupDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QPageSetupDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QPageSetupDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QPageSetupDialog_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_DropEvent(event);
}

bool QPageSetupDialog_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_HideEvent(event);
}

bool QPageSetupDialog_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QPageSetupDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QPageSetupDialog_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QPageSetupDialog_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QPageSetupDialog_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_Metric(param1);
}

bool QPageSetupDialog_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QPageSetupDialog_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_InitPainter(painter);
}

bool QPageSetupDialog_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QPageSetupDialog_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_Redirected(offset);
}

bool QPageSetupDialog_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QPageSetupDialog_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_SharedPainter();
}

bool QPageSetupDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QPageSetupDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QPageSetupDialog_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QPageSetupDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QPageSetupDialog_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QPageSetupDialog_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_TimerEvent(event);
}

bool QPageSetupDialog_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_ChildEvent(event);
}

bool QPageSetupDialog_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QPageSetupDialog_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_CustomEvent(event);
}

bool QPageSetupDialog_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QPageSetupDialog_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QPageSetupDialog_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QPageSetupDialog_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQPageSetupDialog*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QPageSetupDialog_Delete(QPageSetupDialog* self) {
	delete self;
}

