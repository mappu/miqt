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
#include <QScrollBar>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionSlider>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qscrollbar.h>
#include "gen_qscrollbar.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QScrollBar_SizeHint(const QScrollBar*, intptr_t);
bool miqt_exec_callback_QScrollBar_Event(QScrollBar*, intptr_t, QEvent*);
void miqt_exec_callback_QScrollBar_WheelEvent(QScrollBar*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QScrollBar_PaintEvent(QScrollBar*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QScrollBar_MousePressEvent(QScrollBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollBar_MouseReleaseEvent(QScrollBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollBar_MouseMoveEvent(QScrollBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollBar_HideEvent(QScrollBar*, intptr_t, QHideEvent*);
void miqt_exec_callback_QScrollBar_SliderChange(QScrollBar*, intptr_t, int);
void miqt_exec_callback_QScrollBar_ContextMenuEvent(QScrollBar*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QScrollBar_InitStyleOption(const QScrollBar*, intptr_t, QStyleOptionSlider*);
void miqt_exec_callback_QScrollBar_KeyPressEvent(QScrollBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QScrollBar_TimerEvent(QScrollBar*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScrollBar_ChangeEvent(QScrollBar*, intptr_t, QEvent*);
int miqt_exec_callback_QScrollBar_DevType(const QScrollBar*, intptr_t);
void miqt_exec_callback_QScrollBar_SetVisible(QScrollBar*, intptr_t, bool);
QSize* miqt_exec_callback_QScrollBar_MinimumSizeHint(const QScrollBar*, intptr_t);
int miqt_exec_callback_QScrollBar_HeightForWidth(const QScrollBar*, intptr_t, int);
bool miqt_exec_callback_QScrollBar_HasHeightForWidth(const QScrollBar*, intptr_t);
QPaintEngine* miqt_exec_callback_QScrollBar_PaintEngine(const QScrollBar*, intptr_t);
void miqt_exec_callback_QScrollBar_MouseDoubleClickEvent(QScrollBar*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollBar_KeyReleaseEvent(QScrollBar*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QScrollBar_FocusInEvent(QScrollBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QScrollBar_FocusOutEvent(QScrollBar*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QScrollBar_EnterEvent(QScrollBar*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QScrollBar_LeaveEvent(QScrollBar*, intptr_t, QEvent*);
void miqt_exec_callback_QScrollBar_MoveEvent(QScrollBar*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QScrollBar_ResizeEvent(QScrollBar*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QScrollBar_CloseEvent(QScrollBar*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QScrollBar_TabletEvent(QScrollBar*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QScrollBar_ActionEvent(QScrollBar*, intptr_t, QActionEvent*);
void miqt_exec_callback_QScrollBar_DragEnterEvent(QScrollBar*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QScrollBar_DragMoveEvent(QScrollBar*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QScrollBar_DragLeaveEvent(QScrollBar*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QScrollBar_DropEvent(QScrollBar*, intptr_t, QDropEvent*);
void miqt_exec_callback_QScrollBar_ShowEvent(QScrollBar*, intptr_t, QShowEvent*);
bool miqt_exec_callback_QScrollBar_NativeEvent(QScrollBar*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QScrollBar_Metric(const QScrollBar*, intptr_t, int);
void miqt_exec_callback_QScrollBar_InitPainter(const QScrollBar*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QScrollBar_Redirected(const QScrollBar*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QScrollBar_SharedPainter(const QScrollBar*, intptr_t);
void miqt_exec_callback_QScrollBar_InputMethodEvent(QScrollBar*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QScrollBar_InputMethodQuery(const QScrollBar*, intptr_t, int);
bool miqt_exec_callback_QScrollBar_FocusNextPrevChild(QScrollBar*, intptr_t, bool);
bool miqt_exec_callback_QScrollBar_EventFilter(QScrollBar*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScrollBar_ChildEvent(QScrollBar*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScrollBar_CustomEvent(QScrollBar*, intptr_t, QEvent*);
void miqt_exec_callback_QScrollBar_ConnectNotify(QScrollBar*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScrollBar_DisconnectNotify(QScrollBar*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScrollBar final : public QScrollBar {
public:

	MiqtVirtualQScrollBar(QWidget* parent): QScrollBar(parent) {};
	MiqtVirtualQScrollBar(): QScrollBar() {};
	MiqtVirtualQScrollBar(Qt::Orientation param1): QScrollBar(param1) {};
	MiqtVirtualQScrollBar(Qt::Orientation param1, QWidget* parent): QScrollBar(param1, parent) {};

	virtual ~MiqtVirtualQScrollBar() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QScrollBar::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QScrollBar_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QScrollBar::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QScrollBar::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QScrollBar_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QScrollBar::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QScrollBar::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QScrollBar::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QScrollBar::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QScrollBar::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QScrollBar::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QScrollBar::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QScrollBar::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QScrollBar::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QScrollBar::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QScrollBar::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* param1) override {
		if (handle__HideEvent == 0) {
			QScrollBar::hideEvent(param1);
			return;
		}
		
		QHideEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* param1) {

		QScrollBar::hideEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SliderChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange(QAbstractSlider::SliderChange change) override {
		if (handle__SliderChange == 0) {
			QScrollBar::sliderChange(change);
			return;
		}
		
		QAbstractSlider::SliderChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);

		miqt_exec_callback_QScrollBar_SliderChange(this, handle__SliderChange, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SliderChange(int change) {

		QScrollBar::sliderChange(static_cast<QAbstractSlider::SliderChange>(change));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QScrollBar::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QScrollBar::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionSlider* option) const override {
		if (handle__InitStyleOption == 0) {
			QScrollBar::initStyleOption(option);
			return;
		}
		
		QStyleOptionSlider* sigval1 = option;

		miqt_exec_callback_QScrollBar_InitStyleOption(this, handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionSlider* option) const {

		QScrollBar::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (handle__KeyPressEvent == 0) {
			QScrollBar::keyPressEvent(ev);
			return;
		}
		
		QKeyEvent* sigval1 = ev;

		miqt_exec_callback_QScrollBar_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* ev) {

		QScrollBar::keyPressEvent(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__TimerEvent == 0) {
			QScrollBar::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* param1) {

		QScrollBar::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (handle__ChangeEvent == 0) {
			QScrollBar::changeEvent(e);
			return;
		}
		
		QEvent* sigval1 = e;

		miqt_exec_callback_QScrollBar_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* e) {

		QScrollBar::changeEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QScrollBar::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QScrollBar_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QScrollBar::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QScrollBar::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QScrollBar_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QScrollBar::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QScrollBar::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QScrollBar_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QScrollBar::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QScrollBar::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QScrollBar_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QScrollBar::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QScrollBar::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QScrollBar_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QScrollBar::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QScrollBar::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QScrollBar_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QScrollBar::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QScrollBar::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QScrollBar::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QScrollBar::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QScrollBar::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QScrollBar::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QScrollBar::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QScrollBar::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QScrollBar::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QScrollBar::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QScrollBar::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QScrollBar::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QScrollBar::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QScrollBar::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QScrollBar::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QScrollBar::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QScrollBar::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QScrollBar::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QScrollBar::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QScrollBar::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QScrollBar::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QScrollBar::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QScrollBar::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QScrollBar::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QScrollBar::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QScrollBar::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QScrollBar::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QScrollBar::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QScrollBar::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QScrollBar::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QScrollBar::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QScrollBar::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QScrollBar::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QScrollBar::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QScrollBar_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QScrollBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QScrollBar::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QScrollBar_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QScrollBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QScrollBar::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QScrollBar_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QScrollBar::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QScrollBar::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QScrollBar_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QScrollBar::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QScrollBar::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QScrollBar_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QScrollBar::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QScrollBar::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QScrollBar_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QScrollBar::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QScrollBar::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QScrollBar_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QScrollBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QScrollBar::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QScrollBar_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QScrollBar::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QScrollBar::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QScrollBar_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QScrollBar::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QScrollBar::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QScrollBar::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QScrollBar::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QScrollBar_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QScrollBar::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QScrollBar::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScrollBar_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QScrollBar::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QScrollBar::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QScrollBar_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QScrollBar::disconnectNotify(*signal);

	}

};

QScrollBar* QScrollBar_new(QWidget* parent) {
	return new MiqtVirtualQScrollBar(parent);
}

QScrollBar* QScrollBar_new2() {
	return new MiqtVirtualQScrollBar();
}

QScrollBar* QScrollBar_new3(int param1) {
	return new MiqtVirtualQScrollBar(static_cast<Qt::Orientation>(param1));
}

QScrollBar* QScrollBar_new4(int param1, QWidget* parent) {
	return new MiqtVirtualQScrollBar(static_cast<Qt::Orientation>(param1), parent);
}

void QScrollBar_virtbase(QScrollBar* src, QAbstractSlider** outptr_QAbstractSlider) {
	*outptr_QAbstractSlider = static_cast<QAbstractSlider*>(src);
}

QMetaObject* QScrollBar_MetaObject(const QScrollBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScrollBar_Metacast(QScrollBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScrollBar_Tr(const char* s) {
	QString _ret = QScrollBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QScrollBar_SizeHint(const QScrollBar* self) {
	return new QSize(self->sizeHint());
}

bool QScrollBar_Event(QScrollBar* self, QEvent* event) {
	return self->event(event);
}

struct miqt_string QScrollBar_Tr2(const char* s, const char* c) {
	QString _ret = QScrollBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScrollBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QScrollBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScrollBar_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QScrollBar_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_SizeHint();
}

bool QScrollBar_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QScrollBar_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQScrollBar*)(self) )->virtualbase_Event(event);
}

bool QScrollBar_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QScrollBar_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_WheelEvent(param1);
}

bool QScrollBar_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QScrollBar_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_PaintEvent(param1);
}

bool QScrollBar_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QScrollBar_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_MousePressEvent(param1);
}

bool QScrollBar_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QScrollBar_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

bool QScrollBar_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QScrollBar_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_MouseMoveEvent(param1);
}

bool QScrollBar_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QScrollBar_virtualbase_HideEvent(void* self, QHideEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_HideEvent(param1);
}

bool QScrollBar_override_virtual_SliderChange(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SliderChange = slot;
	return true;
}

void QScrollBar_virtualbase_SliderChange(void* self, int change) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_SliderChange(change);
}

bool QScrollBar_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QScrollBar_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QScrollBar_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QScrollBar_virtualbase_InitStyleOption(const void* self, QStyleOptionSlider* option) {
	( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_InitStyleOption(option);
}

bool QScrollBar_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QScrollBar_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_KeyPressEvent(ev);
}

bool QScrollBar_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QScrollBar_virtualbase_TimerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_TimerEvent(param1);
}

bool QScrollBar_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QScrollBar_virtualbase_ChangeEvent(void* self, QEvent* e) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_ChangeEvent(e);
}

bool QScrollBar_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QScrollBar_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_DevType();
}

bool QScrollBar_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QScrollBar_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_SetVisible(visible);
}

bool QScrollBar_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QScrollBar_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_MinimumSizeHint();
}

bool QScrollBar_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QScrollBar_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QScrollBar_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QScrollBar_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_HasHeightForWidth();
}

bool QScrollBar_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QScrollBar_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_PaintEngine();
}

bool QScrollBar_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QScrollBar_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QScrollBar_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QScrollBar_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QScrollBar_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QScrollBar_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_FocusInEvent(event);
}

bool QScrollBar_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QScrollBar_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QScrollBar_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QScrollBar_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_EnterEvent(event);
}

bool QScrollBar_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QScrollBar_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_LeaveEvent(event);
}

bool QScrollBar_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QScrollBar_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_MoveEvent(event);
}

bool QScrollBar_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QScrollBar_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_ResizeEvent(event);
}

bool QScrollBar_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QScrollBar_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_CloseEvent(event);
}

bool QScrollBar_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QScrollBar_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_TabletEvent(event);
}

bool QScrollBar_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QScrollBar_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_ActionEvent(event);
}

bool QScrollBar_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QScrollBar_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QScrollBar_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QScrollBar_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QScrollBar_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QScrollBar_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QScrollBar_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QScrollBar_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_DropEvent(event);
}

bool QScrollBar_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QScrollBar_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_ShowEvent(event);
}

bool QScrollBar_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QScrollBar_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQScrollBar*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QScrollBar_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QScrollBar_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_Metric(param1);
}

bool QScrollBar_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QScrollBar_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_InitPainter(painter);
}

bool QScrollBar_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QScrollBar_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_Redirected(offset);
}

bool QScrollBar_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QScrollBar_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_SharedPainter();
}

bool QScrollBar_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QScrollBar_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QScrollBar_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QScrollBar_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQScrollBar*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QScrollBar_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QScrollBar_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQScrollBar*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QScrollBar_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QScrollBar_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQScrollBar*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QScrollBar_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QScrollBar_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_ChildEvent(event);
}

bool QScrollBar_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QScrollBar_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_CustomEvent(event);
}

bool QScrollBar_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QScrollBar_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QScrollBar_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScrollBar* self_cast = dynamic_cast<MiqtVirtualQScrollBar*>( (QScrollBar*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QScrollBar_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQScrollBar*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QScrollBar_Delete(QScrollBar* self) {
	delete self;
}

