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

void miqt_exec_callback_QGraphicsView_RubberBandChanged(intptr_t, QRect*, QPointF*, QPointF*);
QSize* miqt_exec_callback_QGraphicsView_SizeHint(const QGraphicsView*, intptr_t);
QVariant* miqt_exec_callback_QGraphicsView_InputMethodQuery(const QGraphicsView*, intptr_t, int);
void miqt_exec_callback_QGraphicsView_SetupViewport(QGraphicsView*, intptr_t, QWidget*);
bool miqt_exec_callback_QGraphicsView_Event(QGraphicsView*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsView_ViewportEvent(QGraphicsView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsView_ContextMenuEvent(QGraphicsView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QGraphicsView_DragEnterEvent(QGraphicsView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QGraphicsView_DragLeaveEvent(QGraphicsView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QGraphicsView_DragMoveEvent(QGraphicsView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QGraphicsView_DropEvent(QGraphicsView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QGraphicsView_FocusInEvent(QGraphicsView*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QGraphicsView_FocusNextPrevChild(QGraphicsView*, intptr_t, bool);
void miqt_exec_callback_QGraphicsView_FocusOutEvent(QGraphicsView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsView_KeyPressEvent(QGraphicsView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsView_KeyReleaseEvent(QGraphicsView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsView_MouseDoubleClickEvent(QGraphicsView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QGraphicsView_MousePressEvent(QGraphicsView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QGraphicsView_MouseMoveEvent(QGraphicsView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QGraphicsView_MouseReleaseEvent(QGraphicsView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QGraphicsView_WheelEvent(QGraphicsView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QGraphicsView_PaintEvent(QGraphicsView*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QGraphicsView_ResizeEvent(QGraphicsView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QGraphicsView_ScrollContentsBy(QGraphicsView*, intptr_t, int, int);
void miqt_exec_callback_QGraphicsView_ShowEvent(QGraphicsView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QGraphicsView_InputMethodEvent(QGraphicsView*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QGraphicsView_DrawBackground(QGraphicsView*, intptr_t, QPainter*, QRectF*);
void miqt_exec_callback_QGraphicsView_DrawForeground(QGraphicsView*, intptr_t, QPainter*, QRectF*);
QSize* miqt_exec_callback_QGraphicsView_MinimumSizeHint(const QGraphicsView*, intptr_t);
bool miqt_exec_callback_QGraphicsView_EventFilter(QGraphicsView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QGraphicsView_ViewportSizeHint(const QGraphicsView*, intptr_t);
void miqt_exec_callback_QGraphicsView_ChangeEvent(QGraphicsView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsView_InitStyleOption(const QGraphicsView*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QGraphicsView_DevType(const QGraphicsView*, intptr_t);
void miqt_exec_callback_QGraphicsView_SetVisible(QGraphicsView*, intptr_t, bool);
int miqt_exec_callback_QGraphicsView_HeightForWidth(const QGraphicsView*, intptr_t, int);
bool miqt_exec_callback_QGraphicsView_HasHeightForWidth(const QGraphicsView*, intptr_t);
QPaintEngine* miqt_exec_callback_QGraphicsView_PaintEngine(const QGraphicsView*, intptr_t);
void miqt_exec_callback_QGraphicsView_EnterEvent(QGraphicsView*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QGraphicsView_LeaveEvent(QGraphicsView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsView_MoveEvent(QGraphicsView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QGraphicsView_CloseEvent(QGraphicsView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QGraphicsView_TabletEvent(QGraphicsView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QGraphicsView_ActionEvent(QGraphicsView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QGraphicsView_HideEvent(QGraphicsView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QGraphicsView_NativeEvent(QGraphicsView*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QGraphicsView_Metric(const QGraphicsView*, intptr_t, int);
void miqt_exec_callback_QGraphicsView_InitPainter(const QGraphicsView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QGraphicsView_Redirected(const QGraphicsView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QGraphicsView_SharedPainter(const QGraphicsView*, intptr_t);
void miqt_exec_callback_QGraphicsView_TimerEvent(QGraphicsView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsView_ChildEvent(QGraphicsView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsView_CustomEvent(QGraphicsView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsView_ConnectNotify(QGraphicsView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsView_DisconnectNotify(QGraphicsView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsView final : public QGraphicsView {
public:

	MiqtVirtualQGraphicsView(QWidget* parent): QGraphicsView(parent) {};
	MiqtVirtualQGraphicsView(): QGraphicsView() {};
	MiqtVirtualQGraphicsView(QGraphicsScene* scene): QGraphicsView(scene) {};
	MiqtVirtualQGraphicsView(QGraphicsScene* scene, QWidget* parent): QGraphicsView(scene, parent) {};

	virtual ~MiqtVirtualQGraphicsView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QGraphicsView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QGraphicsView_SizeHint(this, handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QGraphicsView::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsView_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetupViewport = 0;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* widget) override {
		if (handle__SetupViewport == 0) {
			QGraphicsView::setupViewport(widget);
			return;
		}
		
		QWidget* sigval1 = widget;

		miqt_exec_callback_QGraphicsView_SetupViewport(this, handle__SetupViewport, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetupViewport(QWidget* widget) {

		QGraphicsView::setupViewport(widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QGraphicsView::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsView_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QGraphicsView::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (handle__ViewportEvent == 0) {
			return QGraphicsView::viewportEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsView_ViewportEvent(this, handle__ViewportEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ViewportEvent(QEvent* event) {

		return QGraphicsView::viewportEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsView::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QGraphicsView::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsView::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QGraphicsView::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsView::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QGraphicsView::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsView::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QGraphicsView::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsView::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QGraphicsView::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsView::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsView::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QGraphicsView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QGraphicsView_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QGraphicsView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsView::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsView::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsView::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsView::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsView::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsView::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsView::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QGraphicsView::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsView::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QGraphicsView::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsView::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QGraphicsView::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsView::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QGraphicsView::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsView::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QGraphicsView::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QGraphicsView::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QGraphicsView::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QGraphicsView::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QGraphicsView::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ScrollContentsBy = 0;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (handle__ScrollContentsBy == 0) {
			QGraphicsView::scrollContentsBy(dx, dy);
			return;
		}
		
		int sigval1 = dx;
		int sigval2 = dy;

		miqt_exec_callback_QGraphicsView_ScrollContentsBy(this, handle__ScrollContentsBy, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ScrollContentsBy(int dx, int dy) {

		QGraphicsView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QGraphicsView::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QGraphicsView::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsView::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsView::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawBackground = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawBackground(QPainter* painter, const QRectF& rect) override {
		if (handle__DrawBackground == 0) {
			QGraphicsView::drawBackground(painter, rect);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsView_DrawBackground(this, handle__DrawBackground, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawBackground(QPainter* painter, QRectF* rect) {

		QGraphicsView::drawBackground(painter, *rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawForeground = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawForeground(QPainter* painter, const QRectF& rect) override {
		if (handle__DrawForeground == 0) {
			QGraphicsView::drawForeground(painter, rect);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsView_DrawForeground(this, handle__DrawForeground, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawForeground(QPainter* painter, QRectF* rect) {

		QGraphicsView::drawForeground(painter, *rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QGraphicsView::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QGraphicsView_MinimumSizeHint(this, handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QGraphicsView::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QGraphicsView::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QGraphicsView_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QGraphicsView::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ViewportSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (handle__ViewportSizeHint == 0) {
			return QGraphicsView::viewportSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QGraphicsView_ViewportSizeHint(this, handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QGraphicsView::viewportSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QGraphicsView::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsView_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QGraphicsView::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (handle__InitStyleOption == 0) {
			QGraphicsView::initStyleOption(option);
			return;
		}
		
		QStyleOptionFrame* sigval1 = option;

		miqt_exec_callback_QGraphicsView_InitStyleOption(this, handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOptionFrame* option) const {

		QGraphicsView::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QGraphicsView::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsView_DevType(this, handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QGraphicsView::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QGraphicsView::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QGraphicsView_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QGraphicsView::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QGraphicsView::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QGraphicsView_HeightForWidth(this, handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QGraphicsView::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QGraphicsView::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QGraphicsView_HasHeightForWidth(this, handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QGraphicsView::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QGraphicsView::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QGraphicsView_PaintEngine(this, handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QGraphicsView::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (handle__EnterEvent == 0) {
			QGraphicsView::enterEvent(event);
			return;
		}
		
		QEnterEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEnterEvent* event) {

		QGraphicsView::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QGraphicsView::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QGraphicsView::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QGraphicsView::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QGraphicsView::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QGraphicsView::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QGraphicsView::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QGraphicsView::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QGraphicsView::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QGraphicsView::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QGraphicsView::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QGraphicsView::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QGraphicsView::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (handle__NativeEvent == 0) {
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

		bool callback_return_value = miqt_exec_callback_QGraphicsView_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, intptr_t* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QGraphicsView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QGraphicsView::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QGraphicsView_Metric(this, handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QGraphicsView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QGraphicsView::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QGraphicsView_InitPainter(this, handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QGraphicsView::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QGraphicsView::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QGraphicsView_Redirected(this, handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QGraphicsView::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QGraphicsView::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QGraphicsView_SharedPainter(this, handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QGraphicsView::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QGraphicsView::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QGraphicsView::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QGraphicsView::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QGraphicsView::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QGraphicsView::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsView_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QGraphicsView::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QGraphicsView::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsView_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QGraphicsView::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QGraphicsView::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsView_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QGraphicsView::disconnectNotify(*signal);

	}

};

QGraphicsView* QGraphicsView_new(QWidget* parent) {
	return new MiqtVirtualQGraphicsView(parent);
}

QGraphicsView* QGraphicsView_new2() {
	return new MiqtVirtualQGraphicsView();
}

QGraphicsView* QGraphicsView_new3(QGraphicsScene* scene) {
	return new MiqtVirtualQGraphicsView(scene);
}

QGraphicsView* QGraphicsView_new4(QGraphicsScene* scene, QWidget* parent) {
	return new MiqtVirtualQGraphicsView(scene, parent);
}

void QGraphicsView_virtbase(QGraphicsView* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* QGraphicsView_MetaObject(const QGraphicsView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsView_Metacast(QGraphicsView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsView_Tr(const char* s) {
	QString _ret = QGraphicsView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QGraphicsView_SizeHint(const QGraphicsView* self) {
	return new QSize(self->sizeHint());
}

int QGraphicsView_RenderHints(const QGraphicsView* self) {
	QPainter::RenderHints _ret = self->renderHints();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetRenderHint(QGraphicsView* self, int hint) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint));
}

void QGraphicsView_SetRenderHints(QGraphicsView* self, int hints) {
	self->setRenderHints(static_cast<QPainter::RenderHints>(hints));
}

int QGraphicsView_Alignment(const QGraphicsView* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetAlignment(QGraphicsView* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QGraphicsView_TransformationAnchor(const QGraphicsView* self) {
	QGraphicsView::ViewportAnchor _ret = self->transformationAnchor();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetTransformationAnchor(QGraphicsView* self, int anchor) {
	self->setTransformationAnchor(static_cast<QGraphicsView::ViewportAnchor>(anchor));
}

int QGraphicsView_ResizeAnchor(const QGraphicsView* self) {
	QGraphicsView::ViewportAnchor _ret = self->resizeAnchor();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetResizeAnchor(QGraphicsView* self, int anchor) {
	self->setResizeAnchor(static_cast<QGraphicsView::ViewportAnchor>(anchor));
}

int QGraphicsView_ViewportUpdateMode(const QGraphicsView* self) {
	QGraphicsView::ViewportUpdateMode _ret = self->viewportUpdateMode();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetViewportUpdateMode(QGraphicsView* self, int mode) {
	self->setViewportUpdateMode(static_cast<QGraphicsView::ViewportUpdateMode>(mode));
}

int QGraphicsView_OptimizationFlags(const QGraphicsView* self) {
	QGraphicsView::OptimizationFlags _ret = self->optimizationFlags();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetOptimizationFlag(QGraphicsView* self, int flag) {
	self->setOptimizationFlag(static_cast<QGraphicsView::OptimizationFlag>(flag));
}

void QGraphicsView_SetOptimizationFlags(QGraphicsView* self, int flags) {
	self->setOptimizationFlags(static_cast<QGraphicsView::OptimizationFlags>(flags));
}

int QGraphicsView_DragMode(const QGraphicsView* self) {
	QGraphicsView::DragMode _ret = self->dragMode();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetDragMode(QGraphicsView* self, int mode) {
	self->setDragMode(static_cast<QGraphicsView::DragMode>(mode));
}

int QGraphicsView_RubberBandSelectionMode(const QGraphicsView* self) {
	Qt::ItemSelectionMode _ret = self->rubberBandSelectionMode();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetRubberBandSelectionMode(QGraphicsView* self, int mode) {
	self->setRubberBandSelectionMode(static_cast<Qt::ItemSelectionMode>(mode));
}

QRect* QGraphicsView_RubberBandRect(const QGraphicsView* self) {
	return new QRect(self->rubberBandRect());
}

int QGraphicsView_CacheMode(const QGraphicsView* self) {
	QGraphicsView::CacheMode _ret = self->cacheMode();
	return static_cast<int>(_ret);
}

void QGraphicsView_SetCacheMode(QGraphicsView* self, int mode) {
	self->setCacheMode(static_cast<QGraphicsView::CacheMode>(mode));
}

void QGraphicsView_ResetCachedContent(QGraphicsView* self) {
	self->resetCachedContent();
}

bool QGraphicsView_IsInteractive(const QGraphicsView* self) {
	return self->isInteractive();
}

void QGraphicsView_SetInteractive(QGraphicsView* self, bool allowed) {
	self->setInteractive(allowed);
}

QGraphicsScene* QGraphicsView_Scene(const QGraphicsView* self) {
	return self->scene();
}

void QGraphicsView_SetScene(QGraphicsView* self, QGraphicsScene* scene) {
	self->setScene(scene);
}

QRectF* QGraphicsView_SceneRect(const QGraphicsView* self) {
	return new QRectF(self->sceneRect());
}

void QGraphicsView_SetSceneRect(QGraphicsView* self, QRectF* rect) {
	self->setSceneRect(*rect);
}

void QGraphicsView_SetSceneRect2(QGraphicsView* self, double x, double y, double w, double h) {
	self->setSceneRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QTransform* QGraphicsView_Transform(const QGraphicsView* self) {
	return new QTransform(self->transform());
}

QTransform* QGraphicsView_ViewportTransform(const QGraphicsView* self) {
	return new QTransform(self->viewportTransform());
}

bool QGraphicsView_IsTransformed(const QGraphicsView* self) {
	return self->isTransformed();
}

void QGraphicsView_SetTransform(QGraphicsView* self, QTransform* matrix) {
	self->setTransform(*matrix);
}

void QGraphicsView_ResetTransform(QGraphicsView* self) {
	self->resetTransform();
}

void QGraphicsView_Rotate(QGraphicsView* self, double angle) {
	self->rotate(static_cast<qreal>(angle));
}

void QGraphicsView_Scale(QGraphicsView* self, double sx, double sy) {
	self->scale(static_cast<qreal>(sx), static_cast<qreal>(sy));
}

void QGraphicsView_Shear(QGraphicsView* self, double sh, double sv) {
	self->shear(static_cast<qreal>(sh), static_cast<qreal>(sv));
}

void QGraphicsView_Translate(QGraphicsView* self, double dx, double dy) {
	self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QGraphicsView_CenterOn(QGraphicsView* self, QPointF* pos) {
	self->centerOn(*pos);
}

void QGraphicsView_CenterOn2(QGraphicsView* self, double x, double y) {
	self->centerOn(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QGraphicsView_CenterOnWithItem(QGraphicsView* self, QGraphicsItem* item) {
	self->centerOn(item);
}

void QGraphicsView_EnsureVisible(QGraphicsView* self, QRectF* rect) {
	self->ensureVisible(*rect);
}

void QGraphicsView_EnsureVisible2(QGraphicsView* self, double x, double y, double w, double h) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsView_EnsureVisibleWithItem(QGraphicsView* self, QGraphicsItem* item) {
	self->ensureVisible(item);
}

void QGraphicsView_FitInView(QGraphicsView* self, QRectF* rect) {
	self->fitInView(*rect);
}

void QGraphicsView_FitInView2(QGraphicsView* self, double x, double y, double w, double h) {
	self->fitInView(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsView_FitInViewWithItem(QGraphicsView* self, QGraphicsItem* item) {
	self->fitInView(item);
}

void QGraphicsView_Render(QGraphicsView* self, QPainter* painter) {
	self->render(painter);
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items(const QGraphicsView* self) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_ItemsWithPos(const QGraphicsView* self, QPoint* pos) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items2(const QGraphicsView* self, int x, int y) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_ItemsWithRect(const QGraphicsView* self, QRect* rect) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items3(const QGraphicsView* self, int x, int y, int w, int h) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_ItemsWithPath(const QGraphicsView* self, QPainterPath* path) {
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

QGraphicsItem* QGraphicsView_ItemAt(const QGraphicsView* self, QPoint* pos) {
	return self->itemAt(*pos);
}

QGraphicsItem* QGraphicsView_ItemAt2(const QGraphicsView* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QPointF* QGraphicsView_MapToScene(const QGraphicsView* self, QPoint* point) {
	return new QPointF(self->mapToScene(*point));
}

QPainterPath* QGraphicsView_MapToSceneWithPath(const QGraphicsView* self, QPainterPath* path) {
	return new QPainterPath(self->mapToScene(*path));
}

QPoint* QGraphicsView_MapFromScene(const QGraphicsView* self, QPointF* point) {
	return new QPoint(self->mapFromScene(*point));
}

QPainterPath* QGraphicsView_MapFromSceneWithPath(const QGraphicsView* self, QPainterPath* path) {
	return new QPainterPath(self->mapFromScene(*path));
}

QPointF* QGraphicsView_MapToScene2(const QGraphicsView* self, int x, int y) {
	return new QPointF(self->mapToScene(static_cast<int>(x), static_cast<int>(y)));
}

QPoint* QGraphicsView_MapFromScene2(const QGraphicsView* self, double x, double y) {
	return new QPoint(self->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QVariant* QGraphicsView_InputMethodQuery(const QGraphicsView* self, int query) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

QBrush* QGraphicsView_BackgroundBrush(const QGraphicsView* self) {
	return new QBrush(self->backgroundBrush());
}

void QGraphicsView_SetBackgroundBrush(QGraphicsView* self, QBrush* brush) {
	self->setBackgroundBrush(*brush);
}

QBrush* QGraphicsView_ForegroundBrush(const QGraphicsView* self) {
	return new QBrush(self->foregroundBrush());
}

void QGraphicsView_SetForegroundBrush(QGraphicsView* self, QBrush* brush) {
	self->setForegroundBrush(*brush);
}

void QGraphicsView_UpdateScene(QGraphicsView* self, struct miqt_array /* of QRectF* */  rects) {
	QList<QRectF> rects_QList;
	rects_QList.reserve(rects.len);
	QRectF** rects_arr = static_cast<QRectF**>(rects.data);
	for(size_t i = 0; i < rects.len; ++i) {
		rects_QList.push_back(*(rects_arr[i]));
	}
	self->updateScene(rects_QList);
}

void QGraphicsView_InvalidateScene(QGraphicsView* self) {
	self->invalidateScene();
}

void QGraphicsView_UpdateSceneRect(QGraphicsView* self, QRectF* rect) {
	self->updateSceneRect(*rect);
}

void QGraphicsView_RubberBandChanged(QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint) {
	self->rubberBandChanged(*viewportRect, *fromScenePoint, *toScenePoint);
}

void QGraphicsView_connect_RubberBandChanged(QGraphicsView* self, intptr_t slot) {
	MiqtVirtualQGraphicsView::connect(self, static_cast<void (QGraphicsView::*)(QRect, QPointF, QPointF)>(&QGraphicsView::rubberBandChanged), self, [=](QRect viewportRect, QPointF fromScenePoint, QPointF toScenePoint) {
		QRect* sigval1 = new QRect(viewportRect);
		QPointF* sigval2 = new QPointF(fromScenePoint);
		QPointF* sigval3 = new QPointF(toScenePoint);
		miqt_exec_callback_QGraphicsView_RubberBandChanged(slot, sigval1, sigval2, sigval3);
	});
}

struct miqt_string QGraphicsView_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsView_SetRenderHint2(QGraphicsView* self, int hint, bool enabled) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint), enabled);
}

void QGraphicsView_SetOptimizationFlag2(QGraphicsView* self, int flag, bool enabled) {
	self->setOptimizationFlag(static_cast<QGraphicsView::OptimizationFlag>(flag), enabled);
}

void QGraphicsView_SetTransform2(QGraphicsView* self, QTransform* matrix, bool combine) {
	self->setTransform(*matrix, combine);
}

void QGraphicsView_EnsureVisible22(QGraphicsView* self, QRectF* rect, int xmargin) {
	self->ensureVisible(*rect, static_cast<int>(xmargin));
}

void QGraphicsView_EnsureVisible3(QGraphicsView* self, QRectF* rect, int xmargin, int ymargin) {
	self->ensureVisible(*rect, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsView_EnsureVisible5(QGraphicsView* self, double x, double y, double w, double h, int xmargin) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin));
}

void QGraphicsView_EnsureVisible6(QGraphicsView* self, double x, double y, double w, double h, int xmargin, int ymargin) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsView_EnsureVisible23(QGraphicsView* self, QGraphicsItem* item, int xmargin) {
	self->ensureVisible(item, static_cast<int>(xmargin));
}

void QGraphicsView_EnsureVisible32(QGraphicsView* self, QGraphicsItem* item, int xmargin, int ymargin) {
	self->ensureVisible(item, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsView_FitInView22(QGraphicsView* self, QRectF* rect, int aspectRadioMode) {
	self->fitInView(*rect, static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_FitInView5(QGraphicsView* self, double x, double y, double w, double h, int aspectRadioMode) {
	self->fitInView(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_FitInView23(QGraphicsView* self, QGraphicsItem* item, int aspectRadioMode) {
	self->fitInView(item, static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_Render2(QGraphicsView* self, QPainter* painter, QRectF* target) {
	self->render(painter, *target);
}

void QGraphicsView_Render3(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source) {
	self->render(painter, *target, *source);
}

void QGraphicsView_Render4(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source, int aspectRatioMode) {
	self->render(painter, *target, *source, static_cast<Qt::AspectRatioMode>(aspectRatioMode));
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items22(const QGraphicsView* self, QRect* rect, int mode) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items5(const QGraphicsView* self, int x, int y, int w, int h, int mode) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items24(const QGraphicsView* self, QPainterPath* path, int mode) {
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

void QGraphicsView_InvalidateScene1(QGraphicsView* self, QRectF* rect) {
	self->invalidateScene(*rect);
}

void QGraphicsView_InvalidateScene2(QGraphicsView* self, QRectF* rect, int layers) {
	self->invalidateScene(*rect, static_cast<QGraphicsScene::SceneLayers>(layers));
}

bool QGraphicsView_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QGraphicsView_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_SizeHint();
}

bool QGraphicsView_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsView_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsView_override_virtual_SetupViewport(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetupViewport = slot;
	return true;
}

void QGraphicsView_virtualbase_SetupViewport(void* self, QWidget* widget) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_SetupViewport(widget);
}

bool QGraphicsView_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QGraphicsView_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_Event(event);
}

bool QGraphicsView_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportEvent = slot;
	return true;
}

bool QGraphicsView_virtualbase_ViewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_ViewportEvent(event);
}

bool QGraphicsView_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsView_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsView_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsView_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsView_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsView_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QGraphicsView_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QGraphicsView_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsView_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsView_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsView_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsView_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsView_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsView_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_PaintEvent(event);
}

bool QGraphicsView_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_ResizeEvent(event);
}

bool QGraphicsView_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ScrollContentsBy = slot;
	return true;
}

void QGraphicsView_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

bool QGraphicsView_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_ShowEvent(event);
}

bool QGraphicsView_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsView_override_virtual_DrawBackground(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DrawBackground = slot;
	return true;
}

void QGraphicsView_virtualbase_DrawBackground(void* self, QPainter* painter, QRectF* rect) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_DrawBackground(painter, rect);
}

bool QGraphicsView_override_virtual_DrawForeground(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DrawForeground = slot;
	return true;
}

void QGraphicsView_virtualbase_DrawForeground(void* self, QPainter* painter, QRectF* rect) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_DrawForeground(painter, rect);
}

bool QGraphicsView_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QGraphicsView_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_MinimumSizeHint();
}

bool QGraphicsView_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QGraphicsView_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QGraphicsView_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ViewportSizeHint = slot;
	return true;
}

QSize* QGraphicsView_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_ViewportSizeHint();
}

bool QGraphicsView_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QGraphicsView_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QGraphicsView_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option) {
	( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_InitStyleOption(option);
}

bool QGraphicsView_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QGraphicsView_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_DevType();
}

bool QGraphicsView_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QGraphicsView_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_SetVisible(visible);
}

bool QGraphicsView_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QGraphicsView_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QGraphicsView_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QGraphicsView_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_HasHeightForWidth();
}

bool QGraphicsView_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QGraphicsView_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_PaintEngine();
}

bool QGraphicsView_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_EnterEvent(void* self, QEnterEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_EnterEvent(event);
}

bool QGraphicsView_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_LeaveEvent(event);
}

bool QGraphicsView_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_MoveEvent(event);
}

bool QGraphicsView_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_CloseEvent(event);
}

bool QGraphicsView_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_TabletEvent(event);
}

bool QGraphicsView_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_ActionEvent(event);
}

bool QGraphicsView_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_HideEvent(event);
}

bool QGraphicsView_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QGraphicsView_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	return ( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QGraphicsView_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QGraphicsView_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_Metric(param1);
}

bool QGraphicsView_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QGraphicsView_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_InitPainter(painter);
}

bool QGraphicsView_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QGraphicsView_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_Redirected(offset);
}

bool QGraphicsView_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QGraphicsView_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_SharedPainter();
}

bool QGraphicsView_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_TimerEvent(event);
}

bool QGraphicsView_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_ChildEvent(event);
}

bool QGraphicsView_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QGraphicsView_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_CustomEvent(event);
}

bool QGraphicsView_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QGraphicsView_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QGraphicsView_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsView* self_cast = dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QGraphicsView_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QGraphicsView_Delete(QGraphicsView* self) {
	delete self;
}

