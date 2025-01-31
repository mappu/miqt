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
#include <qdialog.h>
#include "gen_qdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDialog_Finished(intptr_t, int);
void miqt_exec_callback_QDialog_Accepted(intptr_t);
void miqt_exec_callback_QDialog_Rejected(intptr_t);
void miqt_exec_callback_QDialog_SetVisible(QDialog*, intptr_t, bool);
QSize* miqt_exec_callback_QDialog_SizeHint(const QDialog*, intptr_t);
QSize* miqt_exec_callback_QDialog_MinimumSizeHint(const QDialog*, intptr_t);
void miqt_exec_callback_QDialog_Open(QDialog*, intptr_t);
int miqt_exec_callback_QDialog_Exec(QDialog*, intptr_t);
void miqt_exec_callback_QDialog_Done(QDialog*, intptr_t, int);
void miqt_exec_callback_QDialog_Accept(QDialog*, intptr_t);
void miqt_exec_callback_QDialog_Reject(QDialog*, intptr_t);
void miqt_exec_callback_QDialog_KeyPressEvent(QDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDialog_CloseEvent(QDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDialog_ShowEvent(QDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QDialog_ResizeEvent(QDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDialog_ContextMenuEvent(QDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QDialog_EventFilter(QDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QDialog_DevType(const QDialog*, intptr_t);
int miqt_exec_callback_QDialog_HeightForWidth(const QDialog*, intptr_t, int);
bool miqt_exec_callback_QDialog_HasHeightForWidth(const QDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QDialog_PaintEngine(const QDialog*, intptr_t);
bool miqt_exec_callback_QDialog_Event(QDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QDialog_MousePressEvent(QDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialog_MouseReleaseEvent(QDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialog_MouseDoubleClickEvent(QDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialog_MouseMoveEvent(QDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialog_WheelEvent(QDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDialog_KeyReleaseEvent(QDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDialog_FocusInEvent(QDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDialog_FocusOutEvent(QDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDialog_EnterEvent(QDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QDialog_LeaveEvent(QDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QDialog_PaintEvent(QDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDialog_MoveEvent(QDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDialog_TabletEvent(QDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDialog_ActionEvent(QDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDialog_DragEnterEvent(QDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDialog_DragMoveEvent(QDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDialog_DragLeaveEvent(QDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDialog_DropEvent(QDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QDialog_HideEvent(QDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QDialog_NativeEvent(QDialog*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QDialog_ChangeEvent(QDialog*, intptr_t, QEvent*);
int miqt_exec_callback_QDialog_Metric(const QDialog*, intptr_t, int);
void miqt_exec_callback_QDialog_InitPainter(const QDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDialog_Redirected(const QDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDialog_SharedPainter(const QDialog*, intptr_t);
void miqt_exec_callback_QDialog_InputMethodEvent(QDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QDialog_InputMethodQuery(const QDialog*, intptr_t, int);
bool miqt_exec_callback_QDialog_FocusNextPrevChild(QDialog*, intptr_t, bool);
void miqt_exec_callback_QDialog_TimerEvent(QDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDialog_ChildEvent(QDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDialog_CustomEvent(QDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QDialog_ConnectNotify(QDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDialog_DisconnectNotify(QDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDialog final : public QDialog {
public:

	MiqtVirtualQDialog(QWidget* parent): QDialog(parent) {};
	MiqtVirtualQDialog(): QDialog() {};
	MiqtVirtualQDialog(QWidget* parent, Qt::WindowFlags f): QDialog(parent, f) {};

	virtual ~MiqtVirtualQDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QDialog_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDialog_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDialog_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QDialog::open();
			return;
		}
		

		miqt_exec_callback_QDialog_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QDialog_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int param1) override {
		if (handle__Done == 0) {
			QDialog::done(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QDialog_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int param1) {

		QDialog::done(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QDialog::accept();
			return;
		}
		

		miqt_exec_callback_QDialog_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QDialog::reject();
			return;
		}
		

		miqt_exec_callback_QDialog_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QDialog_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QDialog_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QDialog_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QDialog_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QDialog_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QDialog_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QDialog_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QDialog_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QDialog_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QDialog_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDialog_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialog_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialog_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialog_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDialog_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QDialog_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDialog_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDialog_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDialog_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QDialog::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDialog_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDialog_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QDialog_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QDialog_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QDialog_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QDialog_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QDialog_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QDialog_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QDialog_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QDialog_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QDialog_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QDialog::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QDialog_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QDialog::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QDialog::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QDialog_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QDialog::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QDialog_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QDialog_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QDialog_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QDialog_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QDialog_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QDialog_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QDialog_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDialog_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDialog_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDialog_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDialog_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDialog_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QDialog::disconnectNotify(*signal);

	}

};

QDialog* QDialog_new(QWidget* parent) {
	return new MiqtVirtualQDialog(parent);
}

QDialog* QDialog_new2() {
	return new MiqtVirtualQDialog();
}

QDialog* QDialog_new3(QWidget* parent, int f) {
	return new MiqtVirtualQDialog(parent, static_cast<Qt::WindowFlags>(f));
}

void QDialog_virtbase(QDialog* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QDialog_MetaObject(const QDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDialog_Metacast(QDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDialog_Tr(const char* s) {
	QString _ret = QDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDialog_TrUtf8(const char* s) {
	QString _ret = QDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDialog_Result(const QDialog* self) {
	return self->result();
}

void QDialog_SetVisible(QDialog* self, bool visible) {
	self->setVisible(visible);
}

void QDialog_SetOrientation(QDialog* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QDialog_Orientation(const QDialog* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QDialog_SetExtension(QDialog* self, QWidget* extension) {
	self->setExtension(extension);
}

QWidget* QDialog_Extension(const QDialog* self) {
	return self->extension();
}

QSize* QDialog_SizeHint(const QDialog* self) {
	return new QSize(self->sizeHint());
}

QSize* QDialog_MinimumSizeHint(const QDialog* self) {
	return new QSize(self->minimumSizeHint());
}

void QDialog_SetSizeGripEnabled(QDialog* self, bool sizeGripEnabled) {
	self->setSizeGripEnabled(sizeGripEnabled);
}

bool QDialog_IsSizeGripEnabled(const QDialog* self) {
	return self->isSizeGripEnabled();
}

void QDialog_SetModal(QDialog* self, bool modal) {
	self->setModal(modal);
}

void QDialog_SetResult(QDialog* self, int r) {
	self->setResult(static_cast<int>(r));
}

void QDialog_Finished(QDialog* self, int result) {
	self->finished(static_cast<int>(result));
}

void QDialog_connect_Finished(QDialog* self, intptr_t slot) {
	MiqtVirtualQDialog::connect(self, static_cast<void (QDialog::*)(int)>(&QDialog::finished), self, [=](int result) {
		int sigval1 = result;
		miqt_exec_callback_QDialog_Finished(slot, sigval1);
	});
}

void QDialog_Accepted(QDialog* self) {
	self->accepted();
}

void QDialog_connect_Accepted(QDialog* self, intptr_t slot) {
	MiqtVirtualQDialog::connect(self, static_cast<void (QDialog::*)()>(&QDialog::accepted), self, [=]() {
		miqt_exec_callback_QDialog_Accepted(slot);
	});
}

void QDialog_Rejected(QDialog* self) {
	self->rejected();
}

void QDialog_connect_Rejected(QDialog* self, intptr_t slot) {
	MiqtVirtualQDialog::connect(self, static_cast<void (QDialog::*)()>(&QDialog::rejected), self, [=]() {
		miqt_exec_callback_QDialog_Rejected(slot);
	});
}

void QDialog_Open(QDialog* self) {
	self->open();
}

int QDialog_Exec(QDialog* self) {
	return self->exec();
}

void QDialog_Done(QDialog* self, int param1) {
	self->done(static_cast<int>(param1));
}

void QDialog_Accept(QDialog* self) {
	self->accept();
}

void QDialog_Reject(QDialog* self) {
	self->reject();
}

void QDialog_ShowExtension(QDialog* self, bool param1) {
	self->showExtension(param1);
}

struct miqt_string QDialog_Tr2(const char* s, const char* c) {
	QString _ret = QDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDialog_TrUtf82(const char* s, const char* c) {
	QString _ret = QDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDialog_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDialog_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QDialog_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_SetVisible(visible);
}

bool QDialog_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QDialog_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQDialog*)(self) )->virtualbase_SizeHint();
}

bool QDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QDialog_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQDialog*)(self) )->virtualbase_MinimumSizeHint();
}

bool QDialog_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

void QDialog_virtualbase_Open(void* self) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_Open();
}

bool QDialog_override_virtual_Exec(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Exec = slot;
	return true;
}

int QDialog_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQDialog*)(self) )->virtualbase_Exec();
}

bool QDialog_override_virtual_Done(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Done = slot;
	return true;
}

void QDialog_virtualbase_Done(void* self, int param1) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_Done(param1);
}

bool QDialog_override_virtual_Accept(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Accept = slot;
	return true;
}

void QDialog_virtualbase_Accept(void* self) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_Accept();
}

bool QDialog_override_virtual_Reject(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reject = slot;
	return true;
}

void QDialog_virtualbase_Reject(void* self) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_Reject();
}

bool QDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QDialog_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_CloseEvent(param1);
}

bool QDialog_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_ShowEvent(param1);
}

bool QDialog_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QDialog_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQDialog*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QDialog_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QDialog_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQDialog*)(self) )->virtualbase_DevType();
}

bool QDialog_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QDialog_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQDialog*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QDialog_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQDialog*)(self) )->virtualbase_HasHeightForWidth();
}

bool QDialog_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QDialog_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQDialog*)(self) )->virtualbase_PaintEngine();
}

bool QDialog_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QDialog_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDialog*)(self) )->virtualbase_Event(event);
}

bool QDialog_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_MousePressEvent(event);
}

bool QDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QDialog_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_WheelEvent(event);
}

bool QDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QDialog_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_FocusInEvent(event);
}

bool QDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QDialog_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QDialog_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_EnterEvent(event);
}

bool QDialog_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QDialog_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_LeaveEvent(event);
}

bool QDialog_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_PaintEvent(event);
}

bool QDialog_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_MoveEvent(event);
}

bool QDialog_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_TabletEvent(event);
}

bool QDialog_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QDialog_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_ActionEvent(event);
}

bool QDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QDialog_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QDialog_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_DropEvent(event);
}

bool QDialog_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QDialog_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_HideEvent(event);
}

bool QDialog_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQDialog*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QDialog_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QDialog_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QDialog_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QDialog_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQDialog*)(self) )->virtualbase_Metric(param1);
}

bool QDialog_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QDialog_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQDialog*)(self) )->virtualbase_InitPainter(painter);
}

bool QDialog_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QDialog_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQDialog*)(self) )->virtualbase_Redirected(offset);
}

bool QDialog_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QDialog_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQDialog*)(self) )->virtualbase_SharedPainter();
}

bool QDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QDialog_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQDialog*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QDialog_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQDialog*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QDialog_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QDialog_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_TimerEvent(event);
}

bool QDialog_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QDialog_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_ChildEvent(event);
}

bool QDialog_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QDialog_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_CustomEvent(event);
}

bool QDialog_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QDialog_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QDialog_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QDialog_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDialog*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QDialog_Delete(QDialog* self) {
	delete self;
}

