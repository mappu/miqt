#include <QAbstractVideoSurface>
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
#include <QMediaBindableInterface>
#include <QMediaObject>
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
#include <QWidget>
#include <qgraphicsvideoitem.h>
#include "gen_qgraphicsvideoitem.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGraphicsVideoItem_nativeSizeChanged(intptr_t, QSizeF*);
QMediaObject* miqt_exec_callback_QGraphicsVideoItem_mediaObject(const QGraphicsVideoItem*, intptr_t);
QRectF* miqt_exec_callback_QGraphicsVideoItem_boundingRect(const QGraphicsVideoItem*, intptr_t);
void miqt_exec_callback_QGraphicsVideoItem_paint(QGraphicsVideoItem*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
void miqt_exec_callback_QGraphicsVideoItem_timerEvent(QGraphicsVideoItem*, intptr_t, QTimerEvent*);
QVariant* miqt_exec_callback_QGraphicsVideoItem_itemChange(QGraphicsVideoItem*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsVideoItem_setMediaObject(QGraphicsVideoItem*, intptr_t, QMediaObject*);
bool miqt_exec_callback_QGraphicsVideoItem_event(QGraphicsVideoItem*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsVideoItem_eventFilter(QGraphicsVideoItem*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsVideoItem_childEvent(QGraphicsVideoItem*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsVideoItem_customEvent(QGraphicsVideoItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsVideoItem_connectNotify(QGraphicsVideoItem*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsVideoItem_disconnectNotify(QGraphicsVideoItem*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsVideoItem_advance(QGraphicsVideoItem*, intptr_t, int);
QPainterPath* miqt_exec_callback_QGraphicsVideoItem_shape(const QGraphicsVideoItem*, intptr_t);
bool miqt_exec_callback_QGraphicsVideoItem_contains(const QGraphicsVideoItem*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsVideoItem_collidesWithItem(const QGraphicsVideoItem*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsVideoItem_collidesWithPath(const QGraphicsVideoItem*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsVideoItem_isObscuredBy(const QGraphicsVideoItem*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsVideoItem_opaqueArea(const QGraphicsVideoItem*, intptr_t);
int miqt_exec_callback_QGraphicsVideoItem_type(const QGraphicsVideoItem*, intptr_t);
bool miqt_exec_callback_QGraphicsVideoItem_sceneEventFilter(QGraphicsVideoItem*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsVideoItem_sceneEvent(QGraphicsVideoItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsVideoItem_contextMenuEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsVideoItem_dragEnterEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsVideoItem_dragLeaveEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsVideoItem_dragMoveEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsVideoItem_dropEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsVideoItem_focusInEvent(QGraphicsVideoItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsVideoItem_focusOutEvent(QGraphicsVideoItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsVideoItem_hoverEnterEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsVideoItem_hoverMoveEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsVideoItem_hoverLeaveEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsVideoItem_keyPressEvent(QGraphicsVideoItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsVideoItem_keyReleaseEvent(QGraphicsVideoItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsVideoItem_mousePressEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsVideoItem_mouseMoveEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsVideoItem_mouseReleaseEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsVideoItem_mouseDoubleClickEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsVideoItem_wheelEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsVideoItem_inputMethodEvent(QGraphicsVideoItem*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsVideoItem_inputMethodQuery(const QGraphicsVideoItem*, intptr_t, int);
bool miqt_exec_callback_QGraphicsVideoItem_supportsExtension(const QGraphicsVideoItem*, intptr_t, int);
void miqt_exec_callback_QGraphicsVideoItem_setExtension(QGraphicsVideoItem*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsVideoItem_extension(const QGraphicsVideoItem*, intptr_t, QVariant*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsVideoItem final : public QGraphicsVideoItem {
public:

	MiqtVirtualQGraphicsVideoItem(): QGraphicsVideoItem() {};
	MiqtVirtualQGraphicsVideoItem(QGraphicsItem* parent): QGraphicsVideoItem(parent) {};

	virtual ~MiqtVirtualQGraphicsVideoItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaObject* mediaObject() const override {
		if (handle__mediaObject == 0) {
			return QGraphicsVideoItem::mediaObject();
		}
		

		QMediaObject* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_mediaObject(this, handle__mediaObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMediaObject* virtualbase_mediaObject() const {

		return QGraphicsVideoItem::mediaObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QGraphicsVideoItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRect() const {

		return new QRectF(QGraphicsVideoItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			QGraphicsVideoItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsVideoItem_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsVideoItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGraphicsVideoItem::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QGraphicsVideoItem::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QGraphicsVideoItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_itemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsVideoItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setMediaObject(QMediaObject* object) override {
		if (handle__setMediaObject == 0) {
			return QGraphicsVideoItem::setMediaObject(object);
		}
		
		QMediaObject* sigval1 = object;

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_setMediaObject(this, handle__setMediaObject, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setMediaObject(QMediaObject* object) {

		return QGraphicsVideoItem::setMediaObject(object);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* ev) override {
		if (handle__event == 0) {
			return QGraphicsVideoItem::event(ev);
		}
		
		QEvent* sigval1 = ev;

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* ev) {

		return QGraphicsVideoItem::event(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGraphicsVideoItem::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QGraphicsVideoItem::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGraphicsVideoItem::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QGraphicsVideoItem::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGraphicsVideoItem::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QGraphicsVideoItem::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGraphicsVideoItem::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsVideoItem_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QGraphicsVideoItem::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGraphicsVideoItem::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsVideoItem_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QGraphicsVideoItem::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QGraphicsVideoItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsVideoItem_advance(this, handle__advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance(int phase) {

		QGraphicsVideoItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QGraphicsVideoItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_shape(this, handle__shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_shape() const {

		return new QPainterPath(QGraphicsVideoItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QGraphicsVideoItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_contains(QPointF* point) const {

		return QGraphicsVideoItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QGraphicsVideoItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsVideoItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QGraphicsVideoItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsVideoItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QGraphicsVideoItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isObscuredBy(QGraphicsItem* item) const {

		return QGraphicsVideoItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QGraphicsVideoItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_opaqueArea() const {

		return new QPainterPath(QGraphicsVideoItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QGraphicsVideoItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsVideoItem_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_type() const {

		return QGraphicsVideoItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QGraphicsVideoItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsVideoItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QGraphicsVideoItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEvent(QEvent* event) {

		return QGraphicsVideoItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsVideoItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsVideoItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsVideoItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsVideoItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsVideoItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsVideoItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsVideoItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsVideoItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsVideoItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsVideoItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsVideoItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QGraphicsVideoItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsVideoItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QGraphicsVideoItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QGraphicsVideoItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsVideoItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QGraphicsVideoItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsVideoItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QGraphicsVideoItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsVideoItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsVideoItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QGraphicsVideoItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsVideoItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QGraphicsVideoItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsVideoItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsVideoItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsVideoItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsVideoItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsVideoItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsVideoItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsVideoItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsVideoItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsVideoItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsVideoItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsVideoItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsVideoItem_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QGraphicsVideoItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsVideoItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QGraphicsVideoItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QGraphicsVideoItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QGraphicsVideoItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QGraphicsVideoItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsVideoItem_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setExtension(int extension, QVariant* variant) {

		QGraphicsVideoItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QGraphicsVideoItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(QVariant* variant) const {

		return new QVariant(QGraphicsVideoItem::extension(*variant));

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsVideoItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGraphicsVideoItem_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsVideoItem_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsVideoItem_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsVideoItem_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend void QGraphicsVideoItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsVideoItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsVideoItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
};

QGraphicsVideoItem* QGraphicsVideoItem_new() {
	return new MiqtVirtualQGraphicsVideoItem();
}

QGraphicsVideoItem* QGraphicsVideoItem_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsVideoItem(parent);
}

void QGraphicsVideoItem_virtbase(QGraphicsVideoItem* src, QGraphicsObject** outptr_QGraphicsObject, QMediaBindableInterface** outptr_QMediaBindableInterface) {
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(src);
	*outptr_QMediaBindableInterface = static_cast<QMediaBindableInterface*>(src);
}

QMetaObject* QGraphicsVideoItem_metaObject(const QGraphicsVideoItem* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsVideoItem_metacast(QGraphicsVideoItem* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsVideoItem_tr(const char* s) {
	QString _ret = QGraphicsVideoItem::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsVideoItem_trUtf8(const char* s) {
	QString _ret = QGraphicsVideoItem::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaObject* QGraphicsVideoItem_mediaObject(const QGraphicsVideoItem* self) {
	return self->mediaObject();
}

QAbstractVideoSurface* QGraphicsVideoItem_videoSurface(const QGraphicsVideoItem* self) {
	return self->videoSurface();
}

int QGraphicsVideoItem_aspectRatioMode(const QGraphicsVideoItem* self) {
	Qt::AspectRatioMode _ret = self->aspectRatioMode();
	return static_cast<int>(_ret);
}

void QGraphicsVideoItem_setAspectRatioMode(QGraphicsVideoItem* self, int mode) {
	self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

QPointF* QGraphicsVideoItem_offset(const QGraphicsVideoItem* self) {
	return new QPointF(self->offset());
}

void QGraphicsVideoItem_setOffset(QGraphicsVideoItem* self, QPointF* offset) {
	self->setOffset(*offset);
}

QSizeF* QGraphicsVideoItem_size(const QGraphicsVideoItem* self) {
	return new QSizeF(self->size());
}

void QGraphicsVideoItem_setSize(QGraphicsVideoItem* self, QSizeF* size) {
	self->setSize(*size);
}

QSizeF* QGraphicsVideoItem_nativeSize(const QGraphicsVideoItem* self) {
	return new QSizeF(self->nativeSize());
}

QRectF* QGraphicsVideoItem_boundingRect(const QGraphicsVideoItem* self) {
	return new QRectF(self->boundingRect());
}

void QGraphicsVideoItem_paint(QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsVideoItem_nativeSizeChanged(QGraphicsVideoItem* self, QSizeF* size) {
	self->nativeSizeChanged(*size);
}

void QGraphicsVideoItem_connect_nativeSizeChanged(QGraphicsVideoItem* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem::connect(self, static_cast<void (QGraphicsVideoItem::*)(const QSizeF&)>(&QGraphicsVideoItem::nativeSizeChanged), self, [=](const QSizeF& size) {
		const QSizeF& size_ret = size;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);
		miqt_exec_callback_QGraphicsVideoItem_nativeSizeChanged(slot, sigval1);
	});
}

struct miqt_string QGraphicsVideoItem_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsVideoItem::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsVideoItem_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsVideoItem::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsVideoItem_trUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsVideoItem::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsVideoItem_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsVideoItem::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsVideoItem_override_virtual_mediaObject(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mediaObject = slot;
	return true;
}

QMediaObject* QGraphicsVideoItem_virtualbase_mediaObject(const void* self) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_mediaObject();
}

bool QGraphicsVideoItem_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QGraphicsVideoItem_virtualbase_boundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_boundingRect();
}

bool QGraphicsVideoItem_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_paint(painter, option, widget);
}

bool QGraphicsVideoItem_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_timerEvent(event);
}

bool QGraphicsVideoItem_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QGraphicsVideoItem_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_itemChange(change, value);
}

bool QGraphicsVideoItem_override_virtual_setMediaObject(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMediaObject = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_setMediaObject(void* self, QMediaObject* object) {
	return ( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_setMediaObject(object);
}

bool QGraphicsVideoItem_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_event(void* self, QEvent* ev) {
	return ( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_event(ev);
}

bool QGraphicsVideoItem_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QGraphicsVideoItem_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_childEvent(event);
}

bool QGraphicsVideoItem_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_customEvent(event);
}

bool QGraphicsVideoItem_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_connectNotify(signal);
}

bool QGraphicsVideoItem_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_disconnectNotify(signal);
}

bool QGraphicsVideoItem_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_advance(phase);
}

bool QGraphicsVideoItem_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QGraphicsVideoItem_virtualbase_shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_shape();
}

bool QGraphicsVideoItem_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_contains(point);
}

bool QGraphicsVideoItem_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_collidesWithItem(other, mode);
}

bool QGraphicsVideoItem_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_collidesWithPath(path, mode);
}

bool QGraphicsVideoItem_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_isObscuredBy(item);
}

bool QGraphicsVideoItem_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsVideoItem_virtualbase_opaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_opaqueArea();
}

bool QGraphicsVideoItem_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QGraphicsVideoItem_virtualbase_type(const void* self) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_type();
}

bool QGraphicsVideoItem_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_sceneEventFilter(watched, event);
}

bool QGraphicsVideoItem_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_sceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_sceneEvent(event);
}

bool QGraphicsVideoItem_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QGraphicsVideoItem_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QGraphicsVideoItem_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QGraphicsVideoItem_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QGraphicsVideoItem_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_dropEvent(event);
}

bool QGraphicsVideoItem_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_focusInEvent(event);
}

bool QGraphicsVideoItem_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_focusOutEvent(event);
}

bool QGraphicsVideoItem_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_hoverEnterEvent(event);
}

bool QGraphicsVideoItem_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_hoverMoveEvent(event);
}

bool QGraphicsVideoItem_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_hoverLeaveEvent(event);
}

bool QGraphicsVideoItem_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_keyPressEvent(event);
}

bool QGraphicsVideoItem_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QGraphicsVideoItem_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_mousePressEvent(event);
}

bool QGraphicsVideoItem_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QGraphicsVideoItem_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QGraphicsVideoItem_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QGraphicsVideoItem_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_wheelEvent(event);
}

bool QGraphicsVideoItem_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QGraphicsVideoItem_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsVideoItem_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QGraphicsVideoItem_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QGraphicsVideoItem_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_supportsExtension(extension);
}

bool QGraphicsVideoItem_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QGraphicsVideoItem_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_setExtension(extension, variant);
}

bool QGraphicsVideoItem_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QGraphicsVideoItem_virtualbase_extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsVideoItem*)(self) )->virtualbase_extension(variant);
}

void QGraphicsVideoItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

QObject* QGraphicsVideoItem_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QGraphicsVideoItem_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QGraphicsVideoItem_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QGraphicsVideoItem_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QGraphicsVideoItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QGraphicsVideoItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QGraphicsVideoItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QGraphicsVideoItem_delete(QGraphicsVideoItem* self) {
	delete self;
}

