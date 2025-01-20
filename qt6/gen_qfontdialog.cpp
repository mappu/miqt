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
#include <QFont>
#include <QFontDialog>
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
#include <qfontdialog.h>
#include "gen_qfontdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QFontDialog_CurrentFontChanged(intptr_t, QFont*);
void miqt_exec_callback_QFontDialog_FontSelected(intptr_t, QFont*);
void miqt_exec_callback_QFontDialog_SetVisible(void*, intptr_t, bool);
void miqt_exec_callback_QFontDialog_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFontDialog_Done(void*, intptr_t, int);
bool miqt_exec_callback_QFontDialog_EventFilter(void*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QFontDialog_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QFontDialog_MinimumSizeHint(void*, intptr_t);
void miqt_exec_callback_QFontDialog_Open(void*, intptr_t);
int miqt_exec_callback_QFontDialog_Exec(void*, intptr_t);
void miqt_exec_callback_QFontDialog_Accept(void*, intptr_t);
void miqt_exec_callback_QFontDialog_Reject(void*, intptr_t);
void miqt_exec_callback_QFontDialog_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFontDialog_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QFontDialog_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QFontDialog_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QFontDialog_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
int miqt_exec_callback_QFontDialog_DevType(void*, intptr_t);
int miqt_exec_callback_QFontDialog_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QFontDialog_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QFontDialog_PaintEngine(void*, intptr_t);
bool miqt_exec_callback_QFontDialog_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFontDialog_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontDialog_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontDialog_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontDialog_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFontDialog_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QFontDialog_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFontDialog_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFontDialog_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFontDialog_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QFontDialog_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFontDialog_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QFontDialog_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QFontDialog_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QFontDialog_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QFontDialog_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QFontDialog_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QFontDialog_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QFontDialog_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QFontDialog_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QFontDialog_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QFontDialog_Metric(void*, intptr_t, int);
void miqt_exec_callback_QFontDialog_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QFontDialog_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QFontDialog_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QFontDialog_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QFontDialog_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QFontDialog_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QFontDialog_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFontDialog_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFontDialog_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QFontDialog_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFontDialog_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFontDialog final : public QFontDialog {
public:

	MiqtVirtualQFontDialog(QWidget* parent): QFontDialog(parent) {};
	MiqtVirtualQFontDialog(): QFontDialog() {};
	MiqtVirtualQFontDialog(const QFont& initial): QFontDialog(initial) {};
	MiqtVirtualQFontDialog(const QFont& initial, QWidget* parent): QFontDialog(initial, parent) {};

	virtual ~MiqtVirtualQFontDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QFontDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QFontDialog_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QFontDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QFontDialog::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QFontDialog::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__Done == 0) {
			QFontDialog::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QFontDialog_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int result) {

		QFontDialog::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QFontDialog::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QFontDialog_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QFontDialog::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QFontDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFontDialog_SizeHint(const_cast<MiqtVirtualQFontDialog*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QFontDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QFontDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QFontDialog_MinimumSizeHint(const_cast<MiqtVirtualQFontDialog*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QFontDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QFontDialog::open();
			return;
		}
		

		miqt_exec_callback_QFontDialog_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QFontDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QFontDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QFontDialog_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QFontDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QFontDialog::accept();
			return;
		}
		

		miqt_exec_callback_QFontDialog_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QFontDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QFontDialog::reject();
			return;
		}
		

		miqt_exec_callback_QFontDialog_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QFontDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QFontDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QFontDialog_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QFontDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QFontDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QFontDialog_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QFontDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QFontDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QFontDialog_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QFontDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QFontDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QFontDialog_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QFontDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QFontDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QFontDialog_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QFontDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QFontDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QFontDialog_DevType(const_cast<MiqtVirtualQFontDialog*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QFontDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QFontDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QFontDialog_HeightForWidth(const_cast<MiqtVirtualQFontDialog*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QFontDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QFontDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QFontDialog_HasHeightForWidth(const_cast<MiqtVirtualQFontDialog*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QFontDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QFontDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QFontDialog_PaintEngine(const_cast<MiqtVirtualQFontDialog*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QFontDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QFontDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QFontDialog_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QFontDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QFontDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QFontDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QFontDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QFontDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QFontDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QFontDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QFontDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QFontDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QFontDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QFontDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QFontDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QFontDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QFontDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QFontDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QFontDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QFontDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QFontDialog::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QFontDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QFontDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QFontDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QFontDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QFontDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QFontDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QFontDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QFontDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QFontDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QFontDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QFontDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QFontDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QFontDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QFontDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QFontDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QFontDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QFontDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QFontDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QFontDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QFontDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QFontDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QFontDialog::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QFontDialog_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QFontDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QFontDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QFontDialog_Metric(const_cast<MiqtVirtualQFontDialog*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QFontDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QFontDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QFontDialog_InitPainter(const_cast<MiqtVirtualQFontDialog*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QFontDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QFontDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QFontDialog_Redirected(const_cast<MiqtVirtualQFontDialog*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QFontDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QFontDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QFontDialog_SharedPainter(const_cast<MiqtVirtualQFontDialog*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QFontDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QFontDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QFontDialog_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QFontDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QFontDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QFontDialog_InputMethodQuery(const_cast<MiqtVirtualQFontDialog*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QFontDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QFontDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QFontDialog_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QFontDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QFontDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QFontDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QFontDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QFontDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QFontDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFontDialog_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QFontDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QFontDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFontDialog_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QFontDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QFontDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFontDialog_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QFontDialog::disconnectNotify(*signal);

	}

};

QFontDialog* QFontDialog_new(QWidget* parent) {
	return new MiqtVirtualQFontDialog(parent);
}

QFontDialog* QFontDialog_new2() {
	return new MiqtVirtualQFontDialog();
}

QFontDialog* QFontDialog_new3(QFont* initial) {
	return new MiqtVirtualQFontDialog(*initial);
}

QFontDialog* QFontDialog_new4(QFont* initial, QWidget* parent) {
	return new MiqtVirtualQFontDialog(*initial, parent);
}

void QFontDialog_virtbase(QFontDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QFontDialog_MetaObject(const QFontDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFontDialog_Metacast(QFontDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFontDialog_Tr(const char* s) {
	QString _ret = QFontDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontDialog_SetCurrentFont(QFontDialog* self, QFont* font) {
	self->setCurrentFont(*font);
}

QFont* QFontDialog_CurrentFont(const QFontDialog* self) {
	return new QFont(self->currentFont());
}

QFont* QFontDialog_SelectedFont(const QFontDialog* self) {
	return new QFont(self->selectedFont());
}

void QFontDialog_SetOption(QFontDialog* self, int option) {
	self->setOption(static_cast<QFontDialog::FontDialogOption>(option));
}

bool QFontDialog_TestOption(const QFontDialog* self, int option) {
	return self->testOption(static_cast<QFontDialog::FontDialogOption>(option));
}

void QFontDialog_SetOptions(QFontDialog* self, int options) {
	self->setOptions(static_cast<QFontDialog::FontDialogOptions>(options));
}

int QFontDialog_Options(const QFontDialog* self) {
	QFontDialog::FontDialogOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QFontDialog_SetVisible(QFontDialog* self, bool visible) {
	self->setVisible(visible);
}

QFont* QFontDialog_GetFont(bool* ok) {
	return new QFont(QFontDialog::getFont(ok));
}

QFont* QFontDialog_GetFont2(bool* ok, QFont* initial) {
	return new QFont(QFontDialog::getFont(ok, *initial));
}

void QFontDialog_CurrentFontChanged(QFontDialog* self, QFont* font) {
	self->currentFontChanged(*font);
}

void QFontDialog_connect_CurrentFontChanged(QFontDialog* self, intptr_t slot) {
	MiqtVirtualQFontDialog::connect(self, static_cast<void (QFontDialog::*)(const QFont&)>(&QFontDialog::currentFontChanged), self, [=](const QFont& font) {
		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		miqt_exec_callback_QFontDialog_CurrentFontChanged(slot, sigval1);
	});
}

void QFontDialog_FontSelected(QFontDialog* self, QFont* font) {
	self->fontSelected(*font);
}

void QFontDialog_connect_FontSelected(QFontDialog* self, intptr_t slot) {
	MiqtVirtualQFontDialog::connect(self, static_cast<void (QFontDialog::*)(const QFont&)>(&QFontDialog::fontSelected), self, [=](const QFont& font) {
		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		miqt_exec_callback_QFontDialog_FontSelected(slot, sigval1);
	});
}

struct miqt_string QFontDialog_Tr2(const char* s, const char* c) {
	QString _ret = QFontDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFontDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontDialog_SetOption2(QFontDialog* self, int option, bool on) {
	self->setOption(static_cast<QFontDialog::FontDialogOption>(option), on);
}

QFont* QFontDialog_GetFont22(bool* ok, QWidget* parent) {
	return new QFont(QFontDialog::getFont(ok, parent));
}

QFont* QFontDialog_GetFont3(bool* ok, QFont* initial, QWidget* parent) {
	return new QFont(QFontDialog::getFont(ok, *initial, parent));
}

QFont* QFontDialog_GetFont4(bool* ok, QFont* initial, QWidget* parent, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QFont(QFontDialog::getFont(ok, *initial, parent, title_QString));
}

QFont* QFontDialog_GetFont5(bool* ok, QFont* initial, QWidget* parent, struct miqt_string title, int options) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QFont(QFontDialog::getFont(ok, *initial, parent, title_QString, static_cast<QFontDialog::FontDialogOptions>(options)));
}

bool QFontDialog_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QFontDialog_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_SetVisible(visible);
}

bool QFontDialog_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QFontDialog_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_ChangeEvent(event);
}

bool QFontDialog_override_virtual_Done(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Done = slot;
	return true;
}

void QFontDialog_virtualbase_Done(void* self, int result) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_Done(result);
}

bool QFontDialog_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QFontDialog_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQFontDialog*)(self) )->virtualbase_EventFilter(object, event);
}

bool QFontDialog_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QFontDialog_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQFontDialog*)(self) )->virtualbase_SizeHint();
}

bool QFontDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QFontDialog_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQFontDialog*)(self) )->virtualbase_MinimumSizeHint();
}

bool QFontDialog_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

void QFontDialog_virtualbase_Open(void* self) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_Open();
}

bool QFontDialog_override_virtual_Exec(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Exec = slot;
	return true;
}

int QFontDialog_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQFontDialog*)(self) )->virtualbase_Exec();
}

bool QFontDialog_override_virtual_Accept(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Accept = slot;
	return true;
}

void QFontDialog_virtualbase_Accept(void* self) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_Accept();
}

bool QFontDialog_override_virtual_Reject(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reject = slot;
	return true;
}

void QFontDialog_virtualbase_Reject(void* self) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_Reject();
}

bool QFontDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QFontDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QFontDialog_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QFontDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_CloseEvent(param1);
}

bool QFontDialog_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QFontDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_ShowEvent(param1);
}

bool QFontDialog_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QFontDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QFontDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QFontDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QFontDialog_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QFontDialog_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQFontDialog*)(self) )->virtualbase_DevType();
}

bool QFontDialog_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QFontDialog_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQFontDialog*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QFontDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QFontDialog_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQFontDialog*)(self) )->virtualbase_HasHeightForWidth();
}

bool QFontDialog_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QFontDialog_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQFontDialog*)(self) )->virtualbase_PaintEngine();
}

bool QFontDialog_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QFontDialog_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQFontDialog*)(self) )->virtualbase_Event(event);
}

bool QFontDialog_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QFontDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_MousePressEvent(event);
}

bool QFontDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QFontDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QFontDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QFontDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QFontDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QFontDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QFontDialog_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QFontDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_WheelEvent(event);
}

bool QFontDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QFontDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QFontDialog_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QFontDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_FocusInEvent(event);
}

bool QFontDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QFontDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QFontDialog_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QFontDialog_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_EnterEvent(event);
}

bool QFontDialog_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QFontDialog_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_LeaveEvent(event);
}

bool QFontDialog_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QFontDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_PaintEvent(event);
}

bool QFontDialog_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QFontDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_MoveEvent(event);
}

bool QFontDialog_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QFontDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_TabletEvent(event);
}

bool QFontDialog_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QFontDialog_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_ActionEvent(event);
}

bool QFontDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QFontDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QFontDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QFontDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QFontDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QFontDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QFontDialog_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QFontDialog_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_DropEvent(event);
}

bool QFontDialog_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QFontDialog_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_HideEvent(event);
}

bool QFontDialog_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QFontDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQFontDialog*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QFontDialog_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QFontDialog_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQFontDialog*)(self) )->virtualbase_Metric(param1);
}

bool QFontDialog_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QFontDialog_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQFontDialog*)(self) )->virtualbase_InitPainter(painter);
}

bool QFontDialog_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QFontDialog_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQFontDialog*)(self) )->virtualbase_Redirected(offset);
}

bool QFontDialog_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QFontDialog_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQFontDialog*)(self) )->virtualbase_SharedPainter();
}

bool QFontDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QFontDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QFontDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QFontDialog_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQFontDialog*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QFontDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QFontDialog_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQFontDialog*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QFontDialog_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QFontDialog_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_TimerEvent(event);
}

bool QFontDialog_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QFontDialog_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_ChildEvent(event);
}

bool QFontDialog_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QFontDialog_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_CustomEvent(event);
}

bool QFontDialog_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QFontDialog_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QFontDialog_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFontDialog* self_cast = dynamic_cast<MiqtVirtualQFontDialog*>( (QFontDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QFontDialog_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFontDialog*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QFontDialog_Delete(QFontDialog* self) {
	delete self;
}

