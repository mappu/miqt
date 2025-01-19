#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QBrush>
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
#include <QList>
#include <QMdiArea>
#include <QMdiSubWindow>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qmdiarea.h>
#include "gen_qmdiarea.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMdiArea_SubWindowActivated(intptr_t, QMdiSubWindow*);
QSize* miqt_exec_callback_QMdiArea_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QMdiArea_MinimumSizeHint(void*, intptr_t);
void miqt_exec_callback_QMdiArea_SetupViewport(void*, intptr_t, QWidget*);
bool miqt_exec_callback_QMdiArea_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QMdiArea_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMdiArea_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QMdiArea_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMdiArea_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QMdiArea_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMdiArea_ShowEvent(void*, intptr_t, QShowEvent*);
bool miqt_exec_callback_QMdiArea_ViewportEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMdiArea_ScrollContentsBy(void*, intptr_t, int, int);
void miqt_exec_callback_QMdiArea_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMdiArea_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMdiArea_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMdiArea_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMdiArea_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QMdiArea_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QMdiArea_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QMdiArea_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QMdiArea_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QMdiArea_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QMdiArea_KeyPressEvent(void*, intptr_t, QKeyEvent*);
QSize* miqt_exec_callback_QMdiArea_ViewportSizeHint(void*, intptr_t);
void miqt_exec_callback_QMdiArea_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMdiArea_InitStyleOption(void*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QMdiArea_DevType(void*, intptr_t);
void miqt_exec_callback_QMdiArea_SetVisible(void*, intptr_t, bool);
int miqt_exec_callback_QMdiArea_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QMdiArea_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QMdiArea_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QMdiArea_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMdiArea_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMdiArea_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMdiArea_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QMdiArea_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMdiArea_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QMdiArea_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QMdiArea_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QMdiArea_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QMdiArea_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QMdiArea_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QMdiArea_Metric(void*, intptr_t, int);
void miqt_exec_callback_QMdiArea_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QMdiArea_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QMdiArea_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QMdiArea_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QMdiArea_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QMdiArea_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QMdiArea_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMdiArea_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMdiArea_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMdiArea final : public QMdiArea {
public:

	MiqtVirtualQMdiArea(QWidget* parent): QMdiArea(parent) {};
	MiqtVirtualQMdiArea(): QMdiArea() {};

	virtual ~MiqtVirtualQMdiArea() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QMdiArea::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMdiArea_SizeHint(const_cast<MiqtVirtualQMdiArea*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QMdiArea::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QMdiArea::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMdiArea_MinimumSizeHint(const_cast<MiqtVirtualQMdiArea*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QMdiArea::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__SetupViewport == 0) {
			QMdiArea::setupViewport(viewport);
			return;
		}
		
		QWidget* sigval1 = viewport;

		miqt_exec_callback_QMdiArea_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* viewport) {

		QMdiArea::setupViewport(viewport);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QMdiArea::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMdiArea_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QMdiArea::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QMdiArea::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMdiArea_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QMdiArea::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* paintEvent) override {
		if (handle__PaintEvent == 0) {
			QMdiArea::paintEvent(paintEvent);
			return;
		}
		
		QPaintEvent* sigval1 = paintEvent;

		miqt_exec_callback_QMdiArea_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* paintEvent) {

		QMdiArea::paintEvent(paintEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* childEvent) override {
		if (handle__ChildEvent == 0) {
			QMdiArea::childEvent(childEvent);
			return;
		}
		
		QChildEvent* sigval1 = childEvent;

		miqt_exec_callback_QMdiArea_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* childEvent) {

		QMdiArea::childEvent(childEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* resizeEvent) override {
		if (handle__ResizeEvent == 0) {
			QMdiArea::resizeEvent(resizeEvent);
			return;
		}
		
		QResizeEvent* sigval1 = resizeEvent;

		miqt_exec_callback_QMdiArea_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* resizeEvent) {

		QMdiArea::resizeEvent(resizeEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* timerEvent) override {
		if (handle__TimerEvent == 0) {
			QMdiArea::timerEvent(timerEvent);
			return;
		}
		
		QTimerEvent* sigval1 = timerEvent;

		miqt_exec_callback_QMdiArea_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* timerEvent) {

		QMdiArea::timerEvent(timerEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* showEvent) override {
		if (handle__ShowEvent == 0) {
			QMdiArea::showEvent(showEvent);
			return;
		}
		
		QShowEvent* sigval1 = showEvent;

		miqt_exec_callback_QMdiArea_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* showEvent) {

		QMdiArea::showEvent(showEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__ViewportEvent == 0) {
			return QMdiArea::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMdiArea_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* event) {

		return QMdiArea::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QMdiArea::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QMdiArea_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QMdiArea::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QMdiArea::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QMdiArea::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QMdiArea::mouseReleaseEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* param1) {

		QMdiArea::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QMdiArea::mouseDoubleClickEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* param1) {

		QMdiArea::mouseDoubleClickEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QMdiArea::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QMdiArea::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QMdiArea::wheelEvent(param1);
			return;
		}
		
		QWheelEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* param1) {

		QMdiArea::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QMdiArea::contextMenuEvent(param1);
			return;
		}
		
		QContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* param1) {

		QMdiArea::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* param1) override {
		if (handle__DragEnterEvent == 0) {
			QMdiArea::dragEnterEvent(param1);
			return;
		}
		
		QDragEnterEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* param1) {

		QMdiArea::dragEnterEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* param1) override {
		if (handle__DragMoveEvent == 0) {
			QMdiArea::dragMoveEvent(param1);
			return;
		}
		
		QDragMoveEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* param1) {

		QMdiArea::dragMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
		if (handle__DragLeaveEvent == 0) {
			QMdiArea::dragLeaveEvent(param1);
			return;
		}
		
		QDragLeaveEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* param1) {

		QMdiArea::dragLeaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* param1) override {
		if (handle__DropEvent == 0) {
			QMdiArea::dropEvent(param1);
			return;
		}
		
		QDropEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* param1) {

		QMdiArea::dropEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QMdiArea::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QMdiArea::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QMdiArea::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QMdiArea_ViewportSizeHint(const_cast<MiqtVirtualQMdiArea*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QMdiArea::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QMdiArea::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QMdiArea::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QMdiArea::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QMdiArea_InitStyleOption(const_cast<MiqtVirtualQMdiArea*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QMdiArea::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QMdiArea::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QMdiArea_DevType(const_cast<MiqtVirtualQMdiArea*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QMdiArea::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QMdiArea::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QMdiArea_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QMdiArea::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QMdiArea::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QMdiArea_HeightForWidth(const_cast<MiqtVirtualQMdiArea*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QMdiArea::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QMdiArea::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QMdiArea_HasHeightForWidth(const_cast<MiqtVirtualQMdiArea*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QMdiArea::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QMdiArea::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QMdiArea_PaintEngine(const_cast<MiqtVirtualQMdiArea*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QMdiArea::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QMdiArea::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QMdiArea_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QMdiArea::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QMdiArea::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QMdiArea_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QMdiArea::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QMdiArea::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QMdiArea_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QMdiArea::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QMdiArea::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QMdiArea_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QMdiArea::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QMdiArea::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMdiArea_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QMdiArea::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QMdiArea::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QMdiArea_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QMdiArea::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QMdiArea::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QMdiArea_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QMdiArea::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QMdiArea::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QMdiArea_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QMdiArea::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QMdiArea::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QMdiArea_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QMdiArea::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QMdiArea::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QMdiArea_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QMdiArea::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QMdiArea::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QMdiArea_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QMdiArea::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QMdiArea::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QMdiArea_Metric(const_cast<MiqtVirtualQMdiArea*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QMdiArea::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QMdiArea::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QMdiArea_InitPainter(const_cast<MiqtVirtualQMdiArea*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QMdiArea::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QMdiArea::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QMdiArea_Redirected(const_cast<MiqtVirtualQMdiArea*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QMdiArea::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QMdiArea::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QMdiArea_SharedPainter(const_cast<MiqtVirtualQMdiArea*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QMdiArea::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QMdiArea::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QMdiArea_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QMdiArea::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QMdiArea::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QMdiArea_InputMethodQuery(const_cast<MiqtVirtualQMdiArea*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QMdiArea::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QMdiArea::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QMdiArea_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QMdiArea::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QMdiArea::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMdiArea_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QMdiArea::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QMdiArea::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMdiArea_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QMdiArea::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QMdiArea::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMdiArea_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QMdiArea::disconnectNotify(*signal);

	}

};

QMdiArea* QMdiArea_new(QWidget* parent) {
	return new MiqtVirtualQMdiArea(parent);
}

QMdiArea* QMdiArea_new2() {
	return new MiqtVirtualQMdiArea();
}

void QMdiArea_virtbase(QMdiArea* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* QMdiArea_MetaObject(const QMdiArea* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMdiArea_Metacast(QMdiArea* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMdiArea_Tr(const char* s) {
	QString _ret = QMdiArea::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QMdiArea_SizeHint(const QMdiArea* self) {
	return new QSize(self->sizeHint());
}

QSize* QMdiArea_MinimumSizeHint(const QMdiArea* self) {
	return new QSize(self->minimumSizeHint());
}

QMdiSubWindow* QMdiArea_CurrentSubWindow(const QMdiArea* self) {
	return self->currentSubWindow();
}

QMdiSubWindow* QMdiArea_ActiveSubWindow(const QMdiArea* self) {
	return self->activeSubWindow();
}

struct miqt_array /* of QMdiSubWindow* */  QMdiArea_SubWindowList(const QMdiArea* self) {
	QList<QMdiSubWindow *> _ret = self->subWindowList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QMdiSubWindow** _arr = static_cast<QMdiSubWindow**>(malloc(sizeof(QMdiSubWindow*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QMdiSubWindow* QMdiArea_AddSubWindow(QMdiArea* self, QWidget* widget) {
	return self->addSubWindow(widget);
}

void QMdiArea_RemoveSubWindow(QMdiArea* self, QWidget* widget) {
	self->removeSubWindow(widget);
}

QBrush* QMdiArea_Background(const QMdiArea* self) {
	return new QBrush(self->background());
}

void QMdiArea_SetBackground(QMdiArea* self, QBrush* background) {
	self->setBackground(*background);
}

int QMdiArea_ActivationOrder(const QMdiArea* self) {
	QMdiArea::WindowOrder _ret = self->activationOrder();
	return static_cast<int>(_ret);
}

void QMdiArea_SetActivationOrder(QMdiArea* self, int order) {
	self->setActivationOrder(static_cast<QMdiArea::WindowOrder>(order));
}

void QMdiArea_SetOption(QMdiArea* self, int option) {
	self->setOption(static_cast<QMdiArea::AreaOption>(option));
}

bool QMdiArea_TestOption(const QMdiArea* self, int opton) {
	return self->testOption(static_cast<QMdiArea::AreaOption>(opton));
}

void QMdiArea_SetViewMode(QMdiArea* self, int mode) {
	self->setViewMode(static_cast<QMdiArea::ViewMode>(mode));
}

int QMdiArea_ViewMode(const QMdiArea* self) {
	QMdiArea::ViewMode _ret = self->viewMode();
	return static_cast<int>(_ret);
}

bool QMdiArea_DocumentMode(const QMdiArea* self) {
	return self->documentMode();
}

void QMdiArea_SetDocumentMode(QMdiArea* self, bool enabled) {
	self->setDocumentMode(enabled);
}

void QMdiArea_SetTabsClosable(QMdiArea* self, bool closable) {
	self->setTabsClosable(closable);
}

bool QMdiArea_TabsClosable(const QMdiArea* self) {
	return self->tabsClosable();
}

void QMdiArea_SetTabsMovable(QMdiArea* self, bool movable) {
	self->setTabsMovable(movable);
}

bool QMdiArea_TabsMovable(const QMdiArea* self) {
	return self->tabsMovable();
}

void QMdiArea_SetTabShape(QMdiArea* self, int shape) {
	self->setTabShape(static_cast<QTabWidget::TabShape>(shape));
}

int QMdiArea_TabShape(const QMdiArea* self) {
	QTabWidget::TabShape _ret = self->tabShape();
	return static_cast<int>(_ret);
}

void QMdiArea_SetTabPosition(QMdiArea* self, int position) {
	self->setTabPosition(static_cast<QTabWidget::TabPosition>(position));
}

int QMdiArea_TabPosition(const QMdiArea* self) {
	QTabWidget::TabPosition _ret = self->tabPosition();
	return static_cast<int>(_ret);
}

void QMdiArea_SubWindowActivated(QMdiArea* self, QMdiSubWindow* param1) {
	self->subWindowActivated(param1);
}

void QMdiArea_connect_SubWindowActivated(QMdiArea* self, intptr_t slot) {
	MiqtVirtualQMdiArea::connect(self, static_cast<void (QMdiArea::*)(QMdiSubWindow*)>(&QMdiArea::subWindowActivated), self, [=](QMdiSubWindow* param1) {
		QMdiSubWindow* sigval1 = param1;
		miqt_exec_callback_QMdiArea_SubWindowActivated(slot, sigval1);
	});
}

void QMdiArea_SetActiveSubWindow(QMdiArea* self, QMdiSubWindow* window) {
	self->setActiveSubWindow(window);
}

void QMdiArea_TileSubWindows(QMdiArea* self) {
	self->tileSubWindows();
}

void QMdiArea_CascadeSubWindows(QMdiArea* self) {
	self->cascadeSubWindows();
}

void QMdiArea_CloseActiveSubWindow(QMdiArea* self) {
	self->closeActiveSubWindow();
}

void QMdiArea_CloseAllSubWindows(QMdiArea* self) {
	self->closeAllSubWindows();
}

void QMdiArea_ActivateNextSubWindow(QMdiArea* self) {
	self->activateNextSubWindow();
}

void QMdiArea_ActivatePreviousSubWindow(QMdiArea* self) {
	self->activatePreviousSubWindow();
}

struct miqt_string QMdiArea_Tr2(const char* s, const char* c) {
	QString _ret = QMdiArea::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMdiArea_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMdiArea::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QMdiSubWindow* */  QMdiArea_SubWindowList1(const QMdiArea* self, int order) {
	QList<QMdiSubWindow *> _ret = self->subWindowList(static_cast<QMdiArea::WindowOrder>(order));
	// Convert QList<> from C++ memory to manually-managed C memory
	QMdiSubWindow** _arr = static_cast<QMdiSubWindow**>(malloc(sizeof(QMdiSubWindow*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QMdiSubWindow* QMdiArea_AddSubWindow2(QMdiArea* self, QWidget* widget, int flags) {
	return self->addSubWindow(widget, static_cast<Qt::WindowFlags>(flags));
}

void QMdiArea_SetOption2(QMdiArea* self, int option, bool on) {
	self->setOption(static_cast<QMdiArea::AreaOption>(option), on);
}

bool QMdiArea_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QMdiArea_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_SizeHint();
}

bool QMdiArea_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QMdiArea_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_MinimumSizeHint();
}

bool QMdiArea_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QMdiArea_virtualbase_SetupViewport(void* self, QWidget* viewport) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_SetupViewport(viewport);
}

bool QMdiArea_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QMdiArea_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMdiArea*)(self) )->virtualbase_Event(event);
}

bool QMdiArea_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QMdiArea_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQMdiArea*)(self) )->virtualbase_EventFilter(object, event);
}

bool QMdiArea_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QMdiArea_virtualbase_PaintEvent(void* self, QPaintEvent* paintEvent) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_PaintEvent(paintEvent);
}

bool QMdiArea_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QMdiArea_virtualbase_ChildEvent(void* self, QChildEvent* childEvent) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_ChildEvent(childEvent);
}

bool QMdiArea_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QMdiArea_virtualbase_ResizeEvent(void* self, QResizeEvent* resizeEvent) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_ResizeEvent(resizeEvent);
}

bool QMdiArea_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QMdiArea_virtualbase_TimerEvent(void* self, QTimerEvent* timerEvent) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_TimerEvent(timerEvent);
}

bool QMdiArea_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QMdiArea_virtualbase_ShowEvent(void* self, QShowEvent* showEvent) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_ShowEvent(showEvent);
}

bool QMdiArea_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QMdiArea_virtualbase_ViewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQMdiArea*)(self) )->virtualbase_ViewportEvent(event);
}

bool QMdiArea_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QMdiArea_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QMdiArea_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QMdiArea_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_MousePressEvent(param1);
}

bool QMdiArea_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QMdiArea_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

bool QMdiArea_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QMdiArea_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_MouseDoubleClickEvent(param1);
}

bool QMdiArea_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QMdiArea_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_MouseMoveEvent(param1);
}

bool QMdiArea_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QMdiArea_virtualbase_WheelEvent(void* self, QWheelEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_WheelEvent(param1);
}

bool QMdiArea_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QMdiArea_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QMdiArea_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QMdiArea_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_DragEnterEvent(param1);
}

bool QMdiArea_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QMdiArea_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_DragMoveEvent(param1);
}

bool QMdiArea_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QMdiArea_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_DragLeaveEvent(param1);
}

bool QMdiArea_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QMdiArea_virtualbase_DropEvent(void* self, QDropEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_DropEvent(param1);
}

bool QMdiArea_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QMdiArea_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QMdiArea_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QMdiArea_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_ViewportSizeHint();
}

bool QMdiArea_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QMdiArea_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QMdiArea_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QMdiArea_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_InitStyleOption(option);
}

bool QMdiArea_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QMdiArea_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_DevType();
}

bool QMdiArea_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QMdiArea_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_SetVisible(visible);
}

bool QMdiArea_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QMdiArea_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QMdiArea_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QMdiArea_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_HasHeightForWidth();
}

bool QMdiArea_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QMdiArea_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_PaintEngine();
}

bool QMdiArea_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QMdiArea_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QMdiArea_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QMdiArea_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_FocusInEvent(event);
}

bool QMdiArea_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QMdiArea_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QMdiArea_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QMdiArea_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_EnterEvent(event);
}

bool QMdiArea_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QMdiArea_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_LeaveEvent(event);
}

bool QMdiArea_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QMdiArea_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_MoveEvent(event);
}

bool QMdiArea_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QMdiArea_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_CloseEvent(event);
}

bool QMdiArea_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QMdiArea_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_TabletEvent(event);
}

bool QMdiArea_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QMdiArea_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_ActionEvent(event);
}

bool QMdiArea_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QMdiArea_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_HideEvent(event);
}

bool QMdiArea_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QMdiArea_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQMdiArea*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QMdiArea_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QMdiArea_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_Metric(param1);
}

bool QMdiArea_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QMdiArea_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_InitPainter(painter);
}

bool QMdiArea_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QMdiArea_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_Redirected(offset);
}

bool QMdiArea_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QMdiArea_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_SharedPainter();
}

bool QMdiArea_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QMdiArea_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QMdiArea_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QMdiArea_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQMdiArea*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QMdiArea_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QMdiArea_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQMdiArea*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QMdiArea_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QMdiArea_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_CustomEvent(event);
}

bool QMdiArea_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QMdiArea_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QMdiArea_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QMdiArea_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMdiArea*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QMdiArea_Delete(QMdiArea* self) {
	delete self;
}

