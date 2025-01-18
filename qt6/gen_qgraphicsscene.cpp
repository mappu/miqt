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

void miqt_exec_callback_QGraphicsScene_Changed(intptr_t, struct miqt_array /* of QRectF* */ );
void miqt_exec_callback_QGraphicsScene_SceneRectChanged(intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsScene_SelectionChanged(intptr_t);
void miqt_exec_callback_QGraphicsScene_FocusItemChanged(intptr_t, QGraphicsItem*, QGraphicsItem*, int);
QVariant* miqt_exec_callback_QGraphicsScene_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QGraphicsScene_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsScene_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsScene_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsScene_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsScene_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsScene_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsScene_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsScene_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsScene_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsScene_HelpEvent(void*, intptr_t, QGraphicsSceneHelpEvent*);
void miqt_exec_callback_QGraphicsScene_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsScene_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsScene_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsScene_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsScene_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsScene_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsScene_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsScene_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QGraphicsScene_DrawBackground(void*, intptr_t, QPainter*, QRectF*);
void miqt_exec_callback_QGraphicsScene_DrawForeground(void*, intptr_t, QPainter*, QRectF*);
bool miqt_exec_callback_QGraphicsScene_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QGraphicsScene_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsScene_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsScene_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsScene_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsScene_DisconnectNotify(void*, intptr_t, QMetaMethod*);
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
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsScene::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsScene_InputMethodQuery(const_cast<MiqtVirtualQGraphicsScene*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsScene::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QGraphicsScene::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsScene_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QGraphicsScene::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QGraphicsScene::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsScene_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QGraphicsScene::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsScene::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsScene::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsScene::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsScene::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsScene::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsScene::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsScene::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsScene::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsScene::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsScene::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsScene::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsScene::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsScene::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsScene::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HelpEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void helpEvent(QGraphicsSceneHelpEvent* event) override {
		if (handle__HelpEvent == 0) {
			QGraphicsScene::helpEvent(event);
			return;
		}
		
		QGraphicsSceneHelpEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_HelpEvent(this, handle__HelpEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HelpEvent(QGraphicsSceneHelpEvent* event) {

		QGraphicsScene::helpEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsScene::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsScene::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsScene::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsScene::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsScene::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsScene::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsScene::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsScene::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsScene::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsScene::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsScene::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsScene::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsScene::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsScene::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsScene::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsScene::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawBackground = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawBackground(QPainter* painter, const QRectF& rect) override {
		if (handle__DrawBackground == 0) {
			QGraphicsScene::drawBackground(painter, rect);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsScene_DrawBackground(this, handle__DrawBackground, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawBackground(QPainter* painter, QRectF* rect) {

		QGraphicsScene::drawBackground(painter, *rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawForeground = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawForeground(QPainter* painter, const QRectF& rect) override {
		if (handle__DrawForeground == 0) {
			QGraphicsScene::drawForeground(painter, rect);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsScene_DrawForeground(this, handle__DrawForeground, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawForeground(QPainter* painter, QRectF* rect) {

		QGraphicsScene::drawForeground(painter, *rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QGraphicsScene::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QGraphicsScene_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QGraphicsScene::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QGraphicsScene::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QGraphicsScene::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QGraphicsScene::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QGraphicsScene::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QGraphicsScene::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsScene_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QGraphicsScene::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QGraphicsScene::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsScene_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QGraphicsScene::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QGraphicsScene::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsScene_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QGraphicsScene::disconnectNotify(*signal);

	}

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

QMetaObject* QGraphicsScene_MetaObject(const QGraphicsScene* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsScene_Metacast(QGraphicsScene* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsScene_Tr(const char* s) {
	QString _ret = QGraphicsScene::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QRectF* QGraphicsScene_SceneRect(const QGraphicsScene* self) {
	return new QRectF(self->sceneRect());
}

double QGraphicsScene_Width(const QGraphicsScene* self) {
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

double QGraphicsScene_Height(const QGraphicsScene* self) {
	qreal _ret = self->height();
	return static_cast<double>(_ret);
}

void QGraphicsScene_SetSceneRect(QGraphicsScene* self, QRectF* rect) {
	self->setSceneRect(*rect);
}

void QGraphicsScene_SetSceneRect2(QGraphicsScene* self, double x, double y, double w, double h) {
	self->setSceneRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsScene_Render(QGraphicsScene* self, QPainter* painter) {
	self->render(painter);
}

int QGraphicsScene_ItemIndexMethod(const QGraphicsScene* self) {
	QGraphicsScene::ItemIndexMethod _ret = self->itemIndexMethod();
	return static_cast<int>(_ret);
}

void QGraphicsScene_SetItemIndexMethod(QGraphicsScene* self, int method) {
	self->setItemIndexMethod(static_cast<QGraphicsScene::ItemIndexMethod>(method));
}

int QGraphicsScene_BspTreeDepth(const QGraphicsScene* self) {
	return self->bspTreeDepth();
}

void QGraphicsScene_SetBspTreeDepth(QGraphicsScene* self, int depth) {
	self->setBspTreeDepth(static_cast<int>(depth));
}

QRectF* QGraphicsScene_ItemsBoundingRect(const QGraphicsScene* self) {
	return new QRectF(self->itemsBoundingRect());
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_Items(const QGraphicsScene* self) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_ItemsWithPos(const QGraphicsScene* self, QPointF* pos) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_ItemsWithRect(const QGraphicsScene* self, QRectF* rect) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_ItemsWithPath(const QGraphicsScene* self, QPainterPath* path) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_Items2(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_CollidingItems(const QGraphicsScene* self, QGraphicsItem* item) {
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

QGraphicsItem* QGraphicsScene_ItemAt(const QGraphicsScene* self, QPointF* pos, QTransform* deviceTransform) {
	return self->itemAt(*pos, *deviceTransform);
}

QGraphicsItem* QGraphicsScene_ItemAt2(const QGraphicsScene* self, double x, double y, QTransform* deviceTransform) {
	return self->itemAt(static_cast<qreal>(x), static_cast<qreal>(y), *deviceTransform);
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_SelectedItems(const QGraphicsScene* self) {
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

QPainterPath* QGraphicsScene_SelectionArea(const QGraphicsScene* self) {
	return new QPainterPath(self->selectionArea());
}

void QGraphicsScene_SetSelectionArea(QGraphicsScene* self, QPainterPath* path, QTransform* deviceTransform) {
	self->setSelectionArea(*path, *deviceTransform);
}

void QGraphicsScene_SetSelectionAreaWithPath(QGraphicsScene* self, QPainterPath* path) {
	self->setSelectionArea(*path);
}

QGraphicsItemGroup* QGraphicsScene_CreateItemGroup(QGraphicsScene* self, struct miqt_array /* of QGraphicsItem* */  items) {
	QList<QGraphicsItem *> items_QList;
	items_QList.reserve(items.len);
	QGraphicsItem** items_arr = static_cast<QGraphicsItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	return self->createItemGroup(items_QList);
}

void QGraphicsScene_DestroyItemGroup(QGraphicsScene* self, QGraphicsItemGroup* group) {
	self->destroyItemGroup(group);
}

void QGraphicsScene_AddItem(QGraphicsScene* self, QGraphicsItem* item) {
	self->addItem(item);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse(QGraphicsScene* self, QRectF* rect) {
	return self->addEllipse(*rect);
}

QGraphicsLineItem* QGraphicsScene_AddLine(QGraphicsScene* self, QLineF* line) {
	return self->addLine(*line);
}

QGraphicsPathItem* QGraphicsScene_AddPath(QGraphicsScene* self, QPainterPath* path) {
	return self->addPath(*path);
}

QGraphicsPixmapItem* QGraphicsScene_AddPixmap(QGraphicsScene* self, QPixmap* pixmap) {
	return self->addPixmap(*pixmap);
}

QGraphicsRectItem* QGraphicsScene_AddRect(QGraphicsScene* self, QRectF* rect) {
	return self->addRect(*rect);
}

QGraphicsTextItem* QGraphicsScene_AddText(QGraphicsScene* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addText(text_QString);
}

QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText(QGraphicsScene* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addSimpleText(text_QString);
}

QGraphicsProxyWidget* QGraphicsScene_AddWidget(QGraphicsScene* self, QWidget* widget) {
	return self->addWidget(widget);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse2(QGraphicsScene* self, double x, double y, double w, double h) {
	return self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QGraphicsLineItem* QGraphicsScene_AddLine2(QGraphicsScene* self, double x1, double y1, double x2, double y2) {
	return self->addLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QGraphicsRectItem* QGraphicsScene_AddRect2(QGraphicsScene* self, double x, double y, double w, double h) {
	return self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsScene_RemoveItem(QGraphicsScene* self, QGraphicsItem* item) {
	self->removeItem(item);
}

QGraphicsItem* QGraphicsScene_FocusItem(const QGraphicsScene* self) {
	return self->focusItem();
}

void QGraphicsScene_SetFocusItem(QGraphicsScene* self, QGraphicsItem* item) {
	self->setFocusItem(item);
}

bool QGraphicsScene_HasFocus(const QGraphicsScene* self) {
	return self->hasFocus();
}

void QGraphicsScene_SetFocus(QGraphicsScene* self) {
	self->setFocus();
}

void QGraphicsScene_ClearFocus(QGraphicsScene* self) {
	self->clearFocus();
}

void QGraphicsScene_SetStickyFocus(QGraphicsScene* self, bool enabled) {
	self->setStickyFocus(enabled);
}

bool QGraphicsScene_StickyFocus(const QGraphicsScene* self) {
	return self->stickyFocus();
}

QGraphicsItem* QGraphicsScene_MouseGrabberItem(const QGraphicsScene* self) {
	return self->mouseGrabberItem();
}

QBrush* QGraphicsScene_BackgroundBrush(const QGraphicsScene* self) {
	return new QBrush(self->backgroundBrush());
}

void QGraphicsScene_SetBackgroundBrush(QGraphicsScene* self, QBrush* brush) {
	self->setBackgroundBrush(*brush);
}

QBrush* QGraphicsScene_ForegroundBrush(const QGraphicsScene* self) {
	return new QBrush(self->foregroundBrush());
}

void QGraphicsScene_SetForegroundBrush(QGraphicsScene* self, QBrush* brush) {
	self->setForegroundBrush(*brush);
}

QVariant* QGraphicsScene_InputMethodQuery(const QGraphicsScene* self, int query) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

struct miqt_array /* of QGraphicsView* */  QGraphicsScene_Views(const QGraphicsScene* self) {
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

void QGraphicsScene_Update(QGraphicsScene* self, double x, double y, double w, double h) {
	self->update(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsScene_Invalidate(QGraphicsScene* self, double x, double y, double w, double h) {
	self->invalidate(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QStyle* QGraphicsScene_Style(const QGraphicsScene* self) {
	return self->style();
}

void QGraphicsScene_SetStyle(QGraphicsScene* self, QStyle* style) {
	self->setStyle(style);
}

QFont* QGraphicsScene_Font(const QGraphicsScene* self) {
	return new QFont(self->font());
}

void QGraphicsScene_SetFont(QGraphicsScene* self, QFont* font) {
	self->setFont(*font);
}

QPalette* QGraphicsScene_Palette(const QGraphicsScene* self) {
	return new QPalette(self->palette());
}

void QGraphicsScene_SetPalette(QGraphicsScene* self, QPalette* palette) {
	self->setPalette(*palette);
}

bool QGraphicsScene_IsActive(const QGraphicsScene* self) {
	return self->isActive();
}

QGraphicsItem* QGraphicsScene_ActivePanel(const QGraphicsScene* self) {
	return self->activePanel();
}

void QGraphicsScene_SetActivePanel(QGraphicsScene* self, QGraphicsItem* item) {
	self->setActivePanel(item);
}

QGraphicsWidget* QGraphicsScene_ActiveWindow(const QGraphicsScene* self) {
	return self->activeWindow();
}

void QGraphicsScene_SetActiveWindow(QGraphicsScene* self, QGraphicsWidget* widget) {
	self->setActiveWindow(widget);
}

bool QGraphicsScene_SendEvent(QGraphicsScene* self, QGraphicsItem* item, QEvent* event) {
	return self->sendEvent(item, event);
}

double QGraphicsScene_MinimumRenderSize(const QGraphicsScene* self) {
	qreal _ret = self->minimumRenderSize();
	return static_cast<double>(_ret);
}

void QGraphicsScene_SetMinimumRenderSize(QGraphicsScene* self, double minSize) {
	self->setMinimumRenderSize(static_cast<qreal>(minSize));
}

bool QGraphicsScene_FocusOnTouch(const QGraphicsScene* self) {
	return self->focusOnTouch();
}

void QGraphicsScene_SetFocusOnTouch(QGraphicsScene* self, bool enabled) {
	self->setFocusOnTouch(enabled);
}

void QGraphicsScene_Update2(QGraphicsScene* self) {
	self->update();
}

void QGraphicsScene_Invalidate2(QGraphicsScene* self) {
	self->invalidate();
}

void QGraphicsScene_Advance(QGraphicsScene* self) {
	self->advance();
}

void QGraphicsScene_ClearSelection(QGraphicsScene* self) {
	self->clearSelection();
}

void QGraphicsScene_Clear(QGraphicsScene* self) {
	self->clear();
}

void QGraphicsScene_Changed(QGraphicsScene* self, struct miqt_array /* of QRectF* */  region) {
	QList<QRectF> region_QList;
	region_QList.reserve(region.len);
	QRectF** region_arr = static_cast<QRectF**>(region.data);
	for(size_t i = 0; i < region.len; ++i) {
		region_QList.push_back(*(region_arr[i]));
	}
	self->changed(region_QList);
}

void QGraphicsScene_connect_Changed(QGraphicsScene* self, intptr_t slot) {
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
		miqt_exec_callback_QGraphicsScene_Changed(slot, sigval1);
	});
}

void QGraphicsScene_SceneRectChanged(QGraphicsScene* self, QRectF* rect) {
	self->sceneRectChanged(*rect);
}

void QGraphicsScene_connect_SceneRectChanged(QGraphicsScene* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene::connect(self, static_cast<void (QGraphicsScene::*)(const QRectF&)>(&QGraphicsScene::sceneRectChanged), self, [=](const QRectF& rect) {
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);
		miqt_exec_callback_QGraphicsScene_SceneRectChanged(slot, sigval1);
	});
}

void QGraphicsScene_SelectionChanged(QGraphicsScene* self) {
	self->selectionChanged();
}

void QGraphicsScene_connect_SelectionChanged(QGraphicsScene* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene::connect(self, static_cast<void (QGraphicsScene::*)()>(&QGraphicsScene::selectionChanged), self, [=]() {
		miqt_exec_callback_QGraphicsScene_SelectionChanged(slot);
	});
}

void QGraphicsScene_FocusItemChanged(QGraphicsScene* self, QGraphicsItem* newFocus, QGraphicsItem* oldFocus, int reason) {
	self->focusItemChanged(newFocus, oldFocus, static_cast<Qt::FocusReason>(reason));
}

void QGraphicsScene_connect_FocusItemChanged(QGraphicsScene* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene::connect(self, static_cast<void (QGraphicsScene::*)(QGraphicsItem*, QGraphicsItem*, Qt::FocusReason)>(&QGraphicsScene::focusItemChanged), self, [=](QGraphicsItem* newFocus, QGraphicsItem* oldFocus, Qt::FocusReason reason) {
		QGraphicsItem* sigval1 = newFocus;
		QGraphicsItem* sigval2 = oldFocus;
		Qt::FocusReason reason_ret = reason;
		int sigval3 = static_cast<int>(reason_ret);
		miqt_exec_callback_QGraphicsScene_FocusItemChanged(slot, sigval1, sigval2, sigval3);
	});
}

struct miqt_string QGraphicsScene_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsScene::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsScene_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsScene::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsScene_Render2(QGraphicsScene* self, QPainter* painter, QRectF* target) {
	self->render(painter, *target);
}

void QGraphicsScene_Render3(QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source) {
	self->render(painter, *target, *source);
}

void QGraphicsScene_Render4(QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source, int aspectRatioMode) {
	self->render(painter, *target, *source, static_cast<Qt::AspectRatioMode>(aspectRatioMode));
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_Items1(const QGraphicsScene* self, int order) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_Items22(const QGraphicsScene* self, QPointF* pos, int mode) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_Items3(const QGraphicsScene* self, QPointF* pos, int mode, int order) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_Items4(const QGraphicsScene* self, QPointF* pos, int mode, int order, QTransform* deviceTransform) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_Items23(const QGraphicsScene* self, QRectF* rect, int mode) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_Items32(const QGraphicsScene* self, QRectF* rect, int mode, int order) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_Items42(const QGraphicsScene* self, QRectF* rect, int mode, int order, QTransform* deviceTransform) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_Items25(const QGraphicsScene* self, QPainterPath* path, int mode) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_Items34(const QGraphicsScene* self, QPainterPath* path, int mode, int order) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_Items44(const QGraphicsScene* self, QPainterPath* path, int mode, int order, QTransform* deviceTransform) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_Items7(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order, QTransform* deviceTransform) {
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

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_CollidingItems2(const QGraphicsScene* self, QGraphicsItem* item, int mode) {
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

void QGraphicsScene_SetSelectionArea2(QGraphicsScene* self, QPainterPath* path, int selectionOperation) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation));
}

void QGraphicsScene_SetSelectionArea3(QGraphicsScene* self, QPainterPath* path, int selectionOperation, int mode) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation), static_cast<Qt::ItemSelectionMode>(mode));
}

void QGraphicsScene_SetSelectionArea4(QGraphicsScene* self, QPainterPath* path, int selectionOperation, int mode, QTransform* deviceTransform) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation), static_cast<Qt::ItemSelectionMode>(mode), *deviceTransform);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse22(QGraphicsScene* self, QRectF* rect, QPen* pen) {
	return self->addEllipse(*rect, *pen);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse3(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush) {
	return self->addEllipse(*rect, *pen, *brush);
}

QGraphicsLineItem* QGraphicsScene_AddLine22(QGraphicsScene* self, QLineF* line, QPen* pen) {
	return self->addLine(*line, *pen);
}

QGraphicsPathItem* QGraphicsScene_AddPath2(QGraphicsScene* self, QPainterPath* path, QPen* pen) {
	return self->addPath(*path, *pen);
}

QGraphicsPathItem* QGraphicsScene_AddPath3(QGraphicsScene* self, QPainterPath* path, QPen* pen, QBrush* brush) {
	return self->addPath(*path, *pen, *brush);
}

QGraphicsRectItem* QGraphicsScene_AddRect22(QGraphicsScene* self, QRectF* rect, QPen* pen) {
	return self->addRect(*rect, *pen);
}

QGraphicsRectItem* QGraphicsScene_AddRect3(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush) {
	return self->addRect(*rect, *pen, *brush);
}

QGraphicsTextItem* QGraphicsScene_AddText2(QGraphicsScene* self, struct miqt_string text, QFont* font) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addText(text_QString, *font);
}

QGraphicsSimpleTextItem* QGraphicsScene_AddSimpleText2(QGraphicsScene* self, struct miqt_string text, QFont* font) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addSimpleText(text_QString, *font);
}

QGraphicsProxyWidget* QGraphicsScene_AddWidget2(QGraphicsScene* self, QWidget* widget, int wFlags) {
	return self->addWidget(widget, static_cast<Qt::WindowFlags>(wFlags));
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen) {
	return self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen);
}

QGraphicsEllipseItem* QGraphicsScene_AddEllipse6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush) {
	return self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen, *brush);
}

QGraphicsLineItem* QGraphicsScene_AddLine5(QGraphicsScene* self, double x1, double y1, double x2, double y2, QPen* pen) {
	return self->addLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2), *pen);
}

QGraphicsRectItem* QGraphicsScene_AddRect5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen) {
	return self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen);
}

QGraphicsRectItem* QGraphicsScene_AddRect6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush) {
	return self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen, *brush);
}

void QGraphicsScene_SetFocusItem2(QGraphicsScene* self, QGraphicsItem* item, int focusReason) {
	self->setFocusItem(item, static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsScene_SetFocus1(QGraphicsScene* self, int focusReason) {
	self->setFocus(static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsScene_Invalidate5(QGraphicsScene* self, double x, double y, double w, double h, int layers) {
	self->invalidate(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<QGraphicsScene::SceneLayers>(layers));
}

void QGraphicsScene_Update1(QGraphicsScene* self, QRectF* rect) {
	self->update(*rect);
}

void QGraphicsScene_Invalidate1(QGraphicsScene* self, QRectF* rect) {
	self->invalidate(*rect);
}

void QGraphicsScene_Invalidate22(QGraphicsScene* self, QRectF* rect, int layers) {
	self->invalidate(*rect, static_cast<QGraphicsScene::SceneLayers>(layers));
}

bool QGraphicsScene_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsScene_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsScene*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsScene_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QGraphicsScene_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_Event(event);
}

bool QGraphicsScene_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QGraphicsScene_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QGraphicsScene_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsScene_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsScene_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsScene_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsScene_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsScene_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsScene_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsScene_override_virtual_HelpEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HelpEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_HelpEvent(void* self, QGraphicsSceneHelpEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_HelpEvent(event);
}

bool QGraphicsScene_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsScene_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsScene_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsScene_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsScene_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsScene_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsScene_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsScene_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsScene_override_virtual_DrawBackground(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DrawBackground = slot;
	return true;
}

void QGraphicsScene_virtualbase_DrawBackground(void* self, QPainter* painter, QRectF* rect) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_DrawBackground(painter, rect);
}

bool QGraphicsScene_override_virtual_DrawForeground(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DrawForeground = slot;
	return true;
}

void QGraphicsScene_virtualbase_DrawForeground(void* self, QPainter* painter, QRectF* rect) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_DrawForeground(painter, rect);
}

bool QGraphicsScene_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QGraphicsScene_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QGraphicsScene_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_TimerEvent(event);
}

bool QGraphicsScene_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_ChildEvent(event);
}

bool QGraphicsScene_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QGraphicsScene_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_CustomEvent(event);
}

bool QGraphicsScene_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QGraphicsScene_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QGraphicsScene_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QGraphicsScene_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsScene*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QGraphicsScene_Delete(QGraphicsScene* self) {
	delete self;
}

