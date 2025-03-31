#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChart>
#include <QChartView>
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
#include <QGraphicsView>
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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qchartview.h>
#include "gen_qchartview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QChartView_resizeEvent(QChartView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QChartView_mousePressEvent(QChartView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QChartView_mouseMoveEvent(QChartView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QChartView_mouseReleaseEvent(QChartView*, intptr_t, QMouseEvent*);
QSize* miqt_exec_callback_QChartView_sizeHint(const QChartView*, intptr_t);
QVariant* miqt_exec_callback_QChartView_inputMethodQuery(const QChartView*, intptr_t, int);
void miqt_exec_callback_QChartView_setupViewport(QChartView*, intptr_t, QWidget*);
bool miqt_exec_callback_QChartView_event(QChartView*, intptr_t, QEvent*);
bool miqt_exec_callback_QChartView_viewportEvent(QChartView*, intptr_t, QEvent*);
void miqt_exec_callback_QChartView_contextMenuEvent(QChartView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QChartView_dragEnterEvent(QChartView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QChartView_dragLeaveEvent(QChartView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QChartView_dragMoveEvent(QChartView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QChartView_dropEvent(QChartView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QChartView_focusInEvent(QChartView*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QChartView_focusNextPrevChild(QChartView*, intptr_t, bool);
void miqt_exec_callback_QChartView_focusOutEvent(QChartView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QChartView_keyPressEvent(QChartView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QChartView_keyReleaseEvent(QChartView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QChartView_mouseDoubleClickEvent(QChartView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QChartView_wheelEvent(QChartView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QChartView_paintEvent(QChartView*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QChartView_scrollContentsBy(QChartView*, intptr_t, int, int);
void miqt_exec_callback_QChartView_showEvent(QChartView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QChartView_inputMethodEvent(QChartView*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QChartView_drawBackground(QChartView*, intptr_t, QPainter*, QRectF*);
void miqt_exec_callback_QChartView_drawForeground(QChartView*, intptr_t, QPainter*, QRectF*);
QSize* miqt_exec_callback_QChartView_minimumSizeHint(const QChartView*, intptr_t);
bool miqt_exec_callback_QChartView_eventFilter(QChartView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QChartView_viewportSizeHint(const QChartView*, intptr_t);
void miqt_exec_callback_QChartView_changeEvent(QChartView*, intptr_t, QEvent*);
void miqt_exec_callback_QChartView_initStyleOption(const QChartView*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QChartView_devType(const QChartView*, intptr_t);
void miqt_exec_callback_QChartView_setVisible(QChartView*, intptr_t, bool);
int miqt_exec_callback_QChartView_heightForWidth(const QChartView*, intptr_t, int);
bool miqt_exec_callback_QChartView_hasHeightForWidth(const QChartView*, intptr_t);
QPaintEngine* miqt_exec_callback_QChartView_paintEngine(const QChartView*, intptr_t);
void miqt_exec_callback_QChartView_enterEvent(QChartView*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QChartView_leaveEvent(QChartView*, intptr_t, QEvent*);
void miqt_exec_callback_QChartView_moveEvent(QChartView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QChartView_closeEvent(QChartView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QChartView_tabletEvent(QChartView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QChartView_actionEvent(QChartView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QChartView_hideEvent(QChartView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QChartView_nativeEvent(QChartView*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QChartView_metric(const QChartView*, intptr_t, int);
void miqt_exec_callback_QChartView_initPainter(const QChartView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QChartView_redirected(const QChartView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QChartView_sharedPainter(const QChartView*, intptr_t);
void miqt_exec_callback_QChartView_timerEvent(QChartView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QChartView_childEvent(QChartView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QChartView_customEvent(QChartView*, intptr_t, QEvent*);
void miqt_exec_callback_QChartView_connectNotify(QChartView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QChartView_disconnectNotify(QChartView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQChartView final : public QChartView {
public:

	MiqtVirtualQChartView(QWidget* parent): QChartView(parent) {};
	MiqtVirtualQChartView(): QChartView() {};
	MiqtVirtualQChartView(QChart* chart): QChartView(chart) {};
	MiqtVirtualQChartView(QChart* chart, QWidget* parent): QChartView(chart, parent) {};

	virtual ~MiqtVirtualQChartView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QChartView::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QChartView_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QChartView::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QChartView_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QChartView::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QChartView_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QChartView::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QChartView_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QChartView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QChartView_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	friend QSize* QChartView_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QChartView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QChartView_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	friend QVariant* QChartView_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* widget) override {
		if (handle__setupViewport == 0) {
			QChartView::setupViewport(widget);
			return;
		}
		
		QWidget* sigval1 = widget;

		miqt_exec_callback_QChartView_setupViewport(this, handle__setupViewport, sigval1);

		
	}

	friend void QChartView_virtualbase_setupViewport(void* self, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QChartView::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QChartView_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QChartView_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__viewportEvent == 0) {
			return QChartView::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QChartView_viewportEvent(this, handle__viewportEvent, sigval1);

		return callback_return_value;
	}

	friend bool QChartView_virtualbase_viewportEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QChartView::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QChartView_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QChartView::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QChartView_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QChartView::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QChartView_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QChartView::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QChartView_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QChartView::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QChartView_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QChartView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QChartView_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QChartView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QChartView_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	friend bool QChartView_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QChartView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QChartView_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QChartView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QChartView_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QChartView::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QChartView_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QChartView::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QChartView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QChartView::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QChartView_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QChartView::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QChartView_paintEvent(this, handle__paintEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__scrollContentsBy == 0) {
			QChartView::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QChartView_scrollContentsBy(this, handle__scrollContentsBy, sigval1, sigval2);

		
	}

	friend void QChartView_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QChartView::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QChartView_showEvent(this, handle__showEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QChartView::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QChartView_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawBackground = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawBackground(QPainter* painter, const QRectF& rect) override {
		if (handle__drawBackground == 0) {
			QChartView::drawBackground(painter, rect);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QChartView_drawBackground(this, handle__drawBackground, sigval1, sigval2);

		
	}

	friend void QChartView_virtualbase_drawBackground(void* self, QPainter* painter, QRectF* rect);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawForeground = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawForeground(QPainter* painter, const QRectF& rect) override {
		if (handle__drawForeground == 0) {
			QChartView::drawForeground(painter, rect);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QChartView_drawForeground(this, handle__drawForeground, sigval1, sigval2);

		
	}

	friend void QChartView_virtualbase_drawForeground(void* self, QPainter* painter, QRectF* rect);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QChartView::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QChartView_minimumSizeHint(this, handle__minimumSizeHint);

		return *callback_return_value;
	}

	friend QSize* QChartView_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QChartView::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QChartView_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QChartView_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__viewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__viewportSizeHint == 0) {
			return QChartView::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QChartView_viewportSizeHint(this, handle__viewportSizeHint);

		return *callback_return_value;
	}

	friend QSize* QChartView_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QChartView::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QChartView_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__initStyleOption == 0) {
			QChartView::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QChartView_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	friend void QChartView_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QChartView::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QChartView_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	friend int QChartView_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QChartView::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QChartView_setVisible(this, handle__setVisible, sigval1);

		
	}

	friend void QChartView_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QChartView::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QChartView_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QChartView_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QChartView::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QChartView_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	friend bool QChartView_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QChartView::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QChartView_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	friend QPaintEngine* QChartView_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__enterEvent == 0) {
			QChartView::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QChartView_enterEvent(this, handle__enterEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QChartView::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QChartView_leaveEvent(this, handle__leaveEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QChartView::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QChartView_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QChartView::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QChartView_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QChartView::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QChartView_tabletEvent(this, handle__tabletEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QChartView::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QChartView_actionEvent(this, handle__actionEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QChartView::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QChartView_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__nativeEvent == 0) {
			return QChartView::nativeEvent(eventType, message, result);
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

		bool callback_return_value = miqt_exec_callback_QChartView_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	friend bool QChartView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QChartView::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QChartView_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QChartView_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QChartView::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QChartView_initPainter(this, handle__initPainter, sigval1);

		
	}

	friend void QChartView_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QChartView::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QChartView_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	friend QPaintDevice* QChartView_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QChartView::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QChartView_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	friend QPainter* QChartView_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QChartView::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QChartView_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QChartView::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QChartView_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QChartView::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QChartView_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QChartView_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QChartView::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QChartView_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QChartView_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QChartView::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QChartView_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QChartView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QChartView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QChartView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QChartView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QChartView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QChartView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QChartView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QChartView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QChartView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QChartView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QChartView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QChartView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QChartView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QChartView* QChartView_new(QWidget* parent) {
	return new MiqtVirtualQChartView(parent);
}

QChartView* QChartView_new2() {
	return new MiqtVirtualQChartView();
}

QChartView* QChartView_new3(QChart* chart) {
	return new MiqtVirtualQChartView(chart);
}

QChartView* QChartView_new4(QChart* chart, QWidget* parent) {
	return new MiqtVirtualQChartView(chart, parent);
}

void QChartView_virtbase(QChartView* src, QGraphicsView** outptr_QGraphicsView) {
	*outptr_QGraphicsView = static_cast<QGraphicsView*>(src);
}

QMetaObject* QChartView_metaObject(const QChartView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QChartView_metacast(QChartView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QChartView_tr(const char* s) {
	QString _ret = QChartView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QChartView_setRubberBand(QChartView* self, int* rubberBands) {
	self->setRubberBand((const QChartView::RubberBands&)(*rubberBands));
}

int QChartView_rubberBand(const QChartView* self) {
	QChartView::RubberBands _ret = self->rubberBand();
	return static_cast<int>(_ret);
}

QChart* QChartView_chart(const QChartView* self) {
	return self->chart();
}

void QChartView_setChart(QChartView* self, QChart* chart) {
	self->setChart(chart);
}

struct miqt_string QChartView_tr2(const char* s, const char* c) {
	QString _ret = QChartView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QChartView_tr3(const char* s, const char* c, int n) {
	QString _ret = QChartView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QChartView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QChartView_virtualbase_resizeEvent(void* self, QResizeEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::resizeEvent(event);

}

bool QChartView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QChartView_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::mousePressEvent(event);

}

bool QChartView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QChartView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::mouseMoveEvent(event);

}

bool QChartView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QChartView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::mouseReleaseEvent(event);

}

bool QChartView_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QChartView_virtualbase_sizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQChartView*)(self) )->QChartView::sizeHint());

}

bool QChartView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QChartView_virtualbase_inputMethodQuery(const void* self, int query) {

	return new QVariant(( (const MiqtVirtualQChartView*)(self) )->QChartView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

}

bool QChartView_override_virtual_setupViewport(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setupViewport = slot;
	return true;
}

void QChartView_virtualbase_setupViewport(void* self, QWidget* widget) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::setupViewport(widget);

}

bool QChartView_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QChartView_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQChartView*)(self) )->QChartView::event(event);

}

bool QChartView_override_virtual_viewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportEvent = slot;
	return true;
}

bool QChartView_virtualbase_viewportEvent(void* self, QEvent* event) {

	return ( (MiqtVirtualQChartView*)(self) )->QChartView::viewportEvent(event);

}

bool QChartView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QChartView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::contextMenuEvent(event);

}

bool QChartView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QChartView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::dragEnterEvent(event);

}

bool QChartView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QChartView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::dragLeaveEvent(event);

}

bool QChartView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QChartView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::dragMoveEvent(event);

}

bool QChartView_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QChartView_virtualbase_dropEvent(void* self, QDropEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::dropEvent(event);

}

bool QChartView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QChartView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::focusInEvent(event);

}

bool QChartView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QChartView_virtualbase_focusNextPrevChild(void* self, bool next) {

	return ( (MiqtVirtualQChartView*)(self) )->QChartView::focusNextPrevChild(next);

}

bool QChartView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QChartView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::focusOutEvent(event);

}

bool QChartView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QChartView_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::keyPressEvent(event);

}

bool QChartView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QChartView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::keyReleaseEvent(event);

}

bool QChartView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QChartView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::mouseDoubleClickEvent(event);

}

bool QChartView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QChartView_virtualbase_wheelEvent(void* self, QWheelEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::wheelEvent(event);

}

bool QChartView_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEvent = slot;
	return true;
}

void QChartView_virtualbase_paintEvent(void* self, QPaintEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::paintEvent(event);

}

bool QChartView_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__scrollContentsBy = slot;
	return true;
}

void QChartView_virtualbase_scrollContentsBy(void* self, int dx, int dy) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

}

bool QChartView_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QChartView_virtualbase_showEvent(void* self, QShowEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::showEvent(event);

}

bool QChartView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QChartView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::inputMethodEvent(event);

}

bool QChartView_override_virtual_drawBackground(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawBackground = slot;
	return true;
}

void QChartView_virtualbase_drawBackground(void* self, QPainter* painter, QRectF* rect) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::drawBackground(painter, *rect);

}

bool QChartView_override_virtual_drawForeground(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawForeground = slot;
	return true;
}

void QChartView_virtualbase_drawForeground(void* self, QPainter* painter, QRectF* rect) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::drawForeground(painter, *rect);

}

bool QChartView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QChartView_virtualbase_minimumSizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQChartView*)(self) )->QChartView::minimumSizeHint());

}

bool QChartView_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QChartView_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {

	return ( (MiqtVirtualQChartView*)(self) )->QChartView::eventFilter(param1, param2);

}

bool QChartView_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__viewportSizeHint = slot;
	return true;
}

QSize* QChartView_virtualbase_viewportSizeHint(const void* self) {

	return new QSize(( (const MiqtVirtualQChartView*)(self) )->QChartView::viewportSizeHint());

}

bool QChartView_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QChartView_virtualbase_changeEvent(void* self, QEvent* param1) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::changeEvent(param1);

}

bool QChartView_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QChartView_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option) {

	( (const MiqtVirtualQChartView*)(self) )->QChartView::initStyleOption(option);

}

bool QChartView_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QChartView_virtualbase_devType(const void* self) {

	return ( (const MiqtVirtualQChartView*)(self) )->QChartView::devType();

}

bool QChartView_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setVisible = slot;
	return true;
}

void QChartView_virtualbase_setVisible(void* self, bool visible) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::setVisible(visible);

}

bool QChartView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QChartView_virtualbase_heightForWidth(const void* self, int param1) {

	return ( (const MiqtVirtualQChartView*)(self) )->QChartView::heightForWidth(static_cast<int>(param1));

}

bool QChartView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QChartView_virtualbase_hasHeightForWidth(const void* self) {

	return ( (const MiqtVirtualQChartView*)(self) )->QChartView::hasHeightForWidth();

}

bool QChartView_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QChartView_virtualbase_paintEngine(const void* self) {

	return ( (const MiqtVirtualQChartView*)(self) )->QChartView::paintEngine();

}

bool QChartView_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__enterEvent = slot;
	return true;
}

void QChartView_virtualbase_enterEvent(void* self, QEnterEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::enterEvent(event);

}

bool QChartView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__leaveEvent = slot;
	return true;
}

void QChartView_virtualbase_leaveEvent(void* self, QEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::leaveEvent(event);

}

bool QChartView_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QChartView_virtualbase_moveEvent(void* self, QMoveEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::moveEvent(event);

}

bool QChartView_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QChartView_virtualbase_closeEvent(void* self, QCloseEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::closeEvent(event);

}

bool QChartView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__tabletEvent = slot;
	return true;
}

void QChartView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::tabletEvent(event);

}

bool QChartView_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__actionEvent = slot;
	return true;
}

void QChartView_virtualbase_actionEvent(void* self, QActionEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::actionEvent(event);

}

bool QChartView_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QChartView_virtualbase_hideEvent(void* self, QHideEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::hideEvent(event);

}

bool QChartView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QChartView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);

	return ( (MiqtVirtualQChartView*)(self) )->QChartView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

}

bool QChartView_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QChartView_virtualbase_metric(const void* self, int param1) {

	return ( (const MiqtVirtualQChartView*)(self) )->QChartView::metric(static_cast<MiqtVirtualQChartView::PaintDeviceMetric>(param1));

}

bool QChartView_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QChartView_virtualbase_initPainter(const void* self, QPainter* painter) {

	( (const MiqtVirtualQChartView*)(self) )->QChartView::initPainter(painter);

}

bool QChartView_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QChartView_virtualbase_redirected(const void* self, QPoint* offset) {

	return ( (const MiqtVirtualQChartView*)(self) )->QChartView::redirected(offset);

}

bool QChartView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QChartView_virtualbase_sharedPainter(const void* self) {

	return ( (const MiqtVirtualQChartView*)(self) )->QChartView::sharedPainter();

}

bool QChartView_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QChartView_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::timerEvent(event);

}

bool QChartView_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QChartView_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::childEvent(event);

}

bool QChartView_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QChartView_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::customEvent(event);

}

bool QChartView_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QChartView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::connectNotify(*signal);

}

bool QChartView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QChartView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQChartView*)(self) )->QChartView::disconnectNotify(*signal);

}

void QChartView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));

}

QMargins* QChartView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QMargins(self_cast->viewportMargins());

}

void QChartView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->drawFrame(param1);

}

void QChartView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QChartView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->create();

}

void QChartView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->destroy();

}

bool QChartView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusNextChild();

}

bool QChartView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->focusPreviousChild();

}

QObject* QChartView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QChartView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QChartView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QChartView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQChartView* self_cast = dynamic_cast<MiqtVirtualQChartView*>( (QChartView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QChartView_delete(QChartView* self) {
	delete self;
}

