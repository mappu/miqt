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
#include <QGraphicsSvgItem>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPointF>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionGraphicsItem>
#include <QSvgRenderer>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qgraphicssvgitem.h>
#include "gen_qgraphicssvgitem.h"

#ifdef __cplusplus
extern "C" {
#endif

QRectF* miqt_exec_callback_QGraphicsSvgItem_BoundingRect(void*, intptr_t);
void miqt_exec_callback_QGraphicsSvgItem_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
int miqt_exec_callback_QGraphicsSvgItem_Type(void*, intptr_t);
bool miqt_exec_callback_QGraphicsSvgItem_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsSvgItem_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsSvgItem_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsSvgItem_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsSvgItem_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsSvgItem_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsSvgItem_DisconnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsSvgItem_Advance(void*, intptr_t, int);
QPainterPath* miqt_exec_callback_QGraphicsSvgItem_Shape(void*, intptr_t);
bool miqt_exec_callback_QGraphicsSvgItem_Contains(void*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsSvgItem_CollidesWithItem(void*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsSvgItem_CollidesWithPath(void*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsSvgItem_IsObscuredBy(void*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsSvgItem_OpaqueArea(void*, intptr_t);
bool miqt_exec_callback_QGraphicsSvgItem_SceneEventFilter(void*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsSvgItem_SceneEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsSvgItem_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsSvgItem_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSvgItem_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSvgItem_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSvgItem_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSvgItem_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsSvgItem_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsSvgItem_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsSvgItem_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsSvgItem_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsSvgItem_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsSvgItem_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsSvgItem_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSvgItem_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSvgItem_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSvgItem_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSvgItem_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsSvgItem_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsSvgItem_InputMethodQuery(void*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsSvgItem_ItemChange(void*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsSvgItem_SupportsExtension(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsSvgItem_SetExtension(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsSvgItem_Extension(void*, intptr_t, QVariant*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsSvgItem final : public QGraphicsSvgItem {
public:

	MiqtVirtualQGraphicsSvgItem(): QGraphicsSvgItem() {};
	MiqtVirtualQGraphicsSvgItem(const QString& fileName): QGraphicsSvgItem(fileName) {};
	MiqtVirtualQGraphicsSvgItem(QGraphicsItem* parentItem): QGraphicsSvgItem(parentItem) {};
	MiqtVirtualQGraphicsSvgItem(const QString& fileName, QGraphicsItem* parentItem): QGraphicsSvgItem(fileName, parentItem) {};

	virtual ~MiqtVirtualQGraphicsSvgItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsSvgItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsSvgItem_BoundingRect(const_cast<MiqtVirtualQGraphicsSvgItem*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsSvgItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsSvgItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsSvgItem_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsSvgItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsSvgItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsSvgItem_Type(const_cast<MiqtVirtualQGraphicsSvgItem*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsSvgItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* ev) override {
		if (handle__Event == 0) {
			return QGraphicsSvgItem::event(ev);
		}
		
		QEvent* sigval1 = ev;

		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* ev) {

		return QGraphicsSvgItem::event(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QGraphicsSvgItem::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QGraphicsSvgItem::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QGraphicsSvgItem::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QGraphicsSvgItem::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QGraphicsSvgItem::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QGraphicsSvgItem::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QGraphicsSvgItem::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QGraphicsSvgItem::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QGraphicsSvgItem::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsSvgItem_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QGraphicsSvgItem::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QGraphicsSvgItem::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsSvgItem_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QGraphicsSvgItem::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsSvgItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsSvgItem_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsSvgItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsSvgItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsSvgItem_Shape(const_cast<MiqtVirtualQGraphicsSvgItem*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsSvgItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsSvgItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_Contains(const_cast<MiqtVirtualQGraphicsSvgItem*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsSvgItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsSvgItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_CollidesWithItem(const_cast<MiqtVirtualQGraphicsSvgItem*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsSvgItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsSvgItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_CollidesWithPath(const_cast<MiqtVirtualQGraphicsSvgItem*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsSvgItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsSvgItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_IsObscuredBy(const_cast<MiqtVirtualQGraphicsSvgItem*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsSvgItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsSvgItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsSvgItem_OpaqueArea(const_cast<MiqtVirtualQGraphicsSvgItem*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsSvgItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsSvgItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsSvgItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsSvgItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsSvgItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsSvgItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsSvgItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsSvgItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsSvgItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsSvgItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsSvgItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsSvgItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsSvgItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsSvgItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsSvgItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsSvgItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsSvgItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsSvgItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsSvgItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsSvgItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsSvgItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsSvgItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsSvgItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsSvgItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsSvgItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsSvgItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsSvgItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsSvgItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsSvgItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsSvgItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsSvgItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsSvgItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsSvgItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsSvgItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsSvgItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsSvgItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsSvgItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsSvgItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsSvgItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsSvgItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSvgItem_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsSvgItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsSvgItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsSvgItem_InputMethodQuery(const_cast<MiqtVirtualQGraphicsSvgItem*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsSvgItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsSvgItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsSvgItem_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsSvgItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsSvgItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_SupportsExtension(const_cast<MiqtVirtualQGraphicsSvgItem*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsSvgItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsSvgItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsSvgItem_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsSvgItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsSvgItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsSvgItem_Extension(const_cast<MiqtVirtualQGraphicsSvgItem*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsSvgItem::extension(*variant));

	}

};

QGraphicsSvgItem* QGraphicsSvgItem_new() {
	return new MiqtVirtualQGraphicsSvgItem();
}

QGraphicsSvgItem* QGraphicsSvgItem_new2(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQGraphicsSvgItem(fileName_QString);
}

QGraphicsSvgItem* QGraphicsSvgItem_new3(QGraphicsItem* parentItem) {
	return new MiqtVirtualQGraphicsSvgItem(parentItem);
}

QGraphicsSvgItem* QGraphicsSvgItem_new4(struct miqt_string fileName, QGraphicsItem* parentItem) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQGraphicsSvgItem(fileName_QString, parentItem);
}

void QGraphicsSvgItem_virtbase(QGraphicsSvgItem* src, QGraphicsObject** outptr_QGraphicsObject) {
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(src);
}

QMetaObject* QGraphicsSvgItem_MetaObject(const QGraphicsSvgItem* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsSvgItem_Metacast(QGraphicsSvgItem* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsSvgItem_Tr(const char* s) {
	QString _ret = QGraphicsSvgItem::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsSvgItem_SetSharedRenderer(QGraphicsSvgItem* self, QSvgRenderer* renderer) {
	self->setSharedRenderer(renderer);
}

QSvgRenderer* QGraphicsSvgItem_Renderer(const QGraphicsSvgItem* self) {
	return self->renderer();
}

void QGraphicsSvgItem_SetElementId(QGraphicsSvgItem* self, struct miqt_string id) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	self->setElementId(id_QString);
}

struct miqt_string QGraphicsSvgItem_ElementId(const QGraphicsSvgItem* self) {
	QString _ret = self->elementId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsSvgItem_SetCachingEnabled(QGraphicsSvgItem* self, bool cachingEnabled) {
	self->setCachingEnabled(cachingEnabled);
}

bool QGraphicsSvgItem_IsCachingEnabled(const QGraphicsSvgItem* self) {
	return self->isCachingEnabled();
}

void QGraphicsSvgItem_SetMaximumCacheSize(QGraphicsSvgItem* self, QSize* size) {
	self->setMaximumCacheSize(*size);
}

QSize* QGraphicsSvgItem_MaximumCacheSize(const QGraphicsSvgItem* self) {
	return new QSize(self->maximumCacheSize());
}

QRectF* QGraphicsSvgItem_BoundingRect(const QGraphicsSvgItem* self) {
	return new QRectF(self->boundingRect());
}

void QGraphicsSvgItem_Paint(QGraphicsSvgItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

int QGraphicsSvgItem_Type(const QGraphicsSvgItem* self) {
	return self->type();
}

struct miqt_string QGraphicsSvgItem_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsSvgItem::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsSvgItem_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsSvgItem::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsSvgItem_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

QRectF* QGraphicsSvgItem_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_BoundingRect();
}

bool QGraphicsSvgItem_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_Paint(painter, option, widget);
}

bool QGraphicsSvgItem_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsSvgItem_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_Type();
}

bool QGraphicsSvgItem_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_Event(void* self, QEvent* ev) {
	return ( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_Event(ev);
}

bool QGraphicsSvgItem_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QGraphicsSvgItem_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_TimerEvent(event);
}

bool QGraphicsSvgItem_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_ChildEvent(event);
}

bool QGraphicsSvgItem_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_CustomEvent(event);
}

bool QGraphicsSvgItem_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QGraphicsSvgItem_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_DisconnectNotify(signal);
}

bool QGraphicsSvgItem_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_Advance(phase);
}

bool QGraphicsSvgItem_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsSvgItem_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_Shape();
}

bool QGraphicsSvgItem_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_Contains(point);
}

bool QGraphicsSvgItem_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QGraphicsSvgItem_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QGraphicsSvgItem_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QGraphicsSvgItem_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsSvgItem_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_OpaqueArea();
}

bool QGraphicsSvgItem_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QGraphicsSvgItem_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_SceneEvent(event);
}

bool QGraphicsSvgItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsSvgItem_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsSvgItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsSvgItem_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsSvgItem_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsSvgItem_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsSvgItem_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsSvgItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsSvgItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QGraphicsSvgItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QGraphicsSvgItem_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsSvgItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsSvgItem_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsSvgItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsSvgItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsSvgItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsSvgItem_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsSvgItem_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsSvgItem_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsSvgItem_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsSvgItem_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsSvgItem_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_ItemChange(change, value);
}

bool QGraphicsSvgItem_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QGraphicsSvgItem_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QGraphicsSvgItem_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QGraphicsSvgItem_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsSvgItem*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsSvgItem_Delete(QGraphicsSvgItem* self) {
	delete self;
}

