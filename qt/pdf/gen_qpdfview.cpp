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
#include <QPdfDocument>
#include <QPdfPageNavigation>
#include <QPdfView>
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
#include <qpdfview.h>
#include "gen_qpdfview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPdfView_documentChanged(intptr_t, QPdfDocument*);
void miqt_exec_callback_QPdfView_pageModeChanged(intptr_t, int);
void miqt_exec_callback_QPdfView_zoomModeChanged(intptr_t, int);
void miqt_exec_callback_QPdfView_zoomFactorChanged(intptr_t, double);
void miqt_exec_callback_QPdfView_pageSpacingChanged(intptr_t, int);
void miqt_exec_callback_QPdfView_documentMarginsChanged(intptr_t, QMargins*);
void miqt_exec_callback_QPdfView_paintEvent(QPdfView*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPdfView_resizeEvent(QPdfView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPdfView_scrollContentsBy(QPdfView*, intptr_t, int, int);
QSize* miqt_exec_callback_QPdfView_minimumSizeHint(const QPdfView*, intptr_t);
QSize* miqt_exec_callback_QPdfView_sizeHint(const QPdfView*, intptr_t);
void miqt_exec_callback_QPdfView_setupViewport(QPdfView*, intptr_t, QWidget*);
bool miqt_exec_callback_QPdfView_eventFilter(QPdfView*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QPdfView_event(QPdfView*, intptr_t, QEvent*);
bool miqt_exec_callback_QPdfView_viewportEvent(QPdfView*, intptr_t, QEvent*);
void miqt_exec_callback_QPdfView_mousePressEvent(QPdfView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPdfView_mouseReleaseEvent(QPdfView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPdfView_mouseDoubleClickEvent(QPdfView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPdfView_mouseMoveEvent(QPdfView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPdfView_wheelEvent(QPdfView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QPdfView_contextMenuEvent(QPdfView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QPdfView_dragEnterEvent(QPdfView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPdfView_dragMoveEvent(QPdfView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPdfView_dragLeaveEvent(QPdfView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPdfView_dropEvent(QPdfView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPdfView_keyPressEvent(QPdfView*, intptr_t, QKeyEvent*);
QSize* miqt_exec_callback_QPdfView_viewportSizeHint(const QPdfView*, intptr_t);
void miqt_exec_callback_QPdfView_changeEvent(QPdfView*, intptr_t, QEvent*);
int miqt_exec_callback_QPdfView_devType(const QPdfView*, intptr_t);
void miqt_exec_callback_QPdfView_setVisible(QPdfView*, intptr_t, bool);
int miqt_exec_callback_QPdfView_heightForWidth(const QPdfView*, intptr_t, int);
bool miqt_exec_callback_QPdfView_hasHeightForWidth(const QPdfView*, intptr_t);
QPaintEngine* miqt_exec_callback_QPdfView_paintEngine(const QPdfView*, intptr_t);
void miqt_exec_callback_QPdfView_keyReleaseEvent(QPdfView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPdfView_focusInEvent(QPdfView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPdfView_focusOutEvent(QPdfView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPdfView_enterEvent(QPdfView*, intptr_t, QEvent*);
void miqt_exec_callback_QPdfView_leaveEvent(QPdfView*, intptr_t, QEvent*);
void miqt_exec_callback_QPdfView_moveEvent(QPdfView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPdfView_closeEvent(QPdfView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPdfView_tabletEvent(QPdfView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPdfView_actionEvent(QPdfView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPdfView_showEvent(QPdfView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPdfView_hideEvent(QPdfView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPdfView_nativeEvent(QPdfView*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QPdfView_metric(const QPdfView*, intptr_t, int);
void miqt_exec_callback_QPdfView_initPainter(const QPdfView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPdfView_redirected(const QPdfView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPdfView_sharedPainter(const QPdfView*, intptr_t);
void miqt_exec_callback_QPdfView_inputMethodEvent(QPdfView*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QPdfView_inputMethodQuery(const QPdfView*, intptr_t, int);
bool miqt_exec_callback_QPdfView_focusNextPrevChild(QPdfView*, intptr_t, bool);
void miqt_exec_callback_QPdfView_timerEvent(QPdfView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPdfView_childEvent(QPdfView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPdfView_customEvent(QPdfView*, intptr_t, QEvent*);
void miqt_exec_callback_QPdfView_connectNotify(QPdfView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPdfView_disconnectNotify(QPdfView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPdfView final : public QPdfView {
public:

	MiqtVirtualQPdfView(QWidget* parent): QPdfView(parent) {}
	MiqtVirtualQPdfView(): QPdfView() {}

	virtual ~MiqtVirtualQPdfView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QPdfView::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QPdfView_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QPdfView::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QPdfView_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QPdfView::scrollContentsBy(dx, dy);
			return;
		}

		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QPdfView_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

	}

	friend void QPdfView_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QPdfView::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QPdfView_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QPdfView_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QPdfView::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QPdfView_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QPdfView_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (handle__setupViewport == 0) {
			QPdfView::setupViewport(viewport);
			return;
		}

		QWidget* sigval1 = viewport;
		miqt_exec_callback_QPdfView_setupViewport(this, handle__setupViewport, sigval1);

	}

	friend void QPdfView_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QPdfView::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QPdfView_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPdfView_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QPdfView::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QPdfView_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QPdfView_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (handle__viewportEvent == 0) {
			return QPdfView::viewportEvent(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QPdfView_viewportEvent(this, handle__viewportEvent, sigval1);
		return callback_return_value;
	}

	friend bool QPdfView_virtualbase_viewportEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QPdfView::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QPdfView_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QPdfView_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QPdfView::mouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QPdfView_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QPdfView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QPdfView::mouseDoubleClickEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QPdfView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QPdfView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QPdfView::mouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QPdfView_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QPdfView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QPdfView::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QPdfView_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QPdfView_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QPdfView::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QPdfView_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QPdfView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* param1) override {
		if (handle__dragEnterEvent == 0) {
			QPdfView::dragEnterEvent(param1);
			return;
		}

		QDragEnterEvent* sigval1 = param1;
		miqt_exec_callback_QPdfView_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QPdfView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* param1) override {
		if (handle__dragMoveEvent == 0) {
			QPdfView::dragMoveEvent(param1);
			return;
		}

		QDragMoveEvent* sigval1 = param1;
		miqt_exec_callback_QPdfView_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QPdfView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
		if (handle__dragLeaveEvent == 0) {
			QPdfView::dragLeaveEvent(param1);
			return;
		}

		QDragLeaveEvent* sigval1 = param1;
		miqt_exec_callback_QPdfView_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QPdfView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* param1) override {
		if (handle__dropEvent == 0) {
			QPdfView::dropEvent(param1);
			return;
		}

		QDropEvent* sigval1 = param1;
		miqt_exec_callback_QPdfView_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QPdfView_virtualbase_dropEvent(void* self, QDropEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QPdfView::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QPdfView_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QPdfView_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QPdfView::viewportSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QPdfView_viewportSizeHint(this, handle__viewportSizeHint);
		return *callback_return_value;
	}

	friend QSize* QPdfView_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QPdfView::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QPdfView_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QPdfView_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QPdfView::devType();
		}

		int callback_return_value = miqt_exec_callback_QPdfView_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QPdfView_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QPdfView::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QPdfView_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QPdfView_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QPdfView::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QPdfView_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QPdfView_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QPdfView::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QPdfView_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QPdfView_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QPdfView::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QPdfView_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QPdfView_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QPdfView::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QPdfView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QPdfView::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QPdfView_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QPdfView::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QPdfView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QPdfView::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QPdfView_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QPdfView::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QPdfView_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QPdfView::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QPdfView_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QPdfView::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QPdfView_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QPdfView::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QPdfView_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QPdfView::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QPdfView_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QPdfView::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QPdfView_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QPdfView::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QPdfView_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QPdfView::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QPdfView_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QPdfView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QPdfView::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QPdfView_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QPdfView_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QPdfView::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QPdfView_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QPdfView_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QPdfView::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QPdfView_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QPdfView_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QPdfView::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QPdfView_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QPdfView_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QPdfView::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QPdfView_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QPdfView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QPdfView::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QPdfView_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QPdfView_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QPdfView::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QPdfView_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QPdfView_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPdfView::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QPdfView_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPdfView::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QPdfView_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPdfView::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPdfView_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QPdfView_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPdfView::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPdfView_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QPdfView_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPdfView::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPdfView_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QPdfView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QPdfView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QPdfView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QPdfView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QPdfView_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QPdfView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QPdfView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QPdfView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QPdfView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QPdfView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QPdfView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPdfView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPdfView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPdfView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPdfView* QPdfView_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQPdfView(parent);
}

QPdfView* QPdfView_new2() {
	return new (std::nothrow) MiqtVirtualQPdfView();
}

void QPdfView_virtbase(QPdfView* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* QPdfView_metaObject(const QPdfView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPdfView_metacast(QPdfView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPdfView_tr(const char* s) {
	QString _ret = QPdfView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfView_trUtf8(const char* s) {
	QString _ret = QPdfView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPdfView_setDocument(QPdfView* self, QPdfDocument* document) {
	self->setDocument(document);
}

QPdfDocument* QPdfView_document(const QPdfView* self) {
	return self->document();
}

QPdfPageNavigation* QPdfView_pageNavigation(const QPdfView* self) {
	return self->pageNavigation();
}

int QPdfView_pageMode(const QPdfView* self) {
	QPdfView::PageMode _ret = self->pageMode();
	return static_cast<int>(_ret);
}

int QPdfView_zoomMode(const QPdfView* self) {
	QPdfView::ZoomMode _ret = self->zoomMode();
	return static_cast<int>(_ret);
}

double QPdfView_zoomFactor(const QPdfView* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

int QPdfView_pageSpacing(const QPdfView* self) {
	return self->pageSpacing();
}

void QPdfView_setPageSpacing(QPdfView* self, int spacing) {
	self->setPageSpacing(static_cast<int>(spacing));
}

QMargins* QPdfView_documentMargins(const QPdfView* self) {
	return new QMargins(self->documentMargins());
}

void QPdfView_setDocumentMargins(QPdfView* self, QMargins* margins) {
	self->setDocumentMargins(*margins);
}

void QPdfView_setPageMode(QPdfView* self, int mode) {
	self->setPageMode(static_cast<QPdfView::PageMode>(mode));
}

void QPdfView_setZoomMode(QPdfView* self, int mode) {
	self->setZoomMode(static_cast<QPdfView::ZoomMode>(mode));
}

void QPdfView_setZoomFactor(QPdfView* self, double factor) {
	self->setZoomFactor(static_cast<qreal>(factor));
}

void QPdfView_documentChanged(QPdfView* self, QPdfDocument* document) {
	self->documentChanged(document);
}

void QPdfView_connect_documentChanged(QPdfView* self, intptr_t slot) {
	QPdfView::connect(self, static_cast<void (QPdfView::*)(QPdfDocument*)>(&QPdfView::documentChanged), self, [=](QPdfDocument* document) {
		QPdfDocument* sigval1 = document;
		miqt_exec_callback_QPdfView_documentChanged(slot, sigval1);
	});
}

void QPdfView_pageModeChanged(QPdfView* self, int pageMode) {
	self->pageModeChanged(static_cast<QPdfView::PageMode>(pageMode));
}

void QPdfView_connect_pageModeChanged(QPdfView* self, intptr_t slot) {
	QPdfView::connect(self, static_cast<void (QPdfView::*)(QPdfView::PageMode)>(&QPdfView::pageModeChanged), self, [=](QPdfView::PageMode pageMode) {
		QPdfView::PageMode pageMode_ret = pageMode;
		int sigval1 = static_cast<int>(pageMode_ret);
		miqt_exec_callback_QPdfView_pageModeChanged(slot, sigval1);
	});
}

void QPdfView_zoomModeChanged(QPdfView* self, int zoomMode) {
	self->zoomModeChanged(static_cast<QPdfView::ZoomMode>(zoomMode));
}

void QPdfView_connect_zoomModeChanged(QPdfView* self, intptr_t slot) {
	QPdfView::connect(self, static_cast<void (QPdfView::*)(QPdfView::ZoomMode)>(&QPdfView::zoomModeChanged), self, [=](QPdfView::ZoomMode zoomMode) {
		QPdfView::ZoomMode zoomMode_ret = zoomMode;
		int sigval1 = static_cast<int>(zoomMode_ret);
		miqt_exec_callback_QPdfView_zoomModeChanged(slot, sigval1);
	});
}

void QPdfView_zoomFactorChanged(QPdfView* self, double zoomFactor) {
	self->zoomFactorChanged(static_cast<qreal>(zoomFactor));
}

void QPdfView_connect_zoomFactorChanged(QPdfView* self, intptr_t slot) {
	QPdfView::connect(self, static_cast<void (QPdfView::*)(qreal)>(&QPdfView::zoomFactorChanged), self, [=](qreal zoomFactor) {
		qreal zoomFactor_ret = zoomFactor;
		double sigval1 = static_cast<double>(zoomFactor_ret);
		miqt_exec_callback_QPdfView_zoomFactorChanged(slot, sigval1);
	});
}

void QPdfView_pageSpacingChanged(QPdfView* self, int pageSpacing) {
	self->pageSpacingChanged(static_cast<int>(pageSpacing));
}

void QPdfView_connect_pageSpacingChanged(QPdfView* self, intptr_t slot) {
	QPdfView::connect(self, static_cast<void (QPdfView::*)(int)>(&QPdfView::pageSpacingChanged), self, [=](int pageSpacing) {
		int sigval1 = pageSpacing;
		miqt_exec_callback_QPdfView_pageSpacingChanged(slot, sigval1);
	});
}

void QPdfView_documentMarginsChanged(QPdfView* self, QMargins* documentMargins) {
	self->documentMarginsChanged(*documentMargins);
}

void QPdfView_connect_documentMarginsChanged(QPdfView* self, intptr_t slot) {
	QPdfView::connect(self, static_cast<void (QPdfView::*)(QMargins)>(&QPdfView::documentMarginsChanged), self, [=](QMargins documentMargins) {
		QMargins* sigval1 = new QMargins(documentMargins);
		miqt_exec_callback_QPdfView_documentMarginsChanged(slot, sigval1);
	});
}

struct miqt_string QPdfView_tr2(const char* s, const char* c) {
	QString _ret = QPdfView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfView_tr3(const char* s, const char* c, int n) {
	QString _ret = QPdfView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfView_trUtf82(const char* s, const char* c) {
	QString _ret = QPdfView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfView_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPdfView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPdfView_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QPdfView_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::paintEvent(event);
}

bool QPdfView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QPdfView_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::resizeEvent(event);
}

bool QPdfView_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QPdfView_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
}

bool QPdfView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QPdfView_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQPdfView*>(self)->QPdfView::minimumSizeHint());
}

bool QPdfView_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QPdfView_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQPdfView*>(self)->QPdfView::sizeHint());
}

bool QPdfView_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupViewport = slot;
	return true;
}

void QPdfView_virtualbase_setupViewport(void* self, QWidget* viewport) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::setupViewport(viewport);
}

bool QPdfView_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPdfView_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::eventFilter(param1, param2);
}

bool QPdfView_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QPdfView_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::event(param1);
}

bool QPdfView_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QPdfView_virtualbase_viewportEvent(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::viewportEvent(param1);
}

bool QPdfView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QPdfView_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::mousePressEvent(param1);
}

bool QPdfView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QPdfView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::mouseReleaseEvent(param1);
}

bool QPdfView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QPdfView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::mouseDoubleClickEvent(param1);
}

bool QPdfView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QPdfView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::mouseMoveEvent(param1);
}

bool QPdfView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QPdfView_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::wheelEvent(param1);
}

bool QPdfView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QPdfView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::contextMenuEvent(param1);
}

bool QPdfView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QPdfView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::dragEnterEvent(param1);
}

bool QPdfView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QPdfView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* param1) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::dragMoveEvent(param1);
}

bool QPdfView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QPdfView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* param1) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::dragLeaveEvent(param1);
}

bool QPdfView_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QPdfView_virtualbase_dropEvent(void* self, QDropEvent* param1) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::dropEvent(param1);
}

bool QPdfView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QPdfView_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::keyPressEvent(param1);
}

bool QPdfView_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QPdfView_virtualbase_viewportSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQPdfView*>(self)->QPdfView::viewportSizeHint());
}

bool QPdfView_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QPdfView_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::changeEvent(param1);
}

bool QPdfView_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QPdfView_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQPdfView*>(self)->QPdfView::devType();
}

bool QPdfView_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QPdfView_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::setVisible(visible);
}

bool QPdfView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QPdfView_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQPdfView*>(self)->QPdfView::heightForWidth(static_cast<int>(param1));
}

bool QPdfView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QPdfView_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQPdfView*>(self)->QPdfView::hasHeightForWidth();
}

bool QPdfView_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QPdfView_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQPdfView*>(self)->QPdfView::paintEngine();
}

bool QPdfView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QPdfView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::keyReleaseEvent(event);
}

bool QPdfView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QPdfView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::focusInEvent(event);
}

bool QPdfView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QPdfView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::focusOutEvent(event);
}

bool QPdfView_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QPdfView_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::enterEvent(event);
}

bool QPdfView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QPdfView_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::leaveEvent(event);
}

bool QPdfView_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QPdfView_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::moveEvent(event);
}

bool QPdfView_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QPdfView_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::closeEvent(event);
}

bool QPdfView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QPdfView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::tabletEvent(event);
}

bool QPdfView_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QPdfView_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::actionEvent(event);
}

bool QPdfView_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QPdfView_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::showEvent(event);
}

bool QPdfView_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QPdfView_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::hideEvent(event);
}

bool QPdfView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QPdfView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QPdfView_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QPdfView_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQPdfView*>(self)->QPdfView::metric(static_cast<MiqtVirtualQPdfView::PaintDeviceMetric>(param1));
}

bool QPdfView_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QPdfView_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQPdfView*>(self)->QPdfView::initPainter(painter);
}

bool QPdfView_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QPdfView_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQPdfView*>(self)->QPdfView::redirected(offset);
}

bool QPdfView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QPdfView_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQPdfView*>(self)->QPdfView::sharedPainter();
}

bool QPdfView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QPdfView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::inputMethodEvent(param1);
}

bool QPdfView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QPdfView_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQPdfView*>(self)->QPdfView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QPdfView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QPdfView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::focusNextPrevChild(next);
}

bool QPdfView_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QPdfView_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::timerEvent(event);
}

bool QPdfView_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QPdfView_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::childEvent(event);
}

bool QPdfView_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QPdfView_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::customEvent(event);
}

bool QPdfView_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QPdfView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::connectNotify(*signal);
}

bool QPdfView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPdfView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPdfView*>(self)->QPdfView::disconnectNotify(*signal);
}

void QPdfView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QPdfView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QMargins(self_cast->viewportMargins());
}

void QPdfView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QPdfView_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QPdfView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QPdfView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QPdfView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QPdfView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QPdfView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QPdfView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QPdfView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QPdfView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QPdfView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPdfView* self_cast = dynamic_cast<MiqtVirtualQPdfView*>( (QPdfView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QPdfView_delete(QPdfView* self) {
	delete self;
}

