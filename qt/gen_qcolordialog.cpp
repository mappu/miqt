#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QColorDialog>
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
#include <qcolordialog.h>
#include "gen_qcolordialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QColorDialog_CurrentColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QColorDialog_ColorSelected(intptr_t, QColor*);
void miqt_exec_callback_QColorDialog_SetVisible(void*, intptr_t, bool);
void miqt_exec_callback_QColorDialog_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QColorDialog_Done(void*, intptr_t, int);
QSize* miqt_exec_callback_QColorDialog_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QColorDialog_MinimumSizeHint(void*, intptr_t);
void miqt_exec_callback_QColorDialog_Open(void*, intptr_t);
int miqt_exec_callback_QColorDialog_Exec(void*, intptr_t);
void miqt_exec_callback_QColorDialog_Accept(void*, intptr_t);
void miqt_exec_callback_QColorDialog_Reject(void*, intptr_t);
void miqt_exec_callback_QColorDialog_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QColorDialog_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QColorDialog_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QColorDialog_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QColorDialog_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QColorDialog_EventFilter(void*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QColorDialog_DevType(void*, intptr_t);
int miqt_exec_callback_QColorDialog_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QColorDialog_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QColorDialog_PaintEngine(void*, intptr_t);
bool miqt_exec_callback_QColorDialog_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QColorDialog_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColorDialog_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColorDialog_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColorDialog_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColorDialog_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QColorDialog_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QColorDialog_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QColorDialog_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QColorDialog_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QColorDialog_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QColorDialog_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QColorDialog_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QColorDialog_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QColorDialog_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QColorDialog_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QColorDialog_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QColorDialog_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QColorDialog_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QColorDialog_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QColorDialog_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QColorDialog_Metric(void*, intptr_t, int);
void miqt_exec_callback_QColorDialog_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QColorDialog_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QColorDialog_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QColorDialog_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QColorDialog_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QColorDialog_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QColorDialog_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QColorDialog_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QColorDialog_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QColorDialog_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QColorDialog_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQColorDialog final : public QColorDialog {
public:

	MiqtVirtualQColorDialog(QWidget* parent): QColorDialog(parent) {};
	MiqtVirtualQColorDialog(): QColorDialog() {};
	MiqtVirtualQColorDialog(const QColor& initial): QColorDialog(initial) {};
	MiqtVirtualQColorDialog(const QColor& initial, QWidget* parent): QColorDialog(initial, parent) {};

	virtual ~MiqtVirtualQColorDialog() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QColorDialog::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QColorDialog_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QColorDialog::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QColorDialog::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QColorDialog::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (handle__Done == 0) {
			QColorDialog::done(result);
			return;
		}
		
		int sigval1 = result;

		miqt_exec_callback_QColorDialog_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int result) {

		QColorDialog::done(static_cast<int>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QColorDialog::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QColorDialog_SizeHint(const_cast<MiqtVirtualQColorDialog*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QColorDialog::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QColorDialog::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QColorDialog_MinimumSizeHint(const_cast<MiqtVirtualQColorDialog*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QColorDialog::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QColorDialog::open();
			return;
		}
		

		miqt_exec_callback_QColorDialog_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QColorDialog::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QColorDialog::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QColorDialog_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QColorDialog::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QColorDialog::accept();
			return;
		}
		

		miqt_exec_callback_QColorDialog_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QColorDialog::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QColorDialog::reject();
			return;
		}
		

		miqt_exec_callback_QColorDialog_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QColorDialog::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QColorDialog::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QColorDialog_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QColorDialog::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (handle__CloseEvent == 0) {
			QColorDialog::closeEvent(param1);
			return;
		}
		
		QCloseEvent* sigval1 = param1;

		miqt_exec_callback_QColorDialog_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* param1) {

		QColorDialog::closeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (handle__ShowEvent == 0) {
			QColorDialog::showEvent(param1);
			return;
		}
		
		QShowEvent* sigval1 = param1;

		miqt_exec_callback_QColorDialog_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* param1) {

		QColorDialog::showEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__ResizeEvent == 0) {
			QColorDialog::resizeEvent(param1);
			return;
		}
		
		QResizeEvent* sigval1 = param1;

		miqt_exec_callback_QColorDialog_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* param1) {

		QColorDialog::resizeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QColorDialog::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QColorDialog_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QColorDialog::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QColorDialog::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QColorDialog_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QColorDialog::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QColorDialog::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QColorDialog_DevType(const_cast<MiqtVirtualQColorDialog*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QColorDialog::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QColorDialog::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QColorDialog_HeightForWidth(const_cast<MiqtVirtualQColorDialog*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QColorDialog::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QColorDialog::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QColorDialog_HasHeightForWidth(const_cast<MiqtVirtualQColorDialog*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QColorDialog::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QColorDialog::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QColorDialog_PaintEngine(const_cast<MiqtVirtualQColorDialog*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QColorDialog::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QColorDialog::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QColorDialog_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QColorDialog::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QColorDialog::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QColorDialog::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QColorDialog::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QColorDialog::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QColorDialog::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QColorDialog::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QColorDialog::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QColorDialog::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QColorDialog::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QColorDialog::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QColorDialog::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QColorDialog::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QColorDialog::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QColorDialog::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QColorDialog::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QColorDialog::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QColorDialog::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QColorDialog::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QColorDialog::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QColorDialog::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QColorDialog::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QColorDialog::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QColorDialog::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QColorDialog::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QColorDialog::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QColorDialog::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QColorDialog::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QColorDialog::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QColorDialog::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QColorDialog::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QColorDialog::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QColorDialog::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QColorDialog::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QColorDialog::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QColorDialog::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QColorDialog::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QColorDialog::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QColorDialog::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QColorDialog::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QColorDialog_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QColorDialog::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QColorDialog::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QColorDialog_Metric(const_cast<MiqtVirtualQColorDialog*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QColorDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QColorDialog::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QColorDialog_InitPainter(const_cast<MiqtVirtualQColorDialog*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QColorDialog::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QColorDialog::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QColorDialog_Redirected(const_cast<MiqtVirtualQColorDialog*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QColorDialog::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QColorDialog::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QColorDialog_SharedPainter(const_cast<MiqtVirtualQColorDialog*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QColorDialog::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QColorDialog::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QColorDialog_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QColorDialog::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QColorDialog::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QColorDialog_InputMethodQuery(const_cast<MiqtVirtualQColorDialog*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QColorDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QColorDialog::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QColorDialog_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QColorDialog::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QColorDialog::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QColorDialog::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QColorDialog::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QColorDialog::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QColorDialog::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QColorDialog_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QColorDialog::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QColorDialog::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QColorDialog_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QColorDialog::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QColorDialog::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QColorDialog_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QColorDialog::disconnectNotify(*signal);

	}

};

QColorDialog* QColorDialog_new(QWidget* parent) {
	return new MiqtVirtualQColorDialog(parent);
}

QColorDialog* QColorDialog_new2() {
	return new MiqtVirtualQColorDialog();
}

QColorDialog* QColorDialog_new3(QColor* initial) {
	return new MiqtVirtualQColorDialog(*initial);
}

QColorDialog* QColorDialog_new4(QColor* initial, QWidget* parent) {
	return new MiqtVirtualQColorDialog(*initial, parent);
}

void QColorDialog_virtbase(QColorDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QColorDialog_MetaObject(const QColorDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QColorDialog_Metacast(QColorDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QColorDialog_Tr(const char* s) {
	QString _ret = QColorDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColorDialog_TrUtf8(const char* s) {
	QString _ret = QColorDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QColorDialog_SetCurrentColor(QColorDialog* self, QColor* color) {
	self->setCurrentColor(*color);
}

QColor* QColorDialog_CurrentColor(const QColorDialog* self) {
	return new QColor(self->currentColor());
}

QColor* QColorDialog_SelectedColor(const QColorDialog* self) {
	return new QColor(self->selectedColor());
}

void QColorDialog_SetOption(QColorDialog* self, int option) {
	self->setOption(static_cast<QColorDialog::ColorDialogOption>(option));
}

bool QColorDialog_TestOption(const QColorDialog* self, int option) {
	return self->testOption(static_cast<QColorDialog::ColorDialogOption>(option));
}

void QColorDialog_SetOptions(QColorDialog* self, int options) {
	self->setOptions(static_cast<QColorDialog::ColorDialogOptions>(options));
}

int QColorDialog_Options(const QColorDialog* self) {
	QColorDialog::ColorDialogOptions _ret = self->options();
	return static_cast<int>(_ret);
}

void QColorDialog_SetVisible(QColorDialog* self, bool visible) {
	self->setVisible(visible);
}

QColor* QColorDialog_GetColor() {
	return new QColor(QColorDialog::getColor());
}

unsigned int QColorDialog_GetRgba() {
	QRgb _ret = QColorDialog::getRgba();
	return static_cast<unsigned int>(_ret);
}

int QColorDialog_CustomCount() {
	return QColorDialog::customCount();
}

QColor* QColorDialog_CustomColor(int index) {
	return new QColor(QColorDialog::customColor(static_cast<int>(index)));
}

void QColorDialog_SetCustomColor(int index, QColor* color) {
	QColorDialog::setCustomColor(static_cast<int>(index), *color);
}

QColor* QColorDialog_StandardColor(int index) {
	return new QColor(QColorDialog::standardColor(static_cast<int>(index)));
}

void QColorDialog_SetStandardColor(int index, QColor* color) {
	QColorDialog::setStandardColor(static_cast<int>(index), *color);
}

void QColorDialog_CurrentColorChanged(QColorDialog* self, QColor* color) {
	self->currentColorChanged(*color);
}

void QColorDialog_connect_CurrentColorChanged(QColorDialog* self, intptr_t slot) {
	MiqtVirtualQColorDialog::connect(self, static_cast<void (QColorDialog::*)(const QColor&)>(&QColorDialog::currentColorChanged), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QColorDialog_CurrentColorChanged(slot, sigval1);
	});
}

void QColorDialog_ColorSelected(QColorDialog* self, QColor* color) {
	self->colorSelected(*color);
}

void QColorDialog_connect_ColorSelected(QColorDialog* self, intptr_t slot) {
	MiqtVirtualQColorDialog::connect(self, static_cast<void (QColorDialog::*)(const QColor&)>(&QColorDialog::colorSelected), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QColorDialog_ColorSelected(slot, sigval1);
	});
}

struct miqt_string QColorDialog_Tr2(const char* s, const char* c) {
	QString _ret = QColorDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColorDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QColorDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColorDialog_TrUtf82(const char* s, const char* c) {
	QString _ret = QColorDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColorDialog_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QColorDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QColorDialog_SetOption2(QColorDialog* self, int option, bool on) {
	self->setOption(static_cast<QColorDialog::ColorDialogOption>(option), on);
}

QColor* QColorDialog_GetColor1(QColor* initial) {
	return new QColor(QColorDialog::getColor(*initial));
}

QColor* QColorDialog_GetColor2(QColor* initial, QWidget* parent) {
	return new QColor(QColorDialog::getColor(*initial, parent));
}

QColor* QColorDialog_GetColor3(QColor* initial, QWidget* parent, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QColor(QColorDialog::getColor(*initial, parent, title_QString));
}

QColor* QColorDialog_GetColor4(QColor* initial, QWidget* parent, struct miqt_string title, int options) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QColor(QColorDialog::getColor(*initial, parent, title_QString, static_cast<QColorDialog::ColorDialogOptions>(options)));
}

unsigned int QColorDialog_GetRgba1(unsigned int rgba) {
	QRgb _ret = QColorDialog::getRgba(static_cast<QRgb>(rgba));
	return static_cast<unsigned int>(_ret);
}

unsigned int QColorDialog_GetRgba2(unsigned int rgba, bool* ok) {
	QRgb _ret = QColorDialog::getRgba(static_cast<QRgb>(rgba), ok);
	return static_cast<unsigned int>(_ret);
}

unsigned int QColorDialog_GetRgba3(unsigned int rgba, bool* ok, QWidget* parent) {
	QRgb _ret = QColorDialog::getRgba(static_cast<QRgb>(rgba), ok, parent);
	return static_cast<unsigned int>(_ret);
}

bool QColorDialog_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QColorDialog_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_SetVisible(visible);
}

bool QColorDialog_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QColorDialog_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_ChangeEvent(event);
}

bool QColorDialog_override_virtual_Done(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Done = slot;
	return true;
}

void QColorDialog_virtualbase_Done(void* self, int result) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_Done(result);
}

bool QColorDialog_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QColorDialog_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_SizeHint();
}

bool QColorDialog_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QColorDialog_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_MinimumSizeHint();
}

bool QColorDialog_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

void QColorDialog_virtualbase_Open(void* self) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_Open();
}

bool QColorDialog_override_virtual_Exec(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Exec = slot;
	return true;
}

int QColorDialog_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQColorDialog*)(self) )->virtualbase_Exec();
}

bool QColorDialog_override_virtual_Accept(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Accept = slot;
	return true;
}

void QColorDialog_virtualbase_Accept(void* self) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_Accept();
}

bool QColorDialog_override_virtual_Reject(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reject = slot;
	return true;
}

void QColorDialog_virtualbase_Reject(void* self) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_Reject();
}

bool QColorDialog_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QColorDialog_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QColorDialog_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QColorDialog_virtualbase_CloseEvent(void* self, QCloseEvent* param1) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_CloseEvent(param1);
}

bool QColorDialog_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QColorDialog_virtualbase_ShowEvent(void* self, QShowEvent* param1) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_ShowEvent(param1);
}

bool QColorDialog_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QColorDialog_virtualbase_ResizeEvent(void* self, QResizeEvent* param1) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_ResizeEvent(param1);
}

bool QColorDialog_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QColorDialog_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QColorDialog_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QColorDialog_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQColorDialog*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QColorDialog_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QColorDialog_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_DevType();
}

bool QColorDialog_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QColorDialog_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QColorDialog_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QColorDialog_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_HasHeightForWidth();
}

bool QColorDialog_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QColorDialog_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_PaintEngine();
}

bool QColorDialog_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QColorDialog_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQColorDialog*)(self) )->virtualbase_Event(event);
}

bool QColorDialog_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QColorDialog_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_MousePressEvent(event);
}

bool QColorDialog_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QColorDialog_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QColorDialog_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QColorDialog_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QColorDialog_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QColorDialog_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QColorDialog_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QColorDialog_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_WheelEvent(event);
}

bool QColorDialog_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QColorDialog_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QColorDialog_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QColorDialog_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_FocusInEvent(event);
}

bool QColorDialog_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QColorDialog_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QColorDialog_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QColorDialog_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_EnterEvent(event);
}

bool QColorDialog_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QColorDialog_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_LeaveEvent(event);
}

bool QColorDialog_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QColorDialog_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_PaintEvent(event);
}

bool QColorDialog_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QColorDialog_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_MoveEvent(event);
}

bool QColorDialog_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QColorDialog_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_TabletEvent(event);
}

bool QColorDialog_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QColorDialog_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_ActionEvent(event);
}

bool QColorDialog_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QColorDialog_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QColorDialog_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QColorDialog_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QColorDialog_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QColorDialog_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QColorDialog_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QColorDialog_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_DropEvent(event);
}

bool QColorDialog_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QColorDialog_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_HideEvent(event);
}

bool QColorDialog_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QColorDialog_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQColorDialog*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QColorDialog_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QColorDialog_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_Metric(param1);
}

bool QColorDialog_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QColorDialog_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_InitPainter(painter);
}

bool QColorDialog_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QColorDialog_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_Redirected(offset);
}

bool QColorDialog_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QColorDialog_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_SharedPainter();
}

bool QColorDialog_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QColorDialog_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QColorDialog_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QColorDialog_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQColorDialog*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QColorDialog_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QColorDialog_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQColorDialog*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QColorDialog_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QColorDialog_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_TimerEvent(event);
}

bool QColorDialog_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QColorDialog_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_ChildEvent(event);
}

bool QColorDialog_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QColorDialog_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_CustomEvent(event);
}

bool QColorDialog_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QColorDialog_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QColorDialog_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQColorDialog* self_cast = dynamic_cast<MiqtVirtualQColorDialog*>( (QColorDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QColorDialog_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQColorDialog*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QColorDialog_Delete(QColorDialog* self) {
	delete self;
}

