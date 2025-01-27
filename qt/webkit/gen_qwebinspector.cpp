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
#include <QWebInspector>
#include <QWebPage>
#include <QWheelEvent>
#include <QWidget>
#include <qwebinspector.h>
#include "gen_qwebinspector.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QWebInspector_SizeHint(const QWebInspector*, intptr_t);
bool miqt_exec_callback_QWebInspector_Event(QWebInspector*, intptr_t, QEvent*);
void miqt_exec_callback_QWebInspector_ResizeEvent(QWebInspector*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QWebInspector_ShowEvent(QWebInspector*, intptr_t, QShowEvent*);
void miqt_exec_callback_QWebInspector_HideEvent(QWebInspector*, intptr_t, QHideEvent*);
void miqt_exec_callback_QWebInspector_CloseEvent(QWebInspector*, intptr_t, QCloseEvent*);
int miqt_exec_callback_QWebInspector_DevType(const QWebInspector*, intptr_t);
void miqt_exec_callback_QWebInspector_SetVisible(QWebInspector*, intptr_t, bool);
QSize* miqt_exec_callback_QWebInspector_MinimumSizeHint(const QWebInspector*, intptr_t);
int miqt_exec_callback_QWebInspector_HeightForWidth(const QWebInspector*, intptr_t, int);
bool miqt_exec_callback_QWebInspector_HasHeightForWidth(const QWebInspector*, intptr_t);
QPaintEngine* miqt_exec_callback_QWebInspector_PaintEngine(const QWebInspector*, intptr_t);
void miqt_exec_callback_QWebInspector_MousePressEvent(QWebInspector*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebInspector_MouseReleaseEvent(QWebInspector*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebInspector_MouseDoubleClickEvent(QWebInspector*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebInspector_MouseMoveEvent(QWebInspector*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebInspector_WheelEvent(QWebInspector*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QWebInspector_KeyPressEvent(QWebInspector*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWebInspector_KeyReleaseEvent(QWebInspector*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWebInspector_FocusInEvent(QWebInspector*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWebInspector_FocusOutEvent(QWebInspector*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWebInspector_EnterEvent(QWebInspector*, intptr_t, QEvent*);
void miqt_exec_callback_QWebInspector_LeaveEvent(QWebInspector*, intptr_t, QEvent*);
void miqt_exec_callback_QWebInspector_PaintEvent(QWebInspector*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QWebInspector_MoveEvent(QWebInspector*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QWebInspector_ContextMenuEvent(QWebInspector*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QWebInspector_TabletEvent(QWebInspector*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QWebInspector_ActionEvent(QWebInspector*, intptr_t, QActionEvent*);
void miqt_exec_callback_QWebInspector_DragEnterEvent(QWebInspector*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QWebInspector_DragMoveEvent(QWebInspector*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QWebInspector_DragLeaveEvent(QWebInspector*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QWebInspector_DropEvent(QWebInspector*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QWebInspector_NativeEvent(QWebInspector*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QWebInspector_ChangeEvent(QWebInspector*, intptr_t, QEvent*);
int miqt_exec_callback_QWebInspector_Metric(const QWebInspector*, intptr_t, int);
void miqt_exec_callback_QWebInspector_InitPainter(const QWebInspector*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QWebInspector_Redirected(const QWebInspector*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QWebInspector_SharedPainter(const QWebInspector*, intptr_t);
void miqt_exec_callback_QWebInspector_InputMethodEvent(QWebInspector*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QWebInspector_InputMethodQuery(const QWebInspector*, intptr_t, int);
bool miqt_exec_callback_QWebInspector_FocusNextPrevChild(QWebInspector*, intptr_t, bool);
bool miqt_exec_callback_QWebInspector_EventFilter(QWebInspector*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebInspector_TimerEvent(QWebInspector*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebInspector_ChildEvent(QWebInspector*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebInspector_CustomEvent(QWebInspector*, intptr_t, QEvent*);
void miqt_exec_callback_QWebInspector_ConnectNotify(QWebInspector*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebInspector_DisconnectNotify(QWebInspector*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebInspector final : public QWebInspector {
public:

	MiqtVirtualQWebInspector(QWidget* parent): QWebInspector(parent) {};
	MiqtVirtualQWebInspector(): QWebInspector() {};

	virtual ~MiqtVirtualQWebInspector() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QWebInspector::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWebInspector_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QWebInspector::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QWebInspector::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QWebInspector_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QWebInspector::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QWebInspector::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QWebInspector::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QWebInspector::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QWebInspector::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QWebInspector::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QWebInspector::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QWebInspector::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QWebInspector::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QWebInspector::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QWebInspector_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QWebInspector::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QWebInspector::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QWebInspector_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QWebInspector::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QWebInspector::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QWebInspector_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QWebInspector::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QWebInspector::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QWebInspector_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QWebInspector::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QWebInspector::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QWebInspector_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QWebInspector::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QWebInspector::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QWebInspector_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QWebInspector::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QWebInspector::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QWebInspector::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QWebInspector::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QWebInspector::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QWebInspector::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QWebInspector::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QWebInspector::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QWebInspector::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QWebInspector::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QWebInspector::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QWebInspector::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QWebInspector::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QWebInspector::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QWebInspector::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QWebInspector::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QWebInspector::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QWebInspector::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QWebInspector::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QWebInspector::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QWebInspector::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QWebInspector::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QWebInspector::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QWebInspector::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QWebInspector::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QWebInspector::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QWebInspector::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QWebInspector::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QWebInspector::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QWebInspector::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QWebInspector::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QWebInspector::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QWebInspector::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QWebInspector::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QWebInspector::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QWebInspector::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QWebInspector::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QWebInspector::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QWebInspector::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QWebInspector::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QWebInspector::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QWebInspector::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QWebInspector_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QWebInspector::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QWebInspector::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QWebInspector_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QWebInspector::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QWebInspector::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QWebInspector_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QWebInspector::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QWebInspector::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QWebInspector_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QWebInspector::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QWebInspector::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QWebInspector_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QWebInspector::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QWebInspector::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QWebInspector_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QWebInspector::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QWebInspector::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QWebInspector_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QWebInspector::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QWebInspector::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QWebInspector_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QWebInspector::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QWebInspector::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QWebInspector_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QWebInspector::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QWebInspector::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebInspector_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QWebInspector::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QWebInspector::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QWebInspector::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QWebInspector::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QWebInspector::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QWebInspector::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebInspector_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QWebInspector::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QWebInspector::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebInspector_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QWebInspector::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QWebInspector::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebInspector_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QWebInspector::disconnectNotify(*signal);

	}

};

QWebInspector* QWebInspector_new(QWidget* parent) {
	return new MiqtVirtualQWebInspector(parent);
}

QWebInspector* QWebInspector_new2() {
	return new MiqtVirtualQWebInspector();
}

void QWebInspector_virtbase(QWebInspector* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QWebInspector_MetaObject(const QWebInspector* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebInspector_Metacast(QWebInspector* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebInspector_Tr(const char* s) {
	QString _ret = QWebInspector::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebInspector_TrUtf8(const char* s) {
	QString _ret = QWebInspector::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebInspector_SetPage(QWebInspector* self, QWebPage* page) {
	self->setPage(page);
}

QWebPage* QWebInspector_Page(const QWebInspector* self) {
	return self->page();
}

QSize* QWebInspector_SizeHint(const QWebInspector* self) {
	return new QSize(self->sizeHint());
}

bool QWebInspector_Event(QWebInspector* self, QEvent* param1) {
	return self->event(param1);
}

struct miqt_string QWebInspector_Tr2(const char* s, const char* c) {
	QString _ret = QWebInspector::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebInspector_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebInspector::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebInspector_TrUtf82(const char* s, const char* c) {
	QString _ret = QWebInspector::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebInspector_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebInspector::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebInspector_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QWebInspector_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_SizeHint();
}

bool QWebInspector_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QWebInspector_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQWebInspector*)(self) )->virtualbase_Event(param1);
}

bool QWebInspector_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QWebInspector_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_ResizeEvent(event);
}

bool QWebInspector_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QWebInspector_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_ShowEvent(event);
}

bool QWebInspector_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QWebInspector_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_HideEvent(event);
}

bool QWebInspector_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QWebInspector_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_CloseEvent(event);
}

bool QWebInspector_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QWebInspector_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_DevType();
}

bool QWebInspector_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QWebInspector_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_SetVisible(visible);
}

bool QWebInspector_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QWebInspector_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_MinimumSizeHint();
}

bool QWebInspector_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QWebInspector_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QWebInspector_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QWebInspector_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_HasHeightForWidth();
}

bool QWebInspector_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QWebInspector_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_PaintEngine();
}

bool QWebInspector_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QWebInspector_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_MousePressEvent(event);
}

bool QWebInspector_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QWebInspector_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QWebInspector_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QWebInspector_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QWebInspector_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QWebInspector_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QWebInspector_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QWebInspector_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_WheelEvent(event);
}

bool QWebInspector_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QWebInspector_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QWebInspector_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QWebInspector_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QWebInspector_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QWebInspector_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_FocusInEvent(event);
}

bool QWebInspector_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QWebInspector_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QWebInspector_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QWebInspector_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_EnterEvent(event);
}

bool QWebInspector_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QWebInspector_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_LeaveEvent(event);
}

bool QWebInspector_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QWebInspector_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_PaintEvent(event);
}

bool QWebInspector_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QWebInspector_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_MoveEvent(event);
}

bool QWebInspector_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QWebInspector_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QWebInspector_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QWebInspector_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_TabletEvent(event);
}

bool QWebInspector_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QWebInspector_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_ActionEvent(event);
}

bool QWebInspector_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QWebInspector_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QWebInspector_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QWebInspector_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QWebInspector_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QWebInspector_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QWebInspector_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QWebInspector_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_DropEvent(event);
}

bool QWebInspector_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QWebInspector_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQWebInspector*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QWebInspector_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QWebInspector_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QWebInspector_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QWebInspector_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_Metric(param1);
}

bool QWebInspector_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QWebInspector_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_InitPainter(painter);
}

bool QWebInspector_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QWebInspector_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_Redirected(offset);
}

bool QWebInspector_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QWebInspector_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_SharedPainter();
}

bool QWebInspector_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QWebInspector_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QWebInspector_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QWebInspector_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQWebInspector*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QWebInspector_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QWebInspector_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQWebInspector*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QWebInspector_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QWebInspector_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebInspector*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QWebInspector_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QWebInspector_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_TimerEvent(event);
}

bool QWebInspector_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QWebInspector_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_ChildEvent(event);
}

bool QWebInspector_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QWebInspector_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_CustomEvent(event);
}

bool QWebInspector_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QWebInspector_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QWebInspector_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebInspector* self_cast = dynamic_cast<MiqtVirtualQWebInspector*>( (QWebInspector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QWebInspector_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebInspector*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QWebInspector_Delete(QWebInspector* self) {
	delete self;
}

