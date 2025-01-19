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
#include <QFrame>
#include <QHideEvent>
#include <QIcon>
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
#include <QToolBox>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtoolbox.h>
#include "gen_qtoolbox.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QToolBox_CurrentChanged(intptr_t, int);
bool miqt_exec_callback_QToolBox_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QToolBox_ItemInserted(void*, intptr_t, int);
void miqt_exec_callback_QToolBox_ItemRemoved(void*, intptr_t, int);
void miqt_exec_callback_QToolBox_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QToolBox_ChangeEvent(void*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QToolBox_SizeHint(void*, intptr_t);
void miqt_exec_callback_QToolBox_PaintEvent(void*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QToolBox_DevType(void*, intptr_t);
void miqt_exec_callback_QToolBox_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QToolBox_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QToolBox_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QToolBox_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QToolBox_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QToolBox_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBox_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBox_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBox_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QToolBox_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QToolBox_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QToolBox_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QToolBox_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QToolBox_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QToolBox_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QToolBox_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QToolBox_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QToolBox_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QToolBox_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QToolBox_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QToolBox_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QToolBox_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QToolBox_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QToolBox_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QToolBox_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QToolBox_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QToolBox_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QToolBox_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QToolBox_Metric(void*, intptr_t, int);
void miqt_exec_callback_QToolBox_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QToolBox_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QToolBox_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QToolBox_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QToolBox_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QToolBox_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QToolBox_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QToolBox_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QToolBox_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QToolBox_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QToolBox_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QToolBox_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQToolBox final : public QToolBox {
public:

	MiqtVirtualQToolBox(QWidget* parent): QToolBox(parent) {};
	MiqtVirtualQToolBox(): QToolBox() {};
	MiqtVirtualQToolBox(QWidget* parent, Qt::WindowFlags f): QToolBox(parent, f) {};

	virtual ~MiqtVirtualQToolBox() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QToolBox::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QToolBox_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QToolBox::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemInserted = 0;

	// Subclass to allow providing a Go implementation
	virtual void itemInserted(int index) override {
		if (handle__ItemInserted == 0) {
			QToolBox::itemInserted(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QToolBox_ItemInserted(this, handle__ItemInserted, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ItemInserted(int index) {

		QToolBox::itemInserted(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemRemoved = 0;

	// Subclass to allow providing a Go implementation
	virtual void itemRemoved(int index) override {
		if (handle__ItemRemoved == 0) {
			QToolBox::itemRemoved(index);
			return;
		}
		
		int sigval1 = index;

		miqt_exec_callback_QToolBox_ItemRemoved(this, handle__ItemRemoved, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ItemRemoved(int index) {

		QToolBox::itemRemoved(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* e) override {
		if (handle__ShowEvent == 0) {
			QToolBox::showEvent(e);
			return;
		}
		
		QShowEvent* sigval1 = e;

		miqt_exec_callback_QToolBox_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* e) {

		QToolBox::showEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QToolBox::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QToolBox_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QToolBox::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QToolBox::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QToolBox_SizeHint(const_cast<MiqtVirtualQToolBox*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QToolBox::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QToolBox::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QToolBox_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QToolBox::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QToolBox::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QToolBox_DevType(const_cast<MiqtVirtualQToolBox*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QToolBox::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QToolBox::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QToolBox_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QToolBox::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QToolBox::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QToolBox_MinimumSizeHint(const_cast<MiqtVirtualQToolBox*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QToolBox::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QToolBox::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QToolBox_HeightForWidth(const_cast<MiqtVirtualQToolBox*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QToolBox::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QToolBox::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QToolBox_HasHeightForWidth(const_cast<MiqtVirtualQToolBox*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QToolBox::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QToolBox::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QToolBox_PaintEngine(const_cast<MiqtVirtualQToolBox*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QToolBox::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QToolBox::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QToolBox::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QToolBox::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QToolBox::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QToolBox::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QToolBox::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QToolBox::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QToolBox::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QToolBox::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QToolBox::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QToolBox::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QToolBox::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QToolBox::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QToolBox::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QToolBox::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QToolBox::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QToolBox::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QToolBox::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QToolBox::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QToolBox::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QToolBox::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QToolBox::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QToolBox::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QToolBox::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QToolBox::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QToolBox::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QToolBox::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QToolBox::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QToolBox::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QToolBox::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QToolBox::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QToolBox::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QToolBox::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QToolBox::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QToolBox::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QToolBox::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QToolBox::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QToolBox::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QToolBox::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QToolBox::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QToolBox::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QToolBox::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QToolBox::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QToolBox::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QToolBox::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QToolBox_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QToolBox::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QToolBox::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QToolBox_Metric(const_cast<MiqtVirtualQToolBox*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QToolBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QToolBox::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QToolBox_InitPainter(const_cast<MiqtVirtualQToolBox*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QToolBox::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QToolBox::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QToolBox_Redirected(const_cast<MiqtVirtualQToolBox*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QToolBox::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QToolBox::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QToolBox_SharedPainter(const_cast<MiqtVirtualQToolBox*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QToolBox::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QToolBox::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QToolBox_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QToolBox::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QToolBox::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QToolBox_InputMethodQuery(const_cast<MiqtVirtualQToolBox*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QToolBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QToolBox::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QToolBox_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QToolBox::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QToolBox::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QToolBox_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QToolBox::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QToolBox::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QToolBox::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QToolBox::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QToolBox::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QToolBox::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QToolBox_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QToolBox::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QToolBox::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QToolBox_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QToolBox::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QToolBox::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QToolBox_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QToolBox::disconnectNotify(*signal);

	}

};

QToolBox* QToolBox_new(QWidget* parent) {
	return new MiqtVirtualQToolBox(parent);
}

QToolBox* QToolBox_new2() {
	return new MiqtVirtualQToolBox();
}

QToolBox* QToolBox_new3(QWidget* parent, int f) {
	return new MiqtVirtualQToolBox(parent, static_cast<Qt::WindowFlags>(f));
}

void QToolBox_virtbase(QToolBox* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QToolBox_MetaObject(const QToolBox* self) {
	return (QMetaObject*) self->metaObject();
}

void* QToolBox_Metacast(QToolBox* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QToolBox_Tr(const char* s) {
	QString _ret = QToolBox::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBox_TrUtf8(const char* s) {
	QString _ret = QToolBox::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QToolBox_AddItem(QToolBox* self, QWidget* widget, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addItem(widget, text_QString);
}

int QToolBox_AddItem2(QToolBox* self, QWidget* widget, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addItem(widget, *icon, text_QString);
}

int QToolBox_InsertItem(QToolBox* self, int index, QWidget* widget, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->insertItem(static_cast<int>(index), widget, text_QString);
}

int QToolBox_InsertItem2(QToolBox* self, int index, QWidget* widget, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->insertItem(static_cast<int>(index), widget, *icon, text_QString);
}

void QToolBox_RemoveItem(QToolBox* self, int index) {
	self->removeItem(static_cast<int>(index));
}

void QToolBox_SetItemEnabled(QToolBox* self, int index, bool enabled) {
	self->setItemEnabled(static_cast<int>(index), enabled);
}

bool QToolBox_IsItemEnabled(const QToolBox* self, int index) {
	return self->isItemEnabled(static_cast<int>(index));
}

void QToolBox_SetItemText(QToolBox* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setItemText(static_cast<int>(index), text_QString);
}

struct miqt_string QToolBox_ItemText(const QToolBox* self, int index) {
	QString _ret = self->itemText(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QToolBox_SetItemIcon(QToolBox* self, int index, QIcon* icon) {
	self->setItemIcon(static_cast<int>(index), *icon);
}

QIcon* QToolBox_ItemIcon(const QToolBox* self, int index) {
	return new QIcon(self->itemIcon(static_cast<int>(index)));
}

void QToolBox_SetItemToolTip(QToolBox* self, int index, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setItemToolTip(static_cast<int>(index), toolTip_QString);
}

struct miqt_string QToolBox_ItemToolTip(const QToolBox* self, int index) {
	QString _ret = self->itemToolTip(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QToolBox_CurrentIndex(const QToolBox* self) {
	return self->currentIndex();
}

QWidget* QToolBox_CurrentWidget(const QToolBox* self) {
	return self->currentWidget();
}

QWidget* QToolBox_Widget(const QToolBox* self, int index) {
	return self->widget(static_cast<int>(index));
}

int QToolBox_IndexOf(const QToolBox* self, QWidget* widget) {
	return self->indexOf(widget);
}

int QToolBox_Count(const QToolBox* self) {
	return self->count();
}

void QToolBox_SetCurrentIndex(QToolBox* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QToolBox_SetCurrentWidget(QToolBox* self, QWidget* widget) {
	self->setCurrentWidget(widget);
}

void QToolBox_CurrentChanged(QToolBox* self, int index) {
	self->currentChanged(static_cast<int>(index));
}

void QToolBox_connect_CurrentChanged(QToolBox* self, intptr_t slot) {
	MiqtVirtualQToolBox::connect(self, static_cast<void (QToolBox::*)(int)>(&QToolBox::currentChanged), self, [=](int index) {
		int sigval1 = index;
		miqt_exec_callback_QToolBox_CurrentChanged(slot, sigval1);
	});
}

struct miqt_string QToolBox_Tr2(const char* s, const char* c) {
	QString _ret = QToolBox::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QToolBox::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBox_TrUtf82(const char* s, const char* c) {
	QString _ret = QToolBox::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBox_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QToolBox::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QToolBox_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QToolBox_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQToolBox*)(self) )->virtualbase_Event(e);
}

bool QToolBox_override_virtual_ItemInserted(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemInserted = slot;
	return true;
}

void QToolBox_virtualbase_ItemInserted(void* self, int index) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_ItemInserted(index);
}

bool QToolBox_override_virtual_ItemRemoved(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemRemoved = slot;
	return true;
}

void QToolBox_virtualbase_ItemRemoved(void* self, int index) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_ItemRemoved(index);
}

bool QToolBox_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QToolBox_virtualbase_ShowEvent(void* self, QShowEvent* e) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_ShowEvent(e);
}

bool QToolBox_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QToolBox_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QToolBox_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QToolBox_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQToolBox*)(self) )->virtualbase_SizeHint();
}

bool QToolBox_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QToolBox_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_PaintEvent(param1);
}

bool QToolBox_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QToolBox_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQToolBox*)(self) )->virtualbase_DevType();
}

bool QToolBox_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QToolBox_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_SetVisible(visible);
}

bool QToolBox_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QToolBox_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQToolBox*)(self) )->virtualbase_MinimumSizeHint();
}

bool QToolBox_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QToolBox_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQToolBox*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QToolBox_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QToolBox_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQToolBox*)(self) )->virtualbase_HasHeightForWidth();
}

bool QToolBox_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QToolBox_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQToolBox*)(self) )->virtualbase_PaintEngine();
}

bool QToolBox_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QToolBox_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_MousePressEvent(event);
}

bool QToolBox_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QToolBox_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QToolBox_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QToolBox_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QToolBox_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QToolBox_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QToolBox_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QToolBox_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_WheelEvent(event);
}

bool QToolBox_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QToolBox_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QToolBox_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QToolBox_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QToolBox_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QToolBox_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_FocusInEvent(event);
}

bool QToolBox_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QToolBox_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QToolBox_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QToolBox_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_EnterEvent(event);
}

bool QToolBox_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QToolBox_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_LeaveEvent(event);
}

bool QToolBox_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QToolBox_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_MoveEvent(event);
}

bool QToolBox_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QToolBox_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_ResizeEvent(event);
}

bool QToolBox_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QToolBox_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_CloseEvent(event);
}

bool QToolBox_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QToolBox_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QToolBox_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QToolBox_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_TabletEvent(event);
}

bool QToolBox_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QToolBox_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_ActionEvent(event);
}

bool QToolBox_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QToolBox_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QToolBox_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QToolBox_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QToolBox_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QToolBox_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QToolBox_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QToolBox_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_DropEvent(event);
}

bool QToolBox_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QToolBox_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_HideEvent(event);
}

bool QToolBox_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QToolBox_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQToolBox*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QToolBox_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QToolBox_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQToolBox*)(self) )->virtualbase_Metric(param1);
}

bool QToolBox_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QToolBox_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQToolBox*)(self) )->virtualbase_InitPainter(painter);
}

bool QToolBox_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QToolBox_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQToolBox*)(self) )->virtualbase_Redirected(offset);
}

bool QToolBox_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QToolBox_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQToolBox*)(self) )->virtualbase_SharedPainter();
}

bool QToolBox_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QToolBox_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QToolBox_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QToolBox_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQToolBox*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QToolBox_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QToolBox_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQToolBox*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QToolBox_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QToolBox_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQToolBox*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QToolBox_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QToolBox_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_TimerEvent(event);
}

bool QToolBox_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QToolBox_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_ChildEvent(event);
}

bool QToolBox_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QToolBox_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_CustomEvent(event);
}

bool QToolBox_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QToolBox_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QToolBox_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQToolBox* self_cast = dynamic_cast<MiqtVirtualQToolBox*>( (QToolBox*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QToolBox_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQToolBox*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QToolBox_Delete(QToolBox* self) {
	delete self;
}

