#include <QActionEvent>
#include <QByteArray>
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
#include <QSizeGrip>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsizegrip.h>
#include "gen_qsizegrip.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QSizeGrip_SizeHint(void*, intptr_t);
void miqt_exec_callback_QSizeGrip_SetVisible(void*, intptr_t, bool);
void miqt_exec_callback_QSizeGrip_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QSizeGrip_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSizeGrip_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSizeGrip_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSizeGrip_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QSizeGrip_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QSizeGrip_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QSizeGrip_EventFilter(void*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QSizeGrip_Event(void*, intptr_t, QEvent*);
int miqt_exec_callback_QSizeGrip_DevType(void*, intptr_t);
QSize* miqt_exec_callback_QSizeGrip_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QSizeGrip_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QSizeGrip_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QSizeGrip_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QSizeGrip_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSizeGrip_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QSizeGrip_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSizeGrip_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSizeGrip_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSizeGrip_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSizeGrip_EnterEvent(void*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QSizeGrip_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSizeGrip_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QSizeGrip_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QSizeGrip_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QSizeGrip_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QSizeGrip_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QSizeGrip_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QSizeGrip_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QSizeGrip_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QSizeGrip_DropEvent(void*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QSizeGrip_NativeEvent(void*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QSizeGrip_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QSizeGrip_Metric(void*, intptr_t, int);
void miqt_exec_callback_QSizeGrip_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QSizeGrip_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QSizeGrip_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QSizeGrip_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QSizeGrip_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QSizeGrip_FocusNextPrevChild(void*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSizeGrip final : public QSizeGrip {
public:

	MiqtVirtualQSizeGrip(QWidget* parent): QSizeGrip(parent) {};

	virtual ~MiqtVirtualQSizeGrip() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QSizeGrip::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSizeGrip_SizeHint(const_cast<MiqtVirtualQSizeGrip*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QSizeGrip::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QSizeGrip::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QSizeGrip_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QSizeGrip::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QSizeGrip::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QSizeGrip_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QSizeGrip::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QSizeGrip::mousePressEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QSizeGrip_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* param1) {

		QSizeGrip::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QSizeGrip::mouseMoveEvent(param1);
			return;
		}
		
		QMouseEvent* sigval1 = param1;

		miqt_exec_callback_QSizeGrip_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* param1) {

		QSizeGrip::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* mouseEvent) override {
		if (handle__MouseReleaseEvent == 0) {
			QSizeGrip::mouseReleaseEvent(mouseEvent);
			return;
		}
		
		QMouseEvent* sigval1 = mouseEvent;

		miqt_exec_callback_QSizeGrip_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* mouseEvent) {

		QSizeGrip::mouseReleaseEvent(mouseEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* moveEvent) override {
		if (handle__MoveEvent == 0) {
			QSizeGrip::moveEvent(moveEvent);
			return;
		}
		
		QMoveEvent* sigval1 = moveEvent;

		miqt_exec_callback_QSizeGrip_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* moveEvent) {

		QSizeGrip::moveEvent(moveEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* showEvent) override {
		if (handle__ShowEvent == 0) {
			QSizeGrip::showEvent(showEvent);
			return;
		}
		
		QShowEvent* sigval1 = showEvent;

		miqt_exec_callback_QSizeGrip_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* showEvent) {

		QSizeGrip::showEvent(showEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* hideEvent) override {
		if (handle__HideEvent == 0) {
			QSizeGrip::hideEvent(hideEvent);
			return;
		}
		
		QHideEvent* sigval1 = hideEvent;

		miqt_exec_callback_QSizeGrip_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* hideEvent) {

		QSizeGrip::hideEvent(hideEvent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QSizeGrip::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QSizeGrip_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QSizeGrip::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QSizeGrip::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QSizeGrip_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QSizeGrip::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QSizeGrip::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QSizeGrip_DevType(const_cast<MiqtVirtualQSizeGrip*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QSizeGrip::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QSizeGrip::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QSizeGrip_MinimumSizeHint(const_cast<MiqtVirtualQSizeGrip*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QSizeGrip::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QSizeGrip::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QSizeGrip_HeightForWidth(const_cast<MiqtVirtualQSizeGrip*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QSizeGrip::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QSizeGrip::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QSizeGrip_HasHeightForWidth(const_cast<MiqtVirtualQSizeGrip*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QSizeGrip::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QSizeGrip::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QSizeGrip_PaintEngine(const_cast<MiqtVirtualQSizeGrip*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QSizeGrip::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QSizeGrip::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QSizeGrip::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QSizeGrip::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QSizeGrip::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QSizeGrip::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QSizeGrip::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QSizeGrip::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QSizeGrip::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QSizeGrip::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QSizeGrip::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QSizeGrip::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QSizeGrip::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QSizeGrip::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QSizeGrip::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QSizeGrip::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QSizeGrip::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QSizeGrip::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QSizeGrip::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QSizeGrip::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QSizeGrip::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QSizeGrip::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QSizeGrip::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QSizeGrip::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QSizeGrip::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QSizeGrip::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QSizeGrip::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QSizeGrip::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QSizeGrip::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QSizeGrip::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QSizeGrip::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QSizeGrip::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QSizeGrip::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QSizeGrip::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QSizeGrip_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QSizeGrip::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
			return QSizeGrip::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QSizeGrip_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QSizeGrip::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QSizeGrip::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QSizeGrip_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QSizeGrip::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QSizeGrip::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QSizeGrip_Metric(const_cast<MiqtVirtualQSizeGrip*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QSizeGrip::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QSizeGrip::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QSizeGrip_InitPainter(const_cast<MiqtVirtualQSizeGrip*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QSizeGrip::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QSizeGrip::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QSizeGrip_Redirected(const_cast<MiqtVirtualQSizeGrip*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QSizeGrip::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QSizeGrip::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QSizeGrip_SharedPainter(const_cast<MiqtVirtualQSizeGrip*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QSizeGrip::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QSizeGrip::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QSizeGrip_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QSizeGrip::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QSizeGrip::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QSizeGrip_InputMethodQuery(const_cast<MiqtVirtualQSizeGrip*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QSizeGrip::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QSizeGrip::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QSizeGrip_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QSizeGrip::focusNextPrevChild(next);

	}

};

QSizeGrip* QSizeGrip_new(QWidget* parent) {
	return new MiqtVirtualQSizeGrip(parent);
}

void QSizeGrip_virtbase(QSizeGrip* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QSizeGrip_MetaObject(const QSizeGrip* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSizeGrip_Metacast(QSizeGrip* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSizeGrip_Tr(const char* s) {
	QString _ret = QSizeGrip::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QSizeGrip_SizeHint(const QSizeGrip* self) {
	return new QSize(self->sizeHint());
}

void QSizeGrip_SetVisible(QSizeGrip* self, bool visible) {
	self->setVisible(visible);
}

struct miqt_string QSizeGrip_Tr2(const char* s, const char* c) {
	QString _ret = QSizeGrip::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSizeGrip_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSizeGrip::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSizeGrip_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QSizeGrip_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQSizeGrip*)(self) )->virtualbase_SizeHint();
}

bool QSizeGrip_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QSizeGrip_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_SetVisible(visible);
}

bool QSizeGrip_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_PaintEvent(param1);
}

bool QSizeGrip_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_MousePressEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_MousePressEvent(param1);
}

bool QSizeGrip_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_MouseMoveEvent(param1);
}

bool QSizeGrip_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* mouseEvent) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_MouseReleaseEvent(mouseEvent);
}

bool QSizeGrip_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_MoveEvent(void* self, QMoveEvent* moveEvent) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_MoveEvent(moveEvent);
}

bool QSizeGrip_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_ShowEvent(void* self, QShowEvent* showEvent) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_ShowEvent(showEvent);
}

bool QSizeGrip_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_HideEvent(void* self, QHideEvent* hideEvent) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_HideEvent(hideEvent);
}

bool QSizeGrip_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSizeGrip_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QSizeGrip_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSizeGrip_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_Event(param1);
}

bool QSizeGrip_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QSizeGrip_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQSizeGrip*)(self) )->virtualbase_DevType();
}

bool QSizeGrip_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QSizeGrip_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQSizeGrip*)(self) )->virtualbase_MinimumSizeHint();
}

bool QSizeGrip_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QSizeGrip_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQSizeGrip*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QSizeGrip_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QSizeGrip_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQSizeGrip*)(self) )->virtualbase_HasHeightForWidth();
}

bool QSizeGrip_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QSizeGrip_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQSizeGrip*)(self) )->virtualbase_PaintEngine();
}

bool QSizeGrip_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QSizeGrip_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_WheelEvent(event);
}

bool QSizeGrip_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QSizeGrip_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QSizeGrip_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_FocusInEvent(event);
}

bool QSizeGrip_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QSizeGrip_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_EnterEvent(event);
}

bool QSizeGrip_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_LeaveEvent(event);
}

bool QSizeGrip_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_ResizeEvent(event);
}

bool QSizeGrip_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_CloseEvent(event);
}

bool QSizeGrip_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QSizeGrip_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_TabletEvent(event);
}

bool QSizeGrip_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_ActionEvent(event);
}

bool QSizeGrip_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QSizeGrip_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QSizeGrip_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QSizeGrip_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_DropEvent(event);
}

bool QSizeGrip_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QSizeGrip_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QSizeGrip_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QSizeGrip_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QSizeGrip_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQSizeGrip*)(self) )->virtualbase_Metric(param1);
}

bool QSizeGrip_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QSizeGrip_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQSizeGrip*)(self) )->virtualbase_InitPainter(painter);
}

bool QSizeGrip_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QSizeGrip_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQSizeGrip*)(self) )->virtualbase_Redirected(offset);
}

bool QSizeGrip_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QSizeGrip_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQSizeGrip*)(self) )->virtualbase_SharedPainter();
}

bool QSizeGrip_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QSizeGrip_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QSizeGrip_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QSizeGrip_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQSizeGrip*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QSizeGrip_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQSizeGrip* self_cast = dynamic_cast<MiqtVirtualQSizeGrip*>( (QSizeGrip*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QSizeGrip_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQSizeGrip*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QSizeGrip_Delete(QSizeGrip* self) {
	delete self;
}

