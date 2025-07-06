#include <QAbstractAxis>
#include <QAbstractSeries>
#include <QChart>
#include <QChildEvent>
#include <QCloseEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QGraphicsItem>
#include <QGraphicsLayoutItem>
#include <QGraphicsObject>
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
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPointF>
#include <QPolarChart>
#include <QRectF>
#include <QShowEvent>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOption>
#include <QStyleOptionGraphicsItem>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qpolarchart.h>
#include "gen_qpolarchart.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPolarChart_setGeometry(QPolarChart*, intptr_t, QRectF*);
void miqt_exec_callback_QPolarChart_getContentsMargins(const QPolarChart*, intptr_t, double*, double*, double*, double*);
int miqt_exec_callback_QPolarChart_type(const QPolarChart*, intptr_t);
void miqt_exec_callback_QPolarChart_paint(QPolarChart*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
void miqt_exec_callback_QPolarChart_paintWindowFrame(QPolarChart*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
QRectF* miqt_exec_callback_QPolarChart_boundingRect(const QPolarChart*, intptr_t);
QPainterPath* miqt_exec_callback_QPolarChart_shape(const QPolarChart*, intptr_t);
void miqt_exec_callback_QPolarChart_initStyleOption(const QPolarChart*, intptr_t, QStyleOption*);
QSizeF* miqt_exec_callback_QPolarChart_sizeHint(const QPolarChart*, intptr_t, int, QSizeF*);
void miqt_exec_callback_QPolarChart_updateGeometry(QPolarChart*, intptr_t);
QVariant* miqt_exec_callback_QPolarChart_itemChange(QPolarChart*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QPolarChart_propertyChange(QPolarChart*, intptr_t, struct miqt_string, QVariant*);
bool miqt_exec_callback_QPolarChart_sceneEvent(QPolarChart*, intptr_t, QEvent*);
bool miqt_exec_callback_QPolarChart_windowFrameEvent(QPolarChart*, intptr_t, QEvent*);
int miqt_exec_callback_QPolarChart_windowFrameSectionAt(const QPolarChart*, intptr_t, QPointF*);
bool miqt_exec_callback_QPolarChart_event(QPolarChart*, intptr_t, QEvent*);
void miqt_exec_callback_QPolarChart_changeEvent(QPolarChart*, intptr_t, QEvent*);
void miqt_exec_callback_QPolarChart_closeEvent(QPolarChart*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPolarChart_focusInEvent(QPolarChart*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QPolarChart_focusNextPrevChild(QPolarChart*, intptr_t, bool);
void miqt_exec_callback_QPolarChart_focusOutEvent(QPolarChart*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPolarChart_hideEvent(QPolarChart*, intptr_t, QHideEvent*);
void miqt_exec_callback_QPolarChart_moveEvent(QPolarChart*, intptr_t, QGraphicsSceneMoveEvent*);
void miqt_exec_callback_QPolarChart_polishEvent(QPolarChart*, intptr_t);
void miqt_exec_callback_QPolarChart_resizeEvent(QPolarChart*, intptr_t, QGraphicsSceneResizeEvent*);
void miqt_exec_callback_QPolarChart_showEvent(QPolarChart*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPolarChart_hoverMoveEvent(QPolarChart*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QPolarChart_hoverLeaveEvent(QPolarChart*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QPolarChart_grabMouseEvent(QPolarChart*, intptr_t, QEvent*);
void miqt_exec_callback_QPolarChart_ungrabMouseEvent(QPolarChart*, intptr_t, QEvent*);
void miqt_exec_callback_QPolarChart_grabKeyboardEvent(QPolarChart*, intptr_t, QEvent*);
void miqt_exec_callback_QPolarChart_ungrabKeyboardEvent(QPolarChart*, intptr_t, QEvent*);
bool miqt_exec_callback_QPolarChart_eventFilter(QPolarChart*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPolarChart_timerEvent(QPolarChart*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPolarChart_childEvent(QPolarChart*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPolarChart_customEvent(QPolarChart*, intptr_t, QEvent*);
void miqt_exec_callback_QPolarChart_connectNotify(QPolarChart*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPolarChart_disconnectNotify(QPolarChart*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPolarChart_advance(QPolarChart*, intptr_t, int);
bool miqt_exec_callback_QPolarChart_contains(const QPolarChart*, intptr_t, QPointF*);
bool miqt_exec_callback_QPolarChart_collidesWithItem(const QPolarChart*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QPolarChart_collidesWithPath(const QPolarChart*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QPolarChart_isObscuredBy(const QPolarChart*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QPolarChart_opaqueArea(const QPolarChart*, intptr_t);
bool miqt_exec_callback_QPolarChart_sceneEventFilter(QPolarChart*, intptr_t, QGraphicsItem*, QEvent*);
void miqt_exec_callback_QPolarChart_contextMenuEvent(QPolarChart*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QPolarChart_dragEnterEvent(QPolarChart*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QPolarChart_dragLeaveEvent(QPolarChart*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QPolarChart_dragMoveEvent(QPolarChart*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QPolarChart_dropEvent(QPolarChart*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QPolarChart_hoverEnterEvent(QPolarChart*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QPolarChart_keyPressEvent(QPolarChart*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPolarChart_keyReleaseEvent(QPolarChart*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPolarChart_mousePressEvent(QPolarChart*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QPolarChart_mouseMoveEvent(QPolarChart*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QPolarChart_mouseReleaseEvent(QPolarChart*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QPolarChart_mouseDoubleClickEvent(QPolarChart*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QPolarChart_wheelEvent(QPolarChart*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QPolarChart_inputMethodEvent(QPolarChart*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QPolarChart_inputMethodQuery(const QPolarChart*, intptr_t, int);
bool miqt_exec_callback_QPolarChart_supportsExtension(const QPolarChart*, intptr_t, int);
void miqt_exec_callback_QPolarChart_setExtension(QPolarChart*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QPolarChart_extension(const QPolarChart*, intptr_t, QVariant*);
bool miqt_exec_callback_QPolarChart_isEmpty(const QPolarChart*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPolarChart final : public QPolarChart {
public:

	MiqtVirtualQPolarChart(): QPolarChart() {}
	MiqtVirtualQPolarChart(QGraphicsItem* parent): QPolarChart(parent) {}
	MiqtVirtualQPolarChart(QGraphicsItem* parent, Qt::WindowFlags wFlags): QPolarChart(parent, wFlags) {}

	virtual ~MiqtVirtualQPolarChart() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__setGeometry == 0) {
			QPolarChart::setGeometry(rect);
			return;
		}

		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);
		miqt_exec_callback_QPolarChart_setGeometry(this, handle__setGeometry, sigval1);

	}

	friend void QPolarChart_virtualbase_setGeometry(void* self, QRectF* rect);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getContentsMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (handle__getContentsMargins == 0) {
			QPolarChart::getContentsMargins(left, top, right, bottom);
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
		miqt_exec_callback_QPolarChart_getContentsMargins(this, handle__getContentsMargins, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QPolarChart_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QPolarChart::type();
		}

		int callback_return_value = miqt_exec_callback_QPolarChart_type(this, handle__type);
		return static_cast<int>(callback_return_value);
	}

	friend int QPolarChart_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			QPolarChart::paint(painter, option, widget);
			return;
		}

		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;
		miqt_exec_callback_QPolarChart_paint(this, handle__paint, sigval1, sigval2, sigval3);

	}

	friend void QPolarChart_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintWindowFrame = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paintWindowFrame == 0) {
			QPolarChart::paintWindowFrame(painter, option, widget);
			return;
		}

		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;
		miqt_exec_callback_QPolarChart_paintWindowFrame(this, handle__paintWindowFrame, sigval1, sigval2, sigval3);

	}

	friend void QPolarChart_virtualbase_paintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QPolarChart::boundingRect();
		}

		QRectF* callback_return_value = miqt_exec_callback_QPolarChart_boundingRect(this, handle__boundingRect);
		return *callback_return_value;
	}

	friend QRectF* QPolarChart_virtualbase_boundingRect(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QPolarChart::shape();
		}

		QPainterPath* callback_return_value = miqt_exec_callback_QPolarChart_shape(this, handle__shape);
		return *callback_return_value;
	}

	friend QPainterPath* QPolarChart_virtualbase_shape(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOption* option) const override {
		if (handle__initStyleOption == 0) {
			QPolarChart::initStyleOption(option);
			return;
		}

		QStyleOption* sigval1 = option;
		miqt_exec_callback_QPolarChart_initStyleOption(this, handle__initStyleOption, sigval1);

	}

	friend void QPolarChart_virtualbase_initStyleOption(const void* self, QStyleOption* option);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__sizeHint == 0) {
			return QPolarChart::sizeHint(which, constraint);
		}

		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);
		QSizeF* callback_return_value = miqt_exec_callback_QPolarChart_sizeHint(this, handle__sizeHint, sigval1, sigval2);
		return *callback_return_value;
	}

	friend QSizeF* QPolarChart_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (handle__updateGeometry == 0) {
			QPolarChart::updateGeometry();
			return;
		}

		miqt_exec_callback_QPolarChart_updateGeometry(this, handle__updateGeometry);

	}

	friend void QPolarChart_virtualbase_updateGeometry(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QPolarChart::itemChange(change, value);
		}

		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		QVariant* callback_return_value = miqt_exec_callback_QPolarChart_itemChange(this, handle__itemChange, sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QPolarChart_virtualbase_itemChange(void* self, int change, QVariant* value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__propertyChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
		if (handle__propertyChange == 0) {
			return QPolarChart::propertyChange(propertyName, value);
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
		QVariant* callback_return_value = miqt_exec_callback_QPolarChart_propertyChange(this, handle__propertyChange, sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QPolarChart_virtualbase_propertyChange(void* self, struct miqt_string propertyName, QVariant* value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QPolarChart::sceneEvent(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QPolarChart_sceneEvent(this, handle__sceneEvent, sigval1);
		return callback_return_value;
	}

	friend bool QPolarChart_virtualbase_sceneEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__windowFrameEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool windowFrameEvent(QEvent* e) override {
		if (handle__windowFrameEvent == 0) {
			return QPolarChart::windowFrameEvent(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QPolarChart_windowFrameEvent(this, handle__windowFrameEvent, sigval1);
		return callback_return_value;
	}

	friend bool QPolarChart_virtualbase_windowFrameEvent(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__windowFrameSectionAt = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
		if (handle__windowFrameSectionAt == 0) {
			return QPolarChart::windowFrameSectionAt(pos);
		}

		const QPointF& pos_ret = pos;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&pos_ret);
		int callback_return_value = miqt_exec_callback_QPolarChart_windowFrameSectionAt(this, handle__windowFrameSectionAt, sigval1);
		return static_cast<Qt::WindowFrameSection>(callback_return_value);
	}

	friend int QPolarChart_virtualbase_windowFrameSectionAt(const void* self, QPointF* pos);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPolarChart::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QPolarChart_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QPolarChart_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QPolarChart::changeEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_changeEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QPolarChart::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QPolarChart::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QPolarChart::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QPolarChart_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QPolarChart_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QPolarChart::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QPolarChart::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QPolarChart::moveEvent(event);
			return;
		}

		QGraphicsSceneMoveEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_moveEvent(void* self, QGraphicsSceneMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__polishEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void polishEvent() override {
		if (handle__polishEvent == 0) {
			QPolarChart::polishEvent();
			return;
		}

		miqt_exec_callback_QPolarChart_polishEvent(this, handle__polishEvent);

	}

	friend void QPolarChart_virtualbase_polishEvent(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QPolarChart::resizeEvent(event);
			return;
		}

		QGraphicsSceneResizeEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_resizeEvent(void* self, QGraphicsSceneResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QPolarChart::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QPolarChart::hoverMoveEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QPolarChart::hoverLeaveEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__grabMouseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void grabMouseEvent(QEvent* event) override {
		if (handle__grabMouseEvent == 0) {
			QPolarChart::grabMouseEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_grabMouseEvent(this, handle__grabMouseEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_grabMouseEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ungrabMouseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void ungrabMouseEvent(QEvent* event) override {
		if (handle__ungrabMouseEvent == 0) {
			QPolarChart::ungrabMouseEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_ungrabMouseEvent(this, handle__ungrabMouseEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_ungrabMouseEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__grabKeyboardEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void grabKeyboardEvent(QEvent* event) override {
		if (handle__grabKeyboardEvent == 0) {
			QPolarChart::grabKeyboardEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_grabKeyboardEvent(this, handle__grabKeyboardEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_grabKeyboardEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ungrabKeyboardEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void ungrabKeyboardEvent(QEvent* event) override {
		if (handle__ungrabKeyboardEvent == 0) {
			QPolarChart::ungrabKeyboardEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_ungrabKeyboardEvent(this, handle__ungrabKeyboardEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_ungrabKeyboardEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPolarChart::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QPolarChart_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPolarChart_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPolarChart::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPolarChart::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPolarChart::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPolarChart::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPolarChart_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QPolarChart_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPolarChart::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPolarChart_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QPolarChart_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QPolarChart::advance(phase);
			return;
		}

		int sigval1 = phase;
		miqt_exec_callback_QPolarChart_advance(this, handle__advance, sigval1);

	}

	friend void QPolarChart_virtualbase_advance(void* self, int phase);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QPolarChart::contains(point);
		}

		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		bool callback_return_value = miqt_exec_callback_QPolarChart_contains(this, handle__contains, sigval1);
		return callback_return_value;
	}

	friend bool QPolarChart_virtualbase_contains(const void* self, QPointF* point);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QPolarChart::collidesWithItem(other, mode);
		}

		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QPolarChart_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPolarChart_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QPolarChart::collidesWithPath(path, mode);
		}

		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QPolarChart_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPolarChart_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QPolarChart::isObscuredBy(item);
		}

		QGraphicsItem* sigval1 = (QGraphicsItem*) item;
		bool callback_return_value = miqt_exec_callback_QPolarChart_isObscuredBy(this, handle__isObscuredBy, sigval1);
		return callback_return_value;
	}

	friend bool QPolarChart_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QPolarChart::opaqueArea();
		}

		QPainterPath* callback_return_value = miqt_exec_callback_QPolarChart_opaqueArea(this, handle__opaqueArea);
		return *callback_return_value;
	}

	friend QPainterPath* QPolarChart_virtualbase_opaqueArea(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QPolarChart::sceneEventFilter(watched, event);
		}

		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QPolarChart_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPolarChart_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QPolarChart::contextMenuEvent(event);
			return;
		}

		QGraphicsSceneContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QPolarChart::dragEnterEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QPolarChart::dragLeaveEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QPolarChart::dragMoveEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QPolarChart::dropEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QPolarChart::hoverEnterEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QPolarChart::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QPolarChart::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QPolarChart::mousePressEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QPolarChart::mouseMoveEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QPolarChart::mouseReleaseEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QPolarChart::mouseDoubleClickEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QPolarChart::wheelEvent(event);
			return;
		}

		QGraphicsSceneWheelEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QPolarChart::inputMethodEvent(event);
			return;
		}

		QInputMethodEvent* sigval1 = event;
		miqt_exec_callback_QPolarChart_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QPolarChart_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QPolarChart::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QPolarChart_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QPolarChart_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QPolarChart::supportsExtension(extension);
		}

		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		bool callback_return_value = miqt_exec_callback_QPolarChart_supportsExtension(this, handle__supportsExtension, sigval1);
		return callback_return_value;
	}

	friend bool QPolarChart_virtualbase_supportsExtension(const void* self, int extension);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QPolarChart::setExtension(extension, variant);
			return;
		}

		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);
		miqt_exec_callback_QPolarChart_setExtension(this, handle__setExtension, sigval1, sigval2);

	}

	friend void QPolarChart_virtualbase_setExtension(void* self, int extension, QVariant* variant);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QPolarChart::extension(variant);
		}

		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);
		QVariant* callback_return_value = miqt_exec_callback_QPolarChart_extension(this, handle__extension, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QPolarChart_virtualbase_extension(const void* self, QVariant* variant);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__isEmpty == 0) {
			return QPolarChart::isEmpty();
		}

		bool callback_return_value = miqt_exec_callback_QPolarChart_isEmpty(this, handle__isEmpty);
		return callback_return_value;
	}

	friend bool QPolarChart_virtualbase_isEmpty(const void* self);

	// Wrappers to allow calling protected methods:
	friend void QPolarChart_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend QObject* QPolarChart_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPolarChart_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPolarChart_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPolarChart_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend void QPolarChart_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QPolarChart_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QPolarChart_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
	friend void QPolarChart_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
	friend void QPolarChart_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
};

QPolarChart* QPolarChart_new() {
	return new (std::nothrow) MiqtVirtualQPolarChart();
}

QPolarChart* QPolarChart_new2(QGraphicsItem* parent) {
	return new (std::nothrow) MiqtVirtualQPolarChart(parent);
}

QPolarChart* QPolarChart_new3(QGraphicsItem* parent, int wFlags) {
	return new (std::nothrow) MiqtVirtualQPolarChart(parent, static_cast<Qt::WindowFlags>(wFlags));
}

void QPolarChart_virtbase(QPolarChart* src, QChart** outptr_QChart) {
	*outptr_QChart = static_cast<QChart*>(src);
}

QMetaObject* QPolarChart_metaObject(const QPolarChart* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPolarChart_metacast(QPolarChart* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPolarChart_tr(const char* s) {
	QString _ret = QPolarChart::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPolarChart_addAxis(QPolarChart* self, QAbstractAxis* axis, int polarOrientation) {
	self->addAxis(axis, static_cast<QPolarChart::PolarOrientation>(polarOrientation));
}

struct miqt_array /* of QAbstractAxis* */  QPolarChart_axes(const QPolarChart* self) {
	QList<QAbstractAxis*> _ret = self->axes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractAxis** _arr = static_cast<QAbstractAxis**>(malloc(sizeof(QAbstractAxis*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QPolarChart_axisPolarOrientation(QAbstractAxis* axis) {
	QPolarChart::PolarOrientation _ret = QPolarChart::axisPolarOrientation(axis);
	return static_cast<int>(_ret);
}

struct miqt_string QPolarChart_tr2(const char* s, const char* c) {
	QString _ret = QPolarChart::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPolarChart_tr3(const char* s, const char* c, int n) {
	QString _ret = QPolarChart::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QAbstractAxis* */  QPolarChart_axesWithPolarOrientation(const QPolarChart* self, int polarOrientation) {
	QList<QAbstractAxis*> _ret = self->axes(static_cast<QPolarChart::PolarOrientations>(polarOrientation));
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractAxis** _arr = static_cast<QAbstractAxis**>(malloc(sizeof(QAbstractAxis*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QAbstractAxis* */  QPolarChart_axes2(const QPolarChart* self, int polarOrientation, QAbstractSeries* series) {
	QList<QAbstractAxis*> _ret = self->axes(static_cast<QPolarChart::PolarOrientations>(polarOrientation), series);
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractAxis** _arr = static_cast<QAbstractAxis**>(malloc(sizeof(QAbstractAxis*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QPolarChart_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setGeometry = slot;
	return true;
}

void QPolarChart_virtualbase_setGeometry(void* self, QRectF* rect) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::setGeometry(*rect);
}

bool QPolarChart_override_virtual_getContentsMargins(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__getContentsMargins = slot;
	return true;
}

void QPolarChart_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

bool QPolarChart_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = slot;
	return true;
}

int QPolarChart_virtualbase_type(const void* self) {
	return static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::type();
}

bool QPolarChart_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paint = slot;
	return true;
}

void QPolarChart_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::paint(painter, option, widget);
}

bool QPolarChart_override_virtual_paintWindowFrame(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintWindowFrame = slot;
	return true;
}

void QPolarChart_virtualbase_paintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::paintWindowFrame(painter, option, widget);
}

bool QPolarChart_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QPolarChart_virtualbase_boundingRect(const void* self) {
	return new QRectF(static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::boundingRect());
}

bool QPolarChart_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QPolarChart_virtualbase_shape(const void* self) {
	return new QPainterPath(static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::shape());
}

bool QPolarChart_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initStyleOption = slot;
	return true;
}

void QPolarChart_virtualbase_initStyleOption(const void* self, QStyleOption* option) {
	static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::initStyleOption(option);
}

bool QPolarChart_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSizeF* QPolarChart_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint) {
	return new QSizeF(static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

bool QPolarChart_override_virtual_updateGeometry(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateGeometry = slot;
	return true;
}

void QPolarChart_virtualbase_updateGeometry(void* self) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::updateGeometry();
}

bool QPolarChart_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QPolarChart_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return new QVariant(static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::itemChange(static_cast<MiqtVirtualQPolarChart::GraphicsItemChange>(change), *value));
}

bool QPolarChart_override_virtual_propertyChange(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__propertyChange = slot;
	return true;
}

QVariant* QPolarChart_virtualbase_propertyChange(void* self, struct miqt_string propertyName, QVariant* value) {
	QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
	return new QVariant(static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::propertyChange(propertyName_QString, *value));
}

bool QPolarChart_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QPolarChart_virtualbase_sceneEvent(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::sceneEvent(event);
}

bool QPolarChart_override_virtual_windowFrameEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__windowFrameEvent = slot;
	return true;
}

bool QPolarChart_virtualbase_windowFrameEvent(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::windowFrameEvent(e);
}

bool QPolarChart_override_virtual_windowFrameSectionAt(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__windowFrameSectionAt = slot;
	return true;
}

int QPolarChart_virtualbase_windowFrameSectionAt(const void* self, QPointF* pos) {
	Qt::WindowFrameSection _ret = static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::windowFrameSectionAt(*pos);
	return static_cast<int>(_ret);
}

bool QPolarChart_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QPolarChart_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::event(event);
}

bool QPolarChart_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QPolarChart_virtualbase_changeEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::changeEvent(event);
}

bool QPolarChart_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QPolarChart_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::closeEvent(event);
}

bool QPolarChart_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QPolarChart_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::focusInEvent(event);
}

bool QPolarChart_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QPolarChart_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::focusNextPrevChild(next);
}

bool QPolarChart_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QPolarChart_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::focusOutEvent(event);
}

bool QPolarChart_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QPolarChart_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::hideEvent(event);
}

bool QPolarChart_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QPolarChart_virtualbase_moveEvent(void* self, QGraphicsSceneMoveEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::moveEvent(event);
}

bool QPolarChart_override_virtual_polishEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__polishEvent = slot;
	return true;
}

void QPolarChart_virtualbase_polishEvent(void* self) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::polishEvent();
}

bool QPolarChart_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QPolarChart_virtualbase_resizeEvent(void* self, QGraphicsSceneResizeEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::resizeEvent(event);
}

bool QPolarChart_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QPolarChart_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::showEvent(event);
}

bool QPolarChart_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QPolarChart_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::hoverMoveEvent(event);
}

bool QPolarChart_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QPolarChart_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::hoverLeaveEvent(event);
}

bool QPolarChart_override_virtual_grabMouseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__grabMouseEvent = slot;
	return true;
}

void QPolarChart_virtualbase_grabMouseEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::grabMouseEvent(event);
}

bool QPolarChart_override_virtual_ungrabMouseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__ungrabMouseEvent = slot;
	return true;
}

void QPolarChart_virtualbase_ungrabMouseEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::ungrabMouseEvent(event);
}

bool QPolarChart_override_virtual_grabKeyboardEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__grabKeyboardEvent = slot;
	return true;
}

void QPolarChart_virtualbase_grabKeyboardEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::grabKeyboardEvent(event);
}

bool QPolarChart_override_virtual_ungrabKeyboardEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__ungrabKeyboardEvent = slot;
	return true;
}

void QPolarChart_virtualbase_ungrabKeyboardEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::ungrabKeyboardEvent(event);
}

bool QPolarChart_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPolarChart_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::eventFilter(watched, event);
}

bool QPolarChart_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QPolarChart_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::timerEvent(event);
}

bool QPolarChart_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QPolarChart_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::childEvent(event);
}

bool QPolarChart_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QPolarChart_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::customEvent(event);
}

bool QPolarChart_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QPolarChart_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::connectNotify(*signal);
}

bool QPolarChart_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPolarChart_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::disconnectNotify(*signal);
}

bool QPolarChart_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__advance = slot;
	return true;
}

void QPolarChart_virtualbase_advance(void* self, int phase) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::advance(static_cast<int>(phase));
}

bool QPolarChart_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contains = slot;
	return true;
}

bool QPolarChart_virtualbase_contains(const void* self, QPointF* point) {
	return static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::contains(*point);
}

bool QPolarChart_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QPolarChart_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QPolarChart_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QPolarChart_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QPolarChart_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QPolarChart_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::isObscuredBy(item);
}

bool QPolarChart_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QPolarChart_virtualbase_opaqueArea(const void* self) {
	return new QPainterPath(static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::opaqueArea());
}

bool QPolarChart_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QPolarChart_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::sceneEventFilter(watched, event);
}

bool QPolarChart_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QPolarChart_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::contextMenuEvent(event);
}

bool QPolarChart_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QPolarChart_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::dragEnterEvent(event);
}

bool QPolarChart_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QPolarChart_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::dragLeaveEvent(event);
}

bool QPolarChart_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QPolarChart_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::dragMoveEvent(event);
}

bool QPolarChart_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QPolarChart_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::dropEvent(event);
}

bool QPolarChart_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QPolarChart_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::hoverEnterEvent(event);
}

bool QPolarChart_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QPolarChart_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::keyPressEvent(event);
}

bool QPolarChart_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QPolarChart_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::keyReleaseEvent(event);
}

bool QPolarChart_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QPolarChart_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::mousePressEvent(event);
}

bool QPolarChart_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QPolarChart_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::mouseMoveEvent(event);
}

bool QPolarChart_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QPolarChart_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::mouseReleaseEvent(event);
}

bool QPolarChart_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QPolarChart_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::mouseDoubleClickEvent(event);
}

bool QPolarChart_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QPolarChart_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::wheelEvent(event);
}

bool QPolarChart_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QPolarChart_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::inputMethodEvent(event);
}

bool QPolarChart_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QPolarChart_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QPolarChart_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QPolarChart_virtualbase_supportsExtension(const void* self, int extension) {
	return static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::supportsExtension(static_cast<MiqtVirtualQPolarChart::Extension>(extension));
}

bool QPolarChart_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setExtension = slot;
	return true;
}

void QPolarChart_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	static_cast<MiqtVirtualQPolarChart*>(self)->QPolarChart::setExtension(static_cast<MiqtVirtualQPolarChart::Extension>(extension), *variant);
}

bool QPolarChart_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extension = slot;
	return true;
}

QVariant* QPolarChart_virtualbase_extension(const void* self, QVariant* variant) {
	return new QVariant(static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::extension(*variant));
}

bool QPolarChart_override_virtual_isEmpty(void* self, intptr_t slot) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isEmpty = slot;
	return true;
}

bool QPolarChart_virtualbase_isEmpty(const void* self) {
	return static_cast<const MiqtVirtualQPolarChart*>(self)->QPolarChart::isEmpty();
}

void QPolarChart_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

QObject* QPolarChart_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QPolarChart_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QPolarChart_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QPolarChart_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QPolarChart_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->addToIndex();
}

void QPolarChart_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->removeFromIndex();
}

void QPolarChart_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->prepareGeometryChange();
}

void QPolarChart_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setGraphicsItem(item);
}

void QPolarChart_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout) {
	MiqtVirtualQPolarChart* self_cast = dynamic_cast<MiqtVirtualQPolarChart*>( (QPolarChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOwnedByLayout(ownedByLayout);
}

void QPolarChart_delete(QPolarChart* self) {
	delete self;
}

