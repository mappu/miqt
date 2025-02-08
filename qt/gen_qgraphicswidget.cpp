#include <QAction>
#include <QChildEvent>
#include <QCloseEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsItem>
#include <QGraphicsLayout>
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
#include <QKeySequence>
#include <QList>
#include <QMarginsF>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QPointF>
#include <QRectF>
#include <QShowEvent>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOption>
#include <QStyleOptionGraphicsItem>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qgraphicswidget.h>
#include "gen_qgraphicswidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGraphicsWidget_geometryChanged(intptr_t);
void miqt_exec_callback_QGraphicsWidget_layoutChanged(intptr_t);
void miqt_exec_callback_QGraphicsWidget_setGeometry(QGraphicsWidget*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsWidget_getContentsMargins(const QGraphicsWidget*, intptr_t, double*, double*, double*, double*);
int miqt_exec_callback_QGraphicsWidget_type(const QGraphicsWidget*, intptr_t);
void miqt_exec_callback_QGraphicsWidget_paint(QGraphicsWidget*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
void miqt_exec_callback_QGraphicsWidget_paintWindowFrame(QGraphicsWidget*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
QRectF* miqt_exec_callback_QGraphicsWidget_boundingRect(const QGraphicsWidget*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsWidget_shape(const QGraphicsWidget*, intptr_t);
void miqt_exec_callback_QGraphicsWidget_initStyleOption(const QGraphicsWidget*, intptr_t, QStyleOption*);
QSizeF* miqt_exec_callback_QGraphicsWidget_sizeHint(const QGraphicsWidget*, intptr_t, int, QSizeF*);
void miqt_exec_callback_QGraphicsWidget_updateGeometry(QGraphicsWidget*, intptr_t);
QVariant* miqt_exec_callback_QGraphicsWidget_itemChange(QGraphicsWidget*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsWidget_propertyChange(QGraphicsWidget*, intptr_t, struct miqt_string, QVariant*);
bool miqt_exec_callback_QGraphicsWidget_sceneEvent(QGraphicsWidget*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsWidget_windowFrameEvent(QGraphicsWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QGraphicsWidget_windowFrameSectionAt(const QGraphicsWidget*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsWidget_event(QGraphicsWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_changeEvent(QGraphicsWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_closeEvent(QGraphicsWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QGraphicsWidget_focusInEvent(QGraphicsWidget*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QGraphicsWidget_focusNextPrevChild(QGraphicsWidget*, intptr_t, bool);
void miqt_exec_callback_QGraphicsWidget_focusOutEvent(QGraphicsWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsWidget_hideEvent(QGraphicsWidget*, intptr_t, QHideEvent*);
void miqt_exec_callback_QGraphicsWidget_moveEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneMoveEvent*);
void miqt_exec_callback_QGraphicsWidget_polishEvent(QGraphicsWidget*, intptr_t);
void miqt_exec_callback_QGraphicsWidget_resizeEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneResizeEvent*);
void miqt_exec_callback_QGraphicsWidget_showEvent(QGraphicsWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QGraphicsWidget_hoverMoveEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsWidget_hoverLeaveEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsWidget_grabMouseEvent(QGraphicsWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_ungrabMouseEvent(QGraphicsWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_grabKeyboardEvent(QGraphicsWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_ungrabKeyboardEvent(QGraphicsWidget*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsWidget_eventFilter(QGraphicsWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsWidget_timerEvent(QGraphicsWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsWidget_childEvent(QGraphicsWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsWidget_customEvent(QGraphicsWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_connectNotify(QGraphicsWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsWidget_disconnectNotify(QGraphicsWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsWidget_advance(QGraphicsWidget*, intptr_t, int);
bool miqt_exec_callback_QGraphicsWidget_contains(const QGraphicsWidget*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsWidget_collidesWithItem(const QGraphicsWidget*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsWidget_collidesWithPath(const QGraphicsWidget*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsWidget_isObscuredBy(const QGraphicsWidget*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsWidget_opaqueArea(const QGraphicsWidget*, intptr_t);
bool miqt_exec_callback_QGraphicsWidget_sceneEventFilter(QGraphicsWidget*, intptr_t, QGraphicsItem*, QEvent*);
void miqt_exec_callback_QGraphicsWidget_contextMenuEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsWidget_dragEnterEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWidget_dragLeaveEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWidget_dragMoveEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWidget_dropEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWidget_hoverEnterEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsWidget_keyPressEvent(QGraphicsWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsWidget_keyReleaseEvent(QGraphicsWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsWidget_mousePressEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWidget_mouseMoveEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWidget_mouseReleaseEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWidget_mouseDoubleClickEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWidget_wheelEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsWidget_inputMethodEvent(QGraphicsWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsWidget_inputMethodQuery(const QGraphicsWidget*, intptr_t, int);
bool miqt_exec_callback_QGraphicsWidget_supportsExtension(const QGraphicsWidget*, intptr_t, int);
void miqt_exec_callback_QGraphicsWidget_setExtension(QGraphicsWidget*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsWidget_extension(const QGraphicsWidget*, intptr_t, QVariant*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsWidget final : public QGraphicsWidget {
public:

	MiqtVirtualQGraphicsWidget(): QGraphicsWidget() {};
	MiqtVirtualQGraphicsWidget(QGraphicsItem* parent): QGraphicsWidget(parent) {};
	MiqtVirtualQGraphicsWidget(QGraphicsItem* parent, Qt::WindowFlags wFlags): QGraphicsWidget(parent, wFlags) {};

	virtual ~MiqtVirtualQGraphicsWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__setGeometry == 0) {
			QGraphicsWidget::setGeometry(rect);
			return;
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsWidget_setGeometry(this, handle__setGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setGeometry(QRectF* rect) {

		QGraphicsWidget::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getContentsMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (handle__getContentsMargins == 0) {
			QGraphicsWidget::getContentsMargins(left, top, right, bottom);
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

		miqt_exec_callback_QGraphicsWidget_getContentsMargins(this, handle__getContentsMargins, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_getContentsMargins(double* left, double* top, double* right, double* bottom) const {

		QGraphicsWidget::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QGraphicsWidget::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsWidget_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_type() const {

		return QGraphicsWidget::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			QGraphicsWidget::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsWidget_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsWidget::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintWindowFrame = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paintWindowFrame == 0) {
			QGraphicsWidget::paintWindowFrame(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsWidget_paintWindowFrame(this, handle__paintWindowFrame, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintWindowFrame(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsWidget::paintWindowFrame(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QGraphicsWidget::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsWidget_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRect() const {

		return new QRectF(QGraphicsWidget::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QGraphicsWidget::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsWidget_shape(this, handle__shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_shape() const {

		return new QPainterPath(QGraphicsWidget::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOption* option) const override {
		if (handle__initStyleOption == 0) {
			QGraphicsWidget::initStyleOption(option);
			return;
		}
		
		QStyleOption* sigval1 = option;

		miqt_exec_callback_QGraphicsWidget_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOption* option) const {

		QGraphicsWidget::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__sizeHint == 0) {
			return QGraphicsWidget::sizeHint(which, constraint);
		}
		
		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);

		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsWidget_sizeHint(this, handle__sizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSizeF* virtualbase_sizeHint(int which, QSizeF* constraint) const {

		return new QSizeF(QGraphicsWidget::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (handle__updateGeometry == 0) {
			QGraphicsWidget::updateGeometry();
			return;
		}
		

		miqt_exec_callback_QGraphicsWidget_updateGeometry(this, handle__updateGeometry);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateGeometry() {

		QGraphicsWidget::updateGeometry();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QGraphicsWidget::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWidget_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_itemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsWidget::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__propertyChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
		if (handle__propertyChange == 0) {
			return QGraphicsWidget::propertyChange(propertyName, value);
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

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWidget_propertyChange(this, handle__propertyChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_propertyChange(struct miqt_string propertyName, QVariant* value) {
		QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);

		return new QVariant(QGraphicsWidget::propertyChange(propertyName_QString, *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QGraphicsWidget::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEvent(QEvent* event) {

		return QGraphicsWidget::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__windowFrameEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool windowFrameEvent(QEvent* e) override {
		if (handle__windowFrameEvent == 0) {
			return QGraphicsWidget::windowFrameEvent(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_windowFrameEvent(this, handle__windowFrameEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_windowFrameEvent(QEvent* e) {

		return QGraphicsWidget::windowFrameEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__windowFrameSectionAt = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
		if (handle__windowFrameSectionAt == 0) {
			return QGraphicsWidget::windowFrameSectionAt(pos);
		}
		
		const QPointF& pos_ret = pos;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&pos_ret);

		int callback_return_value = miqt_exec_callback_QGraphicsWidget_windowFrameSectionAt(this, handle__windowFrameSectionAt, sigval1);

		return static_cast<Qt::WindowFrameSection>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_windowFrameSectionAt(QPointF* pos) const {

		Qt::WindowFrameSection _ret = QGraphicsWidget::windowFrameSectionAt(*pos);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGraphicsWidget::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QGraphicsWidget::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QGraphicsWidget::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* event) {

		QGraphicsWidget::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QGraphicsWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QGraphicsWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QGraphicsWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QGraphicsWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QGraphicsWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QGraphicsWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QGraphicsWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QGraphicsWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QGraphicsWidget::moveEvent(event);
			return;
		}
		
		QGraphicsSceneMoveEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QGraphicsSceneMoveEvent* event) {

		QGraphicsWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__polishEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void polishEvent() override {
		if (handle__polishEvent == 0) {
			QGraphicsWidget::polishEvent();
			return;
		}
		

		miqt_exec_callback_QGraphicsWidget_polishEvent(this, handle__polishEvent);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_polishEvent() {

		QGraphicsWidget::polishEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QGraphicsWidget::resizeEvent(event);
			return;
		}
		
		QGraphicsSceneResizeEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QGraphicsSceneResizeEvent* event) {

		QGraphicsWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QGraphicsWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QGraphicsWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QGraphicsWidget::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsWidget::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QGraphicsWidget::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsWidget::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__grabMouseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void grabMouseEvent(QEvent* event) override {
		if (handle__grabMouseEvent == 0) {
			QGraphicsWidget::grabMouseEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_grabMouseEvent(this, handle__grabMouseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_grabMouseEvent(QEvent* event) {

		QGraphicsWidget::grabMouseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ungrabMouseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void ungrabMouseEvent(QEvent* event) override {
		if (handle__ungrabMouseEvent == 0) {
			QGraphicsWidget::ungrabMouseEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_ungrabMouseEvent(this, handle__ungrabMouseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ungrabMouseEvent(QEvent* event) {

		QGraphicsWidget::ungrabMouseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__grabKeyboardEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void grabKeyboardEvent(QEvent* event) override {
		if (handle__grabKeyboardEvent == 0) {
			QGraphicsWidget::grabKeyboardEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_grabKeyboardEvent(this, handle__grabKeyboardEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_grabKeyboardEvent(QEvent* event) {

		QGraphicsWidget::grabKeyboardEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ungrabKeyboardEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void ungrabKeyboardEvent(QEvent* event) override {
		if (handle__ungrabKeyboardEvent == 0) {
			QGraphicsWidget::ungrabKeyboardEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_ungrabKeyboardEvent(this, handle__ungrabKeyboardEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ungrabKeyboardEvent(QEvent* event) {

		QGraphicsWidget::ungrabKeyboardEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGraphicsWidget::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QGraphicsWidget::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGraphicsWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QGraphicsWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGraphicsWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QGraphicsWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGraphicsWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QGraphicsWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGraphicsWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsWidget_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QGraphicsWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGraphicsWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsWidget_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QGraphicsWidget::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QGraphicsWidget::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsWidget_advance(this, handle__advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance(int phase) {

		QGraphicsWidget::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QGraphicsWidget::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_contains(QPointF* point) const {

		return QGraphicsWidget::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QGraphicsWidget::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsWidget::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QGraphicsWidget::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsWidget::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QGraphicsWidget::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isObscuredBy(QGraphicsItem* item) const {

		return QGraphicsWidget::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QGraphicsWidget::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsWidget_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_opaqueArea() const {

		return new QPainterPath(QGraphicsWidget::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QGraphicsWidget::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsWidget::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsWidget::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsWidget::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsWidget::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsWidget::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsWidget::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QGraphicsWidget::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsWidget::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QGraphicsWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QGraphicsWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsWidget::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsWidget::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsWidget::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsWidget::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsWidget::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QGraphicsWidget::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsWidget::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWidget_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QGraphicsWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QGraphicsWidget::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QGraphicsWidget::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QGraphicsWidget::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsWidget_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setExtension(int extension, QVariant* variant) {

		QGraphicsWidget::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QGraphicsWidget::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWidget_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(QVariant* variant) const {

		return new QVariant(QGraphicsWidget::extension(*variant));

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGraphicsWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend void QGraphicsWidget_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsWidget_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsWidget_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsWidget_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
	friend void QGraphicsWidget_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
};

QGraphicsWidget* QGraphicsWidget_new() {
	return new MiqtVirtualQGraphicsWidget();
}

QGraphicsWidget* QGraphicsWidget_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsWidget(parent);
}

QGraphicsWidget* QGraphicsWidget_new3(QGraphicsItem* parent, int wFlags) {
	return new MiqtVirtualQGraphicsWidget(parent, static_cast<Qt::WindowFlags>(wFlags));
}

void QGraphicsWidget_virtbase(QGraphicsWidget* src, QGraphicsObject** outptr_QGraphicsObject, QGraphicsLayoutItem** outptr_QGraphicsLayoutItem) {
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(src);
	*outptr_QGraphicsLayoutItem = static_cast<QGraphicsLayoutItem*>(src);
}

QMetaObject* QGraphicsWidget_metaObject(const QGraphicsWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsWidget_metacast(QGraphicsWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsWidget_tr(const char* s) {
	QString _ret = QGraphicsWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWidget_trUtf8(const char* s) {
	QString _ret = QGraphicsWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QGraphicsLayout* QGraphicsWidget_layout(const QGraphicsWidget* self) {
	return self->layout();
}

void QGraphicsWidget_setLayout(QGraphicsWidget* self, QGraphicsLayout* layout) {
	self->setLayout(layout);
}

void QGraphicsWidget_adjustSize(QGraphicsWidget* self) {
	self->adjustSize();
}

int QGraphicsWidget_layoutDirection(const QGraphicsWidget* self) {
	Qt::LayoutDirection _ret = self->layoutDirection();
	return static_cast<int>(_ret);
}

void QGraphicsWidget_setLayoutDirection(QGraphicsWidget* self, int direction) {
	self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

void QGraphicsWidget_unsetLayoutDirection(QGraphicsWidget* self) {
	self->unsetLayoutDirection();
}

QStyle* QGraphicsWidget_style(const QGraphicsWidget* self) {
	return self->style();
}

void QGraphicsWidget_setStyle(QGraphicsWidget* self, QStyle* style) {
	self->setStyle(style);
}

QFont* QGraphicsWidget_font(const QGraphicsWidget* self) {
	return new QFont(self->font());
}

void QGraphicsWidget_setFont(QGraphicsWidget* self, QFont* font) {
	self->setFont(*font);
}

QPalette* QGraphicsWidget_palette(const QGraphicsWidget* self) {
	return new QPalette(self->palette());
}

void QGraphicsWidget_setPalette(QGraphicsWidget* self, QPalette* palette) {
	self->setPalette(*palette);
}

bool QGraphicsWidget_autoFillBackground(const QGraphicsWidget* self) {
	return self->autoFillBackground();
}

void QGraphicsWidget_setAutoFillBackground(QGraphicsWidget* self, bool enabled) {
	self->setAutoFillBackground(enabled);
}

void QGraphicsWidget_resize(QGraphicsWidget* self, QSizeF* size) {
	self->resize(*size);
}

void QGraphicsWidget_resize2(QGraphicsWidget* self, double w, double h) {
	self->resize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsWidget_size(const QGraphicsWidget* self) {
	return new QSizeF(self->size());
}

void QGraphicsWidget_setGeometry(QGraphicsWidget* self, QRectF* rect) {
	self->setGeometry(*rect);
}

void QGraphicsWidget_setGeometry2(QGraphicsWidget* self, double x, double y, double w, double h) {
	self->setGeometry(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QGraphicsWidget_rect(const QGraphicsWidget* self) {
	return new QRectF(self->rect());
}

void QGraphicsWidget_setContentsMargins(QGraphicsWidget* self, double left, double top, double right, double bottom) {
	self->setContentsMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsWidget_setContentsMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins) {
	self->setContentsMargins(*margins);
}

void QGraphicsWidget_getContentsMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
	self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsWidget_setWindowFrameMargins(QGraphicsWidget* self, double left, double top, double right, double bottom) {
	self->setWindowFrameMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsWidget_setWindowFrameMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins) {
	self->setWindowFrameMargins(*margins);
}

void QGraphicsWidget_getWindowFrameMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
	self->getWindowFrameMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsWidget_unsetWindowFrameMargins(QGraphicsWidget* self) {
	self->unsetWindowFrameMargins();
}

QRectF* QGraphicsWidget_windowFrameGeometry(const QGraphicsWidget* self) {
	return new QRectF(self->windowFrameGeometry());
}

QRectF* QGraphicsWidget_windowFrameRect(const QGraphicsWidget* self) {
	return new QRectF(self->windowFrameRect());
}

int QGraphicsWidget_windowFlags(const QGraphicsWidget* self) {
	Qt::WindowFlags _ret = self->windowFlags();
	return static_cast<int>(_ret);
}

int QGraphicsWidget_windowType(const QGraphicsWidget* self) {
	Qt::WindowType _ret = self->windowType();
	return static_cast<int>(_ret);
}

void QGraphicsWidget_setWindowFlags(QGraphicsWidget* self, int wFlags) {
	self->setWindowFlags(static_cast<Qt::WindowFlags>(wFlags));
}

bool QGraphicsWidget_isActiveWindow(const QGraphicsWidget* self) {
	return self->isActiveWindow();
}

void QGraphicsWidget_setWindowTitle(QGraphicsWidget* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setWindowTitle(title_QString);
}

struct miqt_string QGraphicsWidget_windowTitle(const QGraphicsWidget* self) {
	QString _ret = self->windowTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QGraphicsWidget_focusPolicy(const QGraphicsWidget* self) {
	Qt::FocusPolicy _ret = self->focusPolicy();
	return static_cast<int>(_ret);
}

void QGraphicsWidget_setFocusPolicy(QGraphicsWidget* self, int policy) {
	self->setFocusPolicy(static_cast<Qt::FocusPolicy>(policy));
}

void QGraphicsWidget_setTabOrder(QGraphicsWidget* first, QGraphicsWidget* second) {
	QGraphicsWidget::setTabOrder(first, second);
}

QGraphicsWidget* QGraphicsWidget_focusWidget(const QGraphicsWidget* self) {
	return self->focusWidget();
}

int QGraphicsWidget_grabShortcut(QGraphicsWidget* self, QKeySequence* sequence) {
	return self->grabShortcut(*sequence);
}

void QGraphicsWidget_releaseShortcut(QGraphicsWidget* self, int id) {
	self->releaseShortcut(static_cast<int>(id));
}

void QGraphicsWidget_setShortcutEnabled(QGraphicsWidget* self, int id) {
	self->setShortcutEnabled(static_cast<int>(id));
}

void QGraphicsWidget_setShortcutAutoRepeat(QGraphicsWidget* self, int id) {
	self->setShortcutAutoRepeat(static_cast<int>(id));
}

void QGraphicsWidget_addAction(QGraphicsWidget* self, QAction* action) {
	self->addAction(action);
}

void QGraphicsWidget_addActions(QGraphicsWidget* self, struct miqt_array /* of QAction* */  actions) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	self->addActions(actions_QList);
}

void QGraphicsWidget_insertActions(QGraphicsWidget* self, QAction* before, struct miqt_array /* of QAction* */  actions) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	self->insertActions(before, actions_QList);
}

void QGraphicsWidget_insertAction(QGraphicsWidget* self, QAction* before, QAction* action) {
	self->insertAction(before, action);
}

void QGraphicsWidget_removeAction(QGraphicsWidget* self, QAction* action) {
	self->removeAction(action);
}

struct miqt_array /* of QAction* */  QGraphicsWidget_actions(const QGraphicsWidget* self) {
	QList<QAction *> _ret = self->actions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGraphicsWidget_setAttribute(QGraphicsWidget* self, int attribute) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(attribute));
}

bool QGraphicsWidget_testAttribute(const QGraphicsWidget* self, int attribute) {
	return self->testAttribute(static_cast<Qt::WidgetAttribute>(attribute));
}

int QGraphicsWidget_type(const QGraphicsWidget* self) {
	return self->type();
}

void QGraphicsWidget_paint(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsWidget_paintWindowFrame(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paintWindowFrame(painter, option, widget);
}

QRectF* QGraphicsWidget_boundingRect(const QGraphicsWidget* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsWidget_shape(const QGraphicsWidget* self) {
	return new QPainterPath(self->shape());
}

void QGraphicsWidget_geometryChanged(QGraphicsWidget* self) {
	self->geometryChanged();
}

void QGraphicsWidget_connect_geometryChanged(QGraphicsWidget* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget::connect(self, static_cast<void (QGraphicsWidget::*)()>(&QGraphicsWidget::geometryChanged), self, [=]() {
		miqt_exec_callback_QGraphicsWidget_geometryChanged(slot);
	});
}

void QGraphicsWidget_layoutChanged(QGraphicsWidget* self) {
	self->layoutChanged();
}

void QGraphicsWidget_connect_layoutChanged(QGraphicsWidget* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget::connect(self, static_cast<void (QGraphicsWidget::*)()>(&QGraphicsWidget::layoutChanged), self, [=]() {
		miqt_exec_callback_QGraphicsWidget_layoutChanged(slot);
	});
}

bool QGraphicsWidget_close(QGraphicsWidget* self) {
	return self->close();
}

struct miqt_string QGraphicsWidget_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QGraphicsWidget_grabShortcut2(QGraphicsWidget* self, QKeySequence* sequence, int context) {
	return self->grabShortcut(*sequence, static_cast<Qt::ShortcutContext>(context));
}

void QGraphicsWidget_setShortcutEnabled2(QGraphicsWidget* self, int id, bool enabled) {
	self->setShortcutEnabled(static_cast<int>(id), enabled);
}

void QGraphicsWidget_setShortcutAutoRepeat2(QGraphicsWidget* self, int id, bool enabled) {
	self->setShortcutAutoRepeat(static_cast<int>(id), enabled);
}

void QGraphicsWidget_setAttribute2(QGraphicsWidget* self, int attribute, bool on) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(attribute), on);
}

bool QGraphicsWidget_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setGeometry = slot;
	return true;
}

void QGraphicsWidget_virtualbase_setGeometry(void* self, QRectF* rect) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_setGeometry(rect);
}

bool QGraphicsWidget_override_virtual_getContentsMargins(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__getContentsMargins = slot;
	return true;
}

void QGraphicsWidget_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_getContentsMargins(left, top, right, bottom);
}

bool QGraphicsWidget_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QGraphicsWidget_virtualbase_type(const void* self) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_type();
}

bool QGraphicsWidget_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

void QGraphicsWidget_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_paint(painter, option, widget);
}

bool QGraphicsWidget_override_virtual_paintWindowFrame(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintWindowFrame = slot;
	return true;
}

void QGraphicsWidget_virtualbase_paintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_paintWindowFrame(painter, option, widget);
}

bool QGraphicsWidget_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QGraphicsWidget_virtualbase_boundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_boundingRect();
}

bool QGraphicsWidget_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QGraphicsWidget_virtualbase_shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_shape();
}

bool QGraphicsWidget_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QGraphicsWidget_virtualbase_initStyleOption(const void* self, QStyleOption* option) {
	( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_initStyleOption(option);
}

bool QGraphicsWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSizeF* QGraphicsWidget_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_sizeHint(which, constraint);
}

bool QGraphicsWidget_override_virtual_updateGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometry = slot;
	return true;
}

void QGraphicsWidget_virtualbase_updateGeometry(void* self) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_updateGeometry();
}

bool QGraphicsWidget_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QGraphicsWidget_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_itemChange(change, value);
}

bool QGraphicsWidget_override_virtual_propertyChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__propertyChange = slot;
	return true;
}

QVariant* QGraphicsWidget_virtualbase_propertyChange(void* self, struct miqt_string propertyName, QVariant* value) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_propertyChange(propertyName, value);
}

bool QGraphicsWidget_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_sceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_sceneEvent(event);
}

bool QGraphicsWidget_override_virtual_windowFrameEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__windowFrameEvent = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_windowFrameEvent(void* self, QEvent* e) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_windowFrameEvent(e);
}

bool QGraphicsWidget_override_virtual_windowFrameSectionAt(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__windowFrameSectionAt = slot;
	return true;
}

int QGraphicsWidget_virtualbase_windowFrameSectionAt(const void* self, QPointF* pos) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_windowFrameSectionAt(pos);
}

bool QGraphicsWidget_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_event(event);
}

bool QGraphicsWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_changeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_changeEvent(event);
}

bool QGraphicsWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_closeEvent(event);
}

bool QGraphicsWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_focusInEvent(event);
}

bool QGraphicsWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QGraphicsWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_focusOutEvent(event);
}

bool QGraphicsWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_hideEvent(event);
}

bool QGraphicsWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_moveEvent(void* self, QGraphicsSceneMoveEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_moveEvent(event);
}

bool QGraphicsWidget_override_virtual_polishEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__polishEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_polishEvent(void* self) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_polishEvent();
}

bool QGraphicsWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_resizeEvent(void* self, QGraphicsSceneResizeEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_resizeEvent(event);
}

bool QGraphicsWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_showEvent(event);
}

bool QGraphicsWidget_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_hoverMoveEvent(event);
}

bool QGraphicsWidget_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_hoverLeaveEvent(event);
}

bool QGraphicsWidget_override_virtual_grabMouseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__grabMouseEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_grabMouseEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_grabMouseEvent(event);
}

bool QGraphicsWidget_override_virtual_ungrabMouseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ungrabMouseEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_ungrabMouseEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_ungrabMouseEvent(event);
}

bool QGraphicsWidget_override_virtual_grabKeyboardEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__grabKeyboardEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_grabKeyboardEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_grabKeyboardEvent(event);
}

bool QGraphicsWidget_override_virtual_ungrabKeyboardEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ungrabKeyboardEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_ungrabKeyboardEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_ungrabKeyboardEvent(event);
}

bool QGraphicsWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QGraphicsWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_timerEvent(event);
}

bool QGraphicsWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_childEvent(event);
}

bool QGraphicsWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_customEvent(event);
}

bool QGraphicsWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QGraphicsWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_connectNotify(signal);
}

bool QGraphicsWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGraphicsWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_disconnectNotify(signal);
}

bool QGraphicsWidget_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QGraphicsWidget_virtualbase_advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_advance(phase);
}

bool QGraphicsWidget_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_contains(point);
}

bool QGraphicsWidget_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_collidesWithItem(other, mode);
}

bool QGraphicsWidget_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_collidesWithPath(path, mode);
}

bool QGraphicsWidget_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_isObscuredBy(item);
}

bool QGraphicsWidget_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsWidget_virtualbase_opaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_opaqueArea();
}

bool QGraphicsWidget_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_sceneEventFilter(watched, event);
}

bool QGraphicsWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QGraphicsWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QGraphicsWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QGraphicsWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QGraphicsWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_dropEvent(event);
}

bool QGraphicsWidget_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_hoverEnterEvent(event);
}

bool QGraphicsWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_keyPressEvent(event);
}

bool QGraphicsWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QGraphicsWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_mousePressEvent(event);
}

bool QGraphicsWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QGraphicsWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QGraphicsWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QGraphicsWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_wheelEvent(event);
}

bool QGraphicsWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QGraphicsWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsWidget_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QGraphicsWidget_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_supportsExtension(extension);
}

bool QGraphicsWidget_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QGraphicsWidget_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_setExtension(extension, variant);
}

bool QGraphicsWidget_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QGraphicsWidget_virtualbase_extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_extension(variant);
}

void QGraphicsWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

QObject* QGraphicsWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QGraphicsWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QGraphicsWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QGraphicsWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QGraphicsWidget_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QGraphicsWidget_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QGraphicsWidget_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QGraphicsWidget_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setGraphicsItem(item);

}

void QGraphicsWidget_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOwnedByLayout(ownedByLayout);

}

void QGraphicsWidget_delete(QGraphicsWidget* self) {
	delete self;
}

