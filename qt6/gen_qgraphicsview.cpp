#include <QAbstractScrollArea>
#include <QBrush>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPaintDevice>
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
#include <QTransform>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qgraphicsview.h>
#include "gen_qgraphicsview.h"
#include "_cgo_export.h"

class MiqtVirtualQGraphicsView : public virtual QGraphicsView {
public:

	MiqtVirtualQGraphicsView(QWidget* parent): QGraphicsView(parent) {};
	MiqtVirtualQGraphicsView(): QGraphicsView() {};
	MiqtVirtualQGraphicsView(QGraphicsScene* scene): QGraphicsView(scene) {};
	MiqtVirtualQGraphicsView(QGraphicsScene* scene, QWidget* parent): QGraphicsView(scene, parent) {};

	virtual ~MiqtVirtualQGraphicsView() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QGraphicsView::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QGraphicsView_SizeHint(const_cast<MiqtVirtualQGraphicsView*>(this), handle__SizeHint);

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

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsView_InputMethodQuery(const_cast<MiqtVirtualQGraphicsView*>(this), handle__InputMethodQuery, sigval1);

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
		

		QSize* callback_return_value = miqt_exec_callback_QGraphicsView_MinimumSizeHint(const_cast<MiqtVirtualQGraphicsView*>(this), handle__MinimumSizeHint);

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
		

		QSize* callback_return_value = miqt_exec_callback_QGraphicsView_ViewportSizeHint(const_cast<MiqtVirtualQGraphicsView*>(this), handle__ViewportSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_ViewportSizeHint() const {

		return new QSize(QGraphicsView::viewportSizeHint());

	}

};

void QGraphicsView_new(QWidget* parent, QGraphicsView** outptr_QGraphicsView, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQGraphicsView* ret = new MiqtVirtualQGraphicsView(parent);
	*outptr_QGraphicsView = ret;
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(ret);
	*outptr_QFrame = static_cast<QFrame*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QGraphicsView_new2(QGraphicsView** outptr_QGraphicsView, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQGraphicsView* ret = new MiqtVirtualQGraphicsView();
	*outptr_QGraphicsView = ret;
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(ret);
	*outptr_QFrame = static_cast<QFrame*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QGraphicsView_new3(QGraphicsScene* scene, QGraphicsView** outptr_QGraphicsView, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQGraphicsView* ret = new MiqtVirtualQGraphicsView(scene);
	*outptr_QGraphicsView = ret;
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(ret);
	*outptr_QFrame = static_cast<QFrame*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QGraphicsView_new4(QGraphicsScene* scene, QWidget* parent, QGraphicsView** outptr_QGraphicsView, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQGraphicsView* ret = new MiqtVirtualQGraphicsView(scene, parent);
	*outptr_QGraphicsView = ret;
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(ret);
	*outptr_QFrame = static_cast<QFrame*>(ret);
	*outptr_QWidget = static_cast<QWidget*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
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

void QGraphicsView_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__SizeHint = slot;
}

QSize* QGraphicsView_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_SizeHint();
}

void QGraphicsView_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__InputMethodQuery = slot;
}

QVariant* QGraphicsView_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_InputMethodQuery(query);
}

void QGraphicsView_override_virtual_SetupViewport(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__SetupViewport = slot;
}

void QGraphicsView_virtualbase_SetupViewport(void* self, QWidget* widget) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_SetupViewport(widget);
}

void QGraphicsView_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__Event = slot;
}

bool QGraphicsView_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_Event(event);
}

void QGraphicsView_override_virtual_ViewportEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__ViewportEvent = slot;
}

bool QGraphicsView_virtualbase_ViewportEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_ViewportEvent(event);
}

void QGraphicsView_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__ContextMenuEvent = slot;
}

void QGraphicsView_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_ContextMenuEvent(event);
}

void QGraphicsView_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__DragEnterEvent = slot;
}

void QGraphicsView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_DragEnterEvent(event);
}

void QGraphicsView_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__DragLeaveEvent = slot;
}

void QGraphicsView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_DragLeaveEvent(event);
}

void QGraphicsView_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__DragMoveEvent = slot;
}

void QGraphicsView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_DragMoveEvent(event);
}

void QGraphicsView_override_virtual_DropEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__DropEvent = slot;
}

void QGraphicsView_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_DropEvent(event);
}

void QGraphicsView_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__FocusInEvent = slot;
}

void QGraphicsView_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_FocusInEvent(event);
}

void QGraphicsView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QGraphicsView_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QGraphicsView_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__FocusOutEvent = slot;
}

void QGraphicsView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_FocusOutEvent(event);
}

void QGraphicsView_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__KeyPressEvent = slot;
}

void QGraphicsView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_KeyPressEvent(event);
}

void QGraphicsView_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__KeyReleaseEvent = slot;
}

void QGraphicsView_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_KeyReleaseEvent(event);
}

void QGraphicsView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__MouseDoubleClickEvent = slot;
}

void QGraphicsView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

void QGraphicsView_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__MousePressEvent = slot;
}

void QGraphicsView_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_MousePressEvent(event);
}

void QGraphicsView_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__MouseMoveEvent = slot;
}

void QGraphicsView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_MouseMoveEvent(event);
}

void QGraphicsView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__MouseReleaseEvent = slot;
}

void QGraphicsView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_MouseReleaseEvent(event);
}

void QGraphicsView_override_virtual_WheelEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__WheelEvent = slot;
}

void QGraphicsView_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_WheelEvent(event);
}

void QGraphicsView_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__PaintEvent = slot;
}

void QGraphicsView_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_PaintEvent(event);
}

void QGraphicsView_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__ResizeEvent = slot;
}

void QGraphicsView_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_ResizeEvent(event);
}

void QGraphicsView_override_virtual_ScrollContentsBy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__ScrollContentsBy = slot;
}

void QGraphicsView_virtualbase_ScrollContentsBy(void* self, int dx, int dy) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_ScrollContentsBy(dx, dy);
}

void QGraphicsView_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__ShowEvent = slot;
}

void QGraphicsView_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_ShowEvent(event);
}

void QGraphicsView_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__InputMethodEvent = slot;
}

void QGraphicsView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_InputMethodEvent(event);
}

void QGraphicsView_override_virtual_DrawBackground(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__DrawBackground = slot;
}

void QGraphicsView_virtualbase_DrawBackground(void* self, QPainter* painter, QRectF* rect) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_DrawBackground(painter, rect);
}

void QGraphicsView_override_virtual_DrawForeground(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__DrawForeground = slot;
}

void QGraphicsView_virtualbase_DrawForeground(void* self, QPainter* painter, QRectF* rect) {
	( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_DrawForeground(painter, rect);
}

void QGraphicsView_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QGraphicsView_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_MinimumSizeHint();
}

void QGraphicsView_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__EventFilter = slot;
}

bool QGraphicsView_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQGraphicsView*)(self) )->virtualbase_EventFilter(param1, param2);
}

void QGraphicsView_override_virtual_ViewportSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsView*>( (QGraphicsView*)(self) )->handle__ViewportSizeHint = slot;
}

QSize* QGraphicsView_virtualbase_ViewportSizeHint(const void* self) {
	return ( (const MiqtVirtualQGraphicsView*)(self) )->virtualbase_ViewportSizeHint();
}

void QGraphicsView_Delete(QGraphicsView* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGraphicsView*>( self );
	} else {
		delete self;
	}
}

