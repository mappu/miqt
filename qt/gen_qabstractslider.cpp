#include <QAbstractSlider>
#include <QActionEvent>
#include <QByteArray>
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
#include <qabstractslider.h>
#include "gen_qabstractslider.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractSlider_ValueChanged(intptr_t, int);
void miqt_exec_callback_QAbstractSlider_SliderPressed(intptr_t);
void miqt_exec_callback_QAbstractSlider_SliderMoved(intptr_t, int);
void miqt_exec_callback_QAbstractSlider_SliderReleased(intptr_t);
void miqt_exec_callback_QAbstractSlider_RangeChanged(intptr_t, int, int);
void miqt_exec_callback_QAbstractSlider_ActionTriggered(intptr_t, int);
bool miqt_exec_callback_QAbstractSlider_Event(QAbstractSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSlider_SliderChange(QAbstractSlider*, intptr_t, int);
void miqt_exec_callback_QAbstractSlider_KeyPressEvent(QAbstractSlider*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractSlider_TimerEvent(QAbstractSlider*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractSlider_WheelEvent(QAbstractSlider*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QAbstractSlider_ChangeEvent(QAbstractSlider*, intptr_t, QEvent*);
int miqt_exec_callback_QAbstractSlider_DevType(const QAbstractSlider*, intptr_t);
void miqt_exec_callback_QAbstractSlider_SetVisible(QAbstractSlider*, intptr_t, bool);
QSize* miqt_exec_callback_QAbstractSlider_SizeHint(const QAbstractSlider*, intptr_t);
QSize* miqt_exec_callback_QAbstractSlider_MinimumSizeHint(const QAbstractSlider*, intptr_t);
int miqt_exec_callback_QAbstractSlider_HeightForWidth(const QAbstractSlider*, intptr_t, int);
bool miqt_exec_callback_QAbstractSlider_HasHeightForWidth(const QAbstractSlider*, intptr_t);
QPaintEngine* miqt_exec_callback_QAbstractSlider_PaintEngine(const QAbstractSlider*, intptr_t);
void miqt_exec_callback_QAbstractSlider_MousePressEvent(QAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSlider_MouseReleaseEvent(QAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSlider_MouseDoubleClickEvent(QAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSlider_MouseMoveEvent(QAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSlider_KeyReleaseEvent(QAbstractSlider*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractSlider_FocusInEvent(QAbstractSlider*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractSlider_FocusOutEvent(QAbstractSlider*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractSlider_EnterEvent(QAbstractSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSlider_LeaveEvent(QAbstractSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSlider_PaintEvent(QAbstractSlider*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QAbstractSlider_MoveEvent(QAbstractSlider*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QAbstractSlider_ResizeEvent(QAbstractSlider*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QAbstractSlider_CloseEvent(QAbstractSlider*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QAbstractSlider_ContextMenuEvent(QAbstractSlider*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QAbstractSlider_TabletEvent(QAbstractSlider*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QAbstractSlider_ActionEvent(QAbstractSlider*, intptr_t, QActionEvent*);
void miqt_exec_callback_QAbstractSlider_DragEnterEvent(QAbstractSlider*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QAbstractSlider_DragMoveEvent(QAbstractSlider*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QAbstractSlider_DragLeaveEvent(QAbstractSlider*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QAbstractSlider_DropEvent(QAbstractSlider*, intptr_t, QDropEvent*);
void miqt_exec_callback_QAbstractSlider_ShowEvent(QAbstractSlider*, intptr_t, QShowEvent*);
void miqt_exec_callback_QAbstractSlider_HideEvent(QAbstractSlider*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QAbstractSlider_NativeEvent(QAbstractSlider*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QAbstractSlider_Metric(const QAbstractSlider*, intptr_t, int);
void miqt_exec_callback_QAbstractSlider_InitPainter(const QAbstractSlider*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QAbstractSlider_Redirected(const QAbstractSlider*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QAbstractSlider_SharedPainter(const QAbstractSlider*, intptr_t);
void miqt_exec_callback_QAbstractSlider_InputMethodEvent(QAbstractSlider*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QAbstractSlider_InputMethodQuery(const QAbstractSlider*, intptr_t, int);
bool miqt_exec_callback_QAbstractSlider_FocusNextPrevChild(QAbstractSlider*, intptr_t, bool);
bool miqt_exec_callback_QAbstractSlider_EventFilter(QAbstractSlider*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractSlider_ChildEvent(QAbstractSlider*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractSlider_CustomEvent(QAbstractSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSlider_ConnectNotify(QAbstractSlider*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractSlider_DisconnectNotify(QAbstractSlider*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractSlider final : public QAbstractSlider {
public:

	MiqtVirtualQAbstractSlider(QWidget* parent): QAbstractSlider(parent) {};
	MiqtVirtualQAbstractSlider(): QAbstractSlider() {};

	virtual ~MiqtVirtualQAbstractSlider() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QAbstractSlider::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QAbstractSlider_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QAbstractSlider::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SliderChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange(QAbstractSlider::SliderChange change) override {
		if (handle__SliderChange == 0) {
			QAbstractSlider::sliderChange(change);
			return;
		}
		
		QAbstractSlider::SliderChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);

		miqt_exec_callback_QAbstractSlider_SliderChange(this, handle__SliderChange, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SliderChange(int change) {

		QAbstractSlider::sliderChange(static_cast<QAbstractSlider::SliderChange>(change));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__KeyPressEvent == 0) {
			QAbstractSlider::keyPressEvent(ev);
			return;
		}
		
		QKeyEvent* sigval1 = ev;

		miqt_exec_callback_QAbstractSlider_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* ev) {

		QAbstractSlider::keyPressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__TimerEvent == 0) {
			QAbstractSlider::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractSlider_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* param1) {

		QAbstractSlider::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QAbstractSlider::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QAbstractSlider_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QAbstractSlider::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QAbstractSlider::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QAbstractSlider_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QAbstractSlider::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QAbstractSlider::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractSlider_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QAbstractSlider::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QAbstractSlider::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QAbstractSlider_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QAbstractSlider::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QAbstractSlider::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractSlider_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QAbstractSlider::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QAbstractSlider::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QAbstractSlider_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QAbstractSlider::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QAbstractSlider::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QAbstractSlider_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QAbstractSlider::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QAbstractSlider::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractSlider_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QAbstractSlider::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QAbstractSlider::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QAbstractSlider_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QAbstractSlider::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QAbstractSlider::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QAbstractSlider::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QAbstractSlider::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QAbstractSlider::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QAbstractSlider::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QAbstractSlider::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QAbstractSlider::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QAbstractSlider::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QAbstractSlider::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QAbstractSlider::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QAbstractSlider::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QAbstractSlider::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QAbstractSlider::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QAbstractSlider::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QAbstractSlider::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QAbstractSlider::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QAbstractSlider::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QAbstractSlider::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QAbstractSlider::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QAbstractSlider::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QAbstractSlider::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QAbstractSlider::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QAbstractSlider::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QAbstractSlider::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QAbstractSlider::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QAbstractSlider::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QAbstractSlider::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QAbstractSlider::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QAbstractSlider::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QAbstractSlider::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QAbstractSlider::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QAbstractSlider::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QAbstractSlider::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QAbstractSlider::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QAbstractSlider::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QAbstractSlider::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QAbstractSlider::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QAbstractSlider::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QAbstractSlider::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QAbstractSlider::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QAbstractSlider::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QAbstractSlider::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QAbstractSlider::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QAbstractSlider::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QAbstractSlider::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QAbstractSlider_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QAbstractSlider::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QAbstractSlider::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QAbstractSlider_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QAbstractSlider::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QAbstractSlider::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QAbstractSlider_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QAbstractSlider::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QAbstractSlider::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QAbstractSlider_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QAbstractSlider::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QAbstractSlider::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QAbstractSlider_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QAbstractSlider::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QAbstractSlider::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QAbstractSlider_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QAbstractSlider::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QAbstractSlider::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractSlider_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QAbstractSlider::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QAbstractSlider::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QAbstractSlider_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QAbstractSlider::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAbstractSlider::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractSlider_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAbstractSlider::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAbstractSlider::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAbstractSlider::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAbstractSlider::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractSlider_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAbstractSlider::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAbstractSlider::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractSlider_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAbstractSlider::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAbstractSlider::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractSlider_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAbstractSlider::disconnectNotify(*signal);

	}

};

QAbstractSlider* QAbstractSlider_new(QWidget* parent) {
	return new MiqtVirtualQAbstractSlider(parent);
}

QAbstractSlider* QAbstractSlider_new2() {
	return new MiqtVirtualQAbstractSlider();
}

void QAbstractSlider_virtbase(QAbstractSlider* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QAbstractSlider_MetaObject(const QAbstractSlider* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractSlider_Metacast(QAbstractSlider* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractSlider_Tr(const char* s) {
	QString _ret = QAbstractSlider::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSlider_TrUtf8(const char* s) {
	QString _ret = QAbstractSlider::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAbstractSlider_Orientation(const QAbstractSlider* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QAbstractSlider_SetMinimum(QAbstractSlider* self, int minimum) {
	self->setMinimum(static_cast<int>(minimum));
}

int QAbstractSlider_Minimum(const QAbstractSlider* self) {
	return self->minimum();
}

void QAbstractSlider_SetMaximum(QAbstractSlider* self, int maximum) {
	self->setMaximum(static_cast<int>(maximum));
}

int QAbstractSlider_Maximum(const QAbstractSlider* self) {
	return self->maximum();
}

void QAbstractSlider_SetSingleStep(QAbstractSlider* self, int singleStep) {
	self->setSingleStep(static_cast<int>(singleStep));
}

int QAbstractSlider_SingleStep(const QAbstractSlider* self) {
	return self->singleStep();
}

void QAbstractSlider_SetPageStep(QAbstractSlider* self, int pageStep) {
	self->setPageStep(static_cast<int>(pageStep));
}

int QAbstractSlider_PageStep(const QAbstractSlider* self) {
	return self->pageStep();
}

void QAbstractSlider_SetTracking(QAbstractSlider* self, bool enable) {
	self->setTracking(enable);
}

bool QAbstractSlider_HasTracking(const QAbstractSlider* self) {
	return self->hasTracking();
}

void QAbstractSlider_SetSliderDown(QAbstractSlider* self, bool sliderDown) {
	self->setSliderDown(sliderDown);
}

bool QAbstractSlider_IsSliderDown(const QAbstractSlider* self) {
	return self->isSliderDown();
}

void QAbstractSlider_SetSliderPosition(QAbstractSlider* self, int sliderPosition) {
	self->setSliderPosition(static_cast<int>(sliderPosition));
}

int QAbstractSlider_SliderPosition(const QAbstractSlider* self) {
	return self->sliderPosition();
}

void QAbstractSlider_SetInvertedAppearance(QAbstractSlider* self, bool invertedAppearance) {
	self->setInvertedAppearance(invertedAppearance);
}

bool QAbstractSlider_InvertedAppearance(const QAbstractSlider* self) {
	return self->invertedAppearance();
}

void QAbstractSlider_SetInvertedControls(QAbstractSlider* self, bool invertedControls) {
	self->setInvertedControls(invertedControls);
}

bool QAbstractSlider_InvertedControls(const QAbstractSlider* self) {
	return self->invertedControls();
}

int QAbstractSlider_Value(const QAbstractSlider* self) {
	return self->value();
}

void QAbstractSlider_TriggerAction(QAbstractSlider* self, int action) {
	self->triggerAction(static_cast<QAbstractSlider::SliderAction>(action));
}

void QAbstractSlider_SetValue(QAbstractSlider* self, int value) {
	self->setValue(static_cast<int>(value));
}

void QAbstractSlider_SetOrientation(QAbstractSlider* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

void QAbstractSlider_SetRange(QAbstractSlider* self, int min, int max) {
	self->setRange(static_cast<int>(min), static_cast<int>(max));
}

void QAbstractSlider_ValueChanged(QAbstractSlider* self, int value) {
	self->valueChanged(static_cast<int>(value));
}

void QAbstractSlider_connect_ValueChanged(QAbstractSlider* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::valueChanged), self, [=](int value) {
		int sigval1 = value;
		miqt_exec_callback_QAbstractSlider_ValueChanged(slot, sigval1);
	});
}

void QAbstractSlider_SliderPressed(QAbstractSlider* self) {
	self->sliderPressed();
}

void QAbstractSlider_connect_SliderPressed(QAbstractSlider* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)()>(&QAbstractSlider::sliderPressed), self, [=]() {
		miqt_exec_callback_QAbstractSlider_SliderPressed(slot);
	});
}

void QAbstractSlider_SliderMoved(QAbstractSlider* self, int position) {
	self->sliderMoved(static_cast<int>(position));
}

void QAbstractSlider_connect_SliderMoved(QAbstractSlider* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::sliderMoved), self, [=](int position) {
		int sigval1 = position;
		miqt_exec_callback_QAbstractSlider_SliderMoved(slot, sigval1);
	});
}

void QAbstractSlider_SliderReleased(QAbstractSlider* self) {
	self->sliderReleased();
}

void QAbstractSlider_connect_SliderReleased(QAbstractSlider* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)()>(&QAbstractSlider::sliderReleased), self, [=]() {
		miqt_exec_callback_QAbstractSlider_SliderReleased(slot);
	});
}

void QAbstractSlider_RangeChanged(QAbstractSlider* self, int min, int max) {
	self->rangeChanged(static_cast<int>(min), static_cast<int>(max));
}

void QAbstractSlider_connect_RangeChanged(QAbstractSlider* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int, int)>(&QAbstractSlider::rangeChanged), self, [=](int min, int max) {
		int sigval1 = min;
		int sigval2 = max;
		miqt_exec_callback_QAbstractSlider_RangeChanged(slot, sigval1, sigval2);
	});
}

void QAbstractSlider_ActionTriggered(QAbstractSlider* self, int action) {
	self->actionTriggered(static_cast<int>(action));
}

void QAbstractSlider_connect_ActionTriggered(QAbstractSlider* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::actionTriggered), self, [=](int action) {
		int sigval1 = action;
		miqt_exec_callback_QAbstractSlider_ActionTriggered(slot, sigval1);
	});
}

struct miqt_string QAbstractSlider_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractSlider::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSlider_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSlider::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSlider_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractSlider::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSlider_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractSlider::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractSlider_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAbstractSlider_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_Event(e);
}

bool QAbstractSlider_override_virtual_SliderChange(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SliderChange = slot;
	return true;
}

void QAbstractSlider_virtualbase_SliderChange(void* self, int change) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_SliderChange(change);
}

bool QAbstractSlider_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_KeyPressEvent(ev);
}

bool QAbstractSlider_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_TimerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_TimerEvent(param1);
}

bool QAbstractSlider_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_WheelEvent(e);
}

bool QAbstractSlider_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_ChangeEvent(e);
}

bool QAbstractSlider_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QAbstractSlider_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_DevType();
}

bool QAbstractSlider_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QAbstractSlider_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_SetVisible(visible);
}

bool QAbstractSlider_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QAbstractSlider_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_SizeHint();
}

bool QAbstractSlider_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QAbstractSlider_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_MinimumSizeHint();
}

bool QAbstractSlider_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QAbstractSlider_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QAbstractSlider_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QAbstractSlider_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_HasHeightForWidth();
}

bool QAbstractSlider_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QAbstractSlider_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_PaintEngine();
}

bool QAbstractSlider_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_MousePressEvent(event);
}

bool QAbstractSlider_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QAbstractSlider_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QAbstractSlider_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QAbstractSlider_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QAbstractSlider_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_FocusInEvent(event);
}

bool QAbstractSlider_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QAbstractSlider_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_EnterEvent(event);
}

bool QAbstractSlider_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_LeaveEvent(event);
}

bool QAbstractSlider_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_PaintEvent(event);
}

bool QAbstractSlider_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_MoveEvent(event);
}

bool QAbstractSlider_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_ResizeEvent(event);
}

bool QAbstractSlider_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_CloseEvent(event);
}

bool QAbstractSlider_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QAbstractSlider_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_TabletEvent(event);
}

bool QAbstractSlider_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_ActionEvent(event);
}

bool QAbstractSlider_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QAbstractSlider_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QAbstractSlider_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QAbstractSlider_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_DropEvent(event);
}

bool QAbstractSlider_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_ShowEvent(event);
}

bool QAbstractSlider_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_HideEvent(event);
}

bool QAbstractSlider_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QAbstractSlider_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QAbstractSlider_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QAbstractSlider_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_Metric(param1);
}

bool QAbstractSlider_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QAbstractSlider_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_InitPainter(painter);
}

bool QAbstractSlider_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QAbstractSlider_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_Redirected(offset);
}

bool QAbstractSlider_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QAbstractSlider_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_SharedPainter();
}

bool QAbstractSlider_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QAbstractSlider_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QAbstractSlider_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQAbstractSlider*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QAbstractSlider_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QAbstractSlider_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QAbstractSlider_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAbstractSlider_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QAbstractSlider_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_ChildEvent(event);
}

bool QAbstractSlider_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAbstractSlider_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_CustomEvent(event);
}

bool QAbstractSlider_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAbstractSlider_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAbstractSlider_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAbstractSlider_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractSlider*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAbstractSlider_Delete(QAbstractSlider* self) {
	delete self;
}

