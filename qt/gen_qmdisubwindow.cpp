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
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QMenu>
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
#include <qmdisubwindow.h>
#include "gen_qmdisubwindow.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMdiSubWindow_windowStateChanged(intptr_t, int, int);
void miqt_exec_callback_QMdiSubWindow_aboutToActivate(intptr_t);
QSize* miqt_exec_callback_QMdiSubWindow_sizeHint(const QMdiSubWindow*, intptr_t);
QSize* miqt_exec_callback_QMdiSubWindow_minimumSizeHint(const QMdiSubWindow*, intptr_t);
bool miqt_exec_callback_QMdiSubWindow_eventFilter(QMdiSubWindow*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QMdiSubWindow_event(QMdiSubWindow*, intptr_t, QEvent*);
void miqt_exec_callback_QMdiSubWindow_showEvent(QMdiSubWindow*, intptr_t, QShowEvent*);
void miqt_exec_callback_QMdiSubWindow_hideEvent(QMdiSubWindow*, intptr_t, QHideEvent*);
void miqt_exec_callback_QMdiSubWindow_changeEvent(QMdiSubWindow*, intptr_t, QEvent*);
void miqt_exec_callback_QMdiSubWindow_closeEvent(QMdiSubWindow*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QMdiSubWindow_leaveEvent(QMdiSubWindow*, intptr_t, QEvent*);
void miqt_exec_callback_QMdiSubWindow_resizeEvent(QMdiSubWindow*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QMdiSubWindow_timerEvent(QMdiSubWindow*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMdiSubWindow_moveEvent(QMdiSubWindow*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QMdiSubWindow_paintEvent(QMdiSubWindow*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QMdiSubWindow_mousePressEvent(QMdiSubWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMdiSubWindow_mouseDoubleClickEvent(QMdiSubWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMdiSubWindow_mouseReleaseEvent(QMdiSubWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMdiSubWindow_mouseMoveEvent(QMdiSubWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMdiSubWindow_keyPressEvent(QMdiSubWindow*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMdiSubWindow_contextMenuEvent(QMdiSubWindow*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QMdiSubWindow_focusInEvent(QMdiSubWindow*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMdiSubWindow_focusOutEvent(QMdiSubWindow*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMdiSubWindow_childEvent(QMdiSubWindow*, intptr_t, QChildEvent*);
int miqt_exec_callback_QMdiSubWindow_devType(const QMdiSubWindow*, intptr_t);
void miqt_exec_callback_QMdiSubWindow_setVisible(QMdiSubWindow*, intptr_t, bool);
int miqt_exec_callback_QMdiSubWindow_heightForWidth(const QMdiSubWindow*, intptr_t, int);
bool miqt_exec_callback_QMdiSubWindow_hasHeightForWidth(const QMdiSubWindow*, intptr_t);
QPaintEngine* miqt_exec_callback_QMdiSubWindow_paintEngine(const QMdiSubWindow*, intptr_t);
void miqt_exec_callback_QMdiSubWindow_wheelEvent(QMdiSubWindow*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QMdiSubWindow_keyReleaseEvent(QMdiSubWindow*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMdiSubWindow_enterEvent(QMdiSubWindow*, intptr_t, QEvent*);
void miqt_exec_callback_QMdiSubWindow_tabletEvent(QMdiSubWindow*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QMdiSubWindow_actionEvent(QMdiSubWindow*, intptr_t, QActionEvent*);
void miqt_exec_callback_QMdiSubWindow_dragEnterEvent(QMdiSubWindow*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QMdiSubWindow_dragMoveEvent(QMdiSubWindow*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QMdiSubWindow_dragLeaveEvent(QMdiSubWindow*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QMdiSubWindow_dropEvent(QMdiSubWindow*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QMdiSubWindow_nativeEvent(QMdiSubWindow*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QMdiSubWindow_metric(const QMdiSubWindow*, intptr_t, int);
void miqt_exec_callback_QMdiSubWindow_initPainter(const QMdiSubWindow*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QMdiSubWindow_redirected(const QMdiSubWindow*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QMdiSubWindow_sharedPainter(const QMdiSubWindow*, intptr_t);
void miqt_exec_callback_QMdiSubWindow_inputMethodEvent(QMdiSubWindow*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QMdiSubWindow_inputMethodQuery(const QMdiSubWindow*, intptr_t, int);
bool miqt_exec_callback_QMdiSubWindow_focusNextPrevChild(QMdiSubWindow*, intptr_t, bool);
void miqt_exec_callback_QMdiSubWindow_customEvent(QMdiSubWindow*, intptr_t, QEvent*);
void miqt_exec_callback_QMdiSubWindow_connectNotify(QMdiSubWindow*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMdiSubWindow_disconnectNotify(QMdiSubWindow*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMdiSubWindow final : public QMdiSubWindow {
public:

	MiqtVirtualQMdiSubWindow(QWidget* parent): QMdiSubWindow(parent) {}
	MiqtVirtualQMdiSubWindow(): QMdiSubWindow() {}
	MiqtVirtualQMdiSubWindow(QWidget* parent, Qt::WindowFlags flags): QMdiSubWindow(parent, flags) {}

	virtual ~MiqtVirtualQMdiSubWindow() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QMdiSubWindow::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QMdiSubWindow_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QMdiSubWindow_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QMdiSubWindow::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QMdiSubWindow_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QMdiSubWindow_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QMdiSubWindow::eventFilter(object, event);
		}

		QObject* sigval1 = object;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QMdiSubWindow_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QMdiSubWindow_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QMdiSubWindow::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QMdiSubWindow_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QMdiSubWindow_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* showEvent) override {
		if (handle__showEvent == 0) {
			QMdiSubWindow::showEvent(showEvent);
			return;
		}

		QShowEvent* sigval1 = showEvent;
		miqt_exec_callback_QMdiSubWindow_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_showEvent(void* self, QShowEvent* showEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* hideEvent) override {
		if (handle__hideEvent == 0) {
			QMdiSubWindow::hideEvent(hideEvent);
			return;
		}

		QHideEvent* sigval1 = hideEvent;
		miqt_exec_callback_QMdiSubWindow_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_hideEvent(void* self, QHideEvent* hideEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* changeEvent) override {
		if (handle__changeEvent == 0) {
			QMdiSubWindow::changeEvent(changeEvent);
			return;
		}

		QEvent* sigval1 = changeEvent;
		miqt_exec_callback_QMdiSubWindow_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_changeEvent(void* self, QEvent* changeEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* closeEvent) override {
		if (handle__closeEvent == 0) {
			QMdiSubWindow::closeEvent(closeEvent);
			return;
		}

		QCloseEvent* sigval1 = closeEvent;
		miqt_exec_callback_QMdiSubWindow_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_closeEvent(void* self, QCloseEvent* closeEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* leaveEvent) override {
		if (handle__leaveEvent == 0) {
			QMdiSubWindow::leaveEvent(leaveEvent);
			return;
		}

		QEvent* sigval1 = leaveEvent;
		miqt_exec_callback_QMdiSubWindow_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_leaveEvent(void* self, QEvent* leaveEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* resizeEvent) override {
		if (handle__resizeEvent == 0) {
			QMdiSubWindow::resizeEvent(resizeEvent);
			return;
		}

		QResizeEvent* sigval1 = resizeEvent;
		miqt_exec_callback_QMdiSubWindow_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_resizeEvent(void* self, QResizeEvent* resizeEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* timerEvent) override {
		if (handle__timerEvent == 0) {
			QMdiSubWindow::timerEvent(timerEvent);
			return;
		}

		QTimerEvent* sigval1 = timerEvent;
		miqt_exec_callback_QMdiSubWindow_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_timerEvent(void* self, QTimerEvent* timerEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* moveEvent) override {
		if (handle__moveEvent == 0) {
			QMdiSubWindow::moveEvent(moveEvent);
			return;
		}

		QMoveEvent* sigval1 = moveEvent;
		miqt_exec_callback_QMdiSubWindow_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_moveEvent(void* self, QMoveEvent* moveEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* paintEvent) override {
		if (handle__paintEvent == 0) {
			QMdiSubWindow::paintEvent(paintEvent);
			return;
		}

		QPaintEvent* sigval1 = paintEvent;
		miqt_exec_callback_QMdiSubWindow_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_paintEvent(void* self, QPaintEvent* paintEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* mouseEvent) override {
		if (handle__mousePressEvent == 0) {
			QMdiSubWindow::mousePressEvent(mouseEvent);
			return;
		}

		QMouseEvent* sigval1 = mouseEvent;
		miqt_exec_callback_QMdiSubWindow_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_mousePressEvent(void* self, QMouseEvent* mouseEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* mouseEvent) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
			return;
		}

		QMouseEvent* sigval1 = mouseEvent;
		miqt_exec_callback_QMdiSubWindow_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* mouseEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* mouseEvent) override {
		if (handle__mouseReleaseEvent == 0) {
			QMdiSubWindow::mouseReleaseEvent(mouseEvent);
			return;
		}

		QMouseEvent* sigval1 = mouseEvent;
		miqt_exec_callback_QMdiSubWindow_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* mouseEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* mouseEvent) override {
		if (handle__mouseMoveEvent == 0) {
			QMdiSubWindow::mouseMoveEvent(mouseEvent);
			return;
		}

		QMouseEvent* sigval1 = mouseEvent;
		miqt_exec_callback_QMdiSubWindow_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_mouseMoveEvent(void* self, QMouseEvent* mouseEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* keyEvent) override {
		if (handle__keyPressEvent == 0) {
			QMdiSubWindow::keyPressEvent(keyEvent);
			return;
		}

		QKeyEvent* sigval1 = keyEvent;
		miqt_exec_callback_QMdiSubWindow_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_keyPressEvent(void* self, QKeyEvent* keyEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* contextMenuEvent) override {
		if (handle__contextMenuEvent == 0) {
			QMdiSubWindow::contextMenuEvent(contextMenuEvent);
			return;
		}

		QContextMenuEvent* sigval1 = contextMenuEvent;
		miqt_exec_callback_QMdiSubWindow_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* contextMenuEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* focusInEvent) override {
		if (handle__focusInEvent == 0) {
			QMdiSubWindow::focusInEvent(focusInEvent);
			return;
		}

		QFocusEvent* sigval1 = focusInEvent;
		miqt_exec_callback_QMdiSubWindow_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_focusInEvent(void* self, QFocusEvent* focusInEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* focusOutEvent) override {
		if (handle__focusOutEvent == 0) {
			QMdiSubWindow::focusOutEvent(focusOutEvent);
			return;
		}

		QFocusEvent* sigval1 = focusOutEvent;
		miqt_exec_callback_QMdiSubWindow_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_focusOutEvent(void* self, QFocusEvent* focusOutEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* childEvent) override {
		if (handle__childEvent == 0) {
			QMdiSubWindow::childEvent(childEvent);
			return;
		}

		QChildEvent* sigval1 = childEvent;
		miqt_exec_callback_QMdiSubWindow_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_childEvent(void* self, QChildEvent* childEvent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QMdiSubWindow::devType();
		}

		int callback_return_value = miqt_exec_callback_QMdiSubWindow_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QMdiSubWindow_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QMdiSubWindow::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QMdiSubWindow_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QMdiSubWindow::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QMdiSubWindow_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QMdiSubWindow_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QMdiSubWindow::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QMdiSubWindow_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QMdiSubWindow_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QMdiSubWindow::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QMdiSubWindow_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QMdiSubWindow_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QMdiSubWindow::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QMdiSubWindow_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QMdiSubWindow::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QMdiSubWindow_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QMdiSubWindow::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QMdiSubWindow_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QMdiSubWindow::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QMdiSubWindow_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QMdiSubWindow::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QMdiSubWindow_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QMdiSubWindow::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QMdiSubWindow_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QMdiSubWindow::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QMdiSubWindow_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QMdiSubWindow::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QMdiSubWindow_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QMdiSubWindow::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QMdiSubWindow_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QMdiSubWindow::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QMdiSubWindow_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QMdiSubWindow_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QMdiSubWindow::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QMdiSubWindow_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QMdiSubWindow_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QMdiSubWindow::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QMdiSubWindow_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QMdiSubWindow::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QMdiSubWindow_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QMdiSubWindow_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QMdiSubWindow::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QMdiSubWindow_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QMdiSubWindow_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QMdiSubWindow::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QMdiSubWindow_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QMdiSubWindow::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QMdiSubWindow_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QMdiSubWindow_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QMdiSubWindow::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QMdiSubWindow_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QMdiSubWindow_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QMdiSubWindow::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QMdiSubWindow_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QMdiSubWindow::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QMdiSubWindow_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QMdiSubWindow::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QMdiSubWindow_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QMdiSubWindow_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QMdiSubWindow_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QMdiSubWindow_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QMdiSubWindow_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QMdiSubWindow_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QMdiSubWindow_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QMdiSubWindow_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMdiSubWindow_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMdiSubWindow_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMdiSubWindow_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QMdiSubWindow* QMdiSubWindow_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQMdiSubWindow(parent);
}

QMdiSubWindow* QMdiSubWindow_new2() {
	return new (std::nothrow) MiqtVirtualQMdiSubWindow();
}

QMdiSubWindow* QMdiSubWindow_new3(QWidget* parent, int flags) {
	return new (std::nothrow) MiqtVirtualQMdiSubWindow(parent, static_cast<Qt::WindowFlags>(flags));
}

void QMdiSubWindow_virtbase(QMdiSubWindow* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QMdiSubWindow_metaObject(const QMdiSubWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMdiSubWindow_metacast(QMdiSubWindow* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMdiSubWindow_tr(const char* s) {
	QString _ret = QMdiSubWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMdiSubWindow_trUtf8(const char* s) {
	QString _ret = QMdiSubWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QMdiSubWindow_sizeHint(const QMdiSubWindow* self) {
	return new QSize(self->sizeHint());
}

QSize* QMdiSubWindow_minimumSizeHint(const QMdiSubWindow* self) {
	return new QSize(self->minimumSizeHint());
}

void QMdiSubWindow_setWidget(QMdiSubWindow* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QMdiSubWindow_widget(const QMdiSubWindow* self) {
	return self->widget();
}

QWidget* QMdiSubWindow_maximizedButtonsWidget(const QMdiSubWindow* self) {
	return self->maximizedButtonsWidget();
}

QWidget* QMdiSubWindow_maximizedSystemMenuIconWidget(const QMdiSubWindow* self) {
	return self->maximizedSystemMenuIconWidget();
}

bool QMdiSubWindow_isShaded(const QMdiSubWindow* self) {
	return self->isShaded();
}

void QMdiSubWindow_setOption(QMdiSubWindow* self, int option) {
	self->setOption(static_cast<QMdiSubWindow::SubWindowOption>(option));
}

bool QMdiSubWindow_testOption(const QMdiSubWindow* self, int param1) {
	return self->testOption(static_cast<QMdiSubWindow::SubWindowOption>(param1));
}

void QMdiSubWindow_setKeyboardSingleStep(QMdiSubWindow* self, int step) {
	self->setKeyboardSingleStep(static_cast<int>(step));
}

int QMdiSubWindow_keyboardSingleStep(const QMdiSubWindow* self) {
	return self->keyboardSingleStep();
}

void QMdiSubWindow_setKeyboardPageStep(QMdiSubWindow* self, int step) {
	self->setKeyboardPageStep(static_cast<int>(step));
}

int QMdiSubWindow_keyboardPageStep(const QMdiSubWindow* self) {
	return self->keyboardPageStep();
}

void QMdiSubWindow_setSystemMenu(QMdiSubWindow* self, QMenu* systemMenu) {
	self->setSystemMenu(systemMenu);
}

QMenu* QMdiSubWindow_systemMenu(const QMdiSubWindow* self) {
	return self->systemMenu();
}

QMdiArea* QMdiSubWindow_mdiArea(const QMdiSubWindow* self) {
	return self->mdiArea();
}

void QMdiSubWindow_windowStateChanged(QMdiSubWindow* self, int oldState, int newState) {
	self->windowStateChanged(static_cast<Qt::WindowStates>(oldState), static_cast<Qt::WindowStates>(newState));
}

void QMdiSubWindow_connect_windowStateChanged(QMdiSubWindow* self, intptr_t slot) {
	QMdiSubWindow::connect(self, static_cast<void (QMdiSubWindow::*)(Qt::WindowStates, Qt::WindowStates)>(&QMdiSubWindow::windowStateChanged), self, [=](Qt::WindowStates oldState, Qt::WindowStates newState) {
		Qt::WindowStates oldState_ret = oldState;
		int sigval1 = static_cast<int>(oldState_ret);
		Qt::WindowStates newState_ret = newState;
		int sigval2 = static_cast<int>(newState_ret);
		miqt_exec_callback_QMdiSubWindow_windowStateChanged(slot, sigval1, sigval2);
	});
}

void QMdiSubWindow_aboutToActivate(QMdiSubWindow* self) {
	self->aboutToActivate();
}

void QMdiSubWindow_connect_aboutToActivate(QMdiSubWindow* self, intptr_t slot) {
	QMdiSubWindow::connect(self, static_cast<void (QMdiSubWindow::*)()>(&QMdiSubWindow::aboutToActivate), self, [=]() {
		miqt_exec_callback_QMdiSubWindow_aboutToActivate(slot);
	});
}

void QMdiSubWindow_showSystemMenu(QMdiSubWindow* self) {
	self->showSystemMenu();
}

void QMdiSubWindow_showShaded(QMdiSubWindow* self) {
	self->showShaded();
}

struct miqt_string QMdiSubWindow_tr2(const char* s, const char* c) {
	QString _ret = QMdiSubWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMdiSubWindow_tr3(const char* s, const char* c, int n) {
	QString _ret = QMdiSubWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMdiSubWindow_trUtf82(const char* s, const char* c) {
	QString _ret = QMdiSubWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMdiSubWindow_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QMdiSubWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMdiSubWindow_setOption2(QMdiSubWindow* self, int option, bool on) {
	self->setOption(static_cast<QMdiSubWindow::SubWindowOption>(option), on);
}

bool QMdiSubWindow_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QMdiSubWindow_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::sizeHint());
}

bool QMdiSubWindow_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QMdiSubWindow_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::minimumSizeHint());
}

bool QMdiSubWindow_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QMdiSubWindow_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::eventFilter(object, event);
}

bool QMdiSubWindow_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QMdiSubWindow_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::event(event);
}

bool QMdiSubWindow_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_showEvent(void* self, QShowEvent* showEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::showEvent(showEvent);
}

bool QMdiSubWindow_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_hideEvent(void* self, QHideEvent* hideEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::hideEvent(hideEvent);
}

bool QMdiSubWindow_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_changeEvent(void* self, QEvent* changeEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::changeEvent(changeEvent);
}

bool QMdiSubWindow_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_closeEvent(void* self, QCloseEvent* closeEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::closeEvent(closeEvent);
}

bool QMdiSubWindow_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_leaveEvent(void* self, QEvent* leaveEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::leaveEvent(leaveEvent);
}

bool QMdiSubWindow_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_resizeEvent(void* self, QResizeEvent* resizeEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::resizeEvent(resizeEvent);
}

bool QMdiSubWindow_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_timerEvent(void* self, QTimerEvent* timerEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::timerEvent(timerEvent);
}

bool QMdiSubWindow_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_moveEvent(void* self, QMoveEvent* moveEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::moveEvent(moveEvent);
}

bool QMdiSubWindow_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_paintEvent(void* self, QPaintEvent* paintEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::paintEvent(paintEvent);
}

bool QMdiSubWindow_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_mousePressEvent(void* self, QMouseEvent* mouseEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::mousePressEvent(mouseEvent);
}

bool QMdiSubWindow_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* mouseEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
}

bool QMdiSubWindow_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* mouseEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::mouseReleaseEvent(mouseEvent);
}

bool QMdiSubWindow_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_mouseMoveEvent(void* self, QMouseEvent* mouseEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::mouseMoveEvent(mouseEvent);
}

bool QMdiSubWindow_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_keyPressEvent(void* self, QKeyEvent* keyEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::keyPressEvent(keyEvent);
}

bool QMdiSubWindow_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* contextMenuEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::contextMenuEvent(contextMenuEvent);
}

bool QMdiSubWindow_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_focusInEvent(void* self, QFocusEvent* focusInEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::focusInEvent(focusInEvent);
}

bool QMdiSubWindow_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_focusOutEvent(void* self, QFocusEvent* focusOutEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::focusOutEvent(focusOutEvent);
}

bool QMdiSubWindow_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_childEvent(void* self, QChildEvent* childEvent) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::childEvent(childEvent);
}

bool QMdiSubWindow_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QMdiSubWindow_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::devType();
}

bool QMdiSubWindow_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QMdiSubWindow_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::setVisible(visible);
}

bool QMdiSubWindow_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QMdiSubWindow_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::heightForWidth(static_cast<int>(param1));
}

bool QMdiSubWindow_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QMdiSubWindow_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::hasHeightForWidth();
}

bool QMdiSubWindow_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QMdiSubWindow_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::paintEngine();
}

bool QMdiSubWindow_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::wheelEvent(event);
}

bool QMdiSubWindow_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::keyReleaseEvent(event);
}

bool QMdiSubWindow_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::enterEvent(event);
}

bool QMdiSubWindow_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::tabletEvent(event);
}

bool QMdiSubWindow_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::actionEvent(event);
}

bool QMdiSubWindow_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::dragEnterEvent(event);
}

bool QMdiSubWindow_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::dragMoveEvent(event);
}

bool QMdiSubWindow_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::dragLeaveEvent(event);
}

bool QMdiSubWindow_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::dropEvent(event);
}

bool QMdiSubWindow_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QMdiSubWindow_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QMdiSubWindow_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QMdiSubWindow_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::metric(static_cast<MiqtVirtualQMdiSubWindow::PaintDeviceMetric>(param1));
}

bool QMdiSubWindow_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QMdiSubWindow_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::initPainter(painter);
}

bool QMdiSubWindow_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QMdiSubWindow_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::redirected(offset);
}

bool QMdiSubWindow_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QMdiSubWindow_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::sharedPainter();
}

bool QMdiSubWindow_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::inputMethodEvent(param1);
}

bool QMdiSubWindow_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QMdiSubWindow_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QMdiSubWindow_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QMdiSubWindow_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::focusNextPrevChild(next);
}

bool QMdiSubWindow_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QMdiSubWindow_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::customEvent(event);
}

bool QMdiSubWindow_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QMdiSubWindow_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::connectNotify(*signal);
}

bool QMdiSubWindow_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QMdiSubWindow_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQMdiSubWindow*>(self)->QMdiSubWindow::disconnectNotify(*signal);
}

void QMdiSubWindow_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QMdiSubWindow_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QMdiSubWindow_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QMdiSubWindow_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QMdiSubWindow_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QMdiSubWindow_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QMdiSubWindow_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QMdiSubWindow_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QMdiSubWindow_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMdiSubWindow* self_cast = dynamic_cast<MiqtVirtualQMdiSubWindow*>( (QMdiSubWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QMdiSubWindow_delete(QMdiSubWindow* self) {
	delete self;
}

