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
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
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
#include <QPainterPath>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qgraphicsview.h>
#include "gen_qgraphicsview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGraphicsView_rubberBandChanged(intptr_t, QRect*, QPointF*, QPointF*);
QSize* miqt_exec_callback_QGraphicsView_sizeHint(const QGraphicsView*, intptr_t);
QVariant* miqt_exec_callback_QGraphicsView_inputMethodQuery(const QGraphicsView*, intptr_t, int);
void miqt_exec_callback_QGraphicsView_setupViewport(QGraphicsView*, intptr_t, QWidget*);
bool miqt_exec_callback_QGraphicsView_event(QGraphicsView*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsView_viewportEvent(QGraphicsView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsView_contextMenuEvent(QGraphicsView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QGraphicsView_dragEnterEvent(QGraphicsView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QGraphicsView_dragLeaveEvent(QGraphicsView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QGraphicsView_dragMoveEvent(QGraphicsView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QGraphicsView_dropEvent(QGraphicsView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QGraphicsView_focusInEvent(QGraphicsView*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QGraphicsView_focusNextPrevChild(QGraphicsView*, intptr_t, bool);
void miqt_exec_callback_QGraphicsView_focusOutEvent(QGraphicsView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsView_keyPressEvent(QGraphicsView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsView_keyReleaseEvent(QGraphicsView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsView_mouseDoubleClickEvent(QGraphicsView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QGraphicsView_mousePressEvent(QGraphicsView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QGraphicsView_mouseMoveEvent(QGraphicsView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QGraphicsView_mouseReleaseEvent(QGraphicsView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QGraphicsView_wheelEvent(QGraphicsView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QGraphicsView_paintEvent(QGraphicsView*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QGraphicsView_resizeEvent(QGraphicsView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QGraphicsView_scrollContentsBy(QGraphicsView*, intptr_t, int, int);
void miqt_exec_callback_QGraphicsView_showEvent(QGraphicsView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QGraphicsView_inputMethodEvent(QGraphicsView*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QGraphicsView_drawBackground(QGraphicsView*, intptr_t, QPainter*, QRectF*);
void miqt_exec_callback_QGraphicsView_drawForeground(QGraphicsView*, intptr_t, QPainter*, QRectF*);
QSize* miqt_exec_callback_QGraphicsView_minimumSizeHint(const QGraphicsView*, intptr_t);
bool miqt_exec_callback_QGraphicsView_eventFilter(QGraphicsView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QGraphicsView_viewportSizeHint(const QGraphicsView*, intptr_t);
void miqt_exec_callback_QGraphicsView_changeEvent(QGraphicsView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsView_initStyleOption(const QGraphicsView*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QGraphicsView_devType(const QGraphicsView*, intptr_t);
void miqt_exec_callback_QGraphicsView_setVisible(QGraphicsView*, intptr_t, bool);
int miqt_exec_callback_QGraphicsView_heightForWidth(const QGraphicsView*, intptr_t, int);
bool miqt_exec_callback_QGraphicsView_hasHeightForWidth(const QGraphicsView*, intptr_t);
QPaintEngine* miqt_exec_callback_QGraphicsView_paintEngine(const QGraphicsView*, intptr_t);
void miqt_exec_callback_QGraphicsView_enterEvent(QGraphicsView*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QGraphicsView_leaveEvent(QGraphicsView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsView_moveEvent(QGraphicsView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QGraphicsView_closeEvent(QGraphicsView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QGraphicsView_tabletEvent(QGraphicsView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QGraphicsView_actionEvent(QGraphicsView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QGraphicsView_hideEvent(QGraphicsView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QGraphicsView_nativeEvent(QGraphicsView*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QGraphicsView_metric(const QGraphicsView*, intptr_t, int);
void miqt_exec_callback_QGraphicsView_initPainter(const QGraphicsView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QGraphicsView_redirected(const QGraphicsView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QGraphicsView_sharedPainter(const QGraphicsView*, intptr_t);
void miqt_exec_callback_QGraphicsView_timerEvent(QGraphicsView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsView_childEvent(QGraphicsView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsView_customEvent(QGraphicsView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsView_connectNotify(QGraphicsView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsView_disconnectNotify(QGraphicsView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsView final : public QGraphicsView {
public:

	MiqtVirtualQGraphicsView(QWidget* parent): QGraphicsView(parent) {}
	MiqtVirtualQGraphicsView(): QGraphicsView() {}
	MiqtVirtualQGraphicsView(QGraphicsScene* scene): QGraphicsView(scene) {}
	MiqtVirtualQGraphicsView(QGraphicsScene* scene, QWidget* parent): QGraphicsView(scene, parent) {}

	virtual ~MiqtVirtualQGraphicsView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QGraphicsView::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QGraphicsView_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QGraphicsView_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsView::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsView_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QGraphicsView_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* widget) override {
		if (handle__setupViewport == 0) {
			QGraphicsView::setupViewport(widget);
			return;
		}

		QWidget* sigval1 = widget;
		miqt_exec_callback_QGraphicsView_setupViewport(this, handle__setupViewport, sigval1);

	}

	friend void QGraphicsView_virtualbase_setupViewport(void* self, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGraphicsView::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsView_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsView_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__viewportEvent == 0) {
			return QGraphicsView::viewportEvent(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsView_viewportEvent(this, handle__viewportEvent, sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsView_virtualbase_viewportEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsView::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsView::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsView::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsView::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsView::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsView::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QGraphicsView::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QGraphicsView_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsView_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsView::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsView::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsView::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsView::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsView::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsView::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsView::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsView::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QGraphicsView::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QGraphicsView::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QGraphicsView::scrollContentsBy(dx, dy);
			return;
		}

		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QGraphicsView_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

	}

	friend void QGraphicsView_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QGraphicsView::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsView::inputMethodEvent(event);
			return;
		}

		QInputMethodEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawBackground = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawBackground(QPainter* painter, const QRectF& rect) override {
		if (handle__drawBackground == 0) {
			QGraphicsView::drawBackground(painter, rect);
			return;
		}

		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);
		miqt_exec_callback_QGraphicsView_drawBackground(this, handle__drawBackground, sigval1, sigval2);

	}

	friend void QGraphicsView_virtualbase_drawBackground(void* self, QPainter* painter, QRectF* rect);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawForeground = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawForeground(QPainter* painter, const QRectF& rect) override {
		if (handle__drawForeground == 0) {
			QGraphicsView::drawForeground(painter, rect);
			return;
		}

		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);
		miqt_exec_callback_QGraphicsView_drawForeground(this, handle__drawForeground, sigval1, sigval2);

	}

	friend void QGraphicsView_virtualbase_drawForeground(void* self, QPainter* painter, QRectF* rect);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QGraphicsView::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QGraphicsView_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QGraphicsView_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QGraphicsView::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QGraphicsView_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsView_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QGraphicsView::viewportSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QGraphicsView_viewportSizeHint(this, handle__viewportSizeHint);
		return *callback_return_value;
	}

	friend QSize* QGraphicsView_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QGraphicsView::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsView_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__initStyleOption == 0) {
			QGraphicsView::initStyleOption(option);
			return;
		}

		QStyleOptionFrame* sigval1 = option;
		miqt_exec_callback_QGraphicsView_initStyleOption(this, handle__initStyleOption, sigval1);

	}

	friend void QGraphicsView_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QGraphicsView::devType();
		}

		int callback_return_value = miqt_exec_callback_QGraphicsView_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QGraphicsView_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QGraphicsView::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QGraphicsView_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QGraphicsView_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QGraphicsView::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QGraphicsView_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QGraphicsView_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QGraphicsView::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QGraphicsView_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QGraphicsView_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QGraphicsView::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QGraphicsView_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QGraphicsView_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QGraphicsView::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QGraphicsView::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QGraphicsView::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QGraphicsView::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QGraphicsView::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QGraphicsView::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QGraphicsView::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QGraphicsView::nativeEvent(eventType, message, result);
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
		bool callback_return_value = miqt_exec_callback_QGraphicsView_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QGraphicsView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QGraphicsView::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QGraphicsView_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QGraphicsView_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QGraphicsView::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QGraphicsView_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QGraphicsView_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QGraphicsView::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QGraphicsView_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QGraphicsView_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QGraphicsView::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QGraphicsView_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QGraphicsView_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGraphicsView::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGraphicsView::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGraphicsView::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsView_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QGraphicsView_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGraphicsView::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsView_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QGraphicsView_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGraphicsView::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsView_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QGraphicsView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QGraphicsView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QGraphicsView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QGraphicsView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QGraphicsView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QGraphicsView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QGraphicsView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGraphicsView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGraphicsView* QGraphicsView_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQGraphicsView(parent);
}

QGraphicsView* QGraphicsView_new2() {
	return new (std::nothrow) MiqtVirtualQGraphicsView();
}

QGraphicsView* QGraphicsView_new3(QGraphicsScene* scene) {
	return new (std::nothrow) MiqtVirtualQGraphicsView(scene);
}

QGraphicsView* QGraphicsView_new4(QGraphicsScene* scene, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQGraphicsView(scene, parent);
}

void QGraphicsView_virtbase(QGraphicsView* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* QGraphicsView_metaObject(const QGraphicsView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsView_metacast(QGraphicsView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsView_tr(const char* s) {
	QString _ret = QGraphicsView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QGraphicsView_sizeHint(const QGraphicsView* self) {
	return new QSize(self->sizeHint());
}

int QGraphicsView_renderHints(const QGraphicsView* self) {
	QPainter::RenderHints _ret = self->renderHints();
	return static_cast<int>(_ret);
}

void QGraphicsView_setRenderHint(QGraphicsView* self, int hint) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint));
}

void QGraphicsView_setRenderHints(QGraphicsView* self, int hints) {
	self->setRenderHints(static_cast<QPainter::RenderHints>(hints));
}

int QGraphicsView_alignment(const QGraphicsView* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QGraphicsView_setAlignment(QGraphicsView* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QGraphicsView_transformationAnchor(const QGraphicsView* self) {
	QGraphicsView::ViewportAnchor _ret = self->transformationAnchor();
	return static_cast<int>(_ret);
}

void QGraphicsView_setTransformationAnchor(QGraphicsView* self, int anchor) {
	self->setTransformationAnchor(static_cast<QGraphicsView::ViewportAnchor>(anchor));
}

int QGraphicsView_resizeAnchor(const QGraphicsView* self) {
	QGraphicsView::ViewportAnchor _ret = self->resizeAnchor();
	return static_cast<int>(_ret);
}

void QGraphicsView_setResizeAnchor(QGraphicsView* self, int anchor) {
	self->setResizeAnchor(static_cast<QGraphicsView::ViewportAnchor>(anchor));
}

int QGraphicsView_viewportUpdateMode(const QGraphicsView* self) {
	QGraphicsView::ViewportUpdateMode _ret = self->viewportUpdateMode();
	return static_cast<int>(_ret);
}

void QGraphicsView_setViewportUpdateMode(QGraphicsView* self, int mode) {
	self->setViewportUpdateMode(static_cast<QGraphicsView::ViewportUpdateMode>(mode));
}

int QGraphicsView_optimizationFlags(const QGraphicsView* self) {
	QGraphicsView::OptimizationFlags _ret = self->optimizationFlags();
	return static_cast<int>(_ret);
}

void QGraphicsView_setOptimizationFlag(QGraphicsView* self, int flag) {
	self->setOptimizationFlag(static_cast<QGraphicsView::OptimizationFlag>(flag));
}

void QGraphicsView_setOptimizationFlags(QGraphicsView* self, int flags) {
	self->setOptimizationFlags(static_cast<QGraphicsView::OptimizationFlags>(flags));
}

int QGraphicsView_dragMode(const QGraphicsView* self) {
	QGraphicsView::DragMode _ret = self->dragMode();
	return static_cast<int>(_ret);
}

void QGraphicsView_setDragMode(QGraphicsView* self, int mode) {
	self->setDragMode(static_cast<QGraphicsView::DragMode>(mode));
}

int QGraphicsView_rubberBandSelectionMode(const QGraphicsView* self) {
	Qt::ItemSelectionMode _ret = self->rubberBandSelectionMode();
	return static_cast<int>(_ret);
}

void QGraphicsView_setRubberBandSelectionMode(QGraphicsView* self, int mode) {
	self->setRubberBandSelectionMode(static_cast<Qt::ItemSelectionMode>(mode));
}

QRect* QGraphicsView_rubberBandRect(const QGraphicsView* self) {
	return new QRect(self->rubberBandRect());
}

int QGraphicsView_cacheMode(const QGraphicsView* self) {
	QGraphicsView::CacheMode _ret = self->cacheMode();
	return static_cast<int>(_ret);
}

void QGraphicsView_setCacheMode(QGraphicsView* self, int mode) {
	self->setCacheMode(static_cast<QGraphicsView::CacheMode>(mode));
}

void QGraphicsView_resetCachedContent(QGraphicsView* self) {
	self->resetCachedContent();
}

bool QGraphicsView_isInteractive(const QGraphicsView* self) {
	return self->isInteractive();
}

void QGraphicsView_setInteractive(QGraphicsView* self, bool allowed) {
	self->setInteractive(allowed);
}

QGraphicsScene* QGraphicsView_scene(const QGraphicsView* self) {
	return self->scene();
}

void QGraphicsView_setScene(QGraphicsView* self, QGraphicsScene* scene) {
	self->setScene(scene);
}

QRectF* QGraphicsView_sceneRect(const QGraphicsView* self) {
	return new QRectF(self->sceneRect());
}

void QGraphicsView_setSceneRect(QGraphicsView* self, QRectF* rect) {
	self->setSceneRect(*rect);
}

void QGraphicsView_setSceneRect2(QGraphicsView* self, double x, double y, double w, double h) {
	self->setSceneRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QTransform* QGraphicsView_transform(const QGraphicsView* self) {
	return new QTransform(self->transform());
}

QTransform* QGraphicsView_viewportTransform(const QGraphicsView* self) {
	return new QTransform(self->viewportTransform());
}

bool QGraphicsView_isTransformed(const QGraphicsView* self) {
	return self->isTransformed();
}

void QGraphicsView_setTransform(QGraphicsView* self, QTransform* matrix) {
	self->setTransform(*matrix);
}

void QGraphicsView_resetTransform(QGraphicsView* self) {
	self->resetTransform();
}

void QGraphicsView_rotate(QGraphicsView* self, double angle) {
	self->rotate(static_cast<qreal>(angle));
}

void QGraphicsView_scale(QGraphicsView* self, double sx, double sy) {
	self->scale(static_cast<qreal>(sx), static_cast<qreal>(sy));
}

void QGraphicsView_shear(QGraphicsView* self, double sh, double sv) {
	self->shear(static_cast<qreal>(sh), static_cast<qreal>(sv));
}

void QGraphicsView_translate(QGraphicsView* self, double dx, double dy) {
	self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QGraphicsView_centerOn(QGraphicsView* self, QPointF* pos) {
	self->centerOn(*pos);
}

void QGraphicsView_centerOn2(QGraphicsView* self, double x, double y) {
	self->centerOn(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QGraphicsView_centerOnWithItem(QGraphicsView* self, QGraphicsItem* item) {
	self->centerOn(item);
}

void QGraphicsView_ensureVisible(QGraphicsView* self, QRectF* rect) {
	self->ensureVisible(*rect);
}

void QGraphicsView_ensureVisible2(QGraphicsView* self, double x, double y, double w, double h) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsView_ensureVisibleWithItem(QGraphicsView* self, QGraphicsItem* item) {
	self->ensureVisible(item);
}

void QGraphicsView_fitInView(QGraphicsView* self, QRectF* rect) {
	self->fitInView(*rect);
}

void QGraphicsView_fitInView2(QGraphicsView* self, double x, double y, double w, double h) {
	self->fitInView(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsView_fitInViewWithItem(QGraphicsView* self, QGraphicsItem* item) {
	self->fitInView(item);
}

void QGraphicsView_render(QGraphicsView* self, QPainter* painter) {
	self->render(painter);
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_items(const QGraphicsView* self) {
	QList<QGraphicsItem *> _ret = self->items();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_itemsWithPos(const QGraphicsView* self, QPoint* pos) {
	QList<QGraphicsItem *> _ret = self->items(*pos);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_items2(const QGraphicsView* self, int x, int y) {
	QList<QGraphicsItem *> _ret = self->items(static_cast<int>(x), static_cast<int>(y));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_itemsWithRect(const QGraphicsView* self, QRect* rect) {
	QList<QGraphicsItem *> _ret = self->items(*rect);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_items3(const QGraphicsView* self, int x, int y, int w, int h) {
	QList<QGraphicsItem *> _ret = self->items(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_itemsWithPath(const QGraphicsView* self, QPainterPath* path) {
	QList<QGraphicsItem *> _ret = self->items(*path);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QGraphicsItem* QGraphicsView_itemAt(const QGraphicsView* self, QPoint* pos) {
	return self->itemAt(*pos);
}

QGraphicsItem* QGraphicsView_itemAt2(const QGraphicsView* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QPointF* QGraphicsView_mapToScene(const QGraphicsView* self, QPoint* point) {
	return new QPointF(self->mapToScene(*point));
}

QPainterPath* QGraphicsView_mapToSceneWithPath(const QGraphicsView* self, QPainterPath* path) {
	return new QPainterPath(self->mapToScene(*path));
}

QPoint* QGraphicsView_mapFromScene(const QGraphicsView* self, QPointF* point) {
	return new QPoint(self->mapFromScene(*point));
}

QPainterPath* QGraphicsView_mapFromSceneWithPath(const QGraphicsView* self, QPainterPath* path) {
	return new QPainterPath(self->mapFromScene(*path));
}

QPointF* QGraphicsView_mapToScene2(const QGraphicsView* self, int x, int y) {
	return new QPointF(self->mapToScene(static_cast<int>(x), static_cast<int>(y)));
}

QPoint* QGraphicsView_mapFromScene2(const QGraphicsView* self, double x, double y) {
	return new QPoint(self->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QVariant* QGraphicsView_inputMethodQuery(const QGraphicsView* self, int query) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

QBrush* QGraphicsView_backgroundBrush(const QGraphicsView* self) {
	return new QBrush(self->backgroundBrush());
}

void QGraphicsView_setBackgroundBrush(QGraphicsView* self, QBrush* brush) {
	self->setBackgroundBrush(*brush);
}

QBrush* QGraphicsView_foregroundBrush(const QGraphicsView* self) {
	return new QBrush(self->foregroundBrush());
}

void QGraphicsView_setForegroundBrush(QGraphicsView* self, QBrush* brush) {
	self->setForegroundBrush(*brush);
}

void QGraphicsView_updateScene(QGraphicsView* self, struct miqt_array /* of QRectF* */  rects) {
	QList<QRectF> rects_QList;
	rects_QList.reserve(rects.len);
	QRectF** rects_arr = static_cast<QRectF**>(rects.data);
	for(size_t i = 0; i < rects.len; ++i) {
		rects_QList.push_back(*(rects_arr[i]));
	}
	self->updateScene(rects_QList);
}

void QGraphicsView_invalidateScene(QGraphicsView* self) {
	self->invalidateScene();
}

void QGraphicsView_updateSceneRect(QGraphicsView* self, QRectF* rect) {
	self->updateSceneRect(*rect);
}

void QGraphicsView_rubberBandChanged(QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint) {
	self->rubberBandChanged(*viewportRect, *fromScenePoint, *toScenePoint);
}

void QGraphicsView_connect_rubberBandChanged(QGraphicsView* self, intptr_t slot) {
	QGraphicsView::connect(self, static_cast<void (QGraphicsView::*)(QRect, QPointF, QPointF)>(&QGraphicsView::rubberBandChanged), self, [=](QRect viewportRect, QPointF fromScenePoint, QPointF toScenePoint) {
		QRect* sigval1 = new QRect(viewportRect);
		QPointF* sigval2 = new QPointF(fromScenePoint);
		QPointF* sigval3 = new QPointF(toScenePoint);
		miqt_exec_callback_QGraphicsView_rubberBandChanged(slot, sigval1, sigval2, sigval3);
	});
}

struct miqt_string QGraphicsView_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsView_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsView_setRenderHint2(QGraphicsView* self, int hint, bool enabled) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint), enabled);
}

void QGraphicsView_setOptimizationFlag2(QGraphicsView* self, int flag, bool enabled) {
	self->setOptimizationFlag(static_cast<QGraphicsView::OptimizationFlag>(flag), enabled);
}

void QGraphicsView_setTransform2(QGraphicsView* self, QTransform* matrix, bool combine) {
	self->setTransform(*matrix, combine);
}

void QGraphicsView_ensureVisible3(QGraphicsView* self, QRectF* rect, int xmargin) {
	self->ensureVisible(*rect, static_cast<int>(xmargin));
}

void QGraphicsView_ensureVisible4(QGraphicsView* self, QRectF* rect, int xmargin, int ymargin) {
	self->ensureVisible(*rect, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsView_ensureVisible5(QGraphicsView* self, double x, double y, double w, double h, int xmargin) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin));
}

void QGraphicsView_ensureVisible6(QGraphicsView* self, double x, double y, double w, double h, int xmargin, int ymargin) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsView_ensureVisible7(QGraphicsView* self, QGraphicsItem* item, int xmargin) {
	self->ensureVisible(item, static_cast<int>(xmargin));
}

void QGraphicsView_ensureVisible8(QGraphicsView* self, QGraphicsItem* item, int xmargin, int ymargin) {
	self->ensureVisible(item, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsView_fitInView3(QGraphicsView* self, QRectF* rect, int aspectRadioMode) {
	self->fitInView(*rect, static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_fitInView4(QGraphicsView* self, double x, double y, double w, double h, int aspectRadioMode) {
	self->fitInView(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_fitInView5(QGraphicsView* self, QGraphicsItem* item, int aspectRadioMode) {
	self->fitInView(item, static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_render2(QGraphicsView* self, QPainter* painter, QRectF* target) {
	self->render(painter, *target);
}

void QGraphicsView_render3(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source) {
	self->render(painter, *target, *source);
}

void QGraphicsView_render4(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source, int aspectRatioMode) {
	self->render(painter, *target, *source, static_cast<Qt::AspectRatioMode>(aspectRatioMode));
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_items4(const QGraphicsView* self, QRect* rect, int mode) {
	QList<QGraphicsItem *> _ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_items5(const QGraphicsView* self, int x, int y, int w, int h, int mode) {
	QList<QGraphicsItem *> _ret = self->items(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_items7(const QGraphicsView* self, QPainterPath* path, int mode) {
	QList<QGraphicsItem *> _ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGraphicsView_invalidateSceneWithRect(QGraphicsView* self, QRectF* rect) {
	self->invalidateScene(*rect);
}

void QGraphicsView_invalidateScene2(QGraphicsView* self, QRectF* rect, int layers) {
	self->invalidateScene(*rect, static_cast<QGraphicsScene::SceneLayers>(layers));
}

bool QGraphicsView_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QGraphicsView_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQGraphicsView*>(self)->QGraphicsView::sizeHint());
}

bool QGraphicsView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsView_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQGraphicsView*>(self)->QGraphicsView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QGraphicsView_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupViewport = slot;
	return true;
}

void QGraphicsView_virtualbase_setupViewport(void* self, QWidget* widget) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::setupViewport(widget);
}

bool QGraphicsView_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QGraphicsView_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::event(event);
}

bool QGraphicsView_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QGraphicsView_virtualbase_viewportEvent(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::viewportEvent(event);
}

bool QGraphicsView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::contextMenuEvent(event);
}

bool QGraphicsView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::dragEnterEvent(event);
}

bool QGraphicsView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::dragLeaveEvent(event);
}

bool QGraphicsView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::dragMoveEvent(event);
}

bool QGraphicsView_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::dropEvent(event);
}

bool QGraphicsView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::focusInEvent(event);
}

bool QGraphicsView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QGraphicsView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::focusNextPrevChild(next);
}

bool QGraphicsView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::focusOutEvent(event);
}

bool QGraphicsView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::keyPressEvent(event);
}

bool QGraphicsView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::keyReleaseEvent(event);
}

bool QGraphicsView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::mouseDoubleClickEvent(event);
}

bool QGraphicsView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::mousePressEvent(event);
}

bool QGraphicsView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::mouseMoveEvent(event);
}

bool QGraphicsView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::mouseReleaseEvent(event);
}

bool QGraphicsView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::wheelEvent(event);
}

bool QGraphicsView_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::paintEvent(event);
}

bool QGraphicsView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::resizeEvent(event);
}

bool QGraphicsView_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QGraphicsView_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
}

bool QGraphicsView_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::showEvent(event);
}

bool QGraphicsView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::inputMethodEvent(event);
}

bool QGraphicsView_override_virtual_drawBackground(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawBackground = slot;
	return true;
}

void QGraphicsView_virtualbase_drawBackground(void* self, QPainter* painter, QRectF* rect) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::drawBackground(painter, *rect);
}

bool QGraphicsView_override_virtual_drawForeground(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawForeground = slot;
	return true;
}

void QGraphicsView_virtualbase_drawForeground(void* self, QPainter* painter, QRectF* rect) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::drawForeground(painter, *rect);
}

bool QGraphicsView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QGraphicsView_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQGraphicsView*>(self)->QGraphicsView::minimumSizeHint());
}

bool QGraphicsView_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGraphicsView_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::eventFilter(param1, param2);
}

bool QGraphicsView_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QGraphicsView_virtualbase_viewportSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQGraphicsView*>(self)->QGraphicsView::viewportSizeHint());
}

bool QGraphicsView_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::changeEvent(param1);
}

bool QGraphicsView_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initStyleOption = slot;
	return true;
}

void QGraphicsView_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option) {
	static_cast<const MiqtVirtualQGraphicsView*>(self)->QGraphicsView::initStyleOption(option);
}

bool QGraphicsView_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QGraphicsView_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQGraphicsView*>(self)->QGraphicsView::devType();
}

bool QGraphicsView_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QGraphicsView_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::setVisible(visible);
}

bool QGraphicsView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QGraphicsView_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQGraphicsView*>(self)->QGraphicsView::heightForWidth(static_cast<int>(param1));
}

bool QGraphicsView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QGraphicsView_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQGraphicsView*>(self)->QGraphicsView::hasHeightForWidth();
}

bool QGraphicsView_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QGraphicsView_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQGraphicsView*>(self)->QGraphicsView::paintEngine();
}

bool QGraphicsView_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::enterEvent(event);
}

bool QGraphicsView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::leaveEvent(event);
}

bool QGraphicsView_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::moveEvent(event);
}

bool QGraphicsView_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::closeEvent(event);
}

bool QGraphicsView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::tabletEvent(event);
}

bool QGraphicsView_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::actionEvent(event);
}

bool QGraphicsView_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::hideEvent(event);
}

bool QGraphicsView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QGraphicsView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool QGraphicsView_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QGraphicsView_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQGraphicsView*>(self)->QGraphicsView::metric(static_cast<MiqtVirtualQGraphicsView::PaintDeviceMetric>(param1));
}

bool QGraphicsView_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QGraphicsView_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQGraphicsView*>(self)->QGraphicsView::initPainter(painter);
}

bool QGraphicsView_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QGraphicsView_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQGraphicsView*>(self)->QGraphicsView::redirected(offset);
}

bool QGraphicsView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QGraphicsView_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQGraphicsView*>(self)->QGraphicsView::sharedPainter();
}

bool QGraphicsView_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::timerEvent(event);
}

bool QGraphicsView_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::childEvent(event);
}

bool QGraphicsView_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::customEvent(event);
}

bool QGraphicsView_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QGraphicsView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::connectNotify(*signal);
}

bool QGraphicsView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGraphicsView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsView*>(self)->QGraphicsView::disconnectNotify(*signal);
}

void QGraphicsView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QGraphicsView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QMargins(self_cast->viewportMargins());
}

void QGraphicsView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QGraphicsView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QGraphicsView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QGraphicsView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QGraphicsView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QGraphicsView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QGraphicsView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGraphicsView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGraphicsView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGraphicsView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGraphicsView_delete(QGraphicsView* self) {
	delete self;
}

