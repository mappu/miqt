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

QRectF* miqt_exec_callback_QGraphicsSvgItem_boundingRect(const QGraphicsSvgItem*, intptr_t);
void miqt_exec_callback_QGraphicsSvgItem_paint(QGraphicsSvgItem*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
int miqt_exec_callback_QGraphicsSvgItem_type(const QGraphicsSvgItem*, intptr_t);
bool miqt_exec_callback_QGraphicsSvgItem_event(QGraphicsSvgItem*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsSvgItem_eventFilter(QGraphicsSvgItem*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsSvgItem_timerEvent(QGraphicsSvgItem*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsSvgItem_childEvent(QGraphicsSvgItem*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsSvgItem_customEvent(QGraphicsSvgItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsSvgItem_connectNotify(QGraphicsSvgItem*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsSvgItem_disconnectNotify(QGraphicsSvgItem*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsSvgItem_advance(QGraphicsSvgItem*, intptr_t, int);
QPainterPath* miqt_exec_callback_QGraphicsSvgItem_shape(const QGraphicsSvgItem*, intptr_t);
bool miqt_exec_callback_QGraphicsSvgItem_contains(const QGraphicsSvgItem*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsSvgItem_collidesWithItem(const QGraphicsSvgItem*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsSvgItem_collidesWithPath(const QGraphicsSvgItem*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsSvgItem_isObscuredBy(const QGraphicsSvgItem*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsSvgItem_opaqueArea(const QGraphicsSvgItem*, intptr_t);
bool miqt_exec_callback_QGraphicsSvgItem_sceneEventFilter(QGraphicsSvgItem*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsSvgItem_sceneEvent(QGraphicsSvgItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsSvgItem_contextMenuEvent(QGraphicsSvgItem*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsSvgItem_dragEnterEvent(QGraphicsSvgItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSvgItem_dragLeaveEvent(QGraphicsSvgItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSvgItem_dragMoveEvent(QGraphicsSvgItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSvgItem_dropEvent(QGraphicsSvgItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSvgItem_focusInEvent(QGraphicsSvgItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsSvgItem_focusOutEvent(QGraphicsSvgItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsSvgItem_hoverEnterEvent(QGraphicsSvgItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsSvgItem_hoverMoveEvent(QGraphicsSvgItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsSvgItem_hoverLeaveEvent(QGraphicsSvgItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsSvgItem_keyPressEvent(QGraphicsSvgItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsSvgItem_keyReleaseEvent(QGraphicsSvgItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsSvgItem_mousePressEvent(QGraphicsSvgItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSvgItem_mouseMoveEvent(QGraphicsSvgItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSvgItem_mouseReleaseEvent(QGraphicsSvgItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSvgItem_mouseDoubleClickEvent(QGraphicsSvgItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSvgItem_wheelEvent(QGraphicsSvgItem*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsSvgItem_inputMethodEvent(QGraphicsSvgItem*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsSvgItem_inputMethodQuery(const QGraphicsSvgItem*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsSvgItem_itemChange(QGraphicsSvgItem*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsSvgItem_supportsExtension(const QGraphicsSvgItem*, intptr_t, int);
void miqt_exec_callback_QGraphicsSvgItem_setExtension(QGraphicsSvgItem*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsSvgItem_extension(const QGraphicsSvgItem*, intptr_t, QVariant*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsSvgItem final : public QGraphicsSvgItem {
public:

	MiqtVirtualQGraphicsSvgItem(): QGraphicsSvgItem() {}
	MiqtVirtualQGraphicsSvgItem(const QString& fileName): QGraphicsSvgItem(fileName) {}
	MiqtVirtualQGraphicsSvgItem(QGraphicsItem* parentItem): QGraphicsSvgItem(parentItem) {}
	MiqtVirtualQGraphicsSvgItem(const QString& fileName, QGraphicsItem* parentItem): QGraphicsSvgItem(fileName, parentItem) {}

	virtual ~MiqtVirtualQGraphicsSvgItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QGraphicsSvgItem::boundingRect();
		}

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsSvgItem_boundingRect(this, handle__boundingRect);
		return *callback_return_value;
	}

	friend QRectF* QGraphicsSvgItem_virtualbase_boundingRect(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			QGraphicsSvgItem::paint(painter, option, widget);
			return;
		}

		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;
		miqt_exec_callback_QGraphicsSvgItem_paint(this, handle__paint, sigval1, sigval2, sigval3);

	}

	friend void QGraphicsSvgItem_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QGraphicsSvgItem::type();
		}

		int callback_return_value = miqt_exec_callback_QGraphicsSvgItem_type(this, handle__type);
		return static_cast<int>(callback_return_value);
	}

	friend int QGraphicsSvgItem_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* ev) override {
		if (handle__event == 0) {
			return QGraphicsSvgItem::event(ev);
		}

		QEvent* sigval1 = ev;
		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsSvgItem_virtualbase_event(void* self, QEvent* ev);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGraphicsSvgItem::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsSvgItem_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGraphicsSvgItem::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGraphicsSvgItem::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGraphicsSvgItem::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGraphicsSvgItem::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsSvgItem_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGraphicsSvgItem::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsSvgItem_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QGraphicsSvgItem::advance(phase);
			return;
		}

		int sigval1 = phase;
		miqt_exec_callback_QGraphicsSvgItem_advance(this, handle__advance, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_advance(void* self, int phase);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QGraphicsSvgItem::shape();
		}

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsSvgItem_shape(this, handle__shape);
		return *callback_return_value;
	}

	friend QPainterPath* QGraphicsSvgItem_virtualbase_shape(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QGraphicsSvgItem::contains(point);
		}

		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_contains(this, handle__contains, sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsSvgItem_virtualbase_contains(const void* self, QPointF* point);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QGraphicsSvgItem::collidesWithItem(other, mode);
		}

		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsSvgItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QGraphicsSvgItem::collidesWithPath(path, mode);
		}

		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsSvgItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QGraphicsSvgItem::isObscuredBy(item);
		}

		QGraphicsItem* sigval1 = (QGraphicsItem*) item;
		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_isObscuredBy(this, handle__isObscuredBy, sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsSvgItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QGraphicsSvgItem::opaqueArea();
		}

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsSvgItem_opaqueArea(this, handle__opaqueArea);
		return *callback_return_value;
	}

	friend QPainterPath* QGraphicsSvgItem_virtualbase_opaqueArea(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QGraphicsSvgItem::sceneEventFilter(watched, event);
		}

		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsSvgItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QGraphicsSvgItem::sceneEvent(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_sceneEvent(this, handle__sceneEvent, sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsSvgItem_virtualbase_sceneEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsSvgItem::contextMenuEvent(event);
			return;
		}

		QGraphicsSceneContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsSvgItem::dragEnterEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsSvgItem::dragLeaveEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsSvgItem::dragMoveEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsSvgItem::dropEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsSvgItem::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsSvgItem::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QGraphicsSvgItem::hoverEnterEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QGraphicsSvgItem::hoverMoveEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QGraphicsSvgItem::hoverLeaveEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsSvgItem::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsSvgItem::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsSvgItem::mousePressEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsSvgItem::mouseMoveEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsSvgItem::mouseReleaseEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsSvgItem::mouseDoubleClickEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsSvgItem::wheelEvent(event);
			return;
		}

		QGraphicsSceneWheelEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsSvgItem::inputMethodEvent(event);
			return;
		}

		QInputMethodEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsSvgItem_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QGraphicsSvgItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsSvgItem::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsSvgItem_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QGraphicsSvgItem_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QGraphicsSvgItem::itemChange(change, value);
		}

		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsSvgItem_itemChange(this, handle__itemChange, sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QGraphicsSvgItem_virtualbase_itemChange(void* self, int change, QVariant* value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QGraphicsSvgItem::supportsExtension(extension);
		}

		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsSvgItem_supportsExtension(this, handle__supportsExtension, sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsSvgItem_virtualbase_supportsExtension(const void* self, int extension);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QGraphicsSvgItem::setExtension(extension, variant);
			return;
		}

		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);
		miqt_exec_callback_QGraphicsSvgItem_setExtension(this, handle__setExtension, sigval1, sigval2);

	}

	friend void QGraphicsSvgItem_virtualbase_setExtension(void* self, int extension, QVariant* variant);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QGraphicsSvgItem::extension(variant);
		}

		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsSvgItem_extension(this, handle__extension, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QGraphicsSvgItem_virtualbase_extension(const void* self, QVariant* variant);

	// Wrappers to allow calling protected methods:
	friend void QGraphicsSvgItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGraphicsSvgItem_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsSvgItem_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsSvgItem_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsSvgItem_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend void QGraphicsSvgItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsSvgItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsSvgItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
};

QGraphicsSvgItem* QGraphicsSvgItem_new() {
	return new (std::nothrow) MiqtVirtualQGraphicsSvgItem();
}

QGraphicsSvgItem* QGraphicsSvgItem_new2(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) MiqtVirtualQGraphicsSvgItem(fileName_QString);
}

QGraphicsSvgItem* QGraphicsSvgItem_new3(QGraphicsItem* parentItem) {
	return new (std::nothrow) MiqtVirtualQGraphicsSvgItem(parentItem);
}

QGraphicsSvgItem* QGraphicsSvgItem_new4(struct miqt_string fileName, QGraphicsItem* parentItem) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) MiqtVirtualQGraphicsSvgItem(fileName_QString, parentItem);
}

void QGraphicsSvgItem_virtbase(QGraphicsSvgItem* src, QGraphicsObject** outptr_QGraphicsObject) {
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(src);
}

QMetaObject* QGraphicsSvgItem_metaObject(const QGraphicsSvgItem* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsSvgItem_metacast(QGraphicsSvgItem* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsSvgItem_tr(const char* s) {
	QString _ret = QGraphicsSvgItem::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsSvgItem_trUtf8(const char* s) {
	QString _ret = QGraphicsSvgItem::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsSvgItem_setSharedRenderer(QGraphicsSvgItem* self, QSvgRenderer* renderer) {
	self->setSharedRenderer(renderer);
}

QSvgRenderer* QGraphicsSvgItem_renderer(const QGraphicsSvgItem* self) {
	return self->renderer();
}

void QGraphicsSvgItem_setElementId(QGraphicsSvgItem* self, struct miqt_string id) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	self->setElementId(id_QString);
}

struct miqt_string QGraphicsSvgItem_elementId(const QGraphicsSvgItem* self) {
	QString _ret = self->elementId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsSvgItem_setCachingEnabled(QGraphicsSvgItem* self, bool cachingEnabled) {
	self->setCachingEnabled(cachingEnabled);
}

bool QGraphicsSvgItem_isCachingEnabled(const QGraphicsSvgItem* self) {
	return self->isCachingEnabled();
}

void QGraphicsSvgItem_setMaximumCacheSize(QGraphicsSvgItem* self, QSize* size) {
	self->setMaximumCacheSize(*size);
}

QSize* QGraphicsSvgItem_maximumCacheSize(const QGraphicsSvgItem* self) {
	return new QSize(self->maximumCacheSize());
}

QRectF* QGraphicsSvgItem_boundingRect(const QGraphicsSvgItem* self) {
	return new QRectF(self->boundingRect());
}

void QGraphicsSvgItem_paint(QGraphicsSvgItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

int QGraphicsSvgItem_type(const QGraphicsSvgItem* self) {
	return self->type();
}

struct miqt_string QGraphicsSvgItem_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsSvgItem::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsSvgItem_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsSvgItem::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsSvgItem_trUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsSvgItem::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsSvgItem_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsSvgItem::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsSvgItem_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QGraphicsSvgItem_virtualbase_boundingRect(const void* self) {
	return new QRectF(static_cast<const MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::boundingRect());
}

bool QGraphicsSvgItem_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paint = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::paint(painter, option, widget);
}

bool QGraphicsSvgItem_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = slot;
	return true;
}

int QGraphicsSvgItem_virtualbase_type(const void* self) {
	return static_cast<const MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::type();
}

bool QGraphicsSvgItem_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_event(void* self, QEvent* ev) {
	return static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::event(ev);
}

bool QGraphicsSvgItem_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::eventFilter(watched, event);
}

bool QGraphicsSvgItem_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::timerEvent(event);
}

bool QGraphicsSvgItem_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::childEvent(event);
}

bool QGraphicsSvgItem_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::customEvent(event);
}

bool QGraphicsSvgItem_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::connectNotify(*signal);
}

bool QGraphicsSvgItem_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::disconnectNotify(*signal);
}

bool QGraphicsSvgItem_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__advance = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_advance(void* self, int phase) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::advance(static_cast<int>(phase));
}

bool QGraphicsSvgItem_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QGraphicsSvgItem_virtualbase_shape(const void* self) {
	return new QPainterPath(static_cast<const MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::shape());
}

bool QGraphicsSvgItem_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contains = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_contains(const void* self, QPointF* point) {
	return static_cast<const MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::contains(*point);
}

bool QGraphicsSvgItem_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return static_cast<const MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsSvgItem_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return static_cast<const MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsSvgItem_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return static_cast<const MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::isObscuredBy(item);
}

bool QGraphicsSvgItem_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsSvgItem_virtualbase_opaqueArea(const void* self) {
	return new QPainterPath(static_cast<const MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::opaqueArea());
}

bool QGraphicsSvgItem_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::sceneEventFilter(watched, event);
}

bool QGraphicsSvgItem_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_sceneEvent(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::sceneEvent(event);
}

bool QGraphicsSvgItem_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::contextMenuEvent(event);
}

bool QGraphicsSvgItem_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::dragEnterEvent(event);
}

bool QGraphicsSvgItem_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::dragLeaveEvent(event);
}

bool QGraphicsSvgItem_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::dragMoveEvent(event);
}

bool QGraphicsSvgItem_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::dropEvent(event);
}

bool QGraphicsSvgItem_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::focusInEvent(event);
}

bool QGraphicsSvgItem_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::focusOutEvent(event);
}

bool QGraphicsSvgItem_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::hoverEnterEvent(event);
}

bool QGraphicsSvgItem_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::hoverMoveEvent(event);
}

bool QGraphicsSvgItem_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::hoverLeaveEvent(event);
}

bool QGraphicsSvgItem_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::keyPressEvent(event);
}

bool QGraphicsSvgItem_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::keyReleaseEvent(event);
}

bool QGraphicsSvgItem_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::mousePressEvent(event);
}

bool QGraphicsSvgItem_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::mouseMoveEvent(event);
}

bool QGraphicsSvgItem_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::mouseReleaseEvent(event);
}

bool QGraphicsSvgItem_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::mouseDoubleClickEvent(event);
}

bool QGraphicsSvgItem_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::wheelEvent(event);
}

bool QGraphicsSvgItem_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::inputMethodEvent(event);
}

bool QGraphicsSvgItem_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsSvgItem_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QGraphicsSvgItem_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QGraphicsSvgItem_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return new QVariant(static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::itemChange(static_cast<MiqtVirtualQGraphicsSvgItem::GraphicsItemChange>(change), *value));
}

bool QGraphicsSvgItem_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QGraphicsSvgItem_virtualbase_supportsExtension(const void* self, int extension) {
	return static_cast<const MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::supportsExtension(static_cast<MiqtVirtualQGraphicsSvgItem::Extension>(extension));
}

bool QGraphicsSvgItem_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setExtension = slot;
	return true;
}

void QGraphicsSvgItem_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	static_cast<MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::setExtension(static_cast<MiqtVirtualQGraphicsSvgItem::Extension>(extension), *variant);
}

bool QGraphicsSvgItem_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extension = slot;
	return true;
}

QVariant* QGraphicsSvgItem_virtualbase_extension(const void* self, QVariant* variant) {
	return new QVariant(static_cast<const MiqtVirtualQGraphicsSvgItem*>(self)->QGraphicsSvgItem::extension(*variant));
}

void QGraphicsSvgItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

QObject* QGraphicsSvgItem_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGraphicsSvgItem_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGraphicsSvgItem_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGraphicsSvgItem_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGraphicsSvgItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->addToIndex();
}

void QGraphicsSvgItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->removeFromIndex();
}

void QGraphicsSvgItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsSvgItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSvgItem*>( (QGraphicsSvgItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->prepareGeometryChange();
}

void QGraphicsSvgItem_delete(QGraphicsSvgItem* self) {
	delete self;
}

