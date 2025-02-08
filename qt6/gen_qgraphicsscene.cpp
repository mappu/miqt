#include <QBrush>
#include <QChildEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>
#include <QGraphicsLineItem>
#include <QGraphicsPathItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsProxyWidget>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHelpEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsSimpleTextItem>
#include <QGraphicsTextItem>
#include <QGraphicsView>
#include <QGraphicsWidget>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineF>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QPen>
#include <QPixmap>
#include <QPointF>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include <qgraphicsscene.h>
#include "gen_qgraphicsscene.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGraphicsScene_changed(intptr_t, struct miqt_array /* of QRectF* */ );
void miqt_exec_callback_QGraphicsScene_sceneRectChanged(intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsScene_selectionChanged(intptr_t);
void miqt_exec_callback_QGraphicsScene_focusItemChanged(intptr_t, QGraphicsItem*, QGraphicsItem*, int);
QVariant* miqt_exec_callback_QGraphicsScene_inputMethodQuery(const QGraphicsScene*, intptr_t, int);
bool miqt_exec_callback_QGraphicsScene_event(QGraphicsScene*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsScene_eventFilter(QGraphicsScene*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsScene_contextMenuEvent(QGraphicsScene*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsScene_dragEnterEvent(QGraphicsScene*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsScene_dragMoveEvent(QGraphicsScene*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsScene_dragLeaveEvent(QGraphicsScene*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsScene_dropEvent(QGraphicsScene*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsScene_focusInEvent(QGraphicsScene*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsScene_focusOutEvent(QGraphicsScene*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsScene_helpEvent(QGraphicsScene*, intptr_t, QGraphicsSceneHelpEvent*);
void miqt_exec_callback_QGraphicsScene_keyPressEvent(QGraphicsScene*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsScene_keyReleaseEvent(QGraphicsScene*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsScene_mousePressEvent(QGraphicsScene*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsScene_mouseMoveEvent(QGraphicsScene*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsScene_mouseReleaseEvent(QGraphicsScene*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsScene_mouseDoubleClickEvent(QGraphicsScene*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsScene_wheelEvent(QGraphicsScene*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsScene_inputMethodEvent(QGraphicsScene*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QGraphicsScene_drawBackground(QGraphicsScene*, intptr_t, QPainter*, QRectF*);
void miqt_exec_callback_QGraphicsScene_drawForeground(QGraphicsScene*, intptr_t, QPainter*, QRectF*);
bool miqt_exec_callback_QGraphicsScene_focusNextPrevChild(QGraphicsScene*, intptr_t, bool);
void miqt_exec_callback_QGraphicsScene_timerEvent(QGraphicsScene*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsScene_childEvent(QGraphicsScene*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsScene_customEvent(QGraphicsScene*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsScene_connectNotify(QGraphicsScene*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsScene_disconnectNotify(QGraphicsScene*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsScene final : public QGraphicsScene {
public:

	MiqtVirtualQGraphicsScene(): QGraphicsScene() {};
	MiqtVirtualQGraphicsScene(const QRectF& sceneRect): QGraphicsScene(sceneRect) {};
	MiqtVirtualQGraphicsScene(qreal x, qreal y, qreal width, qreal height): QGraphicsScene(x, y, width, height) {};
	MiqtVirtualQGraphicsScene(QObject* parent): QGraphicsScene(parent) {};
	MiqtVirtualQGraphicsScene(const QRectF& sceneRect, QObject* parent): QGraphicsScene(sceneRect, parent) {};
	MiqtVirtualQGraphicsScene(qreal x, qreal y, qreal width, qreal height, QObject* parent): QGraphicsScene(x, y, width, height, parent) {};

	virtual ~MiqtVirtualQGraphicsScene() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsScene::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsScene_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QGraphicsScene::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGraphicsScene::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsScene_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QGraphicsScene::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGraphicsScene::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsScene_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QGraphicsScene::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsScene::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsScene::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsScene::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsScene::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsScene::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsScene::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsScene::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsScene::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsScene::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsScene::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsScene::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QGraphicsScene::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsScene::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QGraphicsScene::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__helpEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void helpEvent(QGraphicsSceneHelpEvent* event) override {
		if (handle__helpEvent == 0) {
			QGraphicsScene::helpEvent(event);
			return;
		}
		
		QGraphicsSceneHelpEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_helpEvent(this, handle__helpEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_helpEvent(QGraphicsSceneHelpEvent* event) {

		QGraphicsScene::helpEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsScene::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QGraphicsScene::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsScene::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QGraphicsScene::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsScene::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsScene::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsScene::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsScene::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsScene::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsScene::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsScene::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsScene::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsScene::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsScene::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsScene::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QGraphicsScene::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawBackground = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawBackground(QPainter* painter, const QRectF& rect) override {
		if (handle__drawBackground == 0) {
			QGraphicsScene::drawBackground(painter, rect);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsScene_drawBackground(this, handle__drawBackground, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawBackground(QPainter* painter, QRectF* rect) {

		QGraphicsScene::drawBackground(painter, *rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__drawForeground = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawForeground(QPainter* painter, const QRectF& rect) override {
		if (handle__drawForeground == 0) {
			QGraphicsScene::drawForeground(painter, rect);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsScene_drawForeground(this, handle__drawForeground, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_drawForeground(QPainter* painter, QRectF* rect) {

		QGraphicsScene::drawForeground(painter, *rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QGraphicsScene::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QGraphicsScene_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QGraphicsScene::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGraphicsScene::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QGraphicsScene::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGraphicsScene::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QGraphicsScene::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGraphicsScene::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QGraphicsScene::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGraphicsScene::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsScene_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QGraphicsScene::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGraphicsScene::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsScene_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QGraphicsScene::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QGraphicsScene_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsScene_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsScene_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsScene_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGraphicsScene* QGraphicsScene_new() {
	return new MiqtVirtualQGraphicsScene();
}

QGraphicsScene* QGraphicsScene_new2(QRectF* sceneRect) {
	return new MiqtVirtualQGraphicsScene(*sceneRect);
}

QGraphicsScene* QGraphicsScene_new3(double x, double y, double width, double height) {
	return new MiqtVirtualQGraphicsScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height));
}

QGraphicsScene* QGraphicsScene_new4(QObject* parent) {
	return new MiqtVirtualQGraphicsScene(parent);
}

QGraphicsScene* QGraphicsScene_new5(QRectF* sceneRect, QObject* parent) {
	return new MiqtVirtualQGraphicsScene(*sceneRect, parent);
}

QGraphicsScene* QGraphicsScene_new6(double x, double y, double width, double height, QObject* parent) {
	return new MiqtVirtualQGraphicsScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height), parent);
}

void QGraphicsScene_virtbase(QGraphicsScene* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QGraphicsScene_metaObject(const QGraphicsScene* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsScene_metacast(QGraphicsScene* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsScene_tr(const char* s) {
	QString _ret = QGraphicsScene::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QRectF* QGraphicsScene_sceneRect(const QGraphicsScene* self) {
	return new QRectF(self->sceneRect());
}

double QGraphicsScene_width(const QGraphicsScene* self) {
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

double QGraphicsScene_height(const QGraphicsScene* self) {
	qreal _ret = self->height();
	return static_cast<double>(_ret);
}

void QGraphicsScene_setSceneRect(QGraphicsScene* self, QRectF* rect) {
	self->setSceneRect(*rect);
}

void QGraphicsScene_setSceneRect2(QGraphicsScene* self, double x, double y, double w, double h) {
	self->setSceneRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsScene_render(QGraphicsScene* self, QPainter* painter) {
	self->render(painter);
}

int QGraphicsScene_itemIndexMethod(const QGraphicsScene* self) {
	QGraphicsScene::ItemIndexMethod _ret = self->itemIndexMethod();
	return static_cast<int>(_ret);
}

void QGraphicsScene_setItemIndexMethod(QGraphicsScene* self, int method) {
	self->setItemIndexMethod(static_cast<QGraphicsScene::ItemIndexMethod>(method));
}

int QGraphicsScene_bspTreeDepth(const QGraphicsScene* self) {
	return self->bspTreeDepth();
}

void QGraphicsScene_setBspTreeDepth(QGraphicsScene* self, int depth) {
	self->setBspTreeDepth(static_cast<int>(depth));
}

QRectF* QGraphicsScene_itemsBoundingRect(const QGraphicsScene* self) {
	return new QRectF(self->itemsBoundingRect());
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items(const QGraphicsScene* self) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_itemsWithPos(const QGraphicsScene* self, QPointF* pos) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_itemsWithRect(const QGraphicsScene* self, QRectF* rect) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_itemsWithPath(const QGraphicsScene* self, QPainterPath* path) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items2(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order) {
	QList<QGraphicsItem *> _ret = self->items(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_collidingItems(const QGraphicsScene* self, QGraphicsItem* item) {
	QList<QGraphicsItem *> _ret = self->collidingItems(item);
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

QGraphicsItem* QGraphicsScene_itemAt(const QGraphicsScene* self, QPointF* pos, QTransform* deviceTransform) {
	return self->itemAt(*pos, *deviceTransform);
}

QGraphicsItem* QGraphicsScene_itemAt2(const QGraphicsScene* self, double x, double y, QTransform* deviceTransform) {
	return self->itemAt(static_cast<qreal>(x), static_cast<qreal>(y), *deviceTransform);
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_selectedItems(const QGraphicsScene* self) {
	QList<QGraphicsItem *> _ret = self->selectedItems();
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

QPainterPath* QGraphicsScene_selectionArea(const QGraphicsScene* self) {
	return new QPainterPath(self->selectionArea());
}

void QGraphicsScene_setSelectionArea(QGraphicsScene* self, QPainterPath* path, QTransform* deviceTransform) {
	self->setSelectionArea(*path, *deviceTransform);
}

void QGraphicsScene_setSelectionAreaWithPath(QGraphicsScene* self, QPainterPath* path) {
	self->setSelectionArea(*path);
}

QGraphicsItemGroup* QGraphicsScene_createItemGroup(QGraphicsScene* self, struct miqt_array /* of QGraphicsItem* */  items) {
	QList<QGraphicsItem *> items_QList;
	items_QList.reserve(items.len);
	QGraphicsItem** items_arr = static_cast<QGraphicsItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	return self->createItemGroup(items_QList);
}

void QGraphicsScene_destroyItemGroup(QGraphicsScene* self, QGraphicsItemGroup* group) {
	self->destroyItemGroup(group);
}

void QGraphicsScene_addItem(QGraphicsScene* self, QGraphicsItem* item) {
	self->addItem(item);
}

QGraphicsEllipseItem* QGraphicsScene_addEllipse(QGraphicsScene* self, QRectF* rect) {
	return self->addEllipse(*rect);
}

QGraphicsLineItem* QGraphicsScene_addLine(QGraphicsScene* self, QLineF* line) {
	return self->addLine(*line);
}

QGraphicsPathItem* QGraphicsScene_addPath(QGraphicsScene* self, QPainterPath* path) {
	return self->addPath(*path);
}

QGraphicsPixmapItem* QGraphicsScene_addPixmap(QGraphicsScene* self, QPixmap* pixmap) {
	return self->addPixmap(*pixmap);
}

QGraphicsRectItem* QGraphicsScene_addRect(QGraphicsScene* self, QRectF* rect) {
	return self->addRect(*rect);
}

QGraphicsTextItem* QGraphicsScene_addText(QGraphicsScene* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addText(text_QString);
}

QGraphicsSimpleTextItem* QGraphicsScene_addSimpleText(QGraphicsScene* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addSimpleText(text_QString);
}

QGraphicsProxyWidget* QGraphicsScene_addWidget(QGraphicsScene* self, QWidget* widget) {
	return self->addWidget(widget);
}

QGraphicsEllipseItem* QGraphicsScene_addEllipse2(QGraphicsScene* self, double x, double y, double w, double h) {
	return self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QGraphicsLineItem* QGraphicsScene_addLine2(QGraphicsScene* self, double x1, double y1, double x2, double y2) {
	return self->addLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QGraphicsRectItem* QGraphicsScene_addRect2(QGraphicsScene* self, double x, double y, double w, double h) {
	return self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsScene_removeItem(QGraphicsScene* self, QGraphicsItem* item) {
	self->removeItem(item);
}

QGraphicsItem* QGraphicsScene_focusItem(const QGraphicsScene* self) {
	return self->focusItem();
}

void QGraphicsScene_setFocusItem(QGraphicsScene* self, QGraphicsItem* item) {
	self->setFocusItem(item);
}

bool QGraphicsScene_hasFocus(const QGraphicsScene* self) {
	return self->hasFocus();
}

void QGraphicsScene_setFocus(QGraphicsScene* self) {
	self->setFocus();
}

void QGraphicsScene_clearFocus(QGraphicsScene* self) {
	self->clearFocus();
}

void QGraphicsScene_setStickyFocus(QGraphicsScene* self, bool enabled) {
	self->setStickyFocus(enabled);
}

bool QGraphicsScene_stickyFocus(const QGraphicsScene* self) {
	return self->stickyFocus();
}

QGraphicsItem* QGraphicsScene_mouseGrabberItem(const QGraphicsScene* self) {
	return self->mouseGrabberItem();
}

QBrush* QGraphicsScene_backgroundBrush(const QGraphicsScene* self) {
	return new QBrush(self->backgroundBrush());
}

void QGraphicsScene_setBackgroundBrush(QGraphicsScene* self, QBrush* brush) {
	self->setBackgroundBrush(*brush);
}

QBrush* QGraphicsScene_foregroundBrush(const QGraphicsScene* self) {
	return new QBrush(self->foregroundBrush());
}

void QGraphicsScene_setForegroundBrush(QGraphicsScene* self, QBrush* brush) {
	self->setForegroundBrush(*brush);
}

QVariant* QGraphicsScene_inputMethodQuery(const QGraphicsScene* self, int query) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

struct miqt_array /* of QGraphicsView* */  QGraphicsScene_views(const QGraphicsScene* self) {
	QList<QGraphicsView *> _ret = self->views();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsView** _arr = static_cast<QGraphicsView**>(malloc(sizeof(QGraphicsView*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGraphicsScene_update(QGraphicsScene* self, double x, double y, double w, double h) {
	self->update(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsScene_invalidate(QGraphicsScene* self, double x, double y, double w, double h) {
	self->invalidate(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QStyle* QGraphicsScene_style(const QGraphicsScene* self) {
	return self->style();
}

void QGraphicsScene_setStyle(QGraphicsScene* self, QStyle* style) {
	self->setStyle(style);
}

QFont* QGraphicsScene_font(const QGraphicsScene* self) {
	return new QFont(self->font());
}

void QGraphicsScene_setFont(QGraphicsScene* self, QFont* font) {
	self->setFont(*font);
}

QPalette* QGraphicsScene_palette(const QGraphicsScene* self) {
	return new QPalette(self->palette());
}

void QGraphicsScene_setPalette(QGraphicsScene* self, QPalette* palette) {
	self->setPalette(*palette);
}

bool QGraphicsScene_isActive(const QGraphicsScene* self) {
	return self->isActive();
}

QGraphicsItem* QGraphicsScene_activePanel(const QGraphicsScene* self) {
	return self->activePanel();
}

void QGraphicsScene_setActivePanel(QGraphicsScene* self, QGraphicsItem* item) {
	self->setActivePanel(item);
}

QGraphicsWidget* QGraphicsScene_activeWindow(const QGraphicsScene* self) {
	return self->activeWindow();
}

void QGraphicsScene_setActiveWindow(QGraphicsScene* self, QGraphicsWidget* widget) {
	self->setActiveWindow(widget);
}

bool QGraphicsScene_sendEvent(QGraphicsScene* self, QGraphicsItem* item, QEvent* event) {
	return self->sendEvent(item, event);
}

double QGraphicsScene_minimumRenderSize(const QGraphicsScene* self) {
	qreal _ret = self->minimumRenderSize();
	return static_cast<double>(_ret);
}

void QGraphicsScene_setMinimumRenderSize(QGraphicsScene* self, double minSize) {
	self->setMinimumRenderSize(static_cast<qreal>(minSize));
}

bool QGraphicsScene_focusOnTouch(const QGraphicsScene* self) {
	return self->focusOnTouch();
}

void QGraphicsScene_setFocusOnTouch(QGraphicsScene* self, bool enabled) {
	self->setFocusOnTouch(enabled);
}

void QGraphicsScene_update2(QGraphicsScene* self) {
	self->update();
}

void QGraphicsScene_invalidate2(QGraphicsScene* self) {
	self->invalidate();
}

void QGraphicsScene_advance(QGraphicsScene* self) {
	self->advance();
}

void QGraphicsScene_clearSelection(QGraphicsScene* self) {
	self->clearSelection();
}

void QGraphicsScene_clear(QGraphicsScene* self) {
	self->clear();
}

void QGraphicsScene_changed(QGraphicsScene* self, struct miqt_array /* of QRectF* */  region) {
	QList<QRectF> region_QList;
	region_QList.reserve(region.len);
	QRectF** region_arr = static_cast<QRectF**>(region.data);
	for(size_t i = 0; i < region.len; ++i) {
		region_QList.push_back(*(region_arr[i]));
	}
	self->changed(region_QList);
}

void QGraphicsScene_connect_changed(QGraphicsScene* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene::connect(self, static_cast<void (QGraphicsScene::*)(const QList<QRectF>&)>(&QGraphicsScene::changed), self, [=](const QList<QRectF>& region) {
		const QList<QRectF>& region_ret = region;
		// Convert QList<> from C++ memory to manually-managed C memory
		QRectF** region_arr = static_cast<QRectF**>(malloc(sizeof(QRectF*) * region_ret.length()));
		for (size_t i = 0, e = region_ret.length(); i < e; ++i) {
			region_arr[i] = new QRectF(region_ret[i]);
		}
		struct miqt_array region_out;
		region_out.len = region_ret.length();
		region_out.data = static_cast<void*>(region_arr);
		struct miqt_array /* of QRectF* */  sigval1 = region_out;
		miqt_exec_callback_QGraphicsScene_changed(slot, sigval1);
	});
}

void QGraphicsScene_sceneRectChanged(QGraphicsScene* self, QRectF* rect) {
	self->sceneRectChanged(*rect);
}

void QGraphicsScene_connect_sceneRectChanged(QGraphicsScene* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene::connect(self, static_cast<void (QGraphicsScene::*)(const QRectF&)>(&QGraphicsScene::sceneRectChanged), self, [=](const QRectF& rect) {
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);
		miqt_exec_callback_QGraphicsScene_sceneRectChanged(slot, sigval1);
	});
}

void QGraphicsScene_selectionChanged(QGraphicsScene* self) {
	self->selectionChanged();
}

void QGraphicsScene_connect_selectionChanged(QGraphicsScene* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene::connect(self, static_cast<void (QGraphicsScene::*)()>(&QGraphicsScene::selectionChanged), self, [=]() {
		miqt_exec_callback_QGraphicsScene_selectionChanged(slot);
	});
}

void QGraphicsScene_focusItemChanged(QGraphicsScene* self, QGraphicsItem* newFocus, QGraphicsItem* oldFocus, int reason) {
	self->focusItemChanged(newFocus, oldFocus, static_cast<Qt::FocusReason>(reason));
}

void QGraphicsScene_connect_focusItemChanged(QGraphicsScene* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene::connect(self, static_cast<void (QGraphicsScene::*)(QGraphicsItem*, QGraphicsItem*, Qt::FocusReason)>(&QGraphicsScene::focusItemChanged), self, [=](QGraphicsItem* newFocus, QGraphicsItem* oldFocus, Qt::FocusReason reason) {
		QGraphicsItem* sigval1 = newFocus;
		QGraphicsItem* sigval2 = oldFocus;
		Qt::FocusReason reason_ret = reason;
		int sigval3 = static_cast<int>(reason_ret);
		miqt_exec_callback_QGraphicsScene_focusItemChanged(slot, sigval1, sigval2, sigval3);
	});
}

struct miqt_string QGraphicsScene_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsScene::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsScene_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsScene::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsScene_render2(QGraphicsScene* self, QPainter* painter, QRectF* target) {
	self->render(painter, *target);
}

void QGraphicsScene_render3(QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source) {
	self->render(painter, *target, *source);
}

void QGraphicsScene_render4(QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source, int aspectRatioMode) {
	self->render(painter, *target, *source, static_cast<Qt::AspectRatioMode>(aspectRatioMode));
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items1(const QGraphicsScene* self, int order) {
	QList<QGraphicsItem *> _ret = self->items(static_cast<Qt::SortOrder>(order));
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items22(const QGraphicsScene* self, QPointF* pos, int mode) {
	QList<QGraphicsItem *> _ret = self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode));
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items3(const QGraphicsScene* self, QPointF* pos, int mode, int order) {
	QList<QGraphicsItem *> _ret = self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items4(const QGraphicsScene* self, QPointF* pos, int mode, int order, QTransform* deviceTransform) {
	QList<QGraphicsItem *> _ret = self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items23(const QGraphicsScene* self, QRectF* rect, int mode) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items32(const QGraphicsScene* self, QRectF* rect, int mode, int order) {
	QList<QGraphicsItem *> _ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items42(const QGraphicsScene* self, QRectF* rect, int mode, int order, QTransform* deviceTransform) {
	QList<QGraphicsItem *> _ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items25(const QGraphicsScene* self, QPainterPath* path, int mode) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items34(const QGraphicsScene* self, QPainterPath* path, int mode, int order) {
	QList<QGraphicsItem *> _ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items44(const QGraphicsScene* self, QPainterPath* path, int mode, int order, QTransform* deviceTransform) {
	QList<QGraphicsItem *> _ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items7(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order, QTransform* deviceTransform) {
	QList<QGraphicsItem *> _ret = self->items(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_collidingItems2(const QGraphicsScene* self, QGraphicsItem* item, int mode) {
	QList<QGraphicsItem *> _ret = self->collidingItems(item, static_cast<Qt::ItemSelectionMode>(mode));
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

void QGraphicsScene_setSelectionArea2(QGraphicsScene* self, QPainterPath* path, int selectionOperation) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation));
}

void QGraphicsScene_setSelectionArea3(QGraphicsScene* self, QPainterPath* path, int selectionOperation, int mode) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation), static_cast<Qt::ItemSelectionMode>(mode));
}

void QGraphicsScene_setSelectionArea4(QGraphicsScene* self, QPainterPath* path, int selectionOperation, int mode, QTransform* deviceTransform) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation), static_cast<Qt::ItemSelectionMode>(mode), *deviceTransform);
}

QGraphicsEllipseItem* QGraphicsScene_addEllipse22(QGraphicsScene* self, QRectF* rect, QPen* pen) {
	return self->addEllipse(*rect, *pen);
}

QGraphicsEllipseItem* QGraphicsScene_addEllipse3(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush) {
	return self->addEllipse(*rect, *pen, *brush);
}

QGraphicsLineItem* QGraphicsScene_addLine22(QGraphicsScene* self, QLineF* line, QPen* pen) {
	return self->addLine(*line, *pen);
}

QGraphicsPathItem* QGraphicsScene_addPath2(QGraphicsScene* self, QPainterPath* path, QPen* pen) {
	return self->addPath(*path, *pen);
}

QGraphicsPathItem* QGraphicsScene_addPath3(QGraphicsScene* self, QPainterPath* path, QPen* pen, QBrush* brush) {
	return self->addPath(*path, *pen, *brush);
}

QGraphicsRectItem* QGraphicsScene_addRect22(QGraphicsScene* self, QRectF* rect, QPen* pen) {
	return self->addRect(*rect, *pen);
}

QGraphicsRectItem* QGraphicsScene_addRect3(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush) {
	return self->addRect(*rect, *pen, *brush);
}

QGraphicsTextItem* QGraphicsScene_addText2(QGraphicsScene* self, struct miqt_string text, QFont* font) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addText(text_QString, *font);
}

QGraphicsSimpleTextItem* QGraphicsScene_addSimpleText2(QGraphicsScene* self, struct miqt_string text, QFont* font) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addSimpleText(text_QString, *font);
}

QGraphicsProxyWidget* QGraphicsScene_addWidget2(QGraphicsScene* self, QWidget* widget, int wFlags) {
	return self->addWidget(widget, static_cast<Qt::WindowFlags>(wFlags));
}

QGraphicsEllipseItem* QGraphicsScene_addEllipse5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen) {
	return self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen);
}

QGraphicsEllipseItem* QGraphicsScene_addEllipse6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush) {
	return self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen, *brush);
}

QGraphicsLineItem* QGraphicsScene_addLine5(QGraphicsScene* self, double x1, double y1, double x2, double y2, QPen* pen) {
	return self->addLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2), *pen);
}

QGraphicsRectItem* QGraphicsScene_addRect5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen) {
	return self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen);
}

QGraphicsRectItem* QGraphicsScene_addRect6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush) {
	return self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen, *brush);
}

void QGraphicsScene_setFocusItem2(QGraphicsScene* self, QGraphicsItem* item, int focusReason) {
	self->setFocusItem(item, static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsScene_setFocus1(QGraphicsScene* self, int focusReason) {
	self->setFocus(static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsScene_invalidate5(QGraphicsScene* self, double x, double y, double w, double h, int layers) {
	self->invalidate(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<QGraphicsScene::SceneLayers>(layers));
}

void QGraphicsScene_update1(QGraphicsScene* self, QRectF* rect) {
	self->update(*rect);
}

void QGraphicsScene_invalidate1(QGraphicsScene* self, QRectF* rect) {
	self->invalidate(*rect);
}

void QGraphicsScene_invalidate22(QGraphicsScene* self, QRectF* rect, int layers) {
	self->invalidate(*rect, static_cast<QGraphicsScene::SceneLayers>(layers));
}

bool QGraphicsScene_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsScene_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsScene*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QGraphicsScene_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QGraphicsScene_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_event(event);
}

bool QGraphicsScene_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGraphicsScene_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QGraphicsScene_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QGraphicsScene_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QGraphicsScene_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QGraphicsScene_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QGraphicsScene_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_dropEvent(event);
}

bool QGraphicsScene_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_focusInEvent(event);
}

bool QGraphicsScene_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_focusOutEvent(event);
}

bool QGraphicsScene_override_virtual_helpEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__helpEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_helpEvent(void* self, QGraphicsSceneHelpEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_helpEvent(event);
}

bool QGraphicsScene_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_keyPressEvent(event);
}

bool QGraphicsScene_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QGraphicsScene_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_mousePressEvent(event);
}

bool QGraphicsScene_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QGraphicsScene_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QGraphicsScene_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QGraphicsScene_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_wheelEvent(event);
}

bool QGraphicsScene_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QGraphicsScene_override_virtual_drawBackground(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawBackground = slot;
	return true;
}

void QGraphicsScene_virtualbase_drawBackground(void* self, QPainter* painter, QRectF* rect) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_drawBackground(painter, rect);
}

bool QGraphicsScene_override_virtual_drawForeground(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__drawForeground = slot;
	return true;
}

void QGraphicsScene_virtualbase_drawForeground(void* self, QPainter* painter, QRectF* rect) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_drawForeground(painter, rect);
}

bool QGraphicsScene_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QGraphicsScene_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QGraphicsScene_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_timerEvent(event);
}

bool QGraphicsScene_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_childEvent(event);
}

bool QGraphicsScene_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_customEvent(event);
}

bool QGraphicsScene_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QGraphicsScene_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_connectNotify(signal);
}

bool QGraphicsScene_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGraphicsScene_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QGraphicsScene_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QGraphicsScene_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QGraphicsScene_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QGraphicsScene_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QGraphicsScene_delete(QGraphicsScene* self) {
	delete self;
}

