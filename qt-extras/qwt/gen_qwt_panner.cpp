#include <QActionEvent>
#include <QBitmap>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QCursor>
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
#include <QPixmap>
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
#include <qwt_panner.h>
#include "gen_qwt_panner.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtPanner_panned(intptr_t, int, int);
void miqt_exec_callback_QwtPanner_moved(intptr_t, int, int);
bool miqt_exec_callback_QwtPanner_eventFilter(QwtPanner*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtPanner_widgetMousePressEvent(QwtPanner*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPanner_widgetMouseReleaseEvent(QwtPanner*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPanner_widgetMouseMoveEvent(QwtPanner*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPanner_widgetKeyPressEvent(QwtPanner*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPanner_widgetKeyReleaseEvent(QwtPanner*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPanner_paintEvent(QwtPanner*, intptr_t, QPaintEvent*);
QBitmap* miqt_exec_callback_QwtPanner_contentsMask(const QwtPanner*, intptr_t);
QPixmap* miqt_exec_callback_QwtPanner_grab(const QwtPanner*, intptr_t);
int miqt_exec_callback_QwtPanner_devType(const QwtPanner*, intptr_t);
void miqt_exec_callback_QwtPanner_setVisible(QwtPanner*, intptr_t, bool);
QSize* miqt_exec_callback_QwtPanner_sizeHint(const QwtPanner*, intptr_t);
QSize* miqt_exec_callback_QwtPanner_minimumSizeHint(const QwtPanner*, intptr_t);
int miqt_exec_callback_QwtPanner_heightForWidth(const QwtPanner*, intptr_t, int);
bool miqt_exec_callback_QwtPanner_hasHeightForWidth(const QwtPanner*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtPanner_paintEngine(const QwtPanner*, intptr_t);
bool miqt_exec_callback_QwtPanner_event(QwtPanner*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPanner_mousePressEvent(QwtPanner*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPanner_mouseReleaseEvent(QwtPanner*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPanner_mouseDoubleClickEvent(QwtPanner*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPanner_mouseMoveEvent(QwtPanner*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPanner_wheelEvent(QwtPanner*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtPanner_keyPressEvent(QwtPanner*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPanner_keyReleaseEvent(QwtPanner*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPanner_focusInEvent(QwtPanner*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtPanner_focusOutEvent(QwtPanner*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtPanner_enterEvent(QwtPanner*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPanner_leaveEvent(QwtPanner*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPanner_moveEvent(QwtPanner*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtPanner_resizeEvent(QwtPanner*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtPanner_closeEvent(QwtPanner*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtPanner_contextMenuEvent(QwtPanner*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtPanner_tabletEvent(QwtPanner*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtPanner_actionEvent(QwtPanner*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtPanner_dragEnterEvent(QwtPanner*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtPanner_dragMoveEvent(QwtPanner*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtPanner_dragLeaveEvent(QwtPanner*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtPanner_dropEvent(QwtPanner*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtPanner_showEvent(QwtPanner*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtPanner_hideEvent(QwtPanner*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtPanner_nativeEvent(QwtPanner*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QwtPanner_changeEvent(QwtPanner*, intptr_t, QEvent*);
int miqt_exec_callback_QwtPanner_metric(const QwtPanner*, intptr_t, int);
void miqt_exec_callback_QwtPanner_initPainter(const QwtPanner*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtPanner_redirected(const QwtPanner*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtPanner_sharedPainter(const QwtPanner*, intptr_t);
void miqt_exec_callback_QwtPanner_inputMethodEvent(QwtPanner*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtPanner_inputMethodQuery(const QwtPanner*, intptr_t, int);
bool miqt_exec_callback_QwtPanner_focusNextPrevChild(QwtPanner*, intptr_t, bool);
void miqt_exec_callback_QwtPanner_timerEvent(QwtPanner*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtPanner_childEvent(QwtPanner*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtPanner_customEvent(QwtPanner*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPanner_connectNotify(QwtPanner*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtPanner_disconnectNotify(QwtPanner*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPanner final : public QwtPanner {
public:

	MiqtVirtualQwtPanner(QWidget* parent): QwtPanner(parent) {}

	virtual ~MiqtVirtualQwtPanner() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QwtPanner::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QwtPanner_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPanner_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMousePressEvent(QMouseEvent* param1) override {
		if (handle__widgetMousePressEvent == 0) {
			QwtPanner::widgetMousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPanner_widgetMousePressEvent(this, handle__widgetMousePressEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__widgetMouseReleaseEvent == 0) {
			QwtPanner::widgetMouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPanner_widgetMouseReleaseEvent(this, handle__widgetMouseReleaseEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetMouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseMoveEvent(QMouseEvent* param1) override {
		if (handle__widgetMouseMoveEvent == 0) {
			QwtPanner::widgetMouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPanner_widgetMouseMoveEvent(this, handle__widgetMouseMoveEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetKeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetKeyPressEvent(QKeyEvent* param1) override {
		if (handle__widgetKeyPressEvent == 0) {
			QwtPanner::widgetKeyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtPanner_widgetKeyPressEvent(this, handle__widgetKeyPressEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetKeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void widgetKeyReleaseEvent(QKeyEvent* param1) override {
		if (handle__widgetKeyReleaseEvent == 0) {
			QwtPanner::widgetKeyReleaseEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtPanner_widgetKeyReleaseEvent(this, handle__widgetKeyReleaseEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QwtPanner::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtPanner_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contentsMask = 0;

	// Subclass to allow providing a Go implementation
	virtual QBitmap contentsMask() const override {
		if (handle__contentsMask == 0) {
			return QwtPanner::contentsMask();
		}

		QBitmap* callback_return_value = miqt_exec_callback_QwtPanner_contentsMask(this, handle__contentsMask);
		return *callback_return_value;
	}

	friend QBitmap* QwtPanner_virtualbase_contentsMask(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__grab = 0;

	// Subclass to allow providing a Go implementation
	virtual QPixmap grab() const override {
		if (handle__grab == 0) {
			return QwtPanner::grab();
		}

		QPixmap* callback_return_value = miqt_exec_callback_QwtPanner_grab(this, handle__grab);
		return *callback_return_value;
	}

	friend QPixmap* QwtPanner_virtualbase_grab(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QwtPanner::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtPanner_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtPanner_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QwtPanner::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtPanner_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QwtPanner_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QwtPanner::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtPanner_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtPanner_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QwtPanner::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtPanner_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtPanner_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QwtPanner::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtPanner_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtPanner_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QwtPanner::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtPanner_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QwtPanner_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QwtPanner::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtPanner_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QwtPanner_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QwtPanner::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtPanner_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtPanner_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QwtPanner::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QwtPanner::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QwtPanner::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QwtPanner::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QwtPanner::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QwtPanner::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QwtPanner::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QwtPanner::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QwtPanner::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QwtPanner::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QwtPanner::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QwtPanner::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QwtPanner::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QwtPanner::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QwtPanner::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QwtPanner::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QwtPanner::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QwtPanner::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QwtPanner::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QwtPanner::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QwtPanner::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QwtPanner::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QwtPanner::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QwtPanner::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtPanner_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtPanner_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QwtPanner::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtPanner_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QwtPanner::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtPanner_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtPanner_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QwtPanner::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtPanner_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QwtPanner_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QwtPanner::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtPanner_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtPanner_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QwtPanner::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtPanner_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QwtPanner_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QwtPanner::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtPanner_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QwtPanner::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtPanner_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtPanner_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QwtPanner::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtPanner_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QwtPanner_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtPanner::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtPanner::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtPanner::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPanner_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtPanner_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtPanner::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPanner_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtPanner_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtPanner::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPanner_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtPanner_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtPanner_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtPanner_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtPanner_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtPanner_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtPanner_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtPanner_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPanner_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPanner_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtPanner_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtPanner* QwtPanner_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtPanner(parent);
}

void QwtPanner_virtbase(QwtPanner* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QwtPanner_metaObject(const QwtPanner* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtPanner_metacast(QwtPanner* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtPanner_tr(const char* s) {
	QString _ret = QwtPanner::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPanner_trUtf8(const char* s) {
	QString _ret = QwtPanner::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtPanner_setEnabled(QwtPanner* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QwtPanner_isEnabled(const QwtPanner* self) {
	return self->isEnabled();
}

void QwtPanner_setMouseButton(QwtPanner* self, int param1) {
	self->setMouseButton(static_cast<Qt::MouseButton>(param1));
}

void QwtPanner_getMouseButton(const QwtPanner* self, int* button, int* param2) {
	self->getMouseButton((Qt::MouseButton&)(*button), (Qt::KeyboardModifiers&)(*param2));
}

void QwtPanner_setAbortKey(QwtPanner* self, int key) {
	self->setAbortKey(static_cast<int>(key));
}

void QwtPanner_getAbortKey(const QwtPanner* self, int* key, int* param2) {
	self->getAbortKey(static_cast<int&>(*key), (Qt::KeyboardModifiers&)(*param2));
}

void QwtPanner_setCursor(QwtPanner* self, QCursor* cursor) {
	self->setCursor(*cursor);
}

QCursor* QwtPanner_cursor(const QwtPanner* self) {
	return new QCursor(self->cursor());
}

void QwtPanner_setOrientations(QwtPanner* self, int orientations) {
	self->setOrientations(static_cast<Qt::Orientations>(orientations));
}

int QwtPanner_orientations(const QwtPanner* self) {
	Qt::Orientations _ret = self->orientations();
	return static_cast<int>(_ret);
}

bool QwtPanner_isOrientationEnabled(const QwtPanner* self, int param1) {
	return self->isOrientationEnabled(static_cast<Qt::Orientation>(param1));
}

bool QwtPanner_eventFilter(QwtPanner* self, QObject* param1, QEvent* param2) {
	return self->eventFilter(param1, param2);
}

void QwtPanner_panned(QwtPanner* self, int dx, int dy) {
	self->panned(static_cast<int>(dx), static_cast<int>(dy));
}

void QwtPanner_connect_panned(QwtPanner* self, intptr_t slot) {
	QwtPanner::connect(self, static_cast<void (QwtPanner::*)(int, int)>(&QwtPanner::panned), self, [=](int dx, int dy) {
		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QwtPanner_panned(slot, sigval1, sigval2);
	});
}

void QwtPanner_moved(QwtPanner* self, int dx, int dy) {
	self->moved(static_cast<int>(dx), static_cast<int>(dy));
}

void QwtPanner_connect_moved(QwtPanner* self, intptr_t slot) {
	QwtPanner::connect(self, static_cast<void (QwtPanner::*)(int, int)>(&QwtPanner::moved), self, [=](int dx, int dy) {
		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QwtPanner_moved(slot, sigval1, sigval2);
	});
}

struct miqt_string QwtPanner_tr2(const char* s, const char* c) {
	QString _ret = QwtPanner::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPanner_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtPanner::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPanner_trUtf82(const char* s, const char* c) {
	QString _ret = QwtPanner::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPanner_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtPanner::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtPanner_setMouseButton2(QwtPanner* self, int param1, int param2) {
	self->setMouseButton(static_cast<Qt::MouseButton>(param1), static_cast<Qt::KeyboardModifiers>(param2));
}

void QwtPanner_setAbortKey2(QwtPanner* self, int key, int param2) {
	self->setAbortKey(static_cast<int>(key), static_cast<Qt::KeyboardModifiers>(param2));
}

bool QwtPanner_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtPanner_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::eventFilter(param1, param2);
}

bool QwtPanner_override_virtual_widgetMousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMousePressEvent = slot;
	return true;
}

void QwtPanner_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::widgetMousePressEvent(param1);
}

bool QwtPanner_override_virtual_widgetMouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseReleaseEvent = slot;
	return true;
}

void QwtPanner_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::widgetMouseReleaseEvent(param1);
}

bool QwtPanner_override_virtual_widgetMouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseMoveEvent = slot;
	return true;
}

void QwtPanner_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::widgetMouseMoveEvent(param1);
}

bool QwtPanner_override_virtual_widgetKeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetKeyPressEvent = slot;
	return true;
}

void QwtPanner_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::widgetKeyPressEvent(param1);
}

bool QwtPanner_override_virtual_widgetKeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetKeyReleaseEvent = slot;
	return true;
}

void QwtPanner_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::widgetKeyReleaseEvent(param1);
}

bool QwtPanner_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QwtPanner_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::paintEvent(param1);
}

bool QwtPanner_override_virtual_contentsMask(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contentsMask = slot;
	return true;
}

QBitmap* QwtPanner_virtualbase_contentsMask(const void* self) {
	return new QBitmap(static_cast<const MiqtVirtualQwtPanner*>(self)->QwtPanner::contentsMask());
}

bool QwtPanner_override_virtual_grab(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__grab = slot;
	return true;
}

QPixmap* QwtPanner_virtualbase_grab(const void* self) {
	return new QPixmap(static_cast<const MiqtVirtualQwtPanner*>(self)->QwtPanner::grab());
}

bool QwtPanner_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QwtPanner_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtPanner*>(self)->QwtPanner::devType();
}

bool QwtPanner_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QwtPanner_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::setVisible(visible);
}

bool QwtPanner_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QwtPanner_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtPanner*>(self)->QwtPanner::sizeHint());
}

bool QwtPanner_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QwtPanner_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtPanner*>(self)->QwtPanner::minimumSizeHint());
}

bool QwtPanner_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QwtPanner_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtPanner*>(self)->QwtPanner::heightForWidth(static_cast<int>(param1));
}

bool QwtPanner_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QwtPanner_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtPanner*>(self)->QwtPanner::hasHeightForWidth();
}

bool QwtPanner_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QwtPanner_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtPanner*>(self)->QwtPanner::paintEngine();
}

bool QwtPanner_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtPanner_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::event(event);
}

bool QwtPanner_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QwtPanner_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::mousePressEvent(event);
}

bool QwtPanner_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QwtPanner_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::mouseReleaseEvent(event);
}

bool QwtPanner_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QwtPanner_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::mouseDoubleClickEvent(event);
}

bool QwtPanner_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QwtPanner_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::mouseMoveEvent(event);
}

bool QwtPanner_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QwtPanner_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::wheelEvent(event);
}

bool QwtPanner_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QwtPanner_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::keyPressEvent(event);
}

bool QwtPanner_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QwtPanner_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::keyReleaseEvent(event);
}

bool QwtPanner_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QwtPanner_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::focusInEvent(event);
}

bool QwtPanner_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QwtPanner_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::focusOutEvent(event);
}

bool QwtPanner_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QwtPanner_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::enterEvent(event);
}

bool QwtPanner_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QwtPanner_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::leaveEvent(event);
}

bool QwtPanner_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QwtPanner_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::moveEvent(event);
}

bool QwtPanner_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QwtPanner_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::resizeEvent(event);
}

bool QwtPanner_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QwtPanner_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::closeEvent(event);
}

bool QwtPanner_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QwtPanner_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::contextMenuEvent(event);
}

bool QwtPanner_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QwtPanner_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::tabletEvent(event);
}

bool QwtPanner_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QwtPanner_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::actionEvent(event);
}

bool QwtPanner_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QwtPanner_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::dragEnterEvent(event);
}

bool QwtPanner_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QwtPanner_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::dragMoveEvent(event);
}

bool QwtPanner_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QwtPanner_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::dragLeaveEvent(event);
}

bool QwtPanner_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QwtPanner_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::dropEvent(event);
}

bool QwtPanner_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QwtPanner_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::showEvent(event);
}

bool QwtPanner_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QwtPanner_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::hideEvent(event);
}

bool QwtPanner_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QwtPanner_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtPanner_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QwtPanner_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::changeEvent(param1);
}

bool QwtPanner_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QwtPanner_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtPanner*>(self)->QwtPanner::metric(static_cast<MiqtVirtualQwtPanner::PaintDeviceMetric>(param1));
}

bool QwtPanner_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QwtPanner_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtPanner*>(self)->QwtPanner::initPainter(painter);
}

bool QwtPanner_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QwtPanner_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtPanner*>(self)->QwtPanner::redirected(offset);
}

bool QwtPanner_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QwtPanner_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtPanner*>(self)->QwtPanner::sharedPainter();
}

bool QwtPanner_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QwtPanner_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::inputMethodEvent(param1);
}

bool QwtPanner_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QwtPanner_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtPanner*>(self)->QwtPanner::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtPanner_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QwtPanner_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::focusNextPrevChild(next);
}

bool QwtPanner_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtPanner_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::timerEvent(event);
}

bool QwtPanner_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtPanner_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::childEvent(event);
}

bool QwtPanner_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtPanner_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::customEvent(event);
}

bool QwtPanner_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtPanner_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::connectNotify(*signal);
}

bool QwtPanner_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtPanner_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPanner*>(self)->QwtPanner::disconnectNotify(*signal);
}

void QwtPanner_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtPanner_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtPanner_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtPanner_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtPanner_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtPanner_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtPanner_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtPanner_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtPanner_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtPanner* self_cast = dynamic_cast<MiqtVirtualQwtPanner*>( (QwtPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtPanner_delete(QwtPanner* self) {
	delete self;
}

