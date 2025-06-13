#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDockWidget>
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
#include <QList>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
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
#include <QStatusBar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QToolBar>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qmainwindow.h>
#include "gen_qmainwindow.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMainWindow_iconSizeChanged(intptr_t, QSize*);
void miqt_exec_callback_QMainWindow_toolButtonStyleChanged(intptr_t, int);
void miqt_exec_callback_QMainWindow_tabifiedDockWidgetActivated(intptr_t, QDockWidget*);
QMenu* miqt_exec_callback_QMainWindow_createPopupMenu(QMainWindow*, intptr_t);
void miqt_exec_callback_QMainWindow_contextMenuEvent(QMainWindow*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QMainWindow_event(QMainWindow*, intptr_t, QEvent*);
int miqt_exec_callback_QMainWindow_devType(const QMainWindow*, intptr_t);
void miqt_exec_callback_QMainWindow_setVisible(QMainWindow*, intptr_t, bool);
QSize* miqt_exec_callback_QMainWindow_sizeHint(const QMainWindow*, intptr_t);
QSize* miqt_exec_callback_QMainWindow_minimumSizeHint(const QMainWindow*, intptr_t);
int miqt_exec_callback_QMainWindow_heightForWidth(const QMainWindow*, intptr_t, int);
bool miqt_exec_callback_QMainWindow_hasHeightForWidth(const QMainWindow*, intptr_t);
QPaintEngine* miqt_exec_callback_QMainWindow_paintEngine(const QMainWindow*, intptr_t);
void miqt_exec_callback_QMainWindow_mousePressEvent(QMainWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMainWindow_mouseReleaseEvent(QMainWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMainWindow_mouseDoubleClickEvent(QMainWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMainWindow_mouseMoveEvent(QMainWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMainWindow_wheelEvent(QMainWindow*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QMainWindow_keyPressEvent(QMainWindow*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMainWindow_keyReleaseEvent(QMainWindow*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMainWindow_focusInEvent(QMainWindow*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMainWindow_focusOutEvent(QMainWindow*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMainWindow_enterEvent(QMainWindow*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QMainWindow_leaveEvent(QMainWindow*, intptr_t, QEvent*);
void miqt_exec_callback_QMainWindow_paintEvent(QMainWindow*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QMainWindow_moveEvent(QMainWindow*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QMainWindow_resizeEvent(QMainWindow*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QMainWindow_closeEvent(QMainWindow*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QMainWindow_tabletEvent(QMainWindow*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QMainWindow_actionEvent(QMainWindow*, intptr_t, QActionEvent*);
void miqt_exec_callback_QMainWindow_dragEnterEvent(QMainWindow*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QMainWindow_dragMoveEvent(QMainWindow*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QMainWindow_dragLeaveEvent(QMainWindow*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QMainWindow_dropEvent(QMainWindow*, intptr_t, QDropEvent*);
void miqt_exec_callback_QMainWindow_showEvent(QMainWindow*, intptr_t, QShowEvent*);
void miqt_exec_callback_QMainWindow_hideEvent(QMainWindow*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QMainWindow_nativeEvent(QMainWindow*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QMainWindow_changeEvent(QMainWindow*, intptr_t, QEvent*);
int miqt_exec_callback_QMainWindow_metric(const QMainWindow*, intptr_t, int);
void miqt_exec_callback_QMainWindow_initPainter(const QMainWindow*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QMainWindow_redirected(const QMainWindow*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QMainWindow_sharedPainter(const QMainWindow*, intptr_t);
void miqt_exec_callback_QMainWindow_inputMethodEvent(QMainWindow*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QMainWindow_inputMethodQuery(const QMainWindow*, intptr_t, int);
bool miqt_exec_callback_QMainWindow_focusNextPrevChild(QMainWindow*, intptr_t, bool);
bool miqt_exec_callback_QMainWindow_eventFilter(QMainWindow*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMainWindow_timerEvent(QMainWindow*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMainWindow_childEvent(QMainWindow*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMainWindow_customEvent(QMainWindow*, intptr_t, QEvent*);
void miqt_exec_callback_QMainWindow_connectNotify(QMainWindow*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMainWindow_disconnectNotify(QMainWindow*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMainWindow final : public QMainWindow {
public:

	MiqtVirtualQMainWindow(QWidget* parent): QMainWindow(parent) {}
	MiqtVirtualQMainWindow(): QMainWindow() {}
	MiqtVirtualQMainWindow(QWidget* parent, Qt::WindowFlags flags): QMainWindow(parent, flags) {}

	virtual ~MiqtVirtualQMainWindow() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createPopupMenu = 0;

	// Subclass to allow providing a Go implementation
	virtual QMenu* createPopupMenu() override {
		if (handle__createPopupMenu == 0) {
			return QMainWindow::createPopupMenu();
		}

		QMenu* callback_return_value = miqt_exec_callback_QMainWindow_createPopupMenu(this, handle__createPopupMenu);
		return callback_return_value;
	}

	friend QMenu* QMainWindow_virtualbase_createPopupMenu(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QMainWindow::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QMainWindow::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QMainWindow_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QMainWindow_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QMainWindow::devType();
		}

		int callback_return_value = miqt_exec_callback_QMainWindow_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QMainWindow_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QMainWindow::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QMainWindow_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QMainWindow_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QMainWindow::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QMainWindow_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QMainWindow_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QMainWindow::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QMainWindow_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QMainWindow_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QMainWindow::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QMainWindow_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QMainWindow_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QMainWindow::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QMainWindow_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QMainWindow_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QMainWindow::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QMainWindow_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QMainWindow_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QMainWindow::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QMainWindow::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QMainWindow::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QMainWindow::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QMainWindow::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QMainWindow::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QMainWindow::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QMainWindow::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QMainWindow::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QMainWindow::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QMainWindow::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QMainWindow::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QMainWindow::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QMainWindow::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QMainWindow::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QMainWindow::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QMainWindow::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QMainWindow::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QMainWindow::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QMainWindow::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QMainWindow::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QMainWindow::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QMainWindow::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QMainWindow::nativeEvent(eventType, message, result);
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
		bool callback_return_value = miqt_exec_callback_QMainWindow_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QMainWindow_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QMainWindow::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QMainWindow_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QMainWindow::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QMainWindow_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QMainWindow_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QMainWindow::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QMainWindow_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QMainWindow_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QMainWindow::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QMainWindow_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QMainWindow_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QMainWindow::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QMainWindow_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QMainWindow_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QMainWindow::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QMainWindow_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QMainWindow::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QMainWindow_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QMainWindow_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QMainWindow::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QMainWindow_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QMainWindow_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QMainWindow::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QMainWindow_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QMainWindow_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QMainWindow::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QMainWindow::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QMainWindow::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QMainWindow_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QMainWindow_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QMainWindow::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QMainWindow_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QMainWindow_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QMainWindow::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QMainWindow_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QMainWindow_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QMainWindow_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QMainWindow_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QMainWindow_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QMainWindow_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QMainWindow_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QMainWindow_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMainWindow_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMainWindow_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMainWindow_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QMainWindow* QMainWindow_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQMainWindow(parent);
}

QMainWindow* QMainWindow_new2() {
	return new (std::nothrow) MiqtVirtualQMainWindow();
}

QMainWindow* QMainWindow_new3(QWidget* parent, int flags) {
	return new (std::nothrow) MiqtVirtualQMainWindow(parent, static_cast<Qt::WindowFlags>(flags));
}

void QMainWindow_virtbase(QMainWindow* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QMainWindow_metaObject(const QMainWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMainWindow_metacast(QMainWindow* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMainWindow_tr(const char* s) {
	QString _ret = QMainWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QMainWindow_iconSize(const QMainWindow* self) {
	return new QSize(self->iconSize());
}

void QMainWindow_setIconSize(QMainWindow* self, QSize* iconSize) {
	self->setIconSize(*iconSize);
}

int QMainWindow_toolButtonStyle(const QMainWindow* self) {
	Qt::ToolButtonStyle _ret = self->toolButtonStyle();
	return static_cast<int>(_ret);
}

void QMainWindow_setToolButtonStyle(QMainWindow* self, int toolButtonStyle) {
	self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

bool QMainWindow_isAnimated(const QMainWindow* self) {
	return self->isAnimated();
}

bool QMainWindow_isDockNestingEnabled(const QMainWindow* self) {
	return self->isDockNestingEnabled();
}

bool QMainWindow_documentMode(const QMainWindow* self) {
	return self->documentMode();
}

void QMainWindow_setDocumentMode(QMainWindow* self, bool enabled) {
	self->setDocumentMode(enabled);
}

int QMainWindow_tabShape(const QMainWindow* self) {
	QTabWidget::TabShape _ret = self->tabShape();
	return static_cast<int>(_ret);
}

void QMainWindow_setTabShape(QMainWindow* self, int tabShape) {
	self->setTabShape(static_cast<QTabWidget::TabShape>(tabShape));
}

int QMainWindow_tabPosition(const QMainWindow* self, int area) {
	QTabWidget::TabPosition _ret = self->tabPosition(static_cast<Qt::DockWidgetArea>(area));
	return static_cast<int>(_ret);
}

void QMainWindow_setTabPosition(QMainWindow* self, int areas, int tabPosition) {
	self->setTabPosition(static_cast<Qt::DockWidgetAreas>(areas), static_cast<QTabWidget::TabPosition>(tabPosition));
}

void QMainWindow_setDockOptions(QMainWindow* self, int options) {
	self->setDockOptions(static_cast<QMainWindow::DockOptions>(options));
}

int QMainWindow_dockOptions(const QMainWindow* self) {
	QMainWindow::DockOptions _ret = self->dockOptions();
	return static_cast<int>(_ret);
}

bool QMainWindow_isSeparator(const QMainWindow* self, QPoint* pos) {
	return self->isSeparator(*pos);
}

QMenuBar* QMainWindow_menuBar(const QMainWindow* self) {
	return self->menuBar();
}

void QMainWindow_setMenuBar(QMainWindow* self, QMenuBar* menubar) {
	self->setMenuBar(menubar);
}

QWidget* QMainWindow_menuWidget(const QMainWindow* self) {
	return self->menuWidget();
}

void QMainWindow_setMenuWidget(QMainWindow* self, QWidget* menubar) {
	self->setMenuWidget(menubar);
}

QStatusBar* QMainWindow_statusBar(const QMainWindow* self) {
	return self->statusBar();
}

void QMainWindow_setStatusBar(QMainWindow* self, QStatusBar* statusbar) {
	self->setStatusBar(statusbar);
}

QWidget* QMainWindow_centralWidget(const QMainWindow* self) {
	return self->centralWidget();
}

void QMainWindow_setCentralWidget(QMainWindow* self, QWidget* widget) {
	self->setCentralWidget(widget);
}

QWidget* QMainWindow_takeCentralWidget(QMainWindow* self) {
	return self->takeCentralWidget();
}

void QMainWindow_setCorner(QMainWindow* self, int corner, int area) {
	self->setCorner(static_cast<Qt::Corner>(corner), static_cast<Qt::DockWidgetArea>(area));
}

int QMainWindow_corner(const QMainWindow* self, int corner) {
	Qt::DockWidgetArea _ret = self->corner(static_cast<Qt::Corner>(corner));
	return static_cast<int>(_ret);
}

void QMainWindow_addToolBarBreak(QMainWindow* self) {
	self->addToolBarBreak();
}

void QMainWindow_insertToolBarBreak(QMainWindow* self, QToolBar* before) {
	self->insertToolBarBreak(before);
}

void QMainWindow_addToolBar(QMainWindow* self, int area, QToolBar* toolbar) {
	self->addToolBar(static_cast<Qt::ToolBarArea>(area), toolbar);
}

void QMainWindow_addToolBarWithToolbar(QMainWindow* self, QToolBar* toolbar) {
	self->addToolBar(toolbar);
}

QToolBar* QMainWindow_addToolBarWithTitle(QMainWindow* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return self->addToolBar(title_QString);
}

void QMainWindow_insertToolBar(QMainWindow* self, QToolBar* before, QToolBar* toolbar) {
	self->insertToolBar(before, toolbar);
}

void QMainWindow_removeToolBar(QMainWindow* self, QToolBar* toolbar) {
	self->removeToolBar(toolbar);
}

void QMainWindow_removeToolBarBreak(QMainWindow* self, QToolBar* before) {
	self->removeToolBarBreak(before);
}

bool QMainWindow_unifiedTitleAndToolBarOnMac(const QMainWindow* self) {
	return self->unifiedTitleAndToolBarOnMac();
}

int QMainWindow_toolBarArea(const QMainWindow* self, QToolBar* toolbar) {
	Qt::ToolBarArea _ret = self->toolBarArea(toolbar);
	return static_cast<int>(_ret);
}

bool QMainWindow_toolBarBreak(const QMainWindow* self, QToolBar* toolbar) {
	return self->toolBarBreak(toolbar);
}

void QMainWindow_addDockWidget(QMainWindow* self, int area, QDockWidget* dockwidget) {
	self->addDockWidget(static_cast<Qt::DockWidgetArea>(area), dockwidget);
}

void QMainWindow_addDockWidget2(QMainWindow* self, int area, QDockWidget* dockwidget, int orientation) {
	self->addDockWidget(static_cast<Qt::DockWidgetArea>(area), dockwidget, static_cast<Qt::Orientation>(orientation));
}

void QMainWindow_splitDockWidget(QMainWindow* self, QDockWidget* after, QDockWidget* dockwidget, int orientation) {
	self->splitDockWidget(after, dockwidget, static_cast<Qt::Orientation>(orientation));
}

void QMainWindow_tabifyDockWidget(QMainWindow* self, QDockWidget* first, QDockWidget* second) {
	self->tabifyDockWidget(first, second);
}

struct miqt_array /* of QDockWidget* */  QMainWindow_tabifiedDockWidgets(const QMainWindow* self, QDockWidget* dockwidget) {
	QList<QDockWidget *> _ret = self->tabifiedDockWidgets(dockwidget);
	// Convert QList<> from C++ memory to manually-managed C memory
	QDockWidget** _arr = static_cast<QDockWidget**>(malloc(sizeof(QDockWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QMainWindow_removeDockWidget(QMainWindow* self, QDockWidget* dockwidget) {
	self->removeDockWidget(dockwidget);
}

bool QMainWindow_restoreDockWidget(QMainWindow* self, QDockWidget* dockwidget) {
	return self->restoreDockWidget(dockwidget);
}

int QMainWindow_dockWidgetArea(const QMainWindow* self, QDockWidget* dockwidget) {
	Qt::DockWidgetArea _ret = self->dockWidgetArea(dockwidget);
	return static_cast<int>(_ret);
}

void QMainWindow_resizeDocks(QMainWindow* self, struct miqt_array /* of QDockWidget* */  docks, struct miqt_array /* of int */  sizes, int orientation) {
	QList<QDockWidget *> docks_QList;
	docks_QList.reserve(docks.len);
	QDockWidget** docks_arr = static_cast<QDockWidget**>(docks.data);
	for(size_t i = 0; i < docks.len; ++i) {
		docks_QList.push_back(docks_arr[i]);
	}
	QList<int> sizes_QList;
	sizes_QList.reserve(sizes.len);
	int* sizes_arr = static_cast<int*>(sizes.data);
	for(size_t i = 0; i < sizes.len; ++i) {
		sizes_QList.push_back(static_cast<int>(sizes_arr[i]));
	}
	self->resizeDocks(docks_QList, sizes_QList, static_cast<Qt::Orientation>(orientation));
}

struct miqt_string QMainWindow_saveState(const QMainWindow* self) {
	QByteArray _qb = self->saveState();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QMainWindow_restoreState(QMainWindow* self, struct miqt_string state) {
	QByteArray state_QByteArray(state.data, state.len);
	return self->restoreState(state_QByteArray);
}

QMenu* QMainWindow_createPopupMenu(QMainWindow* self) {
	return self->createPopupMenu();
}

void QMainWindow_setAnimated(QMainWindow* self, bool enabled) {
	self->setAnimated(enabled);
}

void QMainWindow_setDockNestingEnabled(QMainWindow* self, bool enabled) {
	self->setDockNestingEnabled(enabled);
}

void QMainWindow_setUnifiedTitleAndToolBarOnMac(QMainWindow* self, bool set) {
	self->setUnifiedTitleAndToolBarOnMac(set);
}

void QMainWindow_iconSizeChanged(QMainWindow* self, QSize* iconSize) {
	self->iconSizeChanged(*iconSize);
}

void QMainWindow_connect_iconSizeChanged(QMainWindow* self, intptr_t slot) {
	QMainWindow::connect(self, static_cast<void (QMainWindow::*)(const QSize&)>(&QMainWindow::iconSizeChanged), self, [=](const QSize& iconSize) {
		const QSize& iconSize_ret = iconSize;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&iconSize_ret);
		miqt_exec_callback_QMainWindow_iconSizeChanged(slot, sigval1);
	});
}

void QMainWindow_toolButtonStyleChanged(QMainWindow* self, int toolButtonStyle) {
	self->toolButtonStyleChanged(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QMainWindow_connect_toolButtonStyleChanged(QMainWindow* self, intptr_t slot) {
	QMainWindow::connect(self, static_cast<void (QMainWindow::*)(Qt::ToolButtonStyle)>(&QMainWindow::toolButtonStyleChanged), self, [=](Qt::ToolButtonStyle toolButtonStyle) {
		Qt::ToolButtonStyle toolButtonStyle_ret = toolButtonStyle;
		int sigval1 = static_cast<int>(toolButtonStyle_ret);
		miqt_exec_callback_QMainWindow_toolButtonStyleChanged(slot, sigval1);
	});
}

void QMainWindow_tabifiedDockWidgetActivated(QMainWindow* self, QDockWidget* dockWidget) {
	self->tabifiedDockWidgetActivated(dockWidget);
}

void QMainWindow_connect_tabifiedDockWidgetActivated(QMainWindow* self, intptr_t slot) {
	QMainWindow::connect(self, static_cast<void (QMainWindow::*)(QDockWidget*)>(&QMainWindow::tabifiedDockWidgetActivated), self, [=](QDockWidget* dockWidget) {
		QDockWidget* sigval1 = dockWidget;
		miqt_exec_callback_QMainWindow_tabifiedDockWidgetActivated(slot, sigval1);
	});
}

struct miqt_string QMainWindow_tr2(const char* s, const char* c) {
	QString _ret = QMainWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMainWindow_tr3(const char* s, const char* c, int n) {
	QString _ret = QMainWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMainWindow_addToolBarBreakWithArea(QMainWindow* self, int area) {
	self->addToolBarBreak(static_cast<Qt::ToolBarArea>(area));
}

struct miqt_string QMainWindow_saveStateWithVersion(const QMainWindow* self, int version) {
	QByteArray _qb = self->saveState(static_cast<int>(version));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QMainWindow_restoreState2(QMainWindow* self, struct miqt_string state, int version) {
	QByteArray state_QByteArray(state.data, state.len);
	return self->restoreState(state_QByteArray, static_cast<int>(version));
}

bool QMainWindow_override_virtual_createPopupMenu(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createPopupMenu = slot;
	return true;
}

QMenu* QMainWindow_virtualbase_createPopupMenu(void* self) {
	return static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::createPopupMenu();
}

bool QMainWindow_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QMainWindow_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::contextMenuEvent(event);
}

bool QMainWindow_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QMainWindow_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::event(event);
}

bool QMainWindow_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QMainWindow_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQMainWindow*>(self)->QMainWindow::devType();
}

bool QMainWindow_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QMainWindow_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::setVisible(visible);
}

bool QMainWindow_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QMainWindow_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQMainWindow*>(self)->QMainWindow::sizeHint());
}

bool QMainWindow_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QMainWindow_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQMainWindow*>(self)->QMainWindow::minimumSizeHint());
}

bool QMainWindow_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QMainWindow_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQMainWindow*>(self)->QMainWindow::heightForWidth(static_cast<int>(param1));
}

bool QMainWindow_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QMainWindow_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQMainWindow*>(self)->QMainWindow::hasHeightForWidth();
}

bool QMainWindow_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QMainWindow_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQMainWindow*>(self)->QMainWindow::paintEngine();
}

bool QMainWindow_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QMainWindow_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::mousePressEvent(event);
}

bool QMainWindow_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QMainWindow_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::mouseReleaseEvent(event);
}

bool QMainWindow_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QMainWindow_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::mouseDoubleClickEvent(event);
}

bool QMainWindow_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QMainWindow_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::mouseMoveEvent(event);
}

bool QMainWindow_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QMainWindow_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::wheelEvent(event);
}

bool QMainWindow_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QMainWindow_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::keyPressEvent(event);
}

bool QMainWindow_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QMainWindow_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::keyReleaseEvent(event);
}

bool QMainWindow_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QMainWindow_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::focusInEvent(event);
}

bool QMainWindow_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QMainWindow_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::focusOutEvent(event);
}

bool QMainWindow_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QMainWindow_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::enterEvent(event);
}

bool QMainWindow_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QMainWindow_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::leaveEvent(event);
}

bool QMainWindow_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QMainWindow_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::paintEvent(event);
}

bool QMainWindow_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QMainWindow_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::moveEvent(event);
}

bool QMainWindow_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QMainWindow_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::resizeEvent(event);
}

bool QMainWindow_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QMainWindow_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::closeEvent(event);
}

bool QMainWindow_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QMainWindow_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::tabletEvent(event);
}

bool QMainWindow_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QMainWindow_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::actionEvent(event);
}

bool QMainWindow_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QMainWindow_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::dragEnterEvent(event);
}

bool QMainWindow_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QMainWindow_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::dragMoveEvent(event);
}

bool QMainWindow_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QMainWindow_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::dragLeaveEvent(event);
}

bool QMainWindow_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QMainWindow_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::dropEvent(event);
}

bool QMainWindow_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QMainWindow_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::showEvent(event);
}

bool QMainWindow_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QMainWindow_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::hideEvent(event);
}

bool QMainWindow_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QMainWindow_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool QMainWindow_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QMainWindow_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::changeEvent(param1);
}

bool QMainWindow_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QMainWindow_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQMainWindow*>(self)->QMainWindow::metric(static_cast<MiqtVirtualQMainWindow::PaintDeviceMetric>(param1));
}

bool QMainWindow_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QMainWindow_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQMainWindow*>(self)->QMainWindow::initPainter(painter);
}

bool QMainWindow_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QMainWindow_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQMainWindow*>(self)->QMainWindow::redirected(offset);
}

bool QMainWindow_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QMainWindow_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQMainWindow*>(self)->QMainWindow::sharedPainter();
}

bool QMainWindow_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QMainWindow_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::inputMethodEvent(param1);
}

bool QMainWindow_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QMainWindow_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQMainWindow*>(self)->QMainWindow::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QMainWindow_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QMainWindow_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::focusNextPrevChild(next);
}

bool QMainWindow_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QMainWindow_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::eventFilter(watched, event);
}

bool QMainWindow_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QMainWindow_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::timerEvent(event);
}

bool QMainWindow_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QMainWindow_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::childEvent(event);
}

bool QMainWindow_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QMainWindow_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::customEvent(event);
}

bool QMainWindow_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QMainWindow_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::connectNotify(*signal);
}

bool QMainWindow_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QMainWindow_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQMainWindow*>(self)->QMainWindow::disconnectNotify(*signal);
}

void QMainWindow_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QMainWindow_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QMainWindow_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QMainWindow_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QMainWindow_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QMainWindow_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QMainWindow_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QMainWindow_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QMainWindow_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMainWindow* self_cast = dynamic_cast<MiqtVirtualQMainWindow*>( (QMainWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QMainWindow_delete(QMainWindow* self) {
	delete self;
}

