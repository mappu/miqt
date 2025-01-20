#include <QChildEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QGraphicsItem>
#include <QGraphicsObject>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsVideoItem>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPointF>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionGraphicsItem>
#include <QTimerEvent>
#include <QVariant>
#include <QVideoSink>
#include <QWidget>
#include <qgraphicsvideoitem.h>
#include "gen_qgraphicsvideoitem.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGraphicsVideoItem_NativeSizeChanged(intptr_t, QSizeF*);
QRectF* miqt_exec_callback_QGraphicsVideoItem_BoundingRect(void*, intptr_t);
void miqt_exec_callback_QGraphicsVideoItem_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
int miqt_exec_callback_QGraphicsVideoItem_Type(void*, intptr_t);
void miqt_exec_callback_QGraphicsVideoItem_TimerEvent(void*, intptr_t, QTimerEvent*);
QVariant* miqt_exec_callback_QGraphicsVideoItem_ItemChange(void*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsVideoItem_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsVideoItem_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsVideoItem_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsVideoItem_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsVideoItem_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsVideoItem_DisconnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsVideoItem_Advance(void*, intptr_t, int);
QPainterPath* miqt_exec_callback_QGraphicsVideoItem_Shape(void*, intptr_t);
bool miqt_exec_callback_QGraphicsVideoItem_Contains(void*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsVideoItem_CollidesWithItem(void*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsVideoItem_CollidesWithPath(void*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsVideoItem_IsObscuredBy(void*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsVideoItem_OpaqueArea(void*, intptr_t);
bool miqt_exec_callback_QGraphicsVideoItem_SceneEventFilter(void*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsVideoItem_SceneEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsVideoItem_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsVideoItem_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsVideoItem_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsVideoItem_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsVideoItem_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsVideoItem_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsVideoItem_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsVideoItem_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsVideoItem_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsVideoItem_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsVideoItem_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsVideoItem_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsVideoItem_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsVideoItem_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsVideoItem_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsVideoItem_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsVideoItem_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsVideoItem_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsVideoItem_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QGraphicsVideoItem_SupportsExtension(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsVideoItem_SetExtension(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsVideoItem_Extension(void*, intptr_t, QVariant*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsVideoItem final : public QGraphicsVideoItem {
public:

	MiqtVirtualQGraphicsVideoItem(): QGraphicsVideoItem() {};
	MiqtVirtualQGraphicsVideoItem(QGraphicsItem* parent): QGraphicsVideoItem(parent) {};

	virtual ~MiqtVirtualQGraphicsVideoItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsVideoItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_BoundingRect(const_cast<MiqtVirtualQGraphicsVideoItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsVideoItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsVideoItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsVideoItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsVideoItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsVideoItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsVideoItem_Type(const_cast<MiqtVirtualQGraphicsVideoItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsVideoItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QGraphicsVideoItem::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QGraphicsVideoItem::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsVideoItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsVideoItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* ev) override {
		if (handle__Event == 0) {
			return QGraphicsVideoItem::event(ev);
		}
		
		QEvent* sigval1 = ev;

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* ev) {

		return QGraphicsVideoItem::event(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QGraphicsVideoItem::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QGraphicsVideoItem::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QGraphicsVideoItem::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QGraphicsVideoItem::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QGraphicsVideoItem::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QGraphicsVideoItem::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QGraphicsVideoItem::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsVideoItem_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QGraphicsVideoItem::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QGraphicsVideoItem::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsVideoItem_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QGraphicsVideoItem::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsVideoItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsVideoItem_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsVideoItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsVideoItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_Shape(const_cast<MiqtVirtualQGraphicsVideoItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsVideoItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsVideoItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_Contains(const_cast<MiqtVirtualQGraphicsVideoItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsVideoItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsVideoItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_CollidesWithItem(const_cast<MiqtVirtualQGraphicsVideoItem*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsVideoItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsVideoItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_CollidesWithPath(const_cast<MiqtVirtualQGraphicsVideoItem*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsVideoItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsVideoItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsVideoItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsVideoItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsVideoItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsVideoItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsVideoItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsVideoItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsVideoItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsVideoItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsVideoItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsVideoItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsVideoItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsVideoItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsVideoItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsVideoItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsVideoItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsVideoItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsVideoItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsVideoItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsVideoItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsVideoItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsVideoItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsVideoItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsVideoItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsVideoItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsVideoItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsVideoItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsVideoItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsVideoItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsVideoItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsVideoItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsVideoItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsVideoItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsVideoItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsVideoItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsVideoItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsVideoItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsVideoItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsVideoItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsVideoItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsVideoItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsVideoItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsVideoItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsVideoItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsVideoItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsVideoItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsVideoItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_InputMethodQuery(const_cast<MiqtVirtualQGraphicsVideoItem*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsVideoItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsVideoItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsVideoItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsVideoItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsVideoItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsVideoItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsVideoItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsVideoItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_Extension(const_cast<MiqtVirtualQGraphicsVideoItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsVideoItem::extension(*variant));

	}

};

QGraphicsVideoItem* QGraphicsVideoItem_new() {
	return new MiqtVirtualQGraphicsVideoItem();
}

QGraphicsVideoItem* QGraphicsVideoItem_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsVideoItem(parent);
}

void QGraphicsVideoItem_virtbase(QGraphicsVideoItem* src, QGraphicsObject** outptr_QGraphicsObject) {
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(src);
}

QMetaObject* QGraphicsVideoItem_MetaObject(const QGraphicsVideoItem* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsVideoItem_Metacast(QGraphicsVideoItem* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsVideoItem_Tr(const char* s) {
	QString _ret = QGraphicsVideoItem::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVideoSink* QGraphicsVideoItem_VideoSink(const QGraphicsVideoItem* self) {
	return self->videoSink();
}

int QGraphicsVideoItem_AspectRatioMode(const QGraphicsVideoItem* self) {
	Qt::AspectRatioMode _ret = self->aspectRatioMode();
	return static_cast<int>(_ret);
}

void QGraphicsVideoItem_SetAspectRatioMode(QGraphicsVideoItem* self, int mode) {
	self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

QPointF* QGraphicsVideoItem_Offset(const QGraphicsVideoItem* self) {
	return new QPointF(self->offset());
}

void QGraphicsVideoItem_SetOffset(QGraphicsVideoItem* self, QPointF* offset) {
	self->setOffset(*offset);
}

QSizeF* QGraphicsVideoItem_Size(const QGraphicsVideoItem* self) {
	return new QSizeF(self->size());
}

void QGraphicsVideoItem_SetSize(QGraphicsVideoItem* self, QSizeF* size) {
	self->setSize(*size);
}

QSizeF* QGraphicsVideoItem_NativeSize(const QGraphicsVideoItem* self) {
	return new QSizeF(self->nativeSize());
}

QRectF* QGraphicsVideoItem_BoundingRect(const QGraphicsVideoItem* self) {
	return new QRectF(self->boundingRect());
}

void QGraphicsVideoItem_Paint(QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

int QGraphicsVideoItem_Type(const QGraphicsVideoItem* self) {
	return self->type();
}

void QGraphicsVideoItem_NativeSizeChanged(QGraphicsVideoItem* self, QSizeF* size) {
	self->nativeSizeChanged(*size);
}

void QGraphicsVideoItem_connect_NativeSizeChanged(QGraphicsVideoItem* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem::connect(self, static_cast<void (QGraphicsVideoItem::*)(const QSizeF&)>(&QGraphicsVideoItem::nativeSizeChanged), self, [=](const QSizeF& size) {
		const QSizeF& size_ret = size;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);
		miqt_exec_callback_QGraphicsVideoItem_NativeSizeChanged(slot, sigval1);
	});
}

struct miqt_string QGraphicsVideoItem_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsVideoItem::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsVideoItem_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsVideoItem::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsVideoItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

QRectF* QGraphicsVideoItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_BoundingRect();
}

bool QGraphicsVideoItem_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

bool QGraphicsVideoItem_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsVideoItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_Type();
}

bool QGraphicsVideoItem_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_TimerEvent(event);
}

bool QGraphicsVideoItem_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsVideoItem_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_ItemChange(change, value);
}

bool QGraphicsVideoItem_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_Event(void* self, QEvent* ev) {
	return ( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_Event(ev);
}

bool QGraphicsVideoItem_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QGraphicsVideoItem_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_ChildEvent(event);
}

bool QGraphicsVideoItem_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_CustomEvent(event);
}

bool QGraphicsVideoItem_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QGraphicsVideoItem_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_DisconnectNotify(signal);
}

bool QGraphicsVideoItem_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_Advance(phase);
}

bool QGraphicsVideoItem_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsVideoItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_Shape();
}

bool QGraphicsVideoItem_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_Contains(point);
}

bool QGraphicsVideoItem_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QGraphicsVideoItem_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QGraphicsVideoItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QGraphicsVideoItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsVideoItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_OpaqueArea();
}

bool QGraphicsVideoItem_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QGraphicsVideoItem_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_SceneEvent(event);
}

bool QGraphicsVideoItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsVideoItem_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsVideoItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsVideoItem_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsVideoItem_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsVideoItem_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsVideoItem_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsVideoItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsVideoItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QGraphicsVideoItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QGraphicsVideoItem_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsVideoItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsVideoItem_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsVideoItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsVideoItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsVideoItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsVideoItem_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsVideoItem_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsVideoItem_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsVideoItem_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsVideoItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QGraphicsVideoItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QGraphicsVideoItem_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QGraphicsVideoItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsVideoItem_Delete(QGraphicsVideoItem* self) {
	delete self;
}

