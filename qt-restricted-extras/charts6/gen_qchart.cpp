#include <QAbstractAxis>
#include <QAbstractSeries>
#include <QBrush>
#include <QChart>
#include <QChildEvent>
#include <QCloseEvent>
#include <QEasingCurve>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
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
#include <QLegend>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPen>
#include <QPointF>
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
#include <qchart.h>
#include "gen_qchart.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QChart_plotAreaChanged(intptr_t, QRectF*);
void miqt_exec_callback_QChart_setGeometry(QChart*, intptr_t, QRectF*);
void miqt_exec_callback_QChart_getContentsMargins(const QChart*, intptr_t, double*, double*, double*, double*);
int miqt_exec_callback_QChart_type(const QChart*, intptr_t);
void miqt_exec_callback_QChart_paint(QChart*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
void miqt_exec_callback_QChart_paintWindowFrame(QChart*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
QRectF* miqt_exec_callback_QChart_boundingRect(const QChart*, intptr_t);
QPainterPath* miqt_exec_callback_QChart_shape(const QChart*, intptr_t);
void miqt_exec_callback_QChart_initStyleOption(const QChart*, intptr_t, QStyleOption*);
QSizeF* miqt_exec_callback_QChart_sizeHint(const QChart*, intptr_t, int, QSizeF*);
void miqt_exec_callback_QChart_updateGeometry(QChart*, intptr_t);
QVariant* miqt_exec_callback_QChart_itemChange(QChart*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QChart_propertyChange(QChart*, intptr_t, struct miqt_string, QVariant*);
bool miqt_exec_callback_QChart_sceneEvent(QChart*, intptr_t, QEvent*);
bool miqt_exec_callback_QChart_windowFrameEvent(QChart*, intptr_t, QEvent*);
int miqt_exec_callback_QChart_windowFrameSectionAt(const QChart*, intptr_t, QPointF*);
bool miqt_exec_callback_QChart_event(QChart*, intptr_t, QEvent*);
void miqt_exec_callback_QChart_changeEvent(QChart*, intptr_t, QEvent*);
void miqt_exec_callback_QChart_closeEvent(QChart*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QChart_focusInEvent(QChart*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QChart_focusNextPrevChild(QChart*, intptr_t, bool);
void miqt_exec_callback_QChart_focusOutEvent(QChart*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QChart_hideEvent(QChart*, intptr_t, QHideEvent*);
void miqt_exec_callback_QChart_moveEvent(QChart*, intptr_t, QGraphicsSceneMoveEvent*);
void miqt_exec_callback_QChart_polishEvent(QChart*, intptr_t);
void miqt_exec_callback_QChart_resizeEvent(QChart*, intptr_t, QGraphicsSceneResizeEvent*);
void miqt_exec_callback_QChart_showEvent(QChart*, intptr_t, QShowEvent*);
void miqt_exec_callback_QChart_hoverMoveEvent(QChart*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QChart_hoverLeaveEvent(QChart*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QChart_grabMouseEvent(QChart*, intptr_t, QEvent*);
void miqt_exec_callback_QChart_ungrabMouseEvent(QChart*, intptr_t, QEvent*);
void miqt_exec_callback_QChart_grabKeyboardEvent(QChart*, intptr_t, QEvent*);
void miqt_exec_callback_QChart_ungrabKeyboardEvent(QChart*, intptr_t, QEvent*);
bool miqt_exec_callback_QChart_eventFilter(QChart*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QChart_timerEvent(QChart*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QChart_childEvent(QChart*, intptr_t, QChildEvent*);
void miqt_exec_callback_QChart_customEvent(QChart*, intptr_t, QEvent*);
void miqt_exec_callback_QChart_connectNotify(QChart*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QChart_disconnectNotify(QChart*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QChart_advance(QChart*, intptr_t, int);
bool miqt_exec_callback_QChart_contains(const QChart*, intptr_t, QPointF*);
bool miqt_exec_callback_QChart_collidesWithItem(const QChart*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QChart_collidesWithPath(const QChart*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QChart_isObscuredBy(const QChart*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QChart_opaqueArea(const QChart*, intptr_t);
bool miqt_exec_callback_QChart_sceneEventFilter(QChart*, intptr_t, QGraphicsItem*, QEvent*);
void miqt_exec_callback_QChart_contextMenuEvent(QChart*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QChart_dragEnterEvent(QChart*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QChart_dragLeaveEvent(QChart*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QChart_dragMoveEvent(QChart*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QChart_dropEvent(QChart*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QChart_hoverEnterEvent(QChart*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QChart_keyPressEvent(QChart*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QChart_keyReleaseEvent(QChart*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QChart_mousePressEvent(QChart*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QChart_mouseMoveEvent(QChart*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QChart_mouseReleaseEvent(QChart*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QChart_mouseDoubleClickEvent(QChart*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QChart_wheelEvent(QChart*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QChart_inputMethodEvent(QChart*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QChart_inputMethodQuery(const QChart*, intptr_t, int);
bool miqt_exec_callback_QChart_supportsExtension(const QChart*, intptr_t, int);
void miqt_exec_callback_QChart_setExtension(QChart*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QChart_extension(const QChart*, intptr_t, QVariant*);
bool miqt_exec_callback_QChart_isEmpty(const QChart*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQChart final : public QChart {
public:

	MiqtVirtualQChart(): QChart() {};
	MiqtVirtualQChart(QGraphicsItem* parent): QChart(parent) {};
	MiqtVirtualQChart(QGraphicsItem* parent, Qt::WindowFlags wFlags): QChart(parent, wFlags) {};

	virtual ~MiqtVirtualQChart() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__setGeometry == 0) {
			QChart::setGeometry(rect);
			return;
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QChart_setGeometry(this, handle__setGeometry, sigval1);

		
	}

	friend void QChart_virtualbase_setGeometry(void* self, QRectF* rect);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getContentsMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (handle__getContentsMargins == 0) {
			QChart::getContentsMargins(left, top, right, bottom);
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

		miqt_exec_callback_QChart_getContentsMargins(this, handle__getContentsMargins, sigval1, sigval2, sigval3, sigval4);

		
	}

	friend void QChart_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QChart::type();
		}
		

		int callback_return_value = miqt_exec_callback_QChart_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	friend int QChart_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			QChart::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QChart_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	friend void QChart_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintWindowFrame = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paintWindowFrame == 0) {
			QChart::paintWindowFrame(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QChart_paintWindowFrame(this, handle__paintWindowFrame, sigval1, sigval2, sigval3);

		
	}

	friend void QChart_virtualbase_paintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QChart::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QChart_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	friend QRectF* QChart_virtualbase_boundingRect(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QChart::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QChart_shape(this, handle__shape);

		return *callback_return_value;
	}

	friend QPainterPath* QChart_virtualbase_shape(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOption* option) const override {
		if (handle__initStyleOption == 0) {
			QChart::initStyleOption(option);
			return;
		}
		
		QStyleOption* sigval1 = option;

		miqt_exec_callback_QChart_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	friend void QChart_virtualbase_initStyleOption(const void* self, QStyleOption* option);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__sizeHint == 0) {
			return QChart::sizeHint(which, constraint);
		}
		
		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);

		QSizeF* callback_return_value = miqt_exec_callback_QChart_sizeHint(this, handle__sizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	friend QSizeF* QChart_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (handle__updateGeometry == 0) {
			QChart::updateGeometry();
			return;
		}
		

		miqt_exec_callback_QChart_updateGeometry(this, handle__updateGeometry);

		
	}

	friend void QChart_virtualbase_updateGeometry(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QChart::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QChart_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	friend QVariant* QChart_virtualbase_itemChange(void* self, int change, QVariant* value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__propertyChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
		if (handle__propertyChange == 0) {
			return QChart::propertyChange(propertyName, value);
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

		QVariant* callback_return_value = miqt_exec_callback_QChart_propertyChange(this, handle__propertyChange, sigval1, sigval2);

		return *callback_return_value;
	}

	friend QVariant* QChart_virtualbase_propertyChange(void* self, struct miqt_string propertyName, QVariant* value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QChart::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QChart_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	friend bool QChart_virtualbase_sceneEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__windowFrameEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool windowFrameEvent(QEvent* e) override {
		if (handle__windowFrameEvent == 0) {
			return QChart::windowFrameEvent(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QChart_windowFrameEvent(this, handle__windowFrameEvent, sigval1);

		return callback_return_value;
	}

	friend bool QChart_virtualbase_windowFrameEvent(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__windowFrameSectionAt = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
		if (handle__windowFrameSectionAt == 0) {
			return QChart::windowFrameSectionAt(pos);
		}
		
		const QPointF& pos_ret = pos;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&pos_ret);

		int callback_return_value = miqt_exec_callback_QChart_windowFrameSectionAt(this, handle__windowFrameSectionAt, sigval1);

		return static_cast<Qt::WindowFrameSection>(callback_return_value);
	}

	friend int QChart_virtualbase_windowFrameSectionAt(const void* self, QPointF* pos);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QChart::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QChart_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QChart_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QChart::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QChart_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	friend void QChart_virtualbase_changeEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QChart::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QChart_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	friend void QChart_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QChart::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QChart_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	friend void QChart_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QChart::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QChart_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	friend bool QChart_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QChart::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QChart_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	friend void QChart_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QChart::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QChart_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	friend void QChart_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QChart::moveEvent(event);
			return;
		}
		
		QGraphicsSceneMoveEvent* sigval1 = event;

		miqt_exec_callback_QChart_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	friend void QChart_virtualbase_moveEvent(void* self, QGraphicsSceneMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__polishEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void polishEvent() override {
		if (handle__polishEvent == 0) {
			QChart::polishEvent();
			return;
		}
		

		miqt_exec_callback_QChart_polishEvent(this, handle__polishEvent);

		
	}

	friend void QChart_virtualbase_polishEvent(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QChart::resizeEvent(event);
			return;
		}
		
		QGraphicsSceneResizeEvent* sigval1 = event;

		miqt_exec_callback_QChart_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	friend void QChart_virtualbase_resizeEvent(void* self, QGraphicsSceneResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QChart::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QChart_showEvent(this, handle__showEvent, sigval1);

		
	}

	friend void QChart_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QChart::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QChart_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	friend void QChart_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QChart::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QChart_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	friend void QChart_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__grabMouseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void grabMouseEvent(QEvent* event) override {
		if (handle__grabMouseEvent == 0) {
			QChart::grabMouseEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QChart_grabMouseEvent(this, handle__grabMouseEvent, sigval1);

		
	}

	friend void QChart_virtualbase_grabMouseEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ungrabMouseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void ungrabMouseEvent(QEvent* event) override {
		if (handle__ungrabMouseEvent == 0) {
			QChart::ungrabMouseEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QChart_ungrabMouseEvent(this, handle__ungrabMouseEvent, sigval1);

		
	}

	friend void QChart_virtualbase_ungrabMouseEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__grabKeyboardEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void grabKeyboardEvent(QEvent* event) override {
		if (handle__grabKeyboardEvent == 0) {
			QChart::grabKeyboardEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QChart_grabKeyboardEvent(this, handle__grabKeyboardEvent, sigval1);

		
	}

	friend void QChart_virtualbase_grabKeyboardEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ungrabKeyboardEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void ungrabKeyboardEvent(QEvent* event) override {
		if (handle__ungrabKeyboardEvent == 0) {
			QChart::ungrabKeyboardEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QChart_ungrabKeyboardEvent(this, handle__ungrabKeyboardEvent, sigval1);

		
	}

	friend void QChart_virtualbase_ungrabKeyboardEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QChart::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QChart_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QChart_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QChart::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QChart_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QChart_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QChart::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QChart_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QChart_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QChart::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QChart_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QChart_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QChart::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QChart_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QChart_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QChart::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QChart_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QChart_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QChart::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QChart_advance(this, handle__advance, sigval1);

		
	}

	friend void QChart_virtualbase_advance(void* self, int phase);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QChart::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QChart_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	friend bool QChart_virtualbase_contains(const void* self, QPointF* point);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QChart::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QChart_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QChart_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QChart::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QChart_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QChart_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QChart::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QChart_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	friend bool QChart_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QChart::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QChart_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	friend QPainterPath* QChart_virtualbase_opaqueArea(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QChart::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QChart_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QChart_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QChart::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QChart_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	friend void QChart_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QChart::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QChart_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	friend void QChart_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QChart::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QChart_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	friend void QChart_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QChart::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QChart_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	friend void QChart_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QChart::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QChart_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	friend void QChart_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QChart::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QChart_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	friend void QChart_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QChart::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QChart_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	friend void QChart_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QChart::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QChart_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	friend void QChart_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QChart::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QChart_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	friend void QChart_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QChart::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QChart_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	friend void QChart_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QChart::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QChart_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	friend void QChart_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QChart::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QChart_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	friend void QChart_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QChart::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QChart_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	friend void QChart_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QChart::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QChart_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	friend void QChart_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QChart::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QChart_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	friend QVariant* QChart_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QChart::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QChart_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	friend bool QChart_virtualbase_supportsExtension(const void* self, int extension);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QChart::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QChart_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	friend void QChart_virtualbase_setExtension(void* self, int extension, QVariant* variant);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QChart::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QChart_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	friend QVariant* QChart_virtualbase_extension(const void* self, QVariant* variant);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__isEmpty == 0) {
			return QChart::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QChart_isEmpty(this, handle__isEmpty);

		return callback_return_value;
	}

	friend bool QChart_virtualbase_isEmpty(const void* self);

	// Wrappers to allow calling protected methods:
	friend void QChart_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend QObject* QChart_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QChart_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QChart_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QChart_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend void QChart_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QChart_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QChart_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
	friend void QChart_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
	friend void QChart_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
};

QChart* QChart_new() {
	return new MiqtVirtualQChart();
}

QChart* QChart_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQChart(parent);
}

QChart* QChart_new3(QGraphicsItem* parent, int wFlags) {
	return new MiqtVirtualQChart(parent, static_cast<Qt::WindowFlags>(wFlags));
}

void QChart_virtbase(QChart* src, QGraphicsWidget** outptr_QGraphicsWidget) {
	*outptr_QGraphicsWidget = static_cast<QGraphicsWidget*>(src);
}

QMetaObject* QChart_metaObject(const QChart* self) {
	return (QMetaObject*) self->metaObject();
}

void* QChart_metacast(QChart* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QChart_tr(const char* s) {
	QString _ret = QChart::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QChart_addSeries(QChart* self, QAbstractSeries* series) {
	self->addSeries(series);
}

void QChart_removeSeries(QChart* self, QAbstractSeries* series) {
	self->removeSeries(series);
}

void QChart_removeAllSeries(QChart* self) {
	self->removeAllSeries();
}

struct miqt_array /* of QAbstractSeries* */  QChart_series(const QChart* self) {
	QList<QAbstractSeries *> _ret = self->series();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractSeries** _arr = static_cast<QAbstractSeries**>(malloc(sizeof(QAbstractSeries*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QChart_setAxisX(QChart* self, QAbstractAxis* axis) {
	self->setAxisX(axis);
}

void QChart_setAxisY(QChart* self, QAbstractAxis* axis) {
	self->setAxisY(axis);
}

QAbstractAxis* QChart_axisX(const QChart* self) {
	return self->axisX();
}

QAbstractAxis* QChart_axisY(const QChart* self) {
	return self->axisY();
}

void QChart_addAxis(QChart* self, QAbstractAxis* axis, int alignment) {
	self->addAxis(axis, static_cast<Qt::Alignment>(alignment));
}

void QChart_removeAxis(QChart* self, QAbstractAxis* axis) {
	self->removeAxis(axis);
}

struct miqt_array /* of QAbstractAxis* */  QChart_axes(const QChart* self) {
	QList<QAbstractAxis *> _ret = self->axes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractAxis** _arr = static_cast<QAbstractAxis**>(malloc(sizeof(QAbstractAxis*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QChart_createDefaultAxes(QChart* self) {
	self->createDefaultAxes();
}

void QChart_setTheme(QChart* self, int theme) {
	self->setTheme(static_cast<QChart::ChartTheme>(theme));
}

int QChart_theme(const QChart* self) {
	QChart::ChartTheme _ret = self->theme();
	return static_cast<int>(_ret);
}

void QChart_setTitle(QChart* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

struct miqt_string QChart_title(const QChart* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QChart_setTitleFont(QChart* self, QFont* font) {
	self->setTitleFont(*font);
}

QFont* QChart_titleFont(const QChart* self) {
	return new QFont(self->titleFont());
}

void QChart_setTitleBrush(QChart* self, QBrush* brush) {
	self->setTitleBrush(*brush);
}

QBrush* QChart_titleBrush(const QChart* self) {
	return new QBrush(self->titleBrush());
}

void QChart_setBackgroundBrush(QChart* self, QBrush* brush) {
	self->setBackgroundBrush(*brush);
}

QBrush* QChart_backgroundBrush(const QChart* self) {
	return new QBrush(self->backgroundBrush());
}

void QChart_setBackgroundPen(QChart* self, QPen* pen) {
	self->setBackgroundPen(*pen);
}

QPen* QChart_backgroundPen(const QChart* self) {
	return new QPen(self->backgroundPen());
}

void QChart_setBackgroundVisible(QChart* self) {
	self->setBackgroundVisible();
}

bool QChart_isBackgroundVisible(const QChart* self) {
	return self->isBackgroundVisible();
}

void QChart_setDropShadowEnabled(QChart* self) {
	self->setDropShadowEnabled();
}

bool QChart_isDropShadowEnabled(const QChart* self) {
	return self->isDropShadowEnabled();
}

void QChart_setBackgroundRoundness(QChart* self, double diameter) {
	self->setBackgroundRoundness(static_cast<qreal>(diameter));
}

double QChart_backgroundRoundness(const QChart* self) {
	qreal _ret = self->backgroundRoundness();
	return static_cast<double>(_ret);
}

void QChart_setAnimationOptions(QChart* self, int options) {
	self->setAnimationOptions(static_cast<QChart::AnimationOptions>(options));
}

int QChart_animationOptions(const QChart* self) {
	QChart::AnimationOptions _ret = self->animationOptions();
	return static_cast<int>(_ret);
}

void QChart_setAnimationDuration(QChart* self, int msecs) {
	self->setAnimationDuration(static_cast<int>(msecs));
}

int QChart_animationDuration(const QChart* self) {
	return self->animationDuration();
}

void QChart_setAnimationEasingCurve(QChart* self, QEasingCurve* curve) {
	self->setAnimationEasingCurve(*curve);
}

QEasingCurve* QChart_animationEasingCurve(const QChart* self) {
	return new QEasingCurve(self->animationEasingCurve());
}

void QChart_zoomIn(QChart* self) {
	self->zoomIn();
}

void QChart_zoomOut(QChart* self) {
	self->zoomOut();
}

void QChart_zoomInWithRect(QChart* self, QRectF* rect) {
	self->zoomIn(*rect);
}

void QChart_zoom(QChart* self, double factor) {
	self->zoom(static_cast<qreal>(factor));
}

void QChart_zoomReset(QChart* self) {
	self->zoomReset();
}

bool QChart_isZoomed(QChart* self) {
	return self->isZoomed();
}

void QChart_scroll(QChart* self, double dx, double dy) {
	self->scroll(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

QLegend* QChart_legend(const QChart* self) {
	return self->legend();
}

void QChart_setMargins(QChart* self, QMargins* margins) {
	self->setMargins(*margins);
}

QMargins* QChart_margins(const QChart* self) {
	return new QMargins(self->margins());
}

QRectF* QChart_plotArea(const QChart* self) {
	return new QRectF(self->plotArea());
}

void QChart_setPlotArea(QChart* self, QRectF* rect) {
	self->setPlotArea(*rect);
}

void QChart_setPlotAreaBackgroundBrush(QChart* self, QBrush* brush) {
	self->setPlotAreaBackgroundBrush(*brush);
}

QBrush* QChart_plotAreaBackgroundBrush(const QChart* self) {
	return new QBrush(self->plotAreaBackgroundBrush());
}

void QChart_setPlotAreaBackgroundPen(QChart* self, QPen* pen) {
	self->setPlotAreaBackgroundPen(*pen);
}

QPen* QChart_plotAreaBackgroundPen(const QChart* self) {
	return new QPen(self->plotAreaBackgroundPen());
}

void QChart_setPlotAreaBackgroundVisible(QChart* self) {
	self->setPlotAreaBackgroundVisible();
}

bool QChart_isPlotAreaBackgroundVisible(const QChart* self) {
	return self->isPlotAreaBackgroundVisible();
}

void QChart_setLocalizeNumbers(QChart* self, bool localize) {
	self->setLocalizeNumbers(localize);
}

bool QChart_localizeNumbers(const QChart* self) {
	return self->localizeNumbers();
}

void QChart_setLocale(QChart* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QChart_locale(const QChart* self) {
	return new QLocale(self->locale());
}

QPointF* QChart_mapToValue(QChart* self, QPointF* position) {
	return new QPointF(self->mapToValue(*position));
}

QPointF* QChart_mapToPosition(QChart* self, QPointF* value) {
	return new QPointF(self->mapToPosition(*value));
}

int QChart_chartType(const QChart* self) {
	QChart::ChartType _ret = self->chartType();
	return static_cast<int>(_ret);
}

void QChart_plotAreaChanged(QChart* self, QRectF* plotArea) {
	self->plotAreaChanged(*plotArea);
}

void QChart_connect_plotAreaChanged(QChart* self, intptr_t slot) {
	MiqtVirtualQChart::connect(self, static_cast<void (QChart::*)(const QRectF&)>(&QChart::plotAreaChanged), self, [=](const QRectF& plotArea) {
		const QRectF& plotArea_ret = plotArea;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&plotArea_ret);
		miqt_exec_callback_QChart_plotAreaChanged(slot, sigval1);
	});
}

struct miqt_string QChart_tr2(const char* s, const char* c) {
	QString _ret = QChart::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QChart_tr3(const char* s, const char* c, int n) {
	QString _ret = QChart::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QChart_setAxisX2(QChart* self, QAbstractAxis* axis, QAbstractSeries* series) {
	self->setAxisX(axis, series);
}

void QChart_setAxisY2(QChart* self, QAbstractAxis* axis, QAbstractSeries* series) {
	self->setAxisY(axis, series);
}

QAbstractAxis* QChart_axisX1(const QChart* self, QAbstractSeries* series) {
	return self->axisX(series);
}

QAbstractAxis* QChart_axisY1(const QChart* self, QAbstractSeries* series) {
	return self->axisY(series);
}

struct miqt_array /* of QAbstractAxis* */  QChart_axes1(const QChart* self, int orientation) {
	QList<QAbstractAxis *> _ret = self->axes(static_cast<Qt::Orientations>(orientation));
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractAxis** _arr = static_cast<QAbstractAxis**>(malloc(sizeof(QAbstractAxis*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QAbstractAxis* */  QChart_axes2(const QChart* self, int orientation, QAbstractSeries* series) {
	QList<QAbstractAxis *> _ret = self->axes(static_cast<Qt::Orientations>(orientation), series);
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractAxis** _arr = static_cast<QAbstractAxis**>(malloc(sizeof(QAbstractAxis*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QChart_setBackgroundVisible1(QChart* self, bool visible) {
	self->setBackgroundVisible(visible);
}

void QChart_setDropShadowEnabled1(QChart* self, bool enabled) {
	self->setDropShadowEnabled(enabled);
}

void QChart_setPlotAreaBackgroundVisible1(QChart* self, bool visible) {
	self->setPlotAreaBackgroundVisible(visible);
}

QPointF* QChart_mapToValue2(QChart* self, QPointF* position, QAbstractSeries* series) {
	return new QPointF(self->mapToValue(*position, series));
}

QPointF* QChart_mapToPosition2(QChart* self, QPointF* value, QAbstractSeries* series) {
	return new QPointF(self->mapToPosition(*value, series));
}

bool QChart_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setGeometry = slot;
	return true;
}

void QChart_virtualbase_setGeometry(void* self, QRectF* rect) {

	( (MiqtVirtualQChart*)(self) )->QChart::setGeometry(*rect);

}

bool QChart_override_virtual_getContentsMargins(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__getContentsMargins = slot;
	return true;
}

void QChart_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {

	( (const MiqtVirtualQChart*)(self) )->QChart::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));

}

bool QChart_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QChart_virtualbase_type(const void* self) {

	return ( (const MiqtVirtualQChart*)(self) )->QChart::type();

}

bool QChart_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

void QChart_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

	( (MiqtVirtualQChart*)(self) )->QChart::paint(painter, option, widget);

}

bool QChart_override_virtual_paintWindowFrame(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintWindowFrame = slot;
	return true;
}

void QChart_virtualbase_paintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

	( (MiqtVirtualQChart*)(self) )->QChart::paintWindowFrame(painter, option, widget);

}

bool QChart_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QChart_virtualbase_boundingRect(const void* self) {

	return new QRectF(( (const MiqtVirtualQChart*)(self) )->QChart::boundingRect());

}

bool QChart_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QChart_virtualbase_shape(const void* self) {

	return new QPainterPath(( (const MiqtVirtualQChart*)(self) )->QChart::shape());

}

bool QChart_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QChart_virtualbase_initStyleOption(const void* self, QStyleOption* option) {

	( (const MiqtVirtualQChart*)(self) )->QChart::initStyleOption(option);

}

bool QChart_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSizeF* QChart_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint) {

	return new QSizeF(( (const MiqtVirtualQChart*)(self) )->QChart::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));

}

bool QChart_override_virtual_updateGeometry(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometry = slot;
	return true;
}

void QChart_virtualbase_updateGeometry(void* self) {

	( (MiqtVirtualQChart*)(self) )->QChart::updateGeometry();

}

bool QChart_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QChart_virtualbase_itemChange(void* self, int change, QVariant* value) {

	return new QVariant(( (MiqtVirtualQChart*)(self) )->QChart::itemChange(static_cast<MiqtVirtualQChart::GraphicsItemChange>(change), *value));

}

bool QChart_override_virtual_propertyChange(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__propertyChange = slot;
	return true;
}

QVariant* QChart_virtualbase_propertyChange(void* self, struct miqt_string propertyName, QVariant* value) {
	QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);

	return new QVariant(( (MiqtVirtualQChart*)(self) )->QChart::propertyChange(propertyName_QString, *value));

}

bool QChart_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QChart_virtualbase_sceneEvent(void* self, QEvent* event) {

	return ( (MiqtVirtualQChart*)(self) )->QChart::sceneEvent(event);

}

bool QChart_override_virtual_windowFrameEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__windowFrameEvent = slot;
	return true;
}

bool QChart_virtualbase_windowFrameEvent(void* self, QEvent* e) {

	return ( (MiqtVirtualQChart*)(self) )->QChart::windowFrameEvent(e);

}

bool QChart_override_virtual_windowFrameSectionAt(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__windowFrameSectionAt = slot;
	return true;
}

int QChart_virtualbase_windowFrameSectionAt(const void* self, QPointF* pos) {

	Qt::WindowFrameSection _ret = ( (const MiqtVirtualQChart*)(self) )->QChart::windowFrameSectionAt(*pos);
	return static_cast<int>(_ret);

}

bool QChart_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QChart_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQChart*)(self) )->QChart::event(event);

}

bool QChart_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QChart_virtualbase_changeEvent(void* self, QEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::changeEvent(event);

}

bool QChart_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QChart_virtualbase_closeEvent(void* self, QCloseEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::closeEvent(event);

}

bool QChart_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QChart_virtualbase_focusInEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::focusInEvent(event);

}

bool QChart_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QChart_virtualbase_focusNextPrevChild(void* self, bool next) {

	return ( (MiqtVirtualQChart*)(self) )->QChart::focusNextPrevChild(next);

}

bool QChart_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QChart_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::focusOutEvent(event);

}

bool QChart_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QChart_virtualbase_hideEvent(void* self, QHideEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::hideEvent(event);

}

bool QChart_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QChart_virtualbase_moveEvent(void* self, QGraphicsSceneMoveEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::moveEvent(event);

}

bool QChart_override_virtual_polishEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__polishEvent = slot;
	return true;
}

void QChart_virtualbase_polishEvent(void* self) {

	( (MiqtVirtualQChart*)(self) )->QChart::polishEvent();

}

bool QChart_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QChart_virtualbase_resizeEvent(void* self, QGraphicsSceneResizeEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::resizeEvent(event);

}

bool QChart_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QChart_virtualbase_showEvent(void* self, QShowEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::showEvent(event);

}

bool QChart_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QChart_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::hoverMoveEvent(event);

}

bool QChart_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QChart_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::hoverLeaveEvent(event);

}

bool QChart_override_virtual_grabMouseEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__grabMouseEvent = slot;
	return true;
}

void QChart_virtualbase_grabMouseEvent(void* self, QEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::grabMouseEvent(event);

}

bool QChart_override_virtual_ungrabMouseEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ungrabMouseEvent = slot;
	return true;
}

void QChart_virtualbase_ungrabMouseEvent(void* self, QEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::ungrabMouseEvent(event);

}

bool QChart_override_virtual_grabKeyboardEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__grabKeyboardEvent = slot;
	return true;
}

void QChart_virtualbase_grabKeyboardEvent(void* self, QEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::grabKeyboardEvent(event);

}

bool QChart_override_virtual_ungrabKeyboardEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ungrabKeyboardEvent = slot;
	return true;
}

void QChart_virtualbase_ungrabKeyboardEvent(void* self, QEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::ungrabKeyboardEvent(event);

}

bool QChart_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QChart_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQChart*)(self) )->QChart::eventFilter(watched, event);

}

bool QChart_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QChart_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::timerEvent(event);

}

bool QChart_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QChart_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::childEvent(event);

}

bool QChart_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QChart_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::customEvent(event);

}

bool QChart_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QChart_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQChart*)(self) )->QChart::connectNotify(*signal);

}

bool QChart_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QChart_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQChart*)(self) )->QChart::disconnectNotify(*signal);

}

bool QChart_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QChart_virtualbase_advance(void* self, int phase) {

	( (MiqtVirtualQChart*)(self) )->QChart::advance(static_cast<int>(phase));

}

bool QChart_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QChart_virtualbase_contains(const void* self, QPointF* point) {

	return ( (const MiqtVirtualQChart*)(self) )->QChart::contains(*point);

}

bool QChart_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QChart_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {

	return ( (const MiqtVirtualQChart*)(self) )->QChart::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

}

bool QChart_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QChart_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {

	return ( (const MiqtVirtualQChart*)(self) )->QChart::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

}

bool QChart_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QChart_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {

	return ( (const MiqtVirtualQChart*)(self) )->QChart::isObscuredBy(item);

}

bool QChart_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QChart_virtualbase_opaqueArea(const void* self) {

	return new QPainterPath(( (const MiqtVirtualQChart*)(self) )->QChart::opaqueArea());

}

bool QChart_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QChart_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {

	return ( (MiqtVirtualQChart*)(self) )->QChart::sceneEventFilter(watched, event);

}

bool QChart_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QChart_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::contextMenuEvent(event);

}

bool QChart_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QChart_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::dragEnterEvent(event);

}

bool QChart_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QChart_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::dragLeaveEvent(event);

}

bool QChart_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QChart_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::dragMoveEvent(event);

}

bool QChart_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QChart_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::dropEvent(event);

}

bool QChart_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QChart_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::hoverEnterEvent(event);

}

bool QChart_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QChart_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::keyPressEvent(event);

}

bool QChart_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QChart_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::keyReleaseEvent(event);

}

bool QChart_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QChart_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::mousePressEvent(event);

}

bool QChart_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QChart_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::mouseMoveEvent(event);

}

bool QChart_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QChart_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::mouseReleaseEvent(event);

}

bool QChart_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QChart_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::mouseDoubleClickEvent(event);

}

bool QChart_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QChart_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::wheelEvent(event);

}

bool QChart_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QChart_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {

	( (MiqtVirtualQChart*)(self) )->QChart::inputMethodEvent(event);

}

bool QChart_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QChart_virtualbase_inputMethodQuery(const void* self, int query) {

	return new QVariant(( (const MiqtVirtualQChart*)(self) )->QChart::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

}

bool QChart_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QChart_virtualbase_supportsExtension(const void* self, int extension) {

	return ( (const MiqtVirtualQChart*)(self) )->QChart::supportsExtension(static_cast<MiqtVirtualQChart::Extension>(extension));

}

bool QChart_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QChart_virtualbase_setExtension(void* self, int extension, QVariant* variant) {

	( (MiqtVirtualQChart*)(self) )->QChart::setExtension(static_cast<MiqtVirtualQChart::Extension>(extension), *variant);

}

bool QChart_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QChart_virtualbase_extension(const void* self, QVariant* variant) {

	return new QVariant(( (const MiqtVirtualQChart*)(self) )->QChart::extension(*variant));

}

bool QChart_override_virtual_isEmpty(void* self, intptr_t slot) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isEmpty = slot;
	return true;
}

bool QChart_virtualbase_isEmpty(const void* self) {

	return ( (const MiqtVirtualQChart*)(self) )->QChart::isEmpty();

}

void QChart_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

QObject* QChart_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QChart_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QChart_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QChart_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QChart_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QChart_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QChart_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QChart_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setGraphicsItem(item);

}

void QChart_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout) {
	MiqtVirtualQChart* self_cast = dynamic_cast<MiqtVirtualQChart*>( (QChart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOwnedByLayout(ownedByLayout);

}

void QChart_delete(QChart* self) {
	delete self;
}

