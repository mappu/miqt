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
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLabel>
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
#include <QProgressBar>
#include <QProgressDialog>
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
#include <qprogressdialog.h>
#include "gen_qprogressdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QProgressDialog_Canceled(intptr_t);
QSize* miqt_exec_callback_QProgressDialog_SizeHint(const QProgressDialog*, intptr_t);
void miqt_exec_callback_QProgressDialog_ResizeEvent(QProgressDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QProgressDialog_CloseEvent(QProgressDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QProgressDialog_ChangeEvent(QProgressDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressDialog_ShowEvent(QProgressDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QProgressDialog_SetVisible(QProgressDialog*, intptr_t, bool);
QSize* miqt_exec_callback_QProgressDialog_MinimumSizeHint(const QProgressDialog*, intptr_t);
void miqt_exec_callback_QProgressDialog_Open(QProgressDialog*, intptr_t);
int miqt_exec_callback_QProgressDialog_Exec(QProgressDialog*, intptr_t);
void miqt_exec_callback_QProgressDialog_Done(QProgressDialog*, intptr_t, int);
void miqt_exec_callback_QProgressDialog_Accept(QProgressDialog*, intptr_t);
void miqt_exec_callback_QProgressDialog_Reject(QProgressDialog*, intptr_t);
void miqt_exec_callback_QProgressDialog_KeyPressEvent(QProgressDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QProgressDialog_ContextMenuEvent(QProgressDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QProgressDialog_EventFilter(QProgressDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QProgressDialog_DevType(const QProgressDialog*, intptr_t);
int miqt_exec_callback_QProgressDialog_HeightForWidth(const QProgressDialog*, intptr_t, int);
bool miqt_exec_callback_QProgressDialog_HasHeightForWidth(const QProgressDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QProgressDialog_PaintEngine(const QProgressDialog*, intptr_t);
bool miqt_exec_callback_QProgressDialog_Event(QProgressDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressDialog_MousePressEvent(QProgressDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressDialog_MouseReleaseEvent(QProgressDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressDialog_MouseDoubleClickEvent(QProgressDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressDialog_MouseMoveEvent(QProgressDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QProgressDialog_WheelEvent(QProgressDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QProgressDialog_KeyReleaseEvent(QProgressDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QProgressDialog_FocusInEvent(QProgressDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QProgressDialog_FocusOutEvent(QProgressDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QProgressDialog_EnterEvent(QProgressDialog*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QProgressDialog_LeaveEvent(QProgressDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressDialog_PaintEvent(QProgressDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QProgressDialog_MoveEvent(QProgressDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QProgressDialog_TabletEvent(QProgressDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QProgressDialog_ActionEvent(QProgressDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QProgressDialog_DragEnterEvent(QProgressDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QProgressDialog_DragMoveEvent(QProgressDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QProgressDialog_DragLeaveEvent(QProgressDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QProgressDialog_DropEvent(QProgressDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QProgressDialog_HideEvent(QProgressDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QProgressDialog_NativeEvent(QProgressDialog*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QProgressDialog_Metric(const QProgressDialog*, intptr_t, int);
void miqt_exec_callback_QProgressDialog_InitPainter(const QProgressDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QProgressDialog_Redirected(const QProgressDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QProgressDialog_SharedPainter(const QProgressDialog*, intptr_t);
void miqt_exec_callback_QProgressDialog_InputMethodEvent(QProgressDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QProgressDialog_InputMethodQuery(const QProgressDialog*, intptr_t, int);
bool miqt_exec_callback_QProgressDialog_FocusNextPrevChild(QProgressDialog*, intptr_t, bool);
void miqt_exec_callback_QProgressDialog_TimerEvent(QProgressDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QProgressDialog_ChildEvent(QProgressDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QProgressDialog_CustomEvent(QProgressDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QProgressDialog_ConnectNotify(QProgressDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QProgressDialog_DisconnectNotify(QProgressDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQProgressDialog final : public QProgressDialog {
public:

	MiqtVirtualQProgressDialog(QWidget* parent): QProgressDialog(parent) {};
	MiqtVirtualQProgressDialog(): QProgressDialog() {};
	MiqtVirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum): QProgressDialog(labelText, cancelButtonText, minimum, maximum) {};
	MiqtVirtualQProgressDialog(QWidget* parent, Qt::WindowFlags flags): QProgressDialog(parent, flags) {};
	MiqtVirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum, QWidget* parent): QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent) {};
	MiqtVirtualQProgressDialog(const QString& labelText, const QString& cancelButtonText, int minimum, int maximum, QWidget* parent, Qt::WindowFlags flags): QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags) {};

	virtual ~MiqtVirtualQProgressDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QProgressDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QProgressDialog_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QProgressDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QProgressDialog::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QProgressDialog::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QProgressDialog::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QProgressDialog::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QProgressDialog::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QProgressDialog::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QProgressDialog::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QProgressDialog::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QProgressDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QProgressDialog_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QProgressDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QProgressDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QProgressDialog_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QProgressDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QProgressDialog::open();
			return;
		}
		

		miqt_exec_callback_QProgressDialog_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QProgressDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QProgressDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QProgressDialog_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QProgressDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int param1) override {
		if (handle__Done == 0) {
			QProgressDialog::done(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QProgressDialog_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int param1) {

		QProgressDialog::done(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QProgressDialog::accept();
			return;
		}
		

		miqt_exec_callback_QProgressDialog_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QProgressDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QProgressDialog::reject();
			return;
		}
		

		miqt_exec_callback_QProgressDialog_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QProgressDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QProgressDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QProgressDialog_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QProgressDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QProgressDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QProgressDialog_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QProgressDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QProgressDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QProgressDialog_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QProgressDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QProgressDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QProgressDialog_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QProgressDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QProgressDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QProgressDialog_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QProgressDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QProgressDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QProgressDialog_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QProgressDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QProgressDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QProgressDialog_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QProgressDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QProgressDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QProgressDialog_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QProgressDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QProgressDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QProgressDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QProgressDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QProgressDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QProgressDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QProgressDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QProgressDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QProgressDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QProgressDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QProgressDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QProgressDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QProgressDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QProgressDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QProgressDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QProgressDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QProgressDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QProgressDialog::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QProgressDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QProgressDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QProgressDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QProgressDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QProgressDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QProgressDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QProgressDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QProgressDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QProgressDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QProgressDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QProgressDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QProgressDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QProgressDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QProgressDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QProgressDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QProgressDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QProgressDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QProgressDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QProgressDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QProgressDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QProgressDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QProgressDialog::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QProgressDialog_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QProgressDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QProgressDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QProgressDialog_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QProgressDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QProgressDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QProgressDialog_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QProgressDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QProgressDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QProgressDialog_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QProgressDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QProgressDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QProgressDialog_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QProgressDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QProgressDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QProgressDialog_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QProgressDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QProgressDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QProgressDialog_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QProgressDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QProgressDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QProgressDialog_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QProgressDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QProgressDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QProgressDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QProgressDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QProgressDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QProgressDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QProgressDialog_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QProgressDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QProgressDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QProgressDialog_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QProgressDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QProgressDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QProgressDialog_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QProgressDialog::disconnectNotify(*signal);

	}

};

QProgressDialog* QProgressDialog_new(QWidget* parent) {
	return new MiqtVirtualQProgressDialog(parent);
}

QProgressDialog* QProgressDialog_new2() {
	return new MiqtVirtualQProgressDialog();
}

QProgressDialog* QProgressDialog_new3(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	QString cancelButtonText_QString = QString::fromUtf8(cancelButtonText.data, cancelButtonText.len);
	return new MiqtVirtualQProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum));
}

QProgressDialog* QProgressDialog_new4(QWidget* parent, int flags) {
	return new MiqtVirtualQProgressDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QProgressDialog* QProgressDialog_new5(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum, QWidget* parent) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	QString cancelButtonText_QString = QString::fromUtf8(cancelButtonText.data, cancelButtonText.len);
	return new MiqtVirtualQProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum), parent);
}

QProgressDialog* QProgressDialog_new6(struct miqt_string labelText, struct miqt_string cancelButtonText, int minimum, int maximum, QWidget* parent, int flags) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	QString cancelButtonText_QString = QString::fromUtf8(cancelButtonText.data, cancelButtonText.len);
	return new MiqtVirtualQProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum), parent, static_cast<Qt::WindowFlags>(flags));
}

void QProgressDialog_virtbase(QProgressDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QProgressDialog_MetaObject(const QProgressDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QProgressDialog_Metacast(QProgressDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QProgressDialog_Tr(const char* s) {
	QString _ret = QProgressDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProgressDialog_SetLabel(QProgressDialog* self, QLabel* label) {
	self->setLabel(label);
}

void QProgressDialog_SetCancelButton(QProgressDialog* self, QPushButton* button) {
	self->setCancelButton(button);
}

void QProgressDialog_SetBar(QProgressDialog* self, QProgressBar* bar) {
	self->setBar(bar);
}

bool QProgressDialog_WasCanceled(const QProgressDialog* self) {
	return self->wasCanceled();
}

int QProgressDialog_Minimum(const QProgressDialog* self) {
	return self->minimum();
}

int QProgressDialog_Maximum(const QProgressDialog* self) {
	return self->maximum();
}

int QProgressDialog_Value(const QProgressDialog* self) {
	return self->value();
}

QSize* QProgressDialog_SizeHint(const QProgressDialog* self) {
	return new QSize(self->sizeHint());
}

struct miqt_string QProgressDialog_LabelText(const QProgressDialog* self) {
	QString _ret = self->labelText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QProgressDialog_MinimumDuration(const QProgressDialog* self) {
	return self->minimumDuration();
}

void QProgressDialog_SetAutoReset(QProgressDialog* self, bool reset) {
	self->setAutoReset(reset);
}

bool QProgressDialog_AutoReset(const QProgressDialog* self) {
	return self->autoReset();
}

void QProgressDialog_SetAutoClose(QProgressDialog* self, bool close) {
	self->setAutoClose(close);
}

bool QProgressDialog_AutoClose(const QProgressDialog* self) {
	return self->autoClose();
}

void QProgressDialog_Cancel(QProgressDialog* self) {
	self->cancel();
}

void QProgressDialog_Reset(QProgressDialog* self) {
	self->reset();
}

void QProgressDialog_SetMaximum(QProgressDialog* self, int maximum) {
	self->setMaximum(static_cast<int>(maximum));
}

void QProgressDialog_SetMinimum(QProgressDialog* self, int minimum) {
	self->setMinimum(static_cast<int>(minimum));
}

void QProgressDialog_SetRange(QProgressDialog* self, int minimum, int maximum) {
	self->setRange(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QProgressDialog_SetValue(QProgressDialog* self, int progress) {
	self->setValue(static_cast<int>(progress));
}

void QProgressDialog_SetLabelText(QProgressDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setLabelText(text_QString);
}

void QProgressDialog_SetCancelButtonText(QProgressDialog* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setCancelButtonText(text_QString);
}

void QProgressDialog_SetMinimumDuration(QProgressDialog* self, int ms) {
	self->setMinimumDuration(static_cast<int>(ms));
}

void QProgressDialog_Canceled(QProgressDialog* self) {
	self->canceled();
}

void QProgressDialog_connect_Canceled(QProgressDialog* self, intptr_t slot) {
	MiqtVirtualQProgressDialog::connect(self, static_cast<void (QProgressDialog::*)()>(&QProgressDialog::canceled), self, [=]() {
		miqt_exec_callback_QProgressDialog_Canceled(slot);
	});
}

struct miqt_string QProgressDialog_Tr2(const char* s, const char* c) {
	QString _ret = QProgressDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProgressDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QProgressDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QProgressDialog_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QProgressDialog_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_SizeHint();
}

bool QProgressDialog_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_ResizeEvent(event);
}

bool QProgressDialog_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_CloseEvent(event);
}

bool QProgressDialog_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_ChangeEvent(event);
}

bool QProgressDialog_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_ShowEvent(event);
}

bool QProgressDialog_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QProgressDialog_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_SetVisible(visible);
}

bool QProgressDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QProgressDialog_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_MinimumSizeHint();
}

bool QProgressDialog_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

void QProgressDialog_virtualbase_Open(void* self) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_Open();
}

bool QProgressDialog_override_virtual_Exec(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Exec = slot;
	return true;
}

int QProgressDialog_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_Exec();
}

bool QProgressDialog_override_virtual_Done(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Done = slot;
	return true;
}

void QProgressDialog_virtualbase_Done(void* self, int param1) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_Done(param1);
}

bool QProgressDialog_override_virtual_Accept(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Accept = slot;
	return true;
}

void QProgressDialog_virtualbase_Accept(void* self) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_Accept();
}

bool QProgressDialog_override_virtual_Reject(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reject = slot;
	return true;
}

void QProgressDialog_virtualbase_Reject(void* self) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_Reject();
}

bool QProgressDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QProgressDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QProgressDialog_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QProgressDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QProgressDialog_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QProgressDialog_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_DevType();
}

bool QProgressDialog_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QProgressDialog_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QProgressDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QProgressDialog_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_HasHeightForWidth();
}

bool QProgressDialog_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QProgressDialog_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_PaintEngine();
}

bool QProgressDialog_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QProgressDialog_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_Event(event);
}

bool QProgressDialog_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_MousePressEvent(event);
}

bool QProgressDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QProgressDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QProgressDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QProgressDialog_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_WheelEvent(event);
}

bool QProgressDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QProgressDialog_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_FocusInEvent(event);
}

bool QProgressDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QProgressDialog_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_EnterEvent(event);
}

bool QProgressDialog_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_LeaveEvent(event);
}

bool QProgressDialog_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_PaintEvent(event);
}

bool QProgressDialog_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_MoveEvent(event);
}

bool QProgressDialog_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_TabletEvent(event);
}

bool QProgressDialog_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_ActionEvent(event);
}

bool QProgressDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QProgressDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QProgressDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QProgressDialog_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_DropEvent(event);
}

bool QProgressDialog_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_HideEvent(event);
}

bool QProgressDialog_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QProgressDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QProgressDialog_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QProgressDialog_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_Metric(param1);
}

bool QProgressDialog_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QProgressDialog_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_InitPainter(painter);
}

bool QProgressDialog_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QProgressDialog_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_Redirected(offset);
}

bool QProgressDialog_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QProgressDialog_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_SharedPainter();
}

bool QProgressDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QProgressDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QProgressDialog_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQProgressDialog*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QProgressDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QProgressDialog_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QProgressDialog_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_TimerEvent(event);
}

bool QProgressDialog_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_ChildEvent(event);
}

bool QProgressDialog_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QProgressDialog_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_CustomEvent(event);
}

bool QProgressDialog_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QProgressDialog_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QProgressDialog_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQProgressDialog* self_cast = dynamic_cast<MiqtVirtualQProgressDialog*>( (QProgressDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QProgressDialog_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQProgressDialog*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QProgressDialog_Delete(QProgressDialog* self) {
	delete self;
}

