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
#include <QFrame>
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
#include <QStackedWidget>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qstackedwidget.h>
#include "gen_qstackedwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QStackedWidget_CurrentChanged(intptr_t, int);
void miqt_exec_callback_QStackedWidget_WidgetRemoved(intptr_t, int);
bool miqt_exec_callback_QStackedWidget_Event(QStackedWidget*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QStackedWidget_SizeHint(const QStackedWidget*, intptr_t);
void miqt_exec_callback_QStackedWidget_PaintEvent(QStackedWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QStackedWidget_ChangeEvent(QStackedWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QStackedWidget_InitStyleOption(const QStackedWidget*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QStackedWidget_DevType(const QStackedWidget*, intptr_t);
void miqt_exec_callback_QStackedWidget_SetVisible(QStackedWidget*, intptr_t, bool);
QSize* miqt_exec_callback_QStackedWidget_MinimumSizeHint(const QStackedWidget*, intptr_t);
int miqt_exec_callback_QStackedWidget_HeightForWidth(const QStackedWidget*, intptr_t, int);
bool miqt_exec_callback_QStackedWidget_HasHeightForWidth(const QStackedWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QStackedWidget_PaintEngine(const QStackedWidget*, intptr_t);
void miqt_exec_callback_QStackedWidget_MousePressEvent(QStackedWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStackedWidget_MouseReleaseEvent(QStackedWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStackedWidget_MouseDoubleClickEvent(QStackedWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStackedWidget_MouseMoveEvent(QStackedWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QStackedWidget_WheelEvent(QStackedWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QStackedWidget_KeyPressEvent(QStackedWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QStackedWidget_KeyReleaseEvent(QStackedWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QStackedWidget_FocusInEvent(QStackedWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QStackedWidget_FocusOutEvent(QStackedWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QStackedWidget_EnterEvent(QStackedWidget*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QStackedWidget_LeaveEvent(QStackedWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QStackedWidget_MoveEvent(QStackedWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QStackedWidget_ResizeEvent(QStackedWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QStackedWidget_CloseEvent(QStackedWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QStackedWidget_ContextMenuEvent(QStackedWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QStackedWidget_TabletEvent(QStackedWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QStackedWidget_ActionEvent(QStackedWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QStackedWidget_DragEnterEvent(QStackedWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QStackedWidget_DragMoveEvent(QStackedWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QStackedWidget_DragLeaveEvent(QStackedWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QStackedWidget_DropEvent(QStackedWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QStackedWidget_ShowEvent(QStackedWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QStackedWidget_HideEvent(QStackedWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QStackedWidget_NativeEvent(QStackedWidget*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QStackedWidget_Metric(const QStackedWidget*, intptr_t, int);
void miqt_exec_callback_QStackedWidget_InitPainter(const QStackedWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QStackedWidget_Redirected(const QStackedWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QStackedWidget_SharedPainter(const QStackedWidget*, intptr_t);
void miqt_exec_callback_QStackedWidget_InputMethodEvent(QStackedWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QStackedWidget_InputMethodQuery(const QStackedWidget*, intptr_t, int);
bool miqt_exec_callback_QStackedWidget_FocusNextPrevChild(QStackedWidget*, intptr_t, bool);
bool miqt_exec_callback_QStackedWidget_EventFilter(QStackedWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QStackedWidget_TimerEvent(QStackedWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QStackedWidget_ChildEvent(QStackedWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QStackedWidget_CustomEvent(QStackedWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QStackedWidget_ConnectNotify(QStackedWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QStackedWidget_DisconnectNotify(QStackedWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStackedWidget final : public QStackedWidget {
public:

	MiqtVirtualQStackedWidget(QWidget* parent): QStackedWidget(parent) {};
	MiqtVirtualQStackedWidget(): QStackedWidget() {};

	virtual ~MiqtVirtualQStackedWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QStackedWidget::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QStackedWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QStackedWidget::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QStackedWidget::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QStackedWidget_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QStackedWidget::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QStackedWidget::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QStackedWidget_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QStackedWidget::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QStackedWidget::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QStackedWidget_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QStackedWidget::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QStackedWidget::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QStackedWidget_InitStyleOption(this, handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QStackedWidget::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QStackedWidget::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QStackedWidget_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QStackedWidget::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QStackedWidget::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QStackedWidget_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QStackedWidget::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QStackedWidget::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QStackedWidget_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QStackedWidget::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QStackedWidget::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QStackedWidget_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QStackedWidget::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QStackedWidget::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QStackedWidget_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QStackedWidget::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QStackedWidget::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QStackedWidget_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QStackedWidget::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QStackedWidget::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QStackedWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QStackedWidget::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QStackedWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QStackedWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QStackedWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QStackedWidget::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QStackedWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QStackedWidget::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QStackedWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QStackedWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QStackedWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QStackedWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QStackedWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QStackedWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QStackedWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QStackedWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QStackedWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QStackedWidget::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QStackedWidget::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QStackedWidget::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QStackedWidget::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QStackedWidget::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QStackedWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QStackedWidget::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QStackedWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QStackedWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QStackedWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QStackedWidget::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QStackedWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QStackedWidget::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QStackedWidget::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QStackedWidget::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QStackedWidget::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QStackedWidget::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QStackedWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QStackedWidget::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QStackedWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QStackedWidget::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QStackedWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QStackedWidget::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QStackedWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QStackedWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QStackedWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QStackedWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QStackedWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QStackedWidget::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QStackedWidget_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QStackedWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QStackedWidget::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QStackedWidget_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QStackedWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QStackedWidget::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QStackedWidget_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QStackedWidget::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QStackedWidget::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QStackedWidget_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QStackedWidget::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QStackedWidget::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QStackedWidget_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QStackedWidget::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QStackedWidget::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QStackedWidget_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QStackedWidget::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QStackedWidget::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QStackedWidget_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QStackedWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QStackedWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QStackedWidget_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QStackedWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QStackedWidget::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QStackedWidget_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QStackedWidget::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QStackedWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QStackedWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QStackedWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QStackedWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QStackedWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStackedWidget_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QStackedWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QStackedWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStackedWidget_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QStackedWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QStackedWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStackedWidget_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QStackedWidget::disconnectNotify(*signal);

	}

};

QStackedWidget* QStackedWidget_new(QWidget* parent) {
	return new MiqtVirtualQStackedWidget(parent);
}

QStackedWidget* QStackedWidget_new2() {
	return new MiqtVirtualQStackedWidget();
}

void QStackedWidget_virtbase(QStackedWidget* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QStackedWidget_MetaObject(const QStackedWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStackedWidget_Metacast(QStackedWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStackedWidget_Tr(const char* s) {
	QString _ret = QStackedWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QStackedWidget_AddWidget(QStackedWidget* self, QWidget* w) {
	return self->addWidget(w);
}

int QStackedWidget_InsertWidget(QStackedWidget* self, int index, QWidget* w) {
	return self->insertWidget(static_cast<int>(index), w);
}

void QStackedWidget_RemoveWidget(QStackedWidget* self, QWidget* w) {
	self->removeWidget(w);
}

QWidget* QStackedWidget_CurrentWidget(const QStackedWidget* self) {
	return self->currentWidget();
}

int QStackedWidget_CurrentIndex(const QStackedWidget* self) {
	return self->currentIndex();
}

int QStackedWidget_IndexOf(const QStackedWidget* self, QWidget* param1) {
	return self->indexOf(param1);
}

QWidget* QStackedWidget_Widget(const QStackedWidget* self, int param1) {
	return self->widget(static_cast<int>(param1));
}

int QStackedWidget_Count(const QStackedWidget* self) {
	return self->count();
}

void QStackedWidget_SetCurrentIndex(QStackedWidget* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QStackedWidget_SetCurrentWidget(QStackedWidget* self, QWidget* w) {
	self->setCurrentWidget(w);
}

void QStackedWidget_CurrentChanged(QStackedWidget* self, int param1) {
	self->currentChanged(static_cast<int>(param1));
}

void QStackedWidget_connect_CurrentChanged(QStackedWidget* self, intptr_t slot) {
	MiqtVirtualQStackedWidget::connect(self, static_cast<void (QStackedWidget::*)(int)>(&QStackedWidget::currentChanged), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QStackedWidget_CurrentChanged(slot, sigval1);
	});
}

void QStackedWidget_WidgetRemoved(QStackedWidget* self, int index) {
	self->widgetRemoved(static_cast<int>(index));
}

void QStackedWidget_connect_WidgetRemoved(QStackedWidget* self, intptr_t slot) {
	MiqtVirtualQStackedWidget::connect(self, static_cast<void (QStackedWidget::*)(int)>(&QStackedWidget::widgetRemoved), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QStackedWidget_WidgetRemoved(slot, sigval1);
	});
}

struct miqt_string QStackedWidget_Tr2(const char* s, const char* c) {
	QString _ret = QStackedWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStackedWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QStackedWidget_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QStackedWidget_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_Event(e);
}

bool QStackedWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QStackedWidget_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQStackedWidget*)(self) )->virtualbase_SizeHint();
}

bool QStackedWidget_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_PaintEvent(param1);
}

bool QStackedWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QStackedWidget_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QStackedWidget_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQStackedWidget*)(self) )->virtualbase_InitStyleOption(option);
}

bool QStackedWidget_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QStackedWidget_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQStackedWidget*)(self) )->virtualbase_DevType();
}

bool QStackedWidget_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QStackedWidget_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_SetVisible(visible);
}

bool QStackedWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QStackedWidget_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQStackedWidget*)(self) )->virtualbase_MinimumSizeHint();
}

bool QStackedWidget_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QStackedWidget_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQStackedWidget*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QStackedWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QStackedWidget_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQStackedWidget*)(self) )->virtualbase_HasHeightForWidth();
}

bool QStackedWidget_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QStackedWidget_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQStackedWidget*)(self) )->virtualbase_PaintEngine();
}

bool QStackedWidget_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_MousePressEvent(event);
}

bool QStackedWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QStackedWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QStackedWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QStackedWidget_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_WheelEvent(event);
}

bool QStackedWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QStackedWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QStackedWidget_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_FocusInEvent(event);
}

bool QStackedWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QStackedWidget_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_EnterEvent(event);
}

bool QStackedWidget_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_LeaveEvent(event);
}

bool QStackedWidget_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_MoveEvent(event);
}

bool QStackedWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_ResizeEvent(event);
}

bool QStackedWidget_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_CloseEvent(event);
}

bool QStackedWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QStackedWidget_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_TabletEvent(event);
}

bool QStackedWidget_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_ActionEvent(event);
}

bool QStackedWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QStackedWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QStackedWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QStackedWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_DropEvent(event);
}

bool QStackedWidget_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_ShowEvent(event);
}

bool QStackedWidget_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_HideEvent(event);
}

bool QStackedWidget_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QStackedWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QStackedWidget_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QStackedWidget_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQStackedWidget*)(self) )->virtualbase_Metric(param1);
}

bool QStackedWidget_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QStackedWidget_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQStackedWidget*)(self) )->virtualbase_InitPainter(painter);
}

bool QStackedWidget_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QStackedWidget_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQStackedWidget*)(self) )->virtualbase_Redirected(offset);
}

bool QStackedWidget_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QStackedWidget_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQStackedWidget*)(self) )->virtualbase_SharedPainter();
}

bool QStackedWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QStackedWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QStackedWidget_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQStackedWidget*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QStackedWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QStackedWidget_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QStackedWidget_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QStackedWidget_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QStackedWidget_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_TimerEvent(event);
}

bool QStackedWidget_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_ChildEvent(event);
}

bool QStackedWidget_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QStackedWidget_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_CustomEvent(event);
}

bool QStackedWidget_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QStackedWidget_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QStackedWidget_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStackedWidget* self_cast = dynamic_cast<MiqtVirtualQStackedWidget*>( (QStackedWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QStackedWidget_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStackedWidget*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QStackedWidget_Delete(QStackedWidget* self) {
	delete self;
}

