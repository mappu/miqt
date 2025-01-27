#include <QAbstractPrintDialog>
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
#include <qabstractprintdialog.h>
#include "gen_qabstractprintdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractPrintDialog_SetVisible(QAbstractPrintDialog*, intptr_t, bool);
QSize* miqt_exec_callback_QAbstractPrintDialog_SizeHint(const QAbstractPrintDialog*, intptr_t);
QSize* miqt_exec_callback_QAbstractPrintDialog_MinimumSizeHint(const QAbstractPrintDialog*, intptr_t);
void miqt_exec_callback_QAbstractPrintDialog_Open(QAbstractPrintDialog*, intptr_t);
int miqt_exec_callback_QAbstractPrintDialog_Exec(QAbstractPrintDialog*, intptr_t);
void miqt_exec_callback_QAbstractPrintDialog_Done(QAbstractPrintDialog*, intptr_t, int);
void miqt_exec_callback_QAbstractPrintDialog_Accept(QAbstractPrintDialog*, intptr_t);
void miqt_exec_callback_QAbstractPrintDialog_Reject(QAbstractPrintDialog*, intptr_t);
void miqt_exec_callback_QAbstractPrintDialog_KeyPressEvent(QAbstractPrintDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractPrintDialog_CloseEvent(QAbstractPrintDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QAbstractPrintDialog_ShowEvent(QAbstractPrintDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QAbstractPrintDialog_ResizeEvent(QAbstractPrintDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QAbstractPrintDialog_ContextMenuEvent(QAbstractPrintDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QAbstractPrintDialog_EventFilter(QAbstractPrintDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QAbstractPrintDialog_DevType(const QAbstractPrintDialog*, intptr_t);
int miqt_exec_callback_QAbstractPrintDialog_HeightForWidth(const QAbstractPrintDialog*, intptr_t, int);
bool miqt_exec_callback_QAbstractPrintDialog_HasHeightForWidth(const QAbstractPrintDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QAbstractPrintDialog_PaintEngine(const QAbstractPrintDialog*, intptr_t);
bool miqt_exec_callback_QAbstractPrintDialog_Event(QAbstractPrintDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractPrintDialog_MousePressEvent(QAbstractPrintDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractPrintDialog_MouseReleaseEvent(QAbstractPrintDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractPrintDialog_MouseDoubleClickEvent(QAbstractPrintDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractPrintDialog_MouseMoveEvent(QAbstractPrintDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractPrintDialog_WheelEvent(QAbstractPrintDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QAbstractPrintDialog_KeyReleaseEvent(QAbstractPrintDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractPrintDialog_FocusInEvent(QAbstractPrintDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractPrintDialog_FocusOutEvent(QAbstractPrintDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractPrintDialog_EnterEvent(QAbstractPrintDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractPrintDialog_LeaveEvent(QAbstractPrintDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractPrintDialog_PaintEvent(QAbstractPrintDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QAbstractPrintDialog_MoveEvent(QAbstractPrintDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QAbstractPrintDialog_TabletEvent(QAbstractPrintDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QAbstractPrintDialog_ActionEvent(QAbstractPrintDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QAbstractPrintDialog_DragEnterEvent(QAbstractPrintDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QAbstractPrintDialog_DragMoveEvent(QAbstractPrintDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QAbstractPrintDialog_DragLeaveEvent(QAbstractPrintDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QAbstractPrintDialog_DropEvent(QAbstractPrintDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QAbstractPrintDialog_HideEvent(QAbstractPrintDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QAbstractPrintDialog_NativeEvent(QAbstractPrintDialog*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QAbstractPrintDialog_ChangeEvent(QAbstractPrintDialog*, intptr_t, QEvent*);
int miqt_exec_callback_QAbstractPrintDialog_Metric(const QAbstractPrintDialog*, intptr_t, int);
void miqt_exec_callback_QAbstractPrintDialog_InitPainter(const QAbstractPrintDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QAbstractPrintDialog_Redirected(const QAbstractPrintDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QAbstractPrintDialog_SharedPainter(const QAbstractPrintDialog*, intptr_t);
void miqt_exec_callback_QAbstractPrintDialog_InputMethodEvent(QAbstractPrintDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QAbstractPrintDialog_InputMethodQuery(const QAbstractPrintDialog*, intptr_t, int);
bool miqt_exec_callback_QAbstractPrintDialog_FocusNextPrevChild(QAbstractPrintDialog*, intptr_t, bool);
void miqt_exec_callback_QAbstractPrintDialog_TimerEvent(QAbstractPrintDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractPrintDialog_ChildEvent(QAbstractPrintDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractPrintDialog_CustomEvent(QAbstractPrintDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractPrintDialog_ConnectNotify(QAbstractPrintDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractPrintDialog_DisconnectNotify(QAbstractPrintDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractPrintDialog final : public QAbstractPrintDialog {
public:

	MiqtVirtualQAbstractPrintDialog(QPrinter* printer): QAbstractPrintDialog(printer) {};
	MiqtVirtualQAbstractPrintDialog(QPrinter* printer, QWidget* parent): QAbstractPrintDialog(printer, parent) {};

	virtual ~MiqtVirtualQAbstractPrintDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QAbstractPrintDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QAbstractPrintDialog_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QAbstractPrintDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QAbstractPrintDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractPrintDialog_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QAbstractPrintDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QAbstractPrintDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractPrintDialog_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QAbstractPrintDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QAbstractPrintDialog::open();
			return;
		}
		

		miqt_exec_callback_QAbstractPrintDialog_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QAbstractPrintDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QAbstractPrintDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractPrintDialog_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QAbstractPrintDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int param1) override {
		if (handle__Done == 0) {
			QAbstractPrintDialog::done(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int param1) {

		QAbstractPrintDialog::done(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QAbstractPrintDialog::accept();
			return;
		}
		

		miqt_exec_callback_QAbstractPrintDialog_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QAbstractPrintDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QAbstractPrintDialog::reject();
			return;
		}
		

		miqt_exec_callback_QAbstractPrintDialog_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QAbstractPrintDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QAbstractPrintDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QAbstractPrintDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QAbstractPrintDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QAbstractPrintDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QAbstractPrintDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QAbstractPrintDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QAbstractPrintDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QAbstractPrintDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QAbstractPrintDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QAbstractPrintDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QAbstractPrintDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QAbstractPrintDialog_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QAbstractPrintDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QAbstractPrintDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractPrintDialog_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QAbstractPrintDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QAbstractPrintDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QAbstractPrintDialog_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QAbstractPrintDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QAbstractPrintDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractPrintDialog_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QAbstractPrintDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QAbstractPrintDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QAbstractPrintDialog_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QAbstractPrintDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAbstractPrintDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractPrintDialog_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAbstractPrintDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QAbstractPrintDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QAbstractPrintDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QAbstractPrintDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QAbstractPrintDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QAbstractPrintDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QAbstractPrintDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QAbstractPrintDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QAbstractPrintDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QAbstractPrintDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QAbstractPrintDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QAbstractPrintDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QAbstractPrintDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QAbstractPrintDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QAbstractPrintDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QAbstractPrintDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QAbstractPrintDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QAbstractPrintDialog::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QAbstractPrintDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QAbstractPrintDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QAbstractPrintDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QAbstractPrintDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QAbstractPrintDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QAbstractPrintDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QAbstractPrintDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QAbstractPrintDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QAbstractPrintDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QAbstractPrintDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QAbstractPrintDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QAbstractPrintDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QAbstractPrintDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QAbstractPrintDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QAbstractPrintDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QAbstractPrintDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QAbstractPrintDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QAbstractPrintDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QAbstractPrintDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QAbstractPrintDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QAbstractPrintDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QAbstractPrintDialog::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QAbstractPrintDialog_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QAbstractPrintDialog::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QAbstractPrintDialog::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QAbstractPrintDialog::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QAbstractPrintDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QAbstractPrintDialog_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QAbstractPrintDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QAbstractPrintDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QAbstractPrintDialog_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QAbstractPrintDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QAbstractPrintDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QAbstractPrintDialog_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QAbstractPrintDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QAbstractPrintDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QAbstractPrintDialog_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QAbstractPrintDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QAbstractPrintDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractPrintDialog_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QAbstractPrintDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QAbstractPrintDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractPrintDialog_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QAbstractPrintDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QAbstractPrintDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QAbstractPrintDialog_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QAbstractPrintDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAbstractPrintDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAbstractPrintDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAbstractPrintDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAbstractPrintDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAbstractPrintDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractPrintDialog_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAbstractPrintDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAbstractPrintDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractPrintDialog_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAbstractPrintDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAbstractPrintDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractPrintDialog_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAbstractPrintDialog::disconnectNotify(*signal);

	}

};

QAbstractPrintDialog* QAbstractPrintDialog_new(QPrinter* printer) {
	return new MiqtVirtualQAbstractPrintDialog(printer);
}

QAbstractPrintDialog* QAbstractPrintDialog_new2(QPrinter* printer, QWidget* parent) {
	return new MiqtVirtualQAbstractPrintDialog(printer, parent);
}

void QAbstractPrintDialog_virtbase(QAbstractPrintDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QAbstractPrintDialog_MetaObject(const QAbstractPrintDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractPrintDialog_Metacast(QAbstractPrintDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractPrintDialog_Tr(const char* s) {
	QString _ret = QAbstractPrintDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractPrintDialog_TrUtf8(const char* s) {
	QString _ret = QAbstractPrintDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractPrintDialog_AddEnabledOption(QAbstractPrintDialog* self, int option) {
	self->addEnabledOption(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

void QAbstractPrintDialog_SetEnabledOptions(QAbstractPrintDialog* self, int options) {
	self->setEnabledOptions(static_cast<QAbstractPrintDialog::PrintDialogOptions>(options));
}

int QAbstractPrintDialog_EnabledOptions(const QAbstractPrintDialog* self) {
	QAbstractPrintDialog::PrintDialogOptions _ret = self->enabledOptions();
	return static_cast<int>(_ret);
}

bool QAbstractPrintDialog_IsOptionEnabled(const QAbstractPrintDialog* self, int option) {
	return self->isOptionEnabled(static_cast<QAbstractPrintDialog::PrintDialogOption>(option));
}

void QAbstractPrintDialog_SetOptionTabs(QAbstractPrintDialog* self, struct miqt_array /* of QWidget* */  tabs) {
	QList<QWidget *> tabs_QList;
	tabs_QList.reserve(tabs.len);
	QWidget** tabs_arr = static_cast<QWidget**>(tabs.data);
	for(size_t i = 0; i < tabs.len; ++i) {
		tabs_QList.push_back(tabs_arr[i]);
	}
	self->setOptionTabs(tabs_QList);
}

void QAbstractPrintDialog_SetPrintRange(QAbstractPrintDialog* self, int rangeVal) {
	self->setPrintRange(static_cast<QAbstractPrintDialog::PrintRange>(rangeVal));
}

int QAbstractPrintDialog_PrintRange(const QAbstractPrintDialog* self) {
	QAbstractPrintDialog::PrintRange _ret = self->printRange();
	return static_cast<int>(_ret);
}

void QAbstractPrintDialog_SetMinMax(QAbstractPrintDialog* self, int min, int max) {
	self->setMinMax(static_cast<int>(min), static_cast<int>(max));
}

int QAbstractPrintDialog_MinPage(const QAbstractPrintDialog* self) {
	return self->minPage();
}

int QAbstractPrintDialog_MaxPage(const QAbstractPrintDialog* self) {
	return self->maxPage();
}

void QAbstractPrintDialog_SetFromTo(QAbstractPrintDialog* self, int fromPage, int toPage) {
	self->setFromTo(static_cast<int>(fromPage), static_cast<int>(toPage));
}

int QAbstractPrintDialog_FromPage(const QAbstractPrintDialog* self) {
	return self->fromPage();
}

int QAbstractPrintDialog_ToPage(const QAbstractPrintDialog* self) {
	return self->toPage();
}

QPrinter* QAbstractPrintDialog_Printer(const QAbstractPrintDialog* self) {
	return self->printer();
}

struct miqt_string QAbstractPrintDialog_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractPrintDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractPrintDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractPrintDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractPrintDialog_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractPrintDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractPrintDialog_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractPrintDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractPrintDialog_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_SetVisible(visible);
}

bool QAbstractPrintDialog_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QAbstractPrintDialog_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_SizeHint();
}

bool QAbstractPrintDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QAbstractPrintDialog_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_MinimumSizeHint();
}

bool QAbstractPrintDialog_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_Open(void* self) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_Open();
}

bool QAbstractPrintDialog_override_virtual_Exec(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Exec = slot;
	return true;
}

int QAbstractPrintDialog_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_Exec();
}

bool QAbstractPrintDialog_override_virtual_Done(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Done = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_Done(void* self, int param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_Done(param1);
}

bool QAbstractPrintDialog_override_virtual_Accept(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Accept = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_Accept(void* self) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_Accept();
}

bool QAbstractPrintDialog_override_virtual_Reject(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reject = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_Reject(void* self) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_Reject();
}

bool QAbstractPrintDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QAbstractPrintDialog_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_CloseEvent(param1);
}

bool QAbstractPrintDialog_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_ShowEvent(param1);
}

bool QAbstractPrintDialog_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QAbstractPrintDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QAbstractPrintDialog_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAbstractPrintDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QAbstractPrintDialog_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QAbstractPrintDialog_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_DevType();
}

bool QAbstractPrintDialog_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QAbstractPrintDialog_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QAbstractPrintDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QAbstractPrintDialog_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_HasHeightForWidth();
}

bool QAbstractPrintDialog_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QAbstractPrintDialog_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_PaintEngine();
}

bool QAbstractPrintDialog_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAbstractPrintDialog_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_Event(event);
}

bool QAbstractPrintDialog_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_MousePressEvent(event);
}

bool QAbstractPrintDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QAbstractPrintDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QAbstractPrintDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QAbstractPrintDialog_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_WheelEvent(event);
}

bool QAbstractPrintDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QAbstractPrintDialog_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_FocusInEvent(event);
}

bool QAbstractPrintDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QAbstractPrintDialog_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_EnterEvent(event);
}

bool QAbstractPrintDialog_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_LeaveEvent(event);
}

bool QAbstractPrintDialog_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_PaintEvent(event);
}

bool QAbstractPrintDialog_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_MoveEvent(event);
}

bool QAbstractPrintDialog_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_TabletEvent(event);
}

bool QAbstractPrintDialog_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_ActionEvent(event);
}

bool QAbstractPrintDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QAbstractPrintDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QAbstractPrintDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QAbstractPrintDialog_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_DropEvent(event);
}

bool QAbstractPrintDialog_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_HideEvent(event);
}

bool QAbstractPrintDialog_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QAbstractPrintDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QAbstractPrintDialog_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QAbstractPrintDialog_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QAbstractPrintDialog_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_Metric(param1);
}

bool QAbstractPrintDialog_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_InitPainter(painter);
}

bool QAbstractPrintDialog_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QAbstractPrintDialog_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_Redirected(offset);
}

bool QAbstractPrintDialog_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QAbstractPrintDialog_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_SharedPainter();
}

bool QAbstractPrintDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QAbstractPrintDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QAbstractPrintDialog_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QAbstractPrintDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QAbstractPrintDialog_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QAbstractPrintDialog_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_TimerEvent(event);
}

bool QAbstractPrintDialog_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_ChildEvent(event);
}

bool QAbstractPrintDialog_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_CustomEvent(event);
}

bool QAbstractPrintDialog_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAbstractPrintDialog_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractPrintDialog* self_cast = dynamic_cast<MiqtVirtualQAbstractPrintDialog*>( (QAbstractPrintDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAbstractPrintDialog_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractPrintDialog*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAbstractPrintDialog_Delete(QAbstractPrintDialog* self) {
	delete self;
}

