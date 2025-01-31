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
#include <QEnterEvent>
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
#include <QSlider>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionSlider>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qslider.h>
#include "gen_qslider.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QSlider_SizeHint(const QSlider*, intptr_t);
QSize* miqt_exec_callback_QSlider_MinimumSizeHint(const QSlider*, intptr_t);
bool miqt_exec_callback_QSlider_Event(QSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QSlider_PaintEvent(QSlider*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QSlider_MousePressEvent(QSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSlider_MouseReleaseEvent(QSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSlider_MouseMoveEvent(QSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSlider_InitStyleOption(const QSlider*, intptr_t, QStyleOptionSlider*);
void miqt_exec_callback_QSlider_SliderChange(QSlider*, intptr_t, int);
void miqt_exec_callback_QSlider_KeyPressEvent(QSlider*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSlider_TimerEvent(QSlider*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSlider_WheelEvent(QSlider*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QSlider_ChangeEvent(QSlider*, intptr_t, QEvent*);
int miqt_exec_callback_QSlider_DevType(const QSlider*, intptr_t);
void miqt_exec_callback_QSlider_SetVisible(QSlider*, intptr_t, bool);
int miqt_exec_callback_QSlider_HeightForWidth(const QSlider*, intptr_t, int);
bool miqt_exec_callback_QSlider_HasHeightForWidth(const QSlider*, intptr_t);
QPaintEngine* miqt_exec_callback_QSlider_PaintEngine(const QSlider*, intptr_t);
void miqt_exec_callback_QSlider_MouseDoubleClickEvent(QSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSlider_KeyReleaseEvent(QSlider*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSlider_FocusInEvent(QSlider*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSlider_FocusOutEvent(QSlider*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSlider_EnterEvent(QSlider*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QSlider_LeaveEvent(QSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QSlider_MoveEvent(QSlider*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QSlider_ResizeEvent(QSlider*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QSlider_CloseEvent(QSlider*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QSlider_ContextMenuEvent(QSlider*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QSlider_TabletEvent(QSlider*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QSlider_ActionEvent(QSlider*, intptr_t, QActionEvent*);
void miqt_exec_callback_QSlider_DragEnterEvent(QSlider*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QSlider_DragMoveEvent(QSlider*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QSlider_DragLeaveEvent(QSlider*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QSlider_DropEvent(QSlider*, intptr_t, QDropEvent*);
void miqt_exec_callback_QSlider_ShowEvent(QSlider*, intptr_t, QShowEvent*);
void miqt_exec_callback_QSlider_HideEvent(QSlider*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QSlider_NativeEvent(QSlider*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QSlider_Metric(const QSlider*, intptr_t, int);
void miqt_exec_callback_QSlider_InitPainter(const QSlider*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QSlider_Redirected(const QSlider*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QSlider_SharedPainter(const QSlider*, intptr_t);
void miqt_exec_callback_QSlider_InputMethodEvent(QSlider*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QSlider_InputMethodQuery(const QSlider*, intptr_t, int);
bool miqt_exec_callback_QSlider_FocusNextPrevChild(QSlider*, intptr_t, bool);
bool miqt_exec_callback_QSlider_EventFilter(QSlider*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSlider_ChildEvent(QSlider*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSlider_CustomEvent(QSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QSlider_ConnectNotify(QSlider*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSlider_DisconnectNotify(QSlider*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSlider final : public QSlider {
public:

	MiqtVirtualQSlider(QWidget* parent): QSlider(parent) {};
	MiqtVirtualQSlider(): QSlider() {};
	MiqtVirtualQSlider(Qt::Orientation orientation): QSlider(orientation) {};
	MiqtVirtualQSlider(Qt::Orientation orientation, QWidget* parent): QSlider(orientation, parent) {};

	virtual ~MiqtVirtualQSlider() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QSlider::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSlider_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QSlider::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QSlider::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSlider_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QSlider::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSlider::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSlider_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSlider::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* ev) override {
		if (handle__PaintEvent == 0) {
			QSlider::paintEvent(ev);
			return;
		}
		
		QPaintEvent* sigval1 = ev;

		miqt_exec_callback_QSlider_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* ev) {

		QSlider::paintEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* ev) override {
		if (handle__MousePressEvent == 0) {
			QSlider::mousePressEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QSlider_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* ev) {

		QSlider::mousePressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* ev) override {
		if (handle__MouseReleaseEvent == 0) {
			QSlider::mouseReleaseEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QSlider_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* ev) {

		QSlider::mouseReleaseEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* ev) override {
		if (handle__MouseMoveEvent == 0) {
			QSlider::mouseMoveEvent(ev);
			return;
		}
		
		QMouseEvent* sigval1 = ev;

		miqt_exec_callback_QSlider_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* ev) {

		QSlider::mouseMoveEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionSlider* option) const override {
		if (handle__InitStyleOption == 0) {
			QSlider::initStyleOption(option);
			return;
		}
		
		QStyleOptionSlider* sigval1 = option;

		miqt_exec_callback_QSlider_InitStyleOption(this, handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionSlider* option) const {

		QSlider::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SliderChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange(QAbstractSlider::SliderChange change) override {
		if (handle__SliderChange == 0) {
			QSlider::sliderChange(change);
			return;
		}
		
		QAbstractSlider::SliderChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);

		miqt_exec_callback_QSlider_SliderChange(this, handle__SliderChange, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SliderChange(int change) {

		QSlider::sliderChange(static_cast<QAbstractSlider::SliderChange>(change));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__KeyPressEvent == 0) {
			QSlider::keyPressEvent(ev);
			return;
		}
		
		QKeyEvent* sigval1 = ev;

		miqt_exec_callback_QSlider_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* ev) {

		QSlider::keyPressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__TimerEvent == 0) {
			QSlider::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QSlider_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* param1) {

		QSlider::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (handle__WheelEvent == 0) {
			QSlider::wheelEvent(e);
			return;
		}
		
		QWheelEvent* sigval1 = e;

		miqt_exec_callback_QSlider_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* e) {

		QSlider::wheelEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QSlider::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QSlider_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QSlider::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QSlider::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QSlider_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QSlider::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QSlider::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QSlider_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QSlider::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QSlider::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QSlider_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QSlider::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QSlider::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QSlider_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QSlider::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QSlider::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QSlider_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QSlider::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QSlider::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSlider_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QSlider::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QSlider::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSlider_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QSlider::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QSlider::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSlider_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QSlider::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QSlider::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSlider_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QSlider::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QSlider::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QSlider_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QSlider::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QSlider::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSlider_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QSlider::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QSlider::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QSlider_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QSlider::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QSlider::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QSlider_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QSlider::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QSlider::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QSlider_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QSlider::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QSlider::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QSlider_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QSlider::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QSlider::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QSlider_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QSlider::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QSlider::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QSlider_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QSlider::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QSlider::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QSlider_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QSlider::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QSlider::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QSlider_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QSlider::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QSlider::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QSlider_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QSlider::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QSlider::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QSlider_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QSlider::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QSlider::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QSlider_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QSlider::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QSlider::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QSlider_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QSlider::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QSlider::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QSlider_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QSlider::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QSlider::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QSlider_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QSlider::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QSlider::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QSlider_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QSlider::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QSlider::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QSlider_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QSlider::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QSlider::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QSlider_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QSlider::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QSlider::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QSlider_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QSlider::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QSlider::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QSlider_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QSlider::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QSlider::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QSlider_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QSlider::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSlider::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSlider_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSlider::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSlider::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSlider_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSlider::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSlider::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSlider_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSlider::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSlider::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSlider_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSlider::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSlider::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSlider_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSlider::disconnectNotify(*signal);

	}

};

QSlider* QSlider_new(QWidget* parent) {
	return new MiqtVirtualQSlider(parent);
}

QSlider* QSlider_new2() {
	return new MiqtVirtualQSlider();
}

QSlider* QSlider_new3(int orientation) {
	return new MiqtVirtualQSlider(static_cast<Qt::Orientation>(orientation));
}

QSlider* QSlider_new4(int orientation, QWidget* parent) {
	return new MiqtVirtualQSlider(static_cast<Qt::Orientation>(orientation), parent);
}

void QSlider_virtbase(QSlider* src, QAbstractSlider** outptr_QAbstractSlider) {
	*outptr_QAbstractSlider = static_cast<QAbstractSlider*>(src);
}

QMetaObject* QSlider_MetaObject(const QSlider* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSlider_Metacast(QSlider* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSlider_Tr(const char* s) {
	QString _ret = QSlider::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QSlider_SizeHint(const QSlider* self) {
	return new QSize(self->sizeHint());
}

QSize* QSlider_MinimumSizeHint(const QSlider* self) {
	return new QSize(self->minimumSizeHint());
}

void QSlider_SetTickPosition(QSlider* self, int position) {
	self->setTickPosition(static_cast<QSlider::TickPosition>(position));
}

int QSlider_TickPosition(const QSlider* self) {
	QSlider::TickPosition _ret = self->tickPosition();
	return static_cast<int>(_ret);
}

void QSlider_SetTickInterval(QSlider* self, int ti) {
	self->setTickInterval(static_cast<int>(ti));
}

int QSlider_TickInterval(const QSlider* self) {
	return self->tickInterval();
}

bool QSlider_Event(QSlider* self, QEvent* event) {
	return self->event(event);
}

struct miqt_string QSlider_Tr2(const char* s, const char* c) {
	QString _ret = QSlider::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSlider_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSlider::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSlider_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QSlider_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQSlider*)(self) )->virtualbase_SizeHint();
}

bool QSlider_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QSlider_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQSlider*)(self) )->virtualbase_MinimumSizeHint();
}

bool QSlider_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSlider_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSlider*)(self) )->virtualbase_Event(event);
}

bool QSlider_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QSlider_virtualbase_PaintEvent(void* self, QPaintEvent* ev) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_PaintEvent(ev);
}

bool QSlider_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QSlider_virtualbase_MousePressEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_MousePressEvent(ev);
}

bool QSlider_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QSlider_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_MouseReleaseEvent(ev);
}

bool QSlider_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QSlider_virtualbase_MouseMoveEvent(void* self, QMouseEvent* ev) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_MouseMoveEvent(ev);
}

bool QSlider_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QSlider_virtualbase_InitStyleOption(const void* self, QStyleOptionSlider* option) {
	( (const MiqtVirtualQSlider*)(self) )->virtualbase_InitStyleOption(option);
}

bool QSlider_override_virtual_SliderChange(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SliderChange = slot;
	return true;
}

void QSlider_virtualbase_SliderChange(void* self, int change) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_SliderChange(change);
}

bool QSlider_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QSlider_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_KeyPressEvent(ev);
}

bool QSlider_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QSlider_virtualbase_TimerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_TimerEvent(param1);
}

bool QSlider_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QSlider_virtualbase_WheelEvent(void* self, QWheelEvent* e) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_WheelEvent(e);
}

bool QSlider_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QSlider_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_ChangeEvent(e);
}

bool QSlider_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QSlider_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQSlider*)(self) )->virtualbase_DevType();
}

bool QSlider_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QSlider_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_SetVisible(visible);
}

bool QSlider_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QSlider_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQSlider*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QSlider_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QSlider_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQSlider*)(self) )->virtualbase_HasHeightForWidth();
}

bool QSlider_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QSlider_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQSlider*)(self) )->virtualbase_PaintEngine();
}

bool QSlider_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QSlider_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QSlider_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QSlider_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QSlider_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QSlider_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_FocusInEvent(event);
}

bool QSlider_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QSlider_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QSlider_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QSlider_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_EnterEvent(event);
}

bool QSlider_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QSlider_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_LeaveEvent(event);
}

bool QSlider_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QSlider_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_MoveEvent(event);
}

bool QSlider_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QSlider_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_ResizeEvent(event);
}

bool QSlider_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QSlider_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_CloseEvent(event);
}

bool QSlider_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QSlider_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QSlider_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QSlider_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_TabletEvent(event);
}

bool QSlider_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QSlider_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_ActionEvent(event);
}

bool QSlider_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QSlider_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QSlider_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QSlider_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QSlider_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QSlider_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QSlider_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QSlider_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_DropEvent(event);
}

bool QSlider_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QSlider_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_ShowEvent(event);
}

bool QSlider_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QSlider_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_HideEvent(event);
}

bool QSlider_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QSlider_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQSlider*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QSlider_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QSlider_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQSlider*)(self) )->virtualbase_Metric(param1);
}

bool QSlider_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QSlider_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQSlider*)(self) )->virtualbase_InitPainter(painter);
}

bool QSlider_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QSlider_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQSlider*)(self) )->virtualbase_Redirected(offset);
}

bool QSlider_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QSlider_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQSlider*)(self) )->virtualbase_SharedPainter();
}

bool QSlider_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QSlider_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QSlider_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QSlider_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQSlider*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QSlider_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QSlider_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQSlider*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QSlider_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSlider_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSlider*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QSlider_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QSlider_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_ChildEvent(event);
}

bool QSlider_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QSlider_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_CustomEvent(event);
}

bool QSlider_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QSlider_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QSlider_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSlider* self_cast = dynamic_cast<MiqtVirtualQSlider*>( (QSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QSlider_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSlider*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSlider_Delete(QSlider* self) {
	delete self;
}

