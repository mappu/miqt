#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QCheckBox>
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
#include <QMessageBox>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
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
#include <qmessagebox.h>
#include "gen_qmessagebox.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMessageBox_ButtonClicked(intptr_t, QAbstractButton*);
bool miqt_exec_callback_QMessageBox_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMessageBox_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QMessageBox_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QMessageBox_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QMessageBox_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMessageBox_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMessageBox_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QMessageBox_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QMessageBox_MinimumSizeHint(void*, intptr_t);
void miqt_exec_callback_QMessageBox_Open(void*, intptr_t);
int miqt_exec_callback_QMessageBox_Exec(void*, intptr_t);
void miqt_exec_callback_QMessageBox_Done(void*, intptr_t, int);
void miqt_exec_callback_QMessageBox_Accept(void*, intptr_t);
void miqt_exec_callback_QMessageBox_Reject(void*, intptr_t);
void miqt_exec_callback_QMessageBox_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QMessageBox_EventFilter(void*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QMessageBox_DevType(void*, intptr_t);
int miqt_exec_callback_QMessageBox_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QMessageBox_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QMessageBox_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QMessageBox_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMessageBox_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMessageBox_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMessageBox_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMessageBox_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QMessageBox_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMessageBox_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMessageBox_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMessageBox_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMessageBox_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMessageBox_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QMessageBox_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QMessageBox_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QMessageBox_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QMessageBox_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QMessageBox_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QMessageBox_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QMessageBox_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QMessageBox_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QMessageBox_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QMessageBox_Metric(void*, intptr_t, int);
void miqt_exec_callback_QMessageBox_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QMessageBox_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QMessageBox_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QMessageBox_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QMessageBox_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QMessageBox_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QMessageBox_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMessageBox_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMessageBox_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMessageBox_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMessageBox_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMessageBox final : public QMessageBox {
public:

	MiqtVirtualQMessageBox(QWidget* parent): QMessageBox(parent) {};
	MiqtVirtualQMessageBox(): QMessageBox() {};
	MiqtVirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text): QMessageBox(icon, title, text) {};
	MiqtVirtualQMessageBox(const QString& title, const QString& text, QMessageBox::Icon icon, int button0, int button1, int button2): QMessageBox(title, text, icon, button0, button1, button2) {};
	MiqtVirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text, QMessageBox::StandardButtons buttons): QMessageBox(icon, title, text, buttons) {};
	MiqtVirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text, QMessageBox::StandardButtons buttons, QWidget* parent): QMessageBox(icon, title, text, buttons, parent) {};
	MiqtVirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text, QMessageBox::StandardButtons buttons, QWidget* parent, Qt::WindowFlags flags): QMessageBox(icon, title, text, buttons, parent, flags) {};
	MiqtVirtualQMessageBox(const QString& title, const QString& text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget* parent): QMessageBox(title, text, icon, button0, button1, button2, parent) {};
	MiqtVirtualQMessageBox(const QString& title, const QString& text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget* parent, Qt::WindowFlags f): QMessageBox(title, text, icon, button0, button1, button2, parent, f) {};

	virtual ~MiqtVirtualQMessageBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QMessageBox::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QMessageBox_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QMessageBox::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QMessageBox::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QMessageBox::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QMessageBox::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QMessageBox::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QMessageBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QMessageBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QMessageBox::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QMessageBox::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QMessageBox::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QMessageBox::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QMessageBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QMessageBox_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QMessageBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QMessageBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMessageBox_SizeHint(const_cast<MiqtVirtualQMessageBox*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QMessageBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QMessageBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMessageBox_MinimumSizeHint(const_cast<MiqtVirtualQMessageBox*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QMessageBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Open = 0;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (handle__Open == 0) {
			QMessageBox::open();
			return;
		}
		

		miqt_exec_callback_QMessageBox_Open(this, handle__Open);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Open() {

		QMessageBox::open();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Exec = 0;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (handle__Exec == 0) {
			return QMessageBox::exec();
		}
		

		int callback_return_value = miqt_exec_callback_QMessageBox_Exec(this, handle__Exec);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Exec() {

		return QMessageBox::exec();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Done = 0;

	// Subclass to allow providing a Go implementation
	virtual void done(int param1) override {
		if (handle__Done == 0) {
			QMessageBox::done(param1);
			return;
		}
		
		int sigval1 = param1;

		miqt_exec_callback_QMessageBox_Done(this, handle__Done, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Done(int param1) {

		QMessageBox::done(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Accept = 0;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (handle__Accept == 0) {
			QMessageBox::accept();
			return;
		}
		

		miqt_exec_callback_QMessageBox_Accept(this, handle__Accept);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Accept() {

		QMessageBox::accept();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reject = 0;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (handle__Reject == 0) {
			QMessageBox::reject();
			return;
		}
		

		miqt_exec_callback_QMessageBox_Reject(this, handle__Reject);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reject() {

		QMessageBox::reject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QMessageBox::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QMessageBox_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QMessageBox::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QMessageBox::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QMessageBox_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QMessageBox::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QMessageBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QMessageBox_DevType(const_cast<MiqtVirtualQMessageBox*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QMessageBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QMessageBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QMessageBox_HeightForWidth(const_cast<MiqtVirtualQMessageBox*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QMessageBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QMessageBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QMessageBox_HasHeightForWidth(const_cast<MiqtVirtualQMessageBox*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QMessageBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QMessageBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QMessageBox_PaintEngine(const_cast<MiqtVirtualQMessageBox*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QMessageBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QMessageBox::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QMessageBox::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QMessageBox::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QMessageBox::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QMessageBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QMessageBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QMessageBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QMessageBox::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QMessageBox::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QMessageBox::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QMessageBox::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QMessageBox::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QMessageBox::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QMessageBox::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QMessageBox::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QMessageBox::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QMessageBox::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QMessageBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QMessageBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QMessageBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QMessageBox::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QMessageBox::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QMessageBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QMessageBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QMessageBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QMessageBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QMessageBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QMessageBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QMessageBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QMessageBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QMessageBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QMessageBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QMessageBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QMessageBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QMessageBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QMessageBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QMessageBox::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QMessageBox::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QMessageBox::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QMessageBox_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QMessageBox::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QMessageBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QMessageBox_Metric(const_cast<MiqtVirtualQMessageBox*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QMessageBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QMessageBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QMessageBox_InitPainter(const_cast<MiqtVirtualQMessageBox*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QMessageBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QMessageBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QMessageBox_Redirected(const_cast<MiqtVirtualQMessageBox*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QMessageBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QMessageBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QMessageBox_SharedPainter(const_cast<MiqtVirtualQMessageBox*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QMessageBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QMessageBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QMessageBox_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QMessageBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QMessageBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QMessageBox_InputMethodQuery(const_cast<MiqtVirtualQMessageBox*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QMessageBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QMessageBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QMessageBox_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QMessageBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QMessageBox::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QMessageBox::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QMessageBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QMessageBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QMessageBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMessageBox_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QMessageBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QMessageBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMessageBox_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QMessageBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QMessageBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMessageBox_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QMessageBox::disconnectNotify(*signal);

	}

};

QMessageBox* QMessageBox_new(QWidget* parent) {
	return new MiqtVirtualQMessageBox(parent);
}

QMessageBox* QMessageBox_new2() {
	return new MiqtVirtualQMessageBox();
}

QMessageBox* QMessageBox_new3(int icon, struct miqt_string title, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString);
}

QMessageBox* QMessageBox_new4(struct miqt_string title, struct miqt_string text, int icon, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQMessageBox(title_QString, text_QString, static_cast<QMessageBox::Icon>(icon), static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

QMessageBox* QMessageBox_new5(int icon, struct miqt_string title, struct miqt_string text, int buttons) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
}

QMessageBox* QMessageBox_new6(int icon, struct miqt_string title, struct miqt_string text, int buttons, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), parent);
}

QMessageBox* QMessageBox_new7(int icon, struct miqt_string title, struct miqt_string text, int buttons, QWidget* parent, int flags) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), parent, static_cast<Qt::WindowFlags>(flags));
}

QMessageBox* QMessageBox_new8(struct miqt_string title, struct miqt_string text, int icon, int button0, int button1, int button2, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQMessageBox(title_QString, text_QString, static_cast<QMessageBox::Icon>(icon), static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2), parent);
}

QMessageBox* QMessageBox_new9(struct miqt_string title, struct miqt_string text, int icon, int button0, int button1, int button2, QWidget* parent, int f) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQMessageBox(title_QString, text_QString, static_cast<QMessageBox::Icon>(icon), static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2), parent, static_cast<Qt::WindowFlags>(f));
}

void QMessageBox_virtbase(QMessageBox* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QMessageBox_MetaObject(const QMessageBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMessageBox_Metacast(QMessageBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMessageBox_Tr(const char* s) {
	QString _ret = QMessageBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMessageBox_TrUtf8(const char* s) {
	QString _ret = QMessageBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMessageBox_AddButton(QMessageBox* self, QAbstractButton* button, int role) {
	self->addButton(button, static_cast<QMessageBox::ButtonRole>(role));
}

QPushButton* QMessageBox_AddButton2(QMessageBox* self, struct miqt_string text, int role) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addButton(text_QString, static_cast<QMessageBox::ButtonRole>(role));
}

QPushButton* QMessageBox_AddButtonWithButton(QMessageBox* self, int button) {
	return self->addButton(static_cast<QMessageBox::StandardButton>(button));
}

void QMessageBox_RemoveButton(QMessageBox* self, QAbstractButton* button) {
	self->removeButton(button);
}

struct miqt_array /* of QAbstractButton* */  QMessageBox_Buttons(const QMessageBox* self) {
	QList<QAbstractButton *> _ret = self->buttons();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractButton** _arr = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QMessageBox_ButtonRole(const QMessageBox* self, QAbstractButton* button) {
	QMessageBox::ButtonRole _ret = self->buttonRole(button);
	return static_cast<int>(_ret);
}

void QMessageBox_SetStandardButtons(QMessageBox* self, int buttons) {
	self->setStandardButtons(static_cast<QMessageBox::StandardButtons>(buttons));
}

int QMessageBox_StandardButtons(const QMessageBox* self) {
	QMessageBox::StandardButtons _ret = self->standardButtons();
	return static_cast<int>(_ret);
}

int QMessageBox_StandardButton(const QMessageBox* self, QAbstractButton* button) {
	QMessageBox::StandardButton _ret = self->standardButton(button);
	return static_cast<int>(_ret);
}

QAbstractButton* QMessageBox_Button(const QMessageBox* self, int which) {
	return self->button(static_cast<QMessageBox::StandardButton>(which));
}

QPushButton* QMessageBox_DefaultButton(const QMessageBox* self) {
	return self->defaultButton();
}

void QMessageBox_SetDefaultButton(QMessageBox* self, QPushButton* button) {
	self->setDefaultButton(button);
}

void QMessageBox_SetDefaultButtonWithButton(QMessageBox* self, int button) {
	self->setDefaultButton(static_cast<QMessageBox::StandardButton>(button));
}

QAbstractButton* QMessageBox_EscapeButton(const QMessageBox* self) {
	return self->escapeButton();
}

void QMessageBox_SetEscapeButton(QMessageBox* self, QAbstractButton* button) {
	self->setEscapeButton(button);
}

void QMessageBox_SetEscapeButtonWithButton(QMessageBox* self, int button) {
	self->setEscapeButton(static_cast<QMessageBox::StandardButton>(button));
}

QAbstractButton* QMessageBox_ClickedButton(const QMessageBox* self) {
	return self->clickedButton();
}

struct miqt_string QMessageBox_Text(const QMessageBox* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMessageBox_SetText(QMessageBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

int QMessageBox_Icon(const QMessageBox* self) {
	QMessageBox::Icon _ret = self->icon();
	return static_cast<int>(_ret);
}

void QMessageBox_SetIcon(QMessageBox* self, int icon) {
	self->setIcon(static_cast<QMessageBox::Icon>(icon));
}

QPixmap* QMessageBox_IconPixmap(const QMessageBox* self) {
	return new QPixmap(self->iconPixmap());
}

void QMessageBox_SetIconPixmap(QMessageBox* self, QPixmap* pixmap) {
	self->setIconPixmap(*pixmap);
}

int QMessageBox_TextFormat(const QMessageBox* self) {
	Qt::TextFormat _ret = self->textFormat();
	return static_cast<int>(_ret);
}

void QMessageBox_SetTextFormat(QMessageBox* self, int format) {
	self->setTextFormat(static_cast<Qt::TextFormat>(format));
}

void QMessageBox_SetTextInteractionFlags(QMessageBox* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QMessageBox_TextInteractionFlags(const QMessageBox* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

void QMessageBox_SetCheckBox(QMessageBox* self, QCheckBox* cb) {
	self->setCheckBox(cb);
}

QCheckBox* QMessageBox_CheckBox(const QMessageBox* self) {
	return self->checkBox();
}

int QMessageBox_Information(QWidget* parent, struct miqt_string title, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::information(parent, title_QString, text_QString);
	return static_cast<int>(_ret);
}

int QMessageBox_Question(QWidget* parent, struct miqt_string title, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::question(parent, title_QString, text_QString);
	return static_cast<int>(_ret);
}

int QMessageBox_Warning(QWidget* parent, struct miqt_string title, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::warning(parent, title_QString, text_QString);
	return static_cast<int>(_ret);
}

int QMessageBox_Critical(QWidget* parent, struct miqt_string title, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::critical(parent, title_QString, text_QString);
	return static_cast<int>(_ret);
}

void QMessageBox_About(QWidget* parent, struct miqt_string title, struct miqt_string text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::about(parent, title_QString, text_QString);
}

void QMessageBox_AboutQt(QWidget* parent) {
	QMessageBox::aboutQt(parent);
}

int QMessageBox_Information2(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0));
}

int QMessageBox_Information3(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Information4(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0));
	return static_cast<int>(_ret);
}

int QMessageBox_Question2(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0));
}

int QMessageBox_Question3(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Question4(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::question(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

int QMessageBox_Warning2(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Warning3(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Warning4(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

int QMessageBox_Critical2(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Critical3(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Critical4(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

struct miqt_string QMessageBox_ButtonText(const QMessageBox* self, int button) {
	QString _ret = self->buttonText(static_cast<int>(button));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMessageBox_SetButtonText(QMessageBox* self, int button, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setButtonText(static_cast<int>(button), text_QString);
}

struct miqt_string QMessageBox_InformativeText(const QMessageBox* self) {
	QString _ret = self->informativeText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMessageBox_SetInformativeText(QMessageBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setInformativeText(text_QString);
}

struct miqt_string QMessageBox_DetailedText(const QMessageBox* self) {
	QString _ret = self->detailedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMessageBox_SetDetailedText(QMessageBox* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setDetailedText(text_QString);
}

void QMessageBox_SetWindowTitle(QMessageBox* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setWindowTitle(title_QString);
}

void QMessageBox_SetWindowModality(QMessageBox* self, int windowModality) {
	self->setWindowModality(static_cast<Qt::WindowModality>(windowModality));
}

QPixmap* QMessageBox_StandardIcon(int icon) {
	return new QPixmap(QMessageBox::standardIcon(static_cast<QMessageBox::Icon>(icon)));
}

void QMessageBox_ButtonClicked(QMessageBox* self, QAbstractButton* button) {
	self->buttonClicked(button);
}

void QMessageBox_connect_ButtonClicked(QMessageBox* self, intptr_t slot) {
	MiqtVirtualQMessageBox::connect(self, static_cast<void (QMessageBox::*)(QAbstractButton*)>(&QMessageBox::buttonClicked), self, [=](QAbstractButton* button) {
		QAbstractButton* sigval1 = button;
		miqt_exec_callback_QMessageBox_ButtonClicked(slot, sigval1);
	});
}

struct miqt_string QMessageBox_Tr2(const char* s, const char* c) {
	QString _ret = QMessageBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMessageBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMessageBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMessageBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QMessageBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMessageBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMessageBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QMessageBox_Information42(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
	return static_cast<int>(_ret);
}

int QMessageBox_Information5(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons, int defaultButton) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	return static_cast<int>(_ret);
}

int QMessageBox_Question42(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::question(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
	return static_cast<int>(_ret);
}

int QMessageBox_Question5(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons, int defaultButton) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::question(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	return static_cast<int>(_ret);
}

int QMessageBox_Warning42(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::warning(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
	return static_cast<int>(_ret);
}

int QMessageBox_Warning5(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons, int defaultButton) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::warning(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	return static_cast<int>(_ret);
}

int QMessageBox_Critical42(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::critical(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
	return static_cast<int>(_ret);
}

int QMessageBox_Critical5(QWidget* parent, struct miqt_string title, struct miqt_string text, int buttons, int defaultButton) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::critical(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton));
	return static_cast<int>(_ret);
}

void QMessageBox_AboutQt2(QWidget* parent, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QMessageBox::aboutQt(parent, title_QString);
}

int QMessageBox_Information52(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Information6(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Information53(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Information62(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Information7(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Information8(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

int QMessageBox_Information54(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QMessageBox::StandardButton _ret = QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
	return static_cast<int>(_ret);
}

int QMessageBox_Question52(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Question6(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Question53(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Question62(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Question7(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Question8(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

int QMessageBox_Warning6(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Warning52(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Warning62(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Warning7(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Warning8(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

int QMessageBox_Critical6(QWidget* parent, struct miqt_string title, struct miqt_string text, int button0, int button1, int button2) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Critical52(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Critical62(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Critical7(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Critical8(QWidget* parent, struct miqt_string title, struct miqt_string text, struct miqt_string button0Text, struct miqt_string button1Text, struct miqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
	QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
	QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
	return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

bool QMessageBox_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QMessageBox_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQMessageBox*)(self) )->virtualbase_Event(e);
}

bool QMessageBox_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QMessageBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_ResizeEvent(event);
}

bool QMessageBox_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QMessageBox_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_ShowEvent(event);
}

bool QMessageBox_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QMessageBox_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_CloseEvent(event);
}

bool QMessageBox_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QMessageBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QMessageBox_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QMessageBox_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_ChangeEvent(event);
}

bool QMessageBox_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QMessageBox_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_SetVisible(visible);
}

bool QMessageBox_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QMessageBox_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_SizeHint();
}

bool QMessageBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QMessageBox_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_MinimumSizeHint();
}

bool QMessageBox_override_virtual_Open(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Open = slot;
	return true;
}

void QMessageBox_virtualbase_Open(void* self) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_Open();
}

bool QMessageBox_override_virtual_Exec(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Exec = slot;
	return true;
}

int QMessageBox_virtualbase_Exec(void* self) {
	return ( (MiqtVirtualQMessageBox*)(self) )->virtualbase_Exec();
}

bool QMessageBox_override_virtual_Done(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Done = slot;
	return true;
}

void QMessageBox_virtualbase_Done(void* self, int param1) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_Done(param1);
}

bool QMessageBox_override_virtual_Accept(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Accept = slot;
	return true;
}

void QMessageBox_virtualbase_Accept(void* self) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_Accept();
}

bool QMessageBox_override_virtual_Reject(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Reject = slot;
	return true;
}

void QMessageBox_virtualbase_Reject(void* self) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_Reject();
}

bool QMessageBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QMessageBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QMessageBox_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QMessageBox_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQMessageBox*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QMessageBox_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QMessageBox_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_DevType();
}

bool QMessageBox_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QMessageBox_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QMessageBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QMessageBox_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_HasHeightForWidth();
}

bool QMessageBox_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QMessageBox_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_PaintEngine();
}

bool QMessageBox_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QMessageBox_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_MousePressEvent(event);
}

bool QMessageBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QMessageBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QMessageBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QMessageBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QMessageBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QMessageBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QMessageBox_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QMessageBox_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_WheelEvent(event);
}

bool QMessageBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QMessageBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QMessageBox_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QMessageBox_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_FocusInEvent(event);
}

bool QMessageBox_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QMessageBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QMessageBox_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QMessageBox_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_EnterEvent(event);
}

bool QMessageBox_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QMessageBox_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_LeaveEvent(event);
}

bool QMessageBox_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QMessageBox_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_PaintEvent(event);
}

bool QMessageBox_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QMessageBox_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_MoveEvent(event);
}

bool QMessageBox_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QMessageBox_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_TabletEvent(event);
}

bool QMessageBox_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QMessageBox_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_ActionEvent(event);
}

bool QMessageBox_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QMessageBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QMessageBox_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QMessageBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QMessageBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QMessageBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QMessageBox_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QMessageBox_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_DropEvent(event);
}

bool QMessageBox_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QMessageBox_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_HideEvent(event);
}

bool QMessageBox_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QMessageBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQMessageBox*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QMessageBox_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QMessageBox_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_Metric(param1);
}

bool QMessageBox_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QMessageBox_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_InitPainter(painter);
}

bool QMessageBox_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QMessageBox_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_Redirected(offset);
}

bool QMessageBox_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QMessageBox_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_SharedPainter();
}

bool QMessageBox_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QMessageBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QMessageBox_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QMessageBox_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQMessageBox*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QMessageBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QMessageBox_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQMessageBox*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QMessageBox_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QMessageBox_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_TimerEvent(event);
}

bool QMessageBox_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QMessageBox_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_ChildEvent(event);
}

bool QMessageBox_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QMessageBox_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_CustomEvent(event);
}

bool QMessageBox_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QMessageBox_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QMessageBox_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMessageBox* self_cast = dynamic_cast<MiqtVirtualQMessageBox*>( (QMessageBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QMessageBox_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMessageBox*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QMessageBox_Delete(QMessageBox* self) {
	delete self;
}

