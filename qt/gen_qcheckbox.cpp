#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QCheckBox>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
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
#include <qcheckbox.h>
#include "gen_qcheckbox.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCheckBox_StateChanged(intptr_t, int);
QSize* miqt_exec_callback_QCheckBox_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QCheckBox_MinimumSizeHint(void*, intptr_t);
bool miqt_exec_callback_QCheckBox_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QCheckBox_HitButton(void*, intptr_t, QPoint*);
void miqt_exec_callback_QCheckBox_CheckStateSet(void*, intptr_t);
void miqt_exec_callback_QCheckBox_NextCheckState(void*, intptr_t);
void miqt_exec_callback_QCheckBox_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QCheckBox_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCheckBox_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCheckBox_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCheckBox_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCheckBox_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCheckBox_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCheckBox_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCheckBox_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCheckBox_TimerEvent(void*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QCheckBox_DevType(void*, intptr_t);
void miqt_exec_callback_QCheckBox_SetVisible(void*, intptr_t, bool);
int miqt_exec_callback_QCheckBox_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QCheckBox_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QCheckBox_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QCheckBox_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCheckBox_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QCheckBox_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCheckBox_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCheckBox_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QCheckBox_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QCheckBox_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QCheckBox_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QCheckBox_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QCheckBox_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QCheckBox_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QCheckBox_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QCheckBox_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QCheckBox_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QCheckBox_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QCheckBox_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QCheckBox_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QCheckBox_Metric(void*, intptr_t, int);
void miqt_exec_callback_QCheckBox_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QCheckBox_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QCheckBox_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QCheckBox_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QCheckBox_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QCheckBox_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QCheckBox_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCheckBox_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCheckBox_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QCheckBox_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCheckBox_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCheckBox final : public QCheckBox {
public:

	MiqtVirtualQCheckBox(QWidget* parent): QCheckBox(parent) {};
	MiqtVirtualQCheckBox(): QCheckBox() {};
	MiqtVirtualQCheckBox(const QString& text): QCheckBox(text) {};
	MiqtVirtualQCheckBox(const QString& text, QWidget* parent): QCheckBox(text, parent) {};

	virtual ~MiqtVirtualQCheckBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QCheckBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCheckBox_SizeHint(const_cast<MiqtVirtualQCheckBox*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QCheckBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QCheckBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCheckBox_MinimumSizeHint(const_cast<MiqtVirtualQCheckBox*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QCheckBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QCheckBox::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QCheckBox_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QCheckBox::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (handle__HitButton == 0) {
			return QCheckBox::hitButton(pos);
		}
		
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);

		bool callback_return_value = miqt_exec_callback_QCheckBox_HitButton(const_cast<MiqtVirtualQCheckBox*>(this), handle__HitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HitButton(QPoint* pos) const {

		return QCheckBox::hitButton(*pos);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CheckStateSet = 0;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (handle__CheckStateSet == 0) {
			QCheckBox::checkStateSet();
			return;
		}
		

		miqt_exec_callback_QCheckBox_CheckStateSet(this, handle__CheckStateSet);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CheckStateSet() {

		QCheckBox::checkStateSet();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NextCheckState = 0;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (handle__NextCheckState == 0) {
			QCheckBox::nextCheckState();
			return;
		}
		

		miqt_exec_callback_QCheckBox_NextCheckState(this, handle__NextCheckState);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_NextCheckState() {

		QCheckBox::nextCheckState();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QCheckBox::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QCheckBox_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QCheckBox::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QCheckBox::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QCheckBox_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QCheckBox::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (handle__KeyPressEvent == 0) {
			QCheckBox::keyPressEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* e) {

		QCheckBox::keyPressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (handle__KeyReleaseEvent == 0) {
			QCheckBox::keyReleaseEvent(e);
			return;
		}
		
		QKeyEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* e) {

		QCheckBox::keyReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (handle__MousePressEvent == 0) {
			QCheckBox::mousePressEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* e) {

		QCheckBox::mousePressEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (handle__MouseReleaseEvent == 0) {
			QCheckBox::mouseReleaseEvent(e);
			return;
		}
		
		QMouseEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* e) {

		QCheckBox::mouseReleaseEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (handle__FocusInEvent == 0) {
			QCheckBox::focusInEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* e) {

		QCheckBox::focusInEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (handle__FocusOutEvent == 0) {
			QCheckBox::focusOutEvent(e);
			return;
		}
		
		QFocusEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* e) {

		QCheckBox::focusOutEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QCheckBox::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QCheckBox::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (handle__TimerEvent == 0) {
			QCheckBox::timerEvent(e);
			return;
		}
		
		QTimerEvent* sigval1 = e;

		miqt_exec_callback_QCheckBox_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* e) {

		QCheckBox::timerEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QCheckBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QCheckBox_DevType(const_cast<MiqtVirtualQCheckBox*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QCheckBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QCheckBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QCheckBox_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QCheckBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QCheckBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QCheckBox_HeightForWidth(const_cast<MiqtVirtualQCheckBox*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QCheckBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QCheckBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QCheckBox_HasHeightForWidth(const_cast<MiqtVirtualQCheckBox*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QCheckBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QCheckBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QCheckBox_PaintEngine(const_cast<MiqtVirtualQCheckBox*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QCheckBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QCheckBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QCheckBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QCheckBox::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QCheckBox::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QCheckBox::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QCheckBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QCheckBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QCheckBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QCheckBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QCheckBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QCheckBox::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QCheckBox::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QCheckBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QCheckBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QCheckBox::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QCheckBox::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QCheckBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QCheckBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QCheckBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QCheckBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QCheckBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QCheckBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QCheckBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QCheckBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QCheckBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QCheckBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QCheckBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QCheckBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QCheckBox::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QCheckBox::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QCheckBox::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QCheckBox::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QCheckBox::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QCheckBox_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QCheckBox::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QCheckBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QCheckBox_Metric(const_cast<MiqtVirtualQCheckBox*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QCheckBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QCheckBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QCheckBox_InitPainter(const_cast<MiqtVirtualQCheckBox*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QCheckBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QCheckBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QCheckBox_Redirected(const_cast<MiqtVirtualQCheckBox*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QCheckBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QCheckBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QCheckBox_SharedPainter(const_cast<MiqtVirtualQCheckBox*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QCheckBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QCheckBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QCheckBox_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QCheckBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QCheckBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QCheckBox_InputMethodQuery(const_cast<MiqtVirtualQCheckBox*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QCheckBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QCheckBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QCheckBox_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QCheckBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QCheckBox::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QCheckBox_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QCheckBox::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QCheckBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QCheckBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QCheckBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCheckBox_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QCheckBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QCheckBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCheckBox_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QCheckBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QCheckBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCheckBox_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QCheckBox::disconnectNotify(*signal);

	}

};

QCheckBox* QCheckBox_new(QWidget* parent) {
	return new MiqtVirtualQCheckBox(parent);
}

QCheckBox* QCheckBox_new2() {
	return new MiqtVirtualQCheckBox();
}

QCheckBox* QCheckBox_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQCheckBox(text_QString);
}

QCheckBox* QCheckBox_new4(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQCheckBox(text_QString, parent);
}

void QCheckBox_virtbase(QCheckBox* src, QAbstractButton** outptr_QAbstractButton) {
	*outptr_QAbstractButton = static_cast<QAbstractButton*>(src);
}

QMetaObject* QCheckBox_MetaObject(const QCheckBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCheckBox_Metacast(QCheckBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCheckBox_Tr(const char* s) {
	QString _ret = QCheckBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCheckBox_TrUtf8(const char* s) {
	QString _ret = QCheckBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QCheckBox_SizeHint(const QCheckBox* self) {
	return new QSize(self->sizeHint());
}

QSize* QCheckBox_MinimumSizeHint(const QCheckBox* self) {
	return new QSize(self->minimumSizeHint());
}

void QCheckBox_SetTristate(QCheckBox* self) {
	self->setTristate();
}

bool QCheckBox_IsTristate(const QCheckBox* self) {
	return self->isTristate();
}

int QCheckBox_CheckState(const QCheckBox* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<int>(_ret);
}

void QCheckBox_SetCheckState(QCheckBox* self, int state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

void QCheckBox_StateChanged(QCheckBox* self, int param1) {
	self->stateChanged(static_cast<int>(param1));
}

void QCheckBox_connect_StateChanged(QCheckBox* self, intptr_t slot) {
	MiqtVirtualQCheckBox::connect(self, static_cast<void (QCheckBox::*)(int)>(&QCheckBox::stateChanged), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QCheckBox_StateChanged(slot, sigval1);
	});
}

struct miqt_string QCheckBox_Tr2(const char* s, const char* c) {
	QString _ret = QCheckBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCheckBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCheckBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCheckBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QCheckBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCheckBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCheckBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCheckBox_SetTristate1(QCheckBox* self, bool y) {
	self->setTristate(y);
}

bool QCheckBox_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QCheckBox_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_SizeHint();
}

bool QCheckBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QCheckBox_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_MinimumSizeHint();
}

bool QCheckBox_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QCheckBox_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQCheckBox*)(self) )->virtualbase_Event(e);
}

bool QCheckBox_override_virtual_HitButton(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HitButton = slot;
	return true;
}

bool QCheckBox_virtualbase_HitButton(const void* self, QPoint* pos) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_HitButton(pos);
}

bool QCheckBox_override_virtual_CheckStateSet(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CheckStateSet = slot;
	return true;
}

void QCheckBox_virtualbase_CheckStateSet(void* self) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_CheckStateSet();
}

bool QCheckBox_override_virtual_NextCheckState(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NextCheckState = slot;
	return true;
}

void QCheckBox_virtualbase_NextCheckState(void* self) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_NextCheckState();
}

bool QCheckBox_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QCheckBox_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_PaintEvent(param1);
}

bool QCheckBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QCheckBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_MouseMoveEvent(param1);
}

bool QCheckBox_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QCheckBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_KeyPressEvent(e);
}

bool QCheckBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QCheckBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_KeyReleaseEvent(e);
}

bool QCheckBox_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QCheckBox_virtualbase_MousePressEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_MousePressEvent(e);
}

bool QCheckBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QCheckBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_MouseReleaseEvent(e);
}

bool QCheckBox_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QCheckBox_virtualbase_FocusInEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_FocusInEvent(e);
}

bool QCheckBox_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QCheckBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_FocusOutEvent(e);
}

bool QCheckBox_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QCheckBox_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_ChangeEvent(e);
}

bool QCheckBox_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QCheckBox_virtualbase_TimerEvent(void* self, QTimerEvent* e) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_TimerEvent(e);
}

bool QCheckBox_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QCheckBox_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_DevType();
}

bool QCheckBox_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QCheckBox_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_SetVisible(visible);
}

bool QCheckBox_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QCheckBox_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QCheckBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QCheckBox_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_HasHeightForWidth();
}

bool QCheckBox_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QCheckBox_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_PaintEngine();
}

bool QCheckBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QCheckBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QCheckBox_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QCheckBox_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_WheelEvent(event);
}

bool QCheckBox_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QCheckBox_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_EnterEvent(event);
}

bool QCheckBox_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QCheckBox_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_LeaveEvent(event);
}

bool QCheckBox_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QCheckBox_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_MoveEvent(event);
}

bool QCheckBox_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QCheckBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_ResizeEvent(event);
}

bool QCheckBox_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QCheckBox_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_CloseEvent(event);
}

bool QCheckBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QCheckBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QCheckBox_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QCheckBox_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_TabletEvent(event);
}

bool QCheckBox_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QCheckBox_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_ActionEvent(event);
}

bool QCheckBox_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QCheckBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QCheckBox_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QCheckBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QCheckBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QCheckBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QCheckBox_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QCheckBox_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_DropEvent(event);
}

bool QCheckBox_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QCheckBox_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_ShowEvent(event);
}

bool QCheckBox_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QCheckBox_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_HideEvent(event);
}

bool QCheckBox_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QCheckBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQCheckBox*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QCheckBox_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QCheckBox_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_Metric(param1);
}

bool QCheckBox_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QCheckBox_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_InitPainter(painter);
}

bool QCheckBox_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QCheckBox_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_Redirected(offset);
}

bool QCheckBox_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QCheckBox_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_SharedPainter();
}

bool QCheckBox_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QCheckBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QCheckBox_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QCheckBox_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQCheckBox*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QCheckBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QCheckBox_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQCheckBox*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QCheckBox_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QCheckBox_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQCheckBox*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QCheckBox_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QCheckBox_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_ChildEvent(event);
}

bool QCheckBox_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QCheckBox_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_CustomEvent(event);
}

bool QCheckBox_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QCheckBox_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QCheckBox_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCheckBox* self_cast = dynamic_cast<MiqtVirtualQCheckBox*>( (QCheckBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QCheckBox_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCheckBox*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QCheckBox_Delete(QCheckBox* self) {
	delete self;
}

