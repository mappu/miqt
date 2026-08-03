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
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPainterPath>
#include <QPixmap>
#include <QPoint>
#include <QRect>
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
#include <qwt_plot_canvas.h>
#include "gen_qwt_plot_canvas.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QwtPlotCanvas_event(QwtPlotCanvas*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotCanvas_paintEvent(QwtPlotCanvas*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtPlotCanvas_resizeEvent(QwtPlotCanvas*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtPlotCanvas_drawFocusIndicator(QwtPlotCanvas*, intptr_t, QPainter*);
void miqt_exec_callback_QwtPlotCanvas_drawBorder(QwtPlotCanvas*, intptr_t, QPainter*);
QSize* miqt_exec_callback_QwtPlotCanvas_sizeHint(const QwtPlotCanvas*, intptr_t);
void miqt_exec_callback_QwtPlotCanvas_changeEvent(QwtPlotCanvas*, intptr_t, QEvent*);
int miqt_exec_callback_QwtPlotCanvas_devType(const QwtPlotCanvas*, intptr_t);
void miqt_exec_callback_QwtPlotCanvas_setVisible(QwtPlotCanvas*, intptr_t, bool);
QSize* miqt_exec_callback_QwtPlotCanvas_minimumSizeHint(const QwtPlotCanvas*, intptr_t);
int miqt_exec_callback_QwtPlotCanvas_heightForWidth(const QwtPlotCanvas*, intptr_t, int);
bool miqt_exec_callback_QwtPlotCanvas_hasHeightForWidth(const QwtPlotCanvas*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtPlotCanvas_paintEngine(const QwtPlotCanvas*, intptr_t);
void miqt_exec_callback_QwtPlotCanvas_mousePressEvent(QwtPlotCanvas*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotCanvas_mouseReleaseEvent(QwtPlotCanvas*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotCanvas_mouseDoubleClickEvent(QwtPlotCanvas*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotCanvas_mouseMoveEvent(QwtPlotCanvas*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotCanvas_wheelEvent(QwtPlotCanvas*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtPlotCanvas_keyPressEvent(QwtPlotCanvas*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPlotCanvas_keyReleaseEvent(QwtPlotCanvas*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPlotCanvas_focusInEvent(QwtPlotCanvas*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtPlotCanvas_focusOutEvent(QwtPlotCanvas*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtPlotCanvas_enterEvent(QwtPlotCanvas*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotCanvas_leaveEvent(QwtPlotCanvas*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotCanvas_moveEvent(QwtPlotCanvas*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtPlotCanvas_closeEvent(QwtPlotCanvas*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtPlotCanvas_contextMenuEvent(QwtPlotCanvas*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtPlotCanvas_tabletEvent(QwtPlotCanvas*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtPlotCanvas_actionEvent(QwtPlotCanvas*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtPlotCanvas_dragEnterEvent(QwtPlotCanvas*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtPlotCanvas_dragMoveEvent(QwtPlotCanvas*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtPlotCanvas_dragLeaveEvent(QwtPlotCanvas*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtPlotCanvas_dropEvent(QwtPlotCanvas*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtPlotCanvas_showEvent(QwtPlotCanvas*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtPlotCanvas_hideEvent(QwtPlotCanvas*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtPlotCanvas_nativeEvent(QwtPlotCanvas*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QwtPlotCanvas_metric(const QwtPlotCanvas*, intptr_t, int);
void miqt_exec_callback_QwtPlotCanvas_initPainter(const QwtPlotCanvas*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtPlotCanvas_redirected(const QwtPlotCanvas*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtPlotCanvas_sharedPainter(const QwtPlotCanvas*, intptr_t);
void miqt_exec_callback_QwtPlotCanvas_inputMethodEvent(QwtPlotCanvas*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtPlotCanvas_inputMethodQuery(const QwtPlotCanvas*, intptr_t, int);
bool miqt_exec_callback_QwtPlotCanvas_focusNextPrevChild(QwtPlotCanvas*, intptr_t, bool);
bool miqt_exec_callback_QwtPlotCanvas_eventFilter(QwtPlotCanvas*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtPlotCanvas_timerEvent(QwtPlotCanvas*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtPlotCanvas_childEvent(QwtPlotCanvas*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtPlotCanvas_customEvent(QwtPlotCanvas*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotCanvas_connectNotify(QwtPlotCanvas*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtPlotCanvas_disconnectNotify(QwtPlotCanvas*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPlotCanvas final : public QwtPlotCanvas {
public:

	MiqtVirtualQwtPlotCanvas(): QwtPlotCanvas() {}
	MiqtVirtualQwtPlotCanvas(QwtPlot* param1): QwtPlotCanvas(param1) {}

	virtual ~MiqtVirtualQwtPlotCanvas() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QwtPlotCanvas::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QwtPlotCanvas_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QwtPlotCanvas_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__paintEvent == 0) {
			QwtPlotCanvas::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotCanvas_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (handle__resizeEvent == 0) {
			QwtPlotCanvas::resizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotCanvas_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawFocusIndicator = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawFocusIndicator(QPainter* param1) override {
		if (handle__drawFocusIndicator == 0) {
			QwtPlotCanvas::drawFocusIndicator(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtPlotCanvas_drawFocusIndicator(this, handle__drawFocusIndicator, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_drawFocusIndicator(void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawBorder = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawBorder(QPainter* param1) override {
		if (handle__drawBorder == 0) {
			QwtPlotCanvas::drawBorder(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtPlotCanvas_drawBorder(this, handle__drawBorder, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_drawBorder(void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QwtPlotCanvas::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtPlotCanvas_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtPlotCanvas_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QwtPlotCanvas::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotCanvas_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QwtPlotCanvas::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtPlotCanvas_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtPlotCanvas_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QwtPlotCanvas::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtPlotCanvas_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QwtPlotCanvas::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtPlotCanvas_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QwtPlotCanvas_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QwtPlotCanvas::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtPlotCanvas_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtPlotCanvas_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QwtPlotCanvas::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtPlotCanvas_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QwtPlotCanvas_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QwtPlotCanvas::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtPlotCanvas_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QwtPlotCanvas_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QwtPlotCanvas::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QwtPlotCanvas::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QwtPlotCanvas::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QwtPlotCanvas::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QwtPlotCanvas::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QwtPlotCanvas::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QwtPlotCanvas::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QwtPlotCanvas::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QwtPlotCanvas::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QwtPlotCanvas::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QwtPlotCanvas::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QwtPlotCanvas::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QwtPlotCanvas::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QwtPlotCanvas::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QwtPlotCanvas::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QwtPlotCanvas::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QwtPlotCanvas::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QwtPlotCanvas::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QwtPlotCanvas::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QwtPlotCanvas::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QwtPlotCanvas::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QwtPlotCanvas::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QwtPlotCanvas::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtPlotCanvas_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtPlotCanvas_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QwtPlotCanvas::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtPlotCanvas_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtPlotCanvas_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QwtPlotCanvas::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtPlotCanvas_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QwtPlotCanvas::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtPlotCanvas_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtPlotCanvas_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QwtPlotCanvas::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtPlotCanvas_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QwtPlotCanvas_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QwtPlotCanvas::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotCanvas_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QwtPlotCanvas::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtPlotCanvas_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtPlotCanvas_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QwtPlotCanvas::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtPlotCanvas_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QwtPlotCanvas_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QwtPlotCanvas::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtPlotCanvas_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPlotCanvas_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QwtPlotCanvas::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QwtPlotCanvas::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QwtPlotCanvas::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotCanvas_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QwtPlotCanvas::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotCanvas_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QwtPlotCanvas::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotCanvas_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QwtPlotCanvas_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtPlotCanvas_protectedbase_updateStyleSheetInfo(bool* _dynamic_cast_ok, void* self);
	friend void QwtPlotCanvas_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QwtPlotCanvas_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QwtPlotCanvas_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtPlotCanvas_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtPlotCanvas_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtPlotCanvas_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtPlotCanvas_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtPlotCanvas_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotCanvas_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotCanvas_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtPlotCanvas_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtPlotCanvas* QwtPlotCanvas_new() {
	return new (std::nothrow) MiqtVirtualQwtPlotCanvas();
}

QwtPlotCanvas* QwtPlotCanvas_new2(QwtPlot* param1) {
	return new (std::nothrow) MiqtVirtualQwtPlotCanvas(param1);
}

void QwtPlotCanvas_virtbase(QwtPlotCanvas* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QwtPlotCanvas_metaObject(const QwtPlotCanvas* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtPlotCanvas_metacast(QwtPlotCanvas* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtPlotCanvas_tr(const char* s) {
	QString _ret = QwtPlotCanvas::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotCanvas_trUtf8(const char* s) {
	QString _ret = QwtPlotCanvas::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QwtPlot* QwtPlotCanvas_plot(QwtPlotCanvas* self) {
	return self->plot();
}

QwtPlot* QwtPlotCanvas_plot2(const QwtPlotCanvas* self) {
	return (QwtPlot*) self->plot();
}

void QwtPlotCanvas_setFocusIndicator(QwtPlotCanvas* self, int focusIndicator) {
	self->setFocusIndicator(static_cast<QwtPlotCanvas::FocusIndicator>(focusIndicator));
}

int QwtPlotCanvas_focusIndicator(const QwtPlotCanvas* self) {
	QwtPlotCanvas::FocusIndicator _ret = self->focusIndicator();
	return static_cast<int>(_ret);
}

void QwtPlotCanvas_setBorderRadius(QwtPlotCanvas* self, double borderRadius) {
	self->setBorderRadius(static_cast<double>(borderRadius));
}

double QwtPlotCanvas_borderRadius(const QwtPlotCanvas* self) {
	return self->borderRadius();
}

void QwtPlotCanvas_setPaintAttribute(QwtPlotCanvas* self, int param1) {
	self->setPaintAttribute(static_cast<QwtPlotCanvas::PaintAttribute>(param1));
}

bool QwtPlotCanvas_testPaintAttribute(const QwtPlotCanvas* self, int param1) {
	return self->testPaintAttribute(static_cast<QwtPlotCanvas::PaintAttribute>(param1));
}

QPixmap* QwtPlotCanvas_backingStore(const QwtPlotCanvas* self) {
	return (QPixmap*) self->backingStore();
}

void QwtPlotCanvas_invalidateBackingStore(QwtPlotCanvas* self) {
	self->invalidateBackingStore();
}

bool QwtPlotCanvas_event(QwtPlotCanvas* self, QEvent* param1) {
	return self->event(param1);
}

QPainterPath* QwtPlotCanvas_borderPath(const QwtPlotCanvas* self, QRect* param1) {
	return new QPainterPath(self->borderPath(*param1));
}

void QwtPlotCanvas_replot(QwtPlotCanvas* self) {
	self->replot();
}

struct miqt_string QwtPlotCanvas_tr2(const char* s, const char* c) {
	QString _ret = QwtPlotCanvas::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotCanvas_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtPlotCanvas::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotCanvas_trUtf82(const char* s, const char* c) {
	QString _ret = QwtPlotCanvas::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotCanvas_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtPlotCanvas::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtPlotCanvas_setPaintAttribute2(QwtPlotCanvas* self, int param1, bool on) {
	self->setPaintAttribute(static_cast<QwtPlotCanvas::PaintAttribute>(param1), on);
}

bool QwtPlotCanvas_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QwtPlotCanvas_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::event(param1);
}

bool QwtPlotCanvas_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::paintEvent(param1);
}

bool QwtPlotCanvas_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::resizeEvent(param1);
}

bool QwtPlotCanvas_override_virtual_drawFocusIndicator(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawFocusIndicator = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_drawFocusIndicator(void* self, QPainter* param1) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::drawFocusIndicator(param1);
}

bool QwtPlotCanvas_override_virtual_drawBorder(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawBorder = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_drawBorder(void* self, QPainter* param1) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::drawBorder(param1);
}

bool QwtPlotCanvas_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QwtPlotCanvas_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::sizeHint());
}

bool QwtPlotCanvas_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::changeEvent(param1);
}

bool QwtPlotCanvas_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QwtPlotCanvas_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::devType();
}

bool QwtPlotCanvas_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::setVisible(visible);
}

bool QwtPlotCanvas_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QwtPlotCanvas_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::minimumSizeHint());
}

bool QwtPlotCanvas_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QwtPlotCanvas_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::heightForWidth(static_cast<int>(param1));
}

bool QwtPlotCanvas_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QwtPlotCanvas_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::hasHeightForWidth();
}

bool QwtPlotCanvas_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QwtPlotCanvas_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::paintEngine();
}

bool QwtPlotCanvas_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::mousePressEvent(event);
}

bool QwtPlotCanvas_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::mouseReleaseEvent(event);
}

bool QwtPlotCanvas_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::mouseDoubleClickEvent(event);
}

bool QwtPlotCanvas_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::mouseMoveEvent(event);
}

bool QwtPlotCanvas_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::wheelEvent(event);
}

bool QwtPlotCanvas_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::keyPressEvent(event);
}

bool QwtPlotCanvas_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::keyReleaseEvent(event);
}

bool QwtPlotCanvas_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::focusInEvent(event);
}

bool QwtPlotCanvas_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::focusOutEvent(event);
}

bool QwtPlotCanvas_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::enterEvent(event);
}

bool QwtPlotCanvas_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::leaveEvent(event);
}

bool QwtPlotCanvas_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::moveEvent(event);
}

bool QwtPlotCanvas_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::closeEvent(event);
}

bool QwtPlotCanvas_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::contextMenuEvent(event);
}

bool QwtPlotCanvas_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::tabletEvent(event);
}

bool QwtPlotCanvas_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::actionEvent(event);
}

bool QwtPlotCanvas_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::dragEnterEvent(event);
}

bool QwtPlotCanvas_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::dragMoveEvent(event);
}

bool QwtPlotCanvas_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::dragLeaveEvent(event);
}

bool QwtPlotCanvas_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::dropEvent(event);
}

bool QwtPlotCanvas_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::showEvent(event);
}

bool QwtPlotCanvas_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::hideEvent(event);
}

bool QwtPlotCanvas_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QwtPlotCanvas_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtPlotCanvas_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QwtPlotCanvas_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::metric(static_cast<MiqtVirtualQwtPlotCanvas::PaintDeviceMetric>(param1));
}

bool QwtPlotCanvas_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::initPainter(painter);
}

bool QwtPlotCanvas_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QwtPlotCanvas_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::redirected(offset);
}

bool QwtPlotCanvas_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QwtPlotCanvas_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::sharedPainter();
}

bool QwtPlotCanvas_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::inputMethodEvent(param1);
}

bool QwtPlotCanvas_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QwtPlotCanvas_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtPlotCanvas_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QwtPlotCanvas_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::focusNextPrevChild(next);
}

bool QwtPlotCanvas_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QwtPlotCanvas_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::eventFilter(watched, event);
}

bool QwtPlotCanvas_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::timerEvent(event);
}

bool QwtPlotCanvas_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::childEvent(event);
}

bool QwtPlotCanvas_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::customEvent(event);
}

bool QwtPlotCanvas_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::connectNotify(*signal);
}

bool QwtPlotCanvas_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QwtPlotCanvas_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotCanvas*>(self)->QwtPlotCanvas::disconnectNotify(*signal);
}

void QwtPlotCanvas_protectedbase_updateStyleSheetInfo(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateStyleSheetInfo();
}

void QwtPlotCanvas_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QwtPlotCanvas_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QwtPlotCanvas_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtPlotCanvas_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtPlotCanvas_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtPlotCanvas_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtPlotCanvas_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtPlotCanvas_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtPlotCanvas_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtPlotCanvas_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtPlotCanvas_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtPlotCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotCanvas*>( (QwtPlotCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtPlotCanvas_delete(QwtPlotCanvas* self) {
	delete self;
}

