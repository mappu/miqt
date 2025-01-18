#include <QCloseEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QGraphicsItem>
#include <QGraphicsLayoutItem>
#include <QGraphicsObject>
#include <QGraphicsProxyWidget>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsSceneResizeEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPointF>
#include <QRectF>
#include <QShowEvent>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOption>
#include <QStyleOptionGraphicsItem>
#include <QVariant>
#include <QWidget>
#include <qgraphicsproxywidget.h>
#include "gen_qgraphicsproxywidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGraphicsProxyWidget_SetGeometry(void*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsProxyWidget_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
int miqt_exec_callback_QGraphicsProxyWidget_Type(void*, intptr_t);
QVariant* miqt_exec_callback_QGraphicsProxyWidget_ItemChange(void*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsProxyWidget_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsProxyWidget_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_HideEvent(void*, intptr_t, QHideEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_GrabMouseEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_UngrabMouseEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_FocusOutEvent(void*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QGraphicsProxyWidget_FocusNextPrevChild(void*, intptr_t, bool);
QVariant* miqt_exec_callback_QGraphicsProxyWidget_InputMethodQuery(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsProxyWidget_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QSizeF* miqt_exec_callback_QGraphicsProxyWidget_SizeHint(void*, intptr_t, int, QSizeF*);
void miqt_exec_callback_QGraphicsProxyWidget_ResizeEvent(void*, intptr_t, QGraphicsSceneResizeEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_GetContentsMargins(void*, intptr_t, double*, double*, double*, double*);
void miqt_exec_callback_QGraphicsProxyWidget_PaintWindowFrame(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
QRectF* miqt_exec_callback_QGraphicsProxyWidget_BoundingRect(void*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsProxyWidget_Shape(void*, intptr_t);
void miqt_exec_callback_QGraphicsProxyWidget_InitStyleOption(void*, intptr_t, QStyleOption*);
void miqt_exec_callback_QGraphicsProxyWidget_UpdateGeometry(void*, intptr_t);
QVariant* miqt_exec_callback_QGraphicsProxyWidget_PropertyChange(void*, intptr_t, struct miqt_string, QVariant*);
bool miqt_exec_callback_QGraphicsProxyWidget_SceneEvent(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsProxyWidget_WindowFrameEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QGraphicsProxyWidget_WindowFrameSectionAt(void*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsProxyWidget_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_MoveEvent(void*, intptr_t, QGraphicsSceneMoveEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_PolishEvent(void*, intptr_t);
void miqt_exec_callback_QGraphicsProxyWidget_GrabKeyboardEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_UngrabKeyboardEvent(void*, intptr_t, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsProxyWidget final : public QGraphicsProxyWidget {
public:

	MiqtVirtualQGraphicsProxyWidget(): QGraphicsProxyWidget() {};
	MiqtVirtualQGraphicsProxyWidget(QGraphicsItem* parent): QGraphicsProxyWidget(parent) {};
	MiqtVirtualQGraphicsProxyWidget(QGraphicsItem* parent, Qt::WindowFlags wFlags): QGraphicsProxyWidget(parent, wFlags) {};

	virtual ~MiqtVirtualQGraphicsProxyWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__SetGeometry == 0) {
			QGraphicsProxyWidget::setGeometry(rect);
			return;
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsProxyWidget_SetGeometry(this, handle__SetGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetGeometry(QRectF* rect) {

		QGraphicsProxyWidget::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsProxyWidget::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsProxyWidget_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsProxyWidget::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsProxyWidget::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_Type(const_cast<MiqtVirtualQGraphicsProxyWidget*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsProxyWidget::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsProxyWidget::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsProxyWidget::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QGraphicsProxyWidget::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QGraphicsProxyWidget::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QGraphicsProxyWidget::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QGraphicsProxyWidget::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QGraphicsProxyWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QGraphicsProxyWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QGraphicsProxyWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QGraphicsProxyWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsProxyWidget::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsProxyWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsProxyWidget::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsProxyWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsProxyWidget::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsProxyWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsProxyWidget::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsProxyWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsProxyWidget::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsProxyWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsProxyWidget::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsProxyWidget::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsProxyWidget::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsProxyWidget::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsProxyWidget::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsProxyWidget::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GrabMouseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void grabMouseEvent(QEvent* event) override {
		if (handle__GrabMouseEvent == 0) {
			QGraphicsProxyWidget::grabMouseEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_GrabMouseEvent(this, handle__GrabMouseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_GrabMouseEvent(QEvent* event) {

		QGraphicsProxyWidget::grabMouseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UngrabMouseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void ungrabMouseEvent(QEvent* event) override {
		if (handle__UngrabMouseEvent == 0) {
			QGraphicsProxyWidget::ungrabMouseEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_UngrabMouseEvent(this, handle__UngrabMouseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UngrabMouseEvent(QEvent* event) {

		QGraphicsProxyWidget::ungrabMouseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsProxyWidget::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsProxyWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsProxyWidget::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsProxyWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsProxyWidget::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsProxyWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsProxyWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsProxyWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsProxyWidget::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsProxyWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsProxyWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsProxyWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsProxyWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsProxyWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsProxyWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsProxyWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsProxyWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsProxyWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QGraphicsProxyWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QGraphicsProxyWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsProxyWidget::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_InputMethodQuery(const_cast<MiqtVirtualQGraphicsProxyWidget*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsProxyWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsProxyWidget::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsProxyWidget::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__SizeHint == 0) {
			return QGraphicsProxyWidget::sizeHint(which, constraint);
		}
		
		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);

		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_SizeHint(const_cast<MiqtVirtualQGraphicsProxyWidget*>(this), handle__SizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSizeF* virtualbase_SizeHint(int which, QSizeF* constraint) const {

		return new QSizeF(QGraphicsProxyWidget::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QGraphicsProxyWidget::resizeEvent(event);
			return;
		}
		
		QGraphicsSceneResizeEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QGraphicsSceneResizeEvent* event) {

		QGraphicsProxyWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GetContentsMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (handle__GetContentsMargins == 0) {
			QGraphicsProxyWidget::getContentsMargins(left, top, right, bottom);
			return;
		}
		
		qreal* left_ret = left;
		double* sigval1 = static_cast<double*>(left_ret);
		qreal* top_ret = top;
		double* sigval2 = static_cast<double*>(top_ret);
		qreal* right_ret = right;
		double* sigval3 = static_cast<double*>(right_ret);
		qreal* bottom_ret = bottom;
		double* sigval4 = static_cast<double*>(bottom_ret);

		miqt_exec_callback_QGraphicsProxyWidget_GetContentsMargins(const_cast<MiqtVirtualQGraphicsProxyWidget*>(this), handle__GetContentsMargins, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_GetContentsMargins(double* left, double* top, double* right, double* bottom) const {

		QGraphicsProxyWidget::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintWindowFrame = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__PaintWindowFrame == 0) {
			QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsProxyWidget_PaintWindowFrame(this, handle__PaintWindowFrame, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintWindowFrame(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsProxyWidget::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_BoundingRect(const_cast<MiqtVirtualQGraphicsProxyWidget*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsProxyWidget::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsProxyWidget::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_Shape(const_cast<MiqtVirtualQGraphicsProxyWidget*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsProxyWidget::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOption* option) const override {
		if (handle__InitStyleOption == 0) {
			QGraphicsProxyWidget::initStyleOption(option);
			return;
		}
		
		QStyleOption* sigval1 = option;

		miqt_exec_callback_QGraphicsProxyWidget_InitStyleOption(const_cast<MiqtVirtualQGraphicsProxyWidget*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOption* option) const {

		QGraphicsProxyWidget::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (handle__UpdateGeometry == 0) {
			QGraphicsProxyWidget::updateGeometry();
			return;
		}
		

		miqt_exec_callback_QGraphicsProxyWidget_UpdateGeometry(this, handle__UpdateGeometry);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometry() {

		QGraphicsProxyWidget::updateGeometry();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PropertyChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
		if (handle__PropertyChange == 0) {
			return QGraphicsProxyWidget::propertyChange(propertyName, value);
		}
		
		const QString propertyName_ret = propertyName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray propertyName_b = propertyName_ret.toUtf8();
		struct miqt_string propertyName_ms;
		propertyName_ms.len = propertyName_b.length();
		propertyName_ms.data = static_cast<char*>(malloc(propertyName_ms.len));
		memcpy(propertyName_ms.data, propertyName_b.data(), propertyName_ms.len);
		struct miqt_string sigval1 = propertyName_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_PropertyChange(this, handle__PropertyChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_PropertyChange(struct miqt_string propertyName, QVariant* value) {
		QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);

		return new QVariant(QGraphicsProxyWidget::propertyChange(propertyName_QString, *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsProxyWidget::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsProxyWidget::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WindowFrameEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool windowFrameEvent(QEvent* e) override {
		if (handle__WindowFrameEvent == 0) {
			return QGraphicsProxyWidget::windowFrameEvent(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_WindowFrameEvent(this, handle__WindowFrameEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WindowFrameEvent(QEvent* e) {

		return QGraphicsProxyWidget::windowFrameEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WindowFrameSectionAt = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
		if (handle__WindowFrameSectionAt == 0) {
			return QGraphicsProxyWidget::windowFrameSectionAt(pos);
		}
		
		const QPointF& pos_ret = pos;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&pos_ret);

		int callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_WindowFrameSectionAt(const_cast<MiqtVirtualQGraphicsProxyWidget*>(this), handle__WindowFrameSectionAt, sigval1);

		return static_cast<Qt::WindowFrameSection>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_WindowFrameSectionAt(QPointF* pos) const {

		Qt::WindowFrameSection _ret = QGraphicsProxyWidget::windowFrameSectionAt(*pos);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QGraphicsProxyWidget::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QGraphicsProxyWidget::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QGraphicsProxyWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QGraphicsProxyWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QGraphicsProxyWidget::moveEvent(event);
			return;
		}
		
		QGraphicsSceneMoveEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QGraphicsSceneMoveEvent* event) {

		QGraphicsProxyWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PolishEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void polishEvent() override {
		if (handle__PolishEvent == 0) {
			QGraphicsProxyWidget::polishEvent();
			return;
		}
		

		miqt_exec_callback_QGraphicsProxyWidget_PolishEvent(this, handle__PolishEvent);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PolishEvent() {

		QGraphicsProxyWidget::polishEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GrabKeyboardEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void grabKeyboardEvent(QEvent* event) override {
		if (handle__GrabKeyboardEvent == 0) {
			QGraphicsProxyWidget::grabKeyboardEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_GrabKeyboardEvent(this, handle__GrabKeyboardEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_GrabKeyboardEvent(QEvent* event) {

		QGraphicsProxyWidget::grabKeyboardEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UngrabKeyboardEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void ungrabKeyboardEvent(QEvent* event) override {
		if (handle__UngrabKeyboardEvent == 0) {
			QGraphicsProxyWidget::ungrabKeyboardEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsProxyWidget_UngrabKeyboardEvent(this, handle__UngrabKeyboardEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UngrabKeyboardEvent(QEvent* event) {

		QGraphicsProxyWidget::ungrabKeyboardEvent(event);

	}

};

QGraphicsProxyWidget* QGraphicsProxyWidget_new() {
	return new MiqtVirtualQGraphicsProxyWidget();
}

QGraphicsProxyWidget* QGraphicsProxyWidget_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsProxyWidget(parent);
}

QGraphicsProxyWidget* QGraphicsProxyWidget_new3(QGraphicsItem* parent, int wFlags) {
	return new MiqtVirtualQGraphicsProxyWidget(parent, static_cast<Qt::WindowFlags>(wFlags));
}

void QGraphicsProxyWidget_virtbase(QGraphicsProxyWidget* src, QGraphicsWidget** outptr_QGraphicsWidget) {
	*outptr_QGraphicsWidget = static_cast<QGraphicsWidget*>(src);
}

QMetaObject* QGraphicsProxyWidget_MetaObject(const QGraphicsProxyWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsProxyWidget_Metacast(QGraphicsProxyWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsProxyWidget_Tr(const char* s) {
	QString _ret = QGraphicsProxyWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsProxyWidget_SetWidget(QGraphicsProxyWidget* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QGraphicsProxyWidget_Widget(const QGraphicsProxyWidget* self) {
	return self->widget();
}

QRectF* QGraphicsProxyWidget_SubWidgetRect(const QGraphicsProxyWidget* self, QWidget* widget) {
	return new QRectF(self->subWidgetRect(widget));
}

void QGraphicsProxyWidget_SetGeometry(QGraphicsProxyWidget* self, QRectF* rect) {
	self->setGeometry(*rect);
}

void QGraphicsProxyWidget_Paint(QGraphicsProxyWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

int QGraphicsProxyWidget_Type(const QGraphicsProxyWidget* self) {
	return self->type();
}

QGraphicsProxyWidget* QGraphicsProxyWidget_CreateProxyForChildWidget(QGraphicsProxyWidget* self, QWidget* child) {
	return self->createProxyForChildWidget(child);
}

struct miqt_string QGraphicsProxyWidget_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsProxyWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsProxyWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsProxyWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsProxyWidget_override_virtual_SetGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetGeometry = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_SetGeometry(void* self, QRectF* rect) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_SetGeometry(rect);
}

bool QGraphicsProxyWidget_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_Paint(painter, option, widget);
}

bool QGraphicsProxyWidget_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsProxyWidget_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_Type();
}

bool QGraphicsProxyWidget_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsProxyWidget_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_ItemChange(change, value);
}

bool QGraphicsProxyWidget_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QGraphicsProxyWidget_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_Event(event);
}

bool QGraphicsProxyWidget_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QGraphicsProxyWidget_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_EventFilter(object, event);
}

bool QGraphicsProxyWidget_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_ShowEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_HideEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_GrabMouseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__GrabMouseEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_GrabMouseEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_GrabMouseEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_UngrabMouseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UngrabMouseEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_UngrabMouseEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_UngrabMouseEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QGraphicsProxyWidget_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QGraphicsProxyWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsProxyWidget_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsProxyWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSizeF* QGraphicsProxyWidget_virtualbase_SizeHint(const void* self, int which, QSizeF* constraint) {
	return ( (const MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_SizeHint(which, constraint);
}

bool QGraphicsProxyWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_ResizeEvent(void* self, QGraphicsSceneResizeEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_ResizeEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_GetContentsMargins(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__GetContentsMargins = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_GetContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	( (const MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_GetContentsMargins(left, top, right, bottom);
}

bool QGraphicsProxyWidget_override_virtual_PaintWindowFrame(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintWindowFrame = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_PaintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_PaintWindowFrame(painter, option, widget);
}

bool QGraphicsProxyWidget_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

QRectF* QGraphicsProxyWidget_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_BoundingRect();
}

bool QGraphicsProxyWidget_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsProxyWidget_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_Shape();
}

bool QGraphicsProxyWidget_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_InitStyleOption(const void* self, QStyleOption* option) {
	( (const MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_InitStyleOption(option);
}

bool QGraphicsProxyWidget_override_virtual_UpdateGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateGeometry = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_UpdateGeometry(void* self) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_UpdateGeometry();
}

bool QGraphicsProxyWidget_override_virtual_PropertyChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PropertyChange = slot;
	return true;
}

QVariant* QGraphicsProxyWidget_virtualbase_PropertyChange(void* self, struct miqt_string propertyName, QVariant* value) {
	return ( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_PropertyChange(propertyName, value);
}

bool QGraphicsProxyWidget_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsProxyWidget_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_SceneEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_WindowFrameEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WindowFrameEvent = slot;
	return true;
}

bool QGraphicsProxyWidget_virtualbase_WindowFrameEvent(void* self, QEvent* e) {
	return ( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_WindowFrameEvent(e);
}

bool QGraphicsProxyWidget_override_virtual_WindowFrameSectionAt(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WindowFrameSectionAt = slot;
	return true;
}

int QGraphicsProxyWidget_virtualbase_WindowFrameSectionAt(const void* self, QPointF* pos) {
	return ( (const MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_WindowFrameSectionAt(pos);
}

bool QGraphicsProxyWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_ChangeEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_CloseEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_MoveEvent(void* self, QGraphicsSceneMoveEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_MoveEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_PolishEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PolishEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_PolishEvent(void* self) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_PolishEvent();
}

bool QGraphicsProxyWidget_override_virtual_GrabKeyboardEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__GrabKeyboardEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_GrabKeyboardEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_GrabKeyboardEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_UngrabKeyboardEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UngrabKeyboardEvent = slot;
	return true;
}

void QGraphicsProxyWidget_virtualbase_UngrabKeyboardEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsProxyWidget*)(self) )->virtualbase_UngrabKeyboardEvent(event);
}

void QGraphicsProxyWidget_Delete(QGraphicsProxyWidget* self) {
	delete self;
}

