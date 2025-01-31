#include <QAbstractSlider>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDial>
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
#include <qdial.h>
#include "gen_qdial.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QDial_SizeHint(const QDial*, intptr_t);
QSize* miqt_exec_callback_QDial_MinimumSizeHint(const QDial*, intptr_t);
bool miqt_exec_callback_QDial_Event(QDial*, intptr_t, QEvent*);
void miqt_exec_callback_QDial_ResizeEvent(QDial*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDial_PaintEvent(QDial*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDial_MousePressEvent(QDial*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDial_MouseReleaseEvent(QDial*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDial_MouseMoveEvent(QDial*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDial_SliderChange(QDial*, intptr_t, int);
void miqt_exec_callback_QDial_KeyPressEvent(QDial*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDial_TimerEvent(QDial*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDial_WheelEvent(QDial*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDial_ChangeEvent(QDial*, intptr_t, QEvent*);
int miqt_exec_callback_QDial_DevType(const QDial*, intptr_t);
void miqt_exec_callback_QDial_SetVisible(QDial*, intptr_t, bool);
int miqt_exec_callback_QDial_HeightForWidth(const QDial*, intptr_t, int);
bool miqt_exec_callback_QDial_HasHeightForWidth(const QDial*, intptr_t);
QPaintEngine* miqt_exec_callback_QDial_PaintEngine(const QDial*, intptr_t);
void miqt_exec_callback_QDial_MouseDoubleClickEvent(QDial*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDial_KeyReleaseEvent(QDial*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDial_FocusInEvent(QDial*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDial_FocusOutEvent(QDial*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDial_EnterEvent(QDial*, intptr_t, QEvent*);
void miqt_exec_callback_QDial_LeaveEvent(QDial*, intptr_t, QEvent*);
void miqt_exec_callback_QDial_MoveEvent(QDial*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDial_CloseEvent(QDial*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDial_ContextMenuEvent(QDial*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDial_TabletEvent(QDial*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDial_ActionEvent(QDial*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDial_DragEnterEvent(QDial*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDial_DragMoveEvent(QDial*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDial_DragLeaveEvent(QDial*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDial_DropEvent(QDial*, intptr_t, QDropEvent*);
void miqt_exec_callback_QDial_ShowEvent(QDial*, intptr_t, QShowEvent*);
void miqt_exec_callback_QDial_HideEvent(QDial*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QDial_NativeEvent(QDial*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QDial_Metric(const QDial*, intptr_t, int);
void miqt_exec_callback_QDial_InitPainter(const QDial*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDial_Redirected(const QDial*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDial_SharedPainter(const QDial*, intptr_t);
void miqt_exec_callback_QDial_InputMethodEvent(QDial*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QDial_InputMethodQuery(const QDial*, intptr_t, int);
bool miqt_exec_callback_QDial_FocusNextPrevChild(QDial*, intptr_t, bool);
bool miqt_exec_callback_QDial_EventFilter(QDial*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDial_ChildEvent(QDial*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDial_CustomEvent(QDial*, intptr_t, QEvent*);
void miqt_exec_callback_QDial_ConnectNotify(QDial*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDial_DisconnectNotify(QDial*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDial final : public QDial {
public:

	MiqtVirtualQDial(QWidget* parent): QDial(parent) {};
	MiqtVirtualQDial(): QDial() {};

	virtual ~MiqtVirtualQDial() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QDial::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDial_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QDial::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QDial::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QDial_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QDial::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QDial::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QDial_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QDial::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* re) override {
		if (handle__ResizeEvent == 0) {
			QDial::resizeEvent(re);
			return;
		}
		
		QResizeEvent* sigval1 = re;

		miqt_exec_callback_QDial_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* re) {

		QDial::resizeEvent(re);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* pe) override {
		if (handle__PaintEvent == 0) {
			QDial::paintEvent(pe);
			return;
		}
		
		QPaintEvent* sigval1 = pe;

		miqt_exec_callback_QDial_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* pe) {

		QDial::paintEvent(pe);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* me) override {
		if (handle__MousePressEvent == 0) {
			QDial::mousePressEvent(me);
			return;
		}
		
		QMouseEvent* sigval1 = me;

		miqt_exec_callback_QDial_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* me) {

		QDial::mousePressEvent(me);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* me) override {
		if (handle__MouseReleaseEvent == 0) {
			QDial::mouseReleaseEvent(me);
			return;
		}
		
		QMouseEvent* sigval1 = me;

		miqt_exec_callback_QDial_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* me) {

		QDial::mouseReleaseEvent(me);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* me) override {
		if (handle__MouseMoveEvent == 0) {
			QDial::mouseMoveEvent(me);
			return;
		}
		
		QMouseEvent* sigval1 = me;

		miqt_exec_callback_QDial_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* me) {

		QDial::mouseMoveEvent(me);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SliderChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange(QAbstractSlider::SliderChange change) override {
		if (handle__SliderChange == 0) {
			QDial::sliderChange(change);
			return;
		}
		
		QAbstractSlider::SliderChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);

		miqt_exec_callback_QDial_SliderChange(this, handle__SliderChange, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SliderChange(int change) {

		QDial::sliderChange(static_cast<QAbstractSlider::SliderChange>(change));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__KeyPressEvent == 0) {
			QDial::keyPressEvent(ev);
			return;
		}
		
		QKeyEvent* sigval1 = ev;

		miqt_exec_callback_QDial_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* ev) {

		QDial::keyPressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__TimerEvent == 0) {
			QDial::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QDial_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* param1) {

		QDial::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QDial::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QDial_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QDial::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QDial::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QDial_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QDial::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QDial::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QDial_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QDial::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QDial::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QDial_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QDial::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QDial::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QDial_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QDial::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QDial::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QDial_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QDial::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QDial::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QDial_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QDial::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QDial::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QDial_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QDial::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QDial::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QDial_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QDial::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QDial::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDial_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QDial::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QDial::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QDial_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QDial::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QDial::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDial_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QDial::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QDial::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDial_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QDial::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QDial::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QDial_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QDial::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QDial::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QDial_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QDial::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QDial::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QDial_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QDial::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QDial::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QDial_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QDial::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QDial::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QDial_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QDial::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QDial::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QDial_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QDial::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QDial::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QDial_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QDial::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QDial::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QDial_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QDial::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QDial::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QDial_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QDial::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QDial::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QDial_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QDial::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QDial::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QDial_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QDial::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QDial::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QDial_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QDial::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QDial::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QDial_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QDial::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QDial::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QDial_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QDial::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QDial::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QDial_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QDial::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QDial::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QDial_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QDial::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QDial::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QDial_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QDial::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QDial::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QDial_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QDial::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QDial::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QDial_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QDial::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QDial::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDial_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QDial::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QDial::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDial_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QDial::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QDial::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDial_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QDial::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QDial::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDial_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QDial::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QDial::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDial_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QDial::disconnectNotify(*signal);

	}

};

QDial* QDial_new(QWidget* parent) {
	return new MiqtVirtualQDial(parent);
}

QDial* QDial_new2() {
	return new MiqtVirtualQDial();
}

void QDial_virtbase(QDial* src, QAbstractSlider** outptr_QAbstractSlider) {
	*outptr_QAbstractSlider = static_cast<QAbstractSlider*>(src);
}

QMetaObject* QDial_MetaObject(const QDial* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDial_Metacast(QDial* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDial_Tr(const char* s) {
	QString _ret = QDial::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDial_TrUtf8(const char* s) {
	QString _ret = QDial::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDial_Wrapping(const QDial* self) {
	return self->wrapping();
}

int QDial_NotchSize(const QDial* self) {
	return self->notchSize();
}

void QDial_SetNotchTarget(QDial* self, double target) {
	self->setNotchTarget(static_cast<double>(target));
}

double QDial_NotchTarget(const QDial* self) {
	qreal _ret = self->notchTarget();
	return static_cast<double>(_ret);
}

bool QDial_NotchesVisible(const QDial* self) {
	return self->notchesVisible();
}

QSize* QDial_SizeHint(const QDial* self) {
	return new QSize(self->sizeHint());
}

QSize* QDial_MinimumSizeHint(const QDial* self) {
	return new QSize(self->minimumSizeHint());
}

void QDial_SetNotchesVisible(QDial* self, bool visible) {
	self->setNotchesVisible(visible);
}

void QDial_SetWrapping(QDial* self, bool on) {
	self->setWrapping(on);
}

struct miqt_string QDial_Tr2(const char* s, const char* c) {
	QString _ret = QDial::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDial_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDial::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDial_TrUtf82(const char* s, const char* c) {
	QString _ret = QDial::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDial_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDial::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDial_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QDial_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_SizeHint();
}

bool QDial_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QDial_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_MinimumSizeHint();
}

bool QDial_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QDial_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQDial*)(self) )->virtualbase_Event(e);
}

bool QDial_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QDial_virtualbase_ResizeEvent(void* self, QResizeEvent* re) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_ResizeEvent(re);
}

bool QDial_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QDial_virtualbase_PaintEvent(void* self, QPaintEvent* pe) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_PaintEvent(pe);
}

bool QDial_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QDial_virtualbase_MousePressEvent(void* self, QMouseEvent* me) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_MousePressEvent(me);
}

bool QDial_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QDial_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* me) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_MouseReleaseEvent(me);
}

bool QDial_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QDial_virtualbase_MouseMoveEvent(void* self, QMouseEvent* me) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_MouseMoveEvent(me);
}

bool QDial_override_virtual_SliderChange(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SliderChange = slot;
	return true;
}

void QDial_virtualbase_SliderChange(void* self, int change) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_SliderChange(change);
}

bool QDial_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QDial_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_KeyPressEvent(ev);
}

bool QDial_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QDial_virtualbase_TimerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_TimerEvent(param1);
}

bool QDial_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QDial_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_WheelEvent(e);
}

bool QDial_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QDial_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_ChangeEvent(e);
}

bool QDial_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QDial_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_DevType();
}

bool QDial_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QDial_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_SetVisible(visible);
}

bool QDial_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QDial_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QDial_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QDial_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_HasHeightForWidth();
}

bool QDial_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QDial_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_PaintEngine();
}

bool QDial_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QDial_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QDial_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QDial_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QDial_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QDial_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_FocusInEvent(event);
}

bool QDial_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QDial_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QDial_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QDial_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_EnterEvent(event);
}

bool QDial_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QDial_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_LeaveEvent(event);
}

bool QDial_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QDial_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_MoveEvent(event);
}

bool QDial_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QDial_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_CloseEvent(event);
}

bool QDial_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QDial_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QDial_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QDial_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_TabletEvent(event);
}

bool QDial_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QDial_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_ActionEvent(event);
}

bool QDial_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QDial_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QDial_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QDial_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QDial_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QDial_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QDial_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QDial_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_DropEvent(event);
}

bool QDial_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QDial_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_ShowEvent(event);
}

bool QDial_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QDial_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_HideEvent(event);
}

bool QDial_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QDial_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQDial*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QDial_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QDial_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_Metric(param1);
}

bool QDial_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QDial_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQDial*)(self) )->virtualbase_InitPainter(painter);
}

bool QDial_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QDial_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_Redirected(offset);
}

bool QDial_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QDial_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_SharedPainter();
}

bool QDial_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QDial_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QDial_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QDial_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQDial*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QDial_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QDial_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQDial*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QDial_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QDial_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDial*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QDial_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QDial_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_ChildEvent(event);
}

bool QDial_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QDial_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_CustomEvent(event);
}

bool QDial_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QDial_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QDial_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDial* self_cast = dynamic_cast<MiqtVirtualQDial*>( (QDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QDial_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDial*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QDial_Delete(QDial* self) {
	delete self;
}

