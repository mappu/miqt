#include <QAbstractScrollArea>
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
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMargins>
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
#include <QScrollArea>
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
#include <qscrollarea.h>
#include "gen_qscrollarea.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QScrollArea_sizeHint(const QScrollArea*, intptr_t);
bool miqt_exec_callback_QScrollArea_focusNextPrevChild(QScrollArea*, intptr_t, bool);
bool miqt_exec_callback_QScrollArea_event(QScrollArea*, intptr_t, QEvent*);
bool miqt_exec_callback_QScrollArea_eventFilter(QScrollArea*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScrollArea_resizeEvent(QScrollArea*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QScrollArea_scrollContentsBy(QScrollArea*, intptr_t, int, int);
QSize* miqt_exec_callback_QScrollArea_viewportSizeHint(const QScrollArea*, intptr_t);
QSize* miqt_exec_callback_QScrollArea_minimumSizeHint(const QScrollArea*, intptr_t);
void miqt_exec_callback_QScrollArea_setupViewport(QScrollArea*, intptr_t, QWidget*);
bool miqt_exec_callback_QScrollArea_viewportEvent(QScrollArea*, intptr_t, QEvent*);
void miqt_exec_callback_QScrollArea_paintEvent(QScrollArea*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QScrollArea_mousePressEvent(QScrollArea*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollArea_mouseReleaseEvent(QScrollArea*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollArea_mouseDoubleClickEvent(QScrollArea*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollArea_mouseMoveEvent(QScrollArea*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QScrollArea_wheelEvent(QScrollArea*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QScrollArea_contextMenuEvent(QScrollArea*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QScrollArea_dragEnterEvent(QScrollArea*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QScrollArea_dragMoveEvent(QScrollArea*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QScrollArea_dragLeaveEvent(QScrollArea*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QScrollArea_dropEvent(QScrollArea*, intptr_t, QDropEvent*);
void miqt_exec_callback_QScrollArea_keyPressEvent(QScrollArea*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QScrollArea_changeEvent(QScrollArea*, intptr_t, QEvent*);
int miqt_exec_callback_QScrollArea_devType(const QScrollArea*, intptr_t);
void miqt_exec_callback_QScrollArea_setVisible(QScrollArea*, intptr_t, bool);
int miqt_exec_callback_QScrollArea_heightForWidth(const QScrollArea*, intptr_t, int);
bool miqt_exec_callback_QScrollArea_hasHeightForWidth(const QScrollArea*, intptr_t);
QPaintEngine* miqt_exec_callback_QScrollArea_paintEngine(const QScrollArea*, intptr_t);
void miqt_exec_callback_QScrollArea_keyReleaseEvent(QScrollArea*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QScrollArea_focusInEvent(QScrollArea*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QScrollArea_focusOutEvent(QScrollArea*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QScrollArea_enterEvent(QScrollArea*, intptr_t, QEvent*);
void miqt_exec_callback_QScrollArea_leaveEvent(QScrollArea*, intptr_t, QEvent*);
void miqt_exec_callback_QScrollArea_moveEvent(QScrollArea*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QScrollArea_closeEvent(QScrollArea*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QScrollArea_tabletEvent(QScrollArea*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QScrollArea_actionEvent(QScrollArea*, intptr_t, QActionEvent*);
void miqt_exec_callback_QScrollArea_showEvent(QScrollArea*, intptr_t, QShowEvent*);
void miqt_exec_callback_QScrollArea_hideEvent(QScrollArea*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QScrollArea_nativeEvent(QScrollArea*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QScrollArea_metric(const QScrollArea*, intptr_t, int);
void miqt_exec_callback_QScrollArea_initPainter(const QScrollArea*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QScrollArea_redirected(const QScrollArea*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QScrollArea_sharedPainter(const QScrollArea*, intptr_t);
void miqt_exec_callback_QScrollArea_inputMethodEvent(QScrollArea*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QScrollArea_inputMethodQuery(const QScrollArea*, intptr_t, int);
void miqt_exec_callback_QScrollArea_timerEvent(QScrollArea*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScrollArea_childEvent(QScrollArea*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScrollArea_customEvent(QScrollArea*, intptr_t, QEvent*);
void miqt_exec_callback_QScrollArea_connectNotify(QScrollArea*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScrollArea_disconnectNotify(QScrollArea*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScrollArea final : public QScrollArea {
public:

	MiqtVirtualQScrollArea(QWidget* parent): QScrollArea(parent) {}
	MiqtVirtualQScrollArea(): QScrollArea() {}

	virtual ~MiqtVirtualQScrollArea() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QScrollArea::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QScrollArea_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QScrollArea_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QScrollArea::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QScrollArea_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QScrollArea_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QScrollArea::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QScrollArea_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QScrollArea_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QScrollArea::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QScrollArea_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QScrollArea_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QScrollArea::resizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QScrollArea_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QScrollArea::scrollContentsBy(dx, dy);
			return;
		}

		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QScrollArea_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

	}

	friend void QScrollArea_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QScrollArea::viewportSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QScrollArea_viewportSizeHint(this, handle__viewportSizeHint);
		return *callback_return_value;
	}

	friend QSize* QScrollArea_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QScrollArea::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QScrollArea_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QScrollArea_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QScrollArea::setupViewport(viewport);
			return;
		}

		QWidget* sigval1 = viewport;
		miqt_exec_callback_QScrollArea_setupViewport(this, handle__setupViewport, sigval1);

	}

	friend void QScrollArea_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__viewportEvent == 0) {
			return QScrollArea::viewportEvent(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QScrollArea_viewportEvent(this, handle__viewportEvent, sigval1);
		return callback_return_value;
	}

	friend bool QScrollArea_virtualbase_viewportEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QScrollArea::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QScrollArea_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QScrollArea::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QScrollArea_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QScrollArea::mouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QScrollArea_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QScrollArea::mouseDoubleClickEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QScrollArea_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QScrollArea::mouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QScrollArea_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QScrollArea::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QScrollArea_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QScrollArea::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QScrollArea_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* param1) override {
		if (handle__dragEnterEvent == 0) {
			QScrollArea::dragEnterEvent(param1);
			return;
		}

		QDragEnterEvent* sigval1 = param1;
		miqt_exec_callback_QScrollArea_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* param1) override {
		if (handle__dragMoveEvent == 0) {
			QScrollArea::dragMoveEvent(param1);
			return;
		}

		QDragMoveEvent* sigval1 = param1;
		miqt_exec_callback_QScrollArea_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
		if (handle__dragLeaveEvent == 0) {
			QScrollArea::dragLeaveEvent(param1);
			return;
		}

		QDragLeaveEvent* sigval1 = param1;
		miqt_exec_callback_QScrollArea_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* param1) override {
		if (handle__dropEvent == 0) {
			QScrollArea::dropEvent(param1);
			return;
		}

		QDropEvent* sigval1 = param1;
		miqt_exec_callback_QScrollArea_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_dropEvent(void* self, QDropEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QScrollArea::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QScrollArea_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QScrollArea::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QScrollArea_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QScrollArea::devType();
		}

		int callback_return_value = miqt_exec_callback_QScrollArea_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QScrollArea_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QScrollArea::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QScrollArea_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QScrollArea_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QScrollArea::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QScrollArea_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QScrollArea_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QScrollArea::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QScrollArea_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QScrollArea_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QScrollArea::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QScrollArea_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QScrollArea_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QScrollArea::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QScrollArea_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QScrollArea::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QScrollArea_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QScrollArea::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QScrollArea_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QScrollArea::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QScrollArea_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QScrollArea::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QScrollArea_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QScrollArea::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QScrollArea_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QScrollArea::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QScrollArea_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QScrollArea::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QScrollArea_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QScrollArea::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QScrollArea_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QScrollArea::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QScrollArea_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QScrollArea::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QScrollArea_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QScrollArea::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QScrollArea_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QScrollArea_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QScrollArea::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QScrollArea_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QScrollArea_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QScrollArea::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QScrollArea_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QScrollArea_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QScrollArea::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QScrollArea_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QScrollArea_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QScrollArea::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QScrollArea_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QScrollArea_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QScrollArea::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QScrollArea_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QScrollArea::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QScrollArea_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QScrollArea_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QScrollArea::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QScrollArea_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QScrollArea::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QScrollArea_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QScrollArea::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QScrollArea_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QScrollArea_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QScrollArea::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScrollArea_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QScrollArea_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QScrollArea::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScrollArea_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QScrollArea_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QScrollArea_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QScrollArea_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QScrollArea_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QScrollArea_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QScrollArea_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QScrollArea_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QScrollArea_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QScrollArea_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QScrollArea_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QScrollArea_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QScrollArea_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QScrollArea_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QScrollArea_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QScrollArea* QScrollArea_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQScrollArea(parent);
}

QScrollArea* QScrollArea_new2() {
	return new (std::nothrow) MiqtVirtualQScrollArea();
}

void QScrollArea_virtbase(QScrollArea* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* QScrollArea_metaObject(const QScrollArea* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScrollArea_metacast(QScrollArea* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScrollArea_tr(const char* s) {
	QString _ret = QScrollArea::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScrollArea_trUtf8(const char* s) {
	QString _ret = QScrollArea::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWidget* QScrollArea_widget(const QScrollArea* self) {
	return self->widget();
}

void QScrollArea_setWidget(QScrollArea* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QScrollArea_takeWidget(QScrollArea* self) {
	return self->takeWidget();
}

bool QScrollArea_widgetResizable(const QScrollArea* self) {
	return self->widgetResizable();
}

void QScrollArea_setWidgetResizable(QScrollArea* self, bool resizable) {
	self->setWidgetResizable(resizable);
}

QSize* QScrollArea_sizeHint(const QScrollArea* self) {
	return new QSize(self->sizeHint());
}

bool QScrollArea_focusNextPrevChild(QScrollArea* self, bool next) {
	return self->focusNextPrevChild(next);
}

int QScrollArea_alignment(const QScrollArea* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QScrollArea_setAlignment(QScrollArea* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

void QScrollArea_ensureVisible(QScrollArea* self, int x, int y) {
	self->ensureVisible(static_cast<int>(x), static_cast<int>(y));
}

void QScrollArea_ensureWidgetVisible(QScrollArea* self, QWidget* childWidget) {
	self->ensureWidgetVisible(childWidget);
}

struct miqt_string QScrollArea_tr2(const char* s, const char* c) {
	QString _ret = QScrollArea::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScrollArea_tr3(const char* s, const char* c, int n) {
	QString _ret = QScrollArea::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScrollArea_trUtf82(const char* s, const char* c) {
	QString _ret = QScrollArea::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScrollArea_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QScrollArea::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScrollArea_ensureVisible2(QScrollArea* self, int x, int y, int xmargin) {
	self->ensureVisible(static_cast<int>(x), static_cast<int>(y), static_cast<int>(xmargin));
}

void QScrollArea_ensureVisible3(QScrollArea* self, int x, int y, int xmargin, int ymargin) {
	self->ensureVisible(static_cast<int>(x), static_cast<int>(y), static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QScrollArea_ensureWidgetVisible2(QScrollArea* self, QWidget* childWidget, int xmargin) {
	self->ensureWidgetVisible(childWidget, static_cast<int>(xmargin));
}

void QScrollArea_ensureWidgetVisible3(QScrollArea* self, QWidget* childWidget, int xmargin, int ymargin) {
	self->ensureWidgetVisible(childWidget, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

bool QScrollArea_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QScrollArea_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQScrollArea*>(self)->QScrollArea::sizeHint());
}

bool QScrollArea_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QScrollArea_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::focusNextPrevChild(next);
}

bool QScrollArea_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QScrollArea_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::event(param1);
}

bool QScrollArea_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QScrollArea_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::eventFilter(param1, param2);
}

bool QScrollArea_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QScrollArea_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::resizeEvent(param1);
}

bool QScrollArea_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QScrollArea_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
}

bool QScrollArea_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QScrollArea_virtualbase_viewportSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQScrollArea*>(self)->QScrollArea::viewportSizeHint());
}

bool QScrollArea_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QScrollArea_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQScrollArea*>(self)->QScrollArea::minimumSizeHint());
}

bool QScrollArea_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupViewport = slot;
	return true;
}

void QScrollArea_virtualbase_setupViewport(void* self, QWidget* viewport) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::setupViewport(viewport);
}

bool QScrollArea_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QScrollArea_virtualbase_viewportEvent(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::viewportEvent(param1);
}

bool QScrollArea_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QScrollArea_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::paintEvent(param1);
}

bool QScrollArea_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QScrollArea_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::mousePressEvent(param1);
}

bool QScrollArea_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QScrollArea_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::mouseReleaseEvent(param1);
}

bool QScrollArea_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QScrollArea_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::mouseDoubleClickEvent(param1);
}

bool QScrollArea_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QScrollArea_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::mouseMoveEvent(param1);
}

bool QScrollArea_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QScrollArea_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::wheelEvent(param1);
}

bool QScrollArea_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QScrollArea_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::contextMenuEvent(param1);
}

bool QScrollArea_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QScrollArea_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::dragEnterEvent(param1);
}

bool QScrollArea_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QScrollArea_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* param1) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::dragMoveEvent(param1);
}

bool QScrollArea_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QScrollArea_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* param1) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::dragLeaveEvent(param1);
}

bool QScrollArea_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QScrollArea_virtualbase_dropEvent(void* self, QDropEvent* param1) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::dropEvent(param1);
}

bool QScrollArea_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QScrollArea_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::keyPressEvent(param1);
}

bool QScrollArea_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QScrollArea_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::changeEvent(param1);
}

bool QScrollArea_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QScrollArea_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQScrollArea*>(self)->QScrollArea::devType();
}

bool QScrollArea_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QScrollArea_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::setVisible(visible);
}

bool QScrollArea_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QScrollArea_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQScrollArea*>(self)->QScrollArea::heightForWidth(static_cast<int>(param1));
}

bool QScrollArea_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QScrollArea_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQScrollArea*>(self)->QScrollArea::hasHeightForWidth();
}

bool QScrollArea_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QScrollArea_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQScrollArea*>(self)->QScrollArea::paintEngine();
}

bool QScrollArea_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QScrollArea_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::keyReleaseEvent(event);
}

bool QScrollArea_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QScrollArea_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::focusInEvent(event);
}

bool QScrollArea_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QScrollArea_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::focusOutEvent(event);
}

bool QScrollArea_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QScrollArea_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::enterEvent(event);
}

bool QScrollArea_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QScrollArea_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::leaveEvent(event);
}

bool QScrollArea_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QScrollArea_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::moveEvent(event);
}

bool QScrollArea_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QScrollArea_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::closeEvent(event);
}

bool QScrollArea_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QScrollArea_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::tabletEvent(event);
}

bool QScrollArea_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QScrollArea_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::actionEvent(event);
}

bool QScrollArea_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QScrollArea_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::showEvent(event);
}

bool QScrollArea_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QScrollArea_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::hideEvent(event);
}

bool QScrollArea_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QScrollArea_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QScrollArea_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QScrollArea_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQScrollArea*>(self)->QScrollArea::metric(static_cast<MiqtVirtualQScrollArea::PaintDeviceMetric>(param1));
}

bool QScrollArea_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QScrollArea_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQScrollArea*>(self)->QScrollArea::initPainter(painter);
}

bool QScrollArea_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QScrollArea_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQScrollArea*>(self)->QScrollArea::redirected(offset);
}

bool QScrollArea_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QScrollArea_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQScrollArea*>(self)->QScrollArea::sharedPainter();
}

bool QScrollArea_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QScrollArea_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::inputMethodEvent(param1);
}

bool QScrollArea_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QScrollArea_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQScrollArea*>(self)->QScrollArea::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QScrollArea_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QScrollArea_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::timerEvent(event);
}

bool QScrollArea_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QScrollArea_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::childEvent(event);
}

bool QScrollArea_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QScrollArea_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::customEvent(event);
}

bool QScrollArea_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QScrollArea_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::connectNotify(*signal);
}

bool QScrollArea_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QScrollArea_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScrollArea*>(self)->QScrollArea::disconnectNotify(*signal);
}

void QScrollArea_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QScrollArea_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QMargins(self_cast->viewportMargins());
}

void QScrollArea_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QScrollArea_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QScrollArea_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QScrollArea_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QScrollArea_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QScrollArea_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QScrollArea_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QScrollArea_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QScrollArea_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QScrollArea_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QScrollArea_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQScrollArea* self_cast = dynamic_cast<MiqtVirtualQScrollArea*>( (QScrollArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QScrollArea_delete(QScrollArea* self) {
	delete self;
}

