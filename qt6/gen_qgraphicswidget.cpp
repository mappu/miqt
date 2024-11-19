#include <QAction>
#include <QCloseEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QGraphicsObject>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsSceneResizeEvent>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QKeySequence>
#include <QList>
#include <QMarginsF>
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
#include <QVariant>
#include <QWidget>
#include <qgraphicswidget.h>
#include "gen_qgraphicswidget.h"
#include "_cgo_export.h"

class MiqtVirtualQGraphicsWidget : public virtual QGraphicsWidget {
public:

	MiqtVirtualQGraphicsWidget(): QGraphicsWidget() {};
	MiqtVirtualQGraphicsWidget(QGraphicsItem* parent): QGraphicsWidget(parent) {};
	MiqtVirtualQGraphicsWidget(QGraphicsItem* parent, Qt::WindowFlags wFlags): QGraphicsWidget(parent, wFlags) {};

	virtual ~MiqtVirtualQGraphicsWidget() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__SetGeometry == 0) {
			QGraphicsWidget::setGeometry(rect);
			return;
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsWidget_SetGeometry(this, handle__SetGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetGeometry(QRectF* rect) {

		QGraphicsWidget::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GetContentsMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (handle__GetContentsMargins == 0) {
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

		miqt_exec_callback_QGraphicsWidget_GetContentsMargins(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__GetContentsMargins, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_GetContentsMargins(double* left, double* top, double* right, double* bottom) const {

		QGraphicsWidget::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsWidget::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsWidget_Type(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsWidget::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsWidget::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsWidget_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsWidget::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintWindowFrame = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__PaintWindowFrame == 0) {
			QGraphicsWidget::paintWindowFrame(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsWidget_PaintWindowFrame(this, handle__PaintWindowFrame, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintWindowFrame(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsWidget::paintWindowFrame(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsWidget::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsWidget_BoundingRect(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsWidget::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsWidget::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsWidget_Shape(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsWidget::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOption* option) const override {
		if (handle__InitStyleOption == 0) {
			QGraphicsWidget::initStyleOption(option);
			return;
		}
		
		QStyleOption* sigval1 = option;

		miqt_exec_callback_QGraphicsWidget_InitStyleOption(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOption* option) const {

		QGraphicsWidget::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__SizeHint == 0) {
			return QGraphicsWidget::sizeHint(which, constraint);
		}
		
		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);

		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsWidget_SizeHint(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__SizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSizeF* virtualbase_SizeHint(int which, QSizeF* constraint) const {

		return new QSizeF(QGraphicsWidget::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (handle__UpdateGeometry == 0) {
			QGraphicsWidget::updateGeometry();
			return;
		}
		

		miqt_exec_callback_QGraphicsWidget_UpdateGeometry(this, handle__UpdateGeometry);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometry() {

		QGraphicsWidget::updateGeometry();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsWidget::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWidget_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsWidget::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PropertyChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
		if (handle__PropertyChange == 0) {
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

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWidget_PropertyChange(this, handle__PropertyChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_PropertyChange(struct miqt_string propertyName, QVariant* value) {
		QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);

		return new QVariant(QGraphicsWidget::propertyChange(propertyName_QString, *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsWidget::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* event) {

		return QGraphicsWidget::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WindowFrameEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool windowFrameEvent(QEvent* e) override {
		if (handle__WindowFrameEvent == 0) {
			return QGraphicsWidget::windowFrameEvent(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_WindowFrameEvent(this, handle__WindowFrameEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WindowFrameEvent(QEvent* e) {

		return QGraphicsWidget::windowFrameEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WindowFrameSectionAt = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
		if (handle__WindowFrameSectionAt == 0) {
			return QGraphicsWidget::windowFrameSectionAt(pos);
		}
		
		const QPointF& pos_ret = pos;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&pos_ret);

		int callback_return_value = miqt_exec_callback_QGraphicsWidget_WindowFrameSectionAt(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__WindowFrameSectionAt, sigval1);

		return static_cast<Qt::WindowFrameSection>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_WindowFrameSectionAt(QPointF* pos) const {

		Qt::WindowFrameSection _ret = QGraphicsWidget::windowFrameSectionAt(*pos);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QGraphicsWidget::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QGraphicsWidget::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QGraphicsWidget::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QGraphicsWidget::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QGraphicsWidget::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QGraphicsWidget::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsWidget::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QGraphicsWidget::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QGraphicsWidget::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QGraphicsWidget::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsWidget::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QGraphicsWidget::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QGraphicsWidget::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QGraphicsWidget::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QGraphicsWidget::moveEvent(event);
			return;
		}
		
		QGraphicsSceneMoveEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QGraphicsSceneMoveEvent* event) {

		QGraphicsWidget::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PolishEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void polishEvent() override {
		if (handle__PolishEvent == 0) {
			QGraphicsWidget::polishEvent();
			return;
		}
		

		miqt_exec_callback_QGraphicsWidget_PolishEvent(this, handle__PolishEvent);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PolishEvent() {

		QGraphicsWidget::polishEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QGraphicsWidget::resizeEvent(event);
			return;
		}
		
		QGraphicsSceneResizeEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QGraphicsSceneResizeEvent* event) {

		QGraphicsWidget::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QGraphicsWidget::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QGraphicsWidget::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsWidget::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsWidget::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsWidget::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsWidget::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GrabMouseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void grabMouseEvent(QEvent* event) override {
		if (handle__GrabMouseEvent == 0) {
			QGraphicsWidget::grabMouseEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_GrabMouseEvent(this, handle__GrabMouseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_GrabMouseEvent(QEvent* event) {

		QGraphicsWidget::grabMouseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UngrabMouseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void ungrabMouseEvent(QEvent* event) override {
		if (handle__UngrabMouseEvent == 0) {
			QGraphicsWidget::ungrabMouseEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_UngrabMouseEvent(this, handle__UngrabMouseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UngrabMouseEvent(QEvent* event) {

		QGraphicsWidget::ungrabMouseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GrabKeyboardEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void grabKeyboardEvent(QEvent* event) override {
		if (handle__GrabKeyboardEvent == 0) {
			QGraphicsWidget::grabKeyboardEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_GrabKeyboardEvent(this, handle__GrabKeyboardEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_GrabKeyboardEvent(QEvent* event) {

		QGraphicsWidget::grabKeyboardEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UngrabKeyboardEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void ungrabKeyboardEvent(QEvent* event) override {
		if (handle__UngrabKeyboardEvent == 0) {
			QGraphicsWidget::ungrabKeyboardEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_UngrabKeyboardEvent(this, handle__UngrabKeyboardEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UngrabKeyboardEvent(QEvent* event) {

		QGraphicsWidget::ungrabKeyboardEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__IsEmpty == 0) {
			return QGraphicsWidget::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_IsEmpty(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__IsEmpty);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsEmpty() const {

		return QGraphicsWidget::isEmpty();

	}

};

void QGraphicsWidget_new(QGraphicsWidget** outptr_QGraphicsWidget, QGraphicsObject** outptr_QGraphicsObject, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem, QGraphicsLayoutItem** outptr_QGraphicsLayoutItem) {
	MiqtVirtualQGraphicsWidget* ret = new MiqtVirtualQGraphicsWidget();
	*outptr_QGraphicsWidget = ret;
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
	*outptr_QGraphicsLayoutItem = static_cast<QGraphicsLayoutItem*>(ret);
}

void QGraphicsWidget_new2(QGraphicsItem* parent, QGraphicsWidget** outptr_QGraphicsWidget, QGraphicsObject** outptr_QGraphicsObject, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem, QGraphicsLayoutItem** outptr_QGraphicsLayoutItem) {
	MiqtVirtualQGraphicsWidget* ret = new MiqtVirtualQGraphicsWidget(parent);
	*outptr_QGraphicsWidget = ret;
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
	*outptr_QGraphicsLayoutItem = static_cast<QGraphicsLayoutItem*>(ret);
}

void QGraphicsWidget_new3(QGraphicsItem* parent, int wFlags, QGraphicsWidget** outptr_QGraphicsWidget, QGraphicsObject** outptr_QGraphicsObject, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem, QGraphicsLayoutItem** outptr_QGraphicsLayoutItem) {
	MiqtVirtualQGraphicsWidget* ret = new MiqtVirtualQGraphicsWidget(parent, static_cast<Qt::WindowFlags>(wFlags));
	*outptr_QGraphicsWidget = ret;
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(ret);
	*outptr_QObject = static_cast<QObject*>(ret);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(ret);
	*outptr_QGraphicsLayoutItem = static_cast<QGraphicsLayoutItem*>(ret);
}

QMetaObject* QGraphicsWidget_MetaObject(const QGraphicsWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsWidget_Metacast(QGraphicsWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsWidget_Tr(const char* s) {
	QString _ret = QGraphicsWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QGraphicsLayout* QGraphicsWidget_Layout(const QGraphicsWidget* self) {
	return self->layout();
}

void QGraphicsWidget_SetLayout(QGraphicsWidget* self, QGraphicsLayout* layout) {
	self->setLayout(layout);
}

void QGraphicsWidget_AdjustSize(QGraphicsWidget* self) {
	self->adjustSize();
}

int QGraphicsWidget_LayoutDirection(const QGraphicsWidget* self) {
	Qt::LayoutDirection _ret = self->layoutDirection();
	return static_cast<int>(_ret);
}

void QGraphicsWidget_SetLayoutDirection(QGraphicsWidget* self, int direction) {
	self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

void QGraphicsWidget_UnsetLayoutDirection(QGraphicsWidget* self) {
	self->unsetLayoutDirection();
}

QStyle* QGraphicsWidget_Style(const QGraphicsWidget* self) {
	return self->style();
}

void QGraphicsWidget_SetStyle(QGraphicsWidget* self, QStyle* style) {
	self->setStyle(style);
}

QFont* QGraphicsWidget_Font(const QGraphicsWidget* self) {
	return new QFont(self->font());
}

void QGraphicsWidget_SetFont(QGraphicsWidget* self, QFont* font) {
	self->setFont(*font);
}

QPalette* QGraphicsWidget_Palette(const QGraphicsWidget* self) {
	return new QPalette(self->palette());
}

void QGraphicsWidget_SetPalette(QGraphicsWidget* self, QPalette* palette) {
	self->setPalette(*palette);
}

bool QGraphicsWidget_AutoFillBackground(const QGraphicsWidget* self) {
	return self->autoFillBackground();
}

void QGraphicsWidget_SetAutoFillBackground(QGraphicsWidget* self, bool enabled) {
	self->setAutoFillBackground(enabled);
}

void QGraphicsWidget_Resize(QGraphicsWidget* self, QSizeF* size) {
	self->resize(*size);
}

void QGraphicsWidget_Resize2(QGraphicsWidget* self, double w, double h) {
	self->resize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsWidget_Size(const QGraphicsWidget* self) {
	return new QSizeF(self->size());
}

void QGraphicsWidget_SetGeometry(QGraphicsWidget* self, QRectF* rect) {
	self->setGeometry(*rect);
}

void QGraphicsWidget_SetGeometry2(QGraphicsWidget* self, double x, double y, double w, double h) {
	self->setGeometry(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QGraphicsWidget_Rect(const QGraphicsWidget* self) {
	return new QRectF(self->rect());
}

void QGraphicsWidget_SetContentsMargins(QGraphicsWidget* self, double left, double top, double right, double bottom) {
	self->setContentsMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsWidget_SetContentsMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins) {
	self->setContentsMargins(*margins);
}

void QGraphicsWidget_GetContentsMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
	self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsWidget_SetWindowFrameMargins(QGraphicsWidget* self, double left, double top, double right, double bottom) {
	self->setWindowFrameMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsWidget_SetWindowFrameMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins) {
	self->setWindowFrameMargins(*margins);
}

void QGraphicsWidget_GetWindowFrameMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
	self->getWindowFrameMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsWidget_UnsetWindowFrameMargins(QGraphicsWidget* self) {
	self->unsetWindowFrameMargins();
}

QRectF* QGraphicsWidget_WindowFrameGeometry(const QGraphicsWidget* self) {
	return new QRectF(self->windowFrameGeometry());
}

QRectF* QGraphicsWidget_WindowFrameRect(const QGraphicsWidget* self) {
	return new QRectF(self->windowFrameRect());
}

int QGraphicsWidget_WindowFlags(const QGraphicsWidget* self) {
	Qt::WindowFlags _ret = self->windowFlags();
	return static_cast<int>(_ret);
}

int QGraphicsWidget_WindowType(const QGraphicsWidget* self) {
	Qt::WindowType _ret = self->windowType();
	return static_cast<int>(_ret);
}

void QGraphicsWidget_SetWindowFlags(QGraphicsWidget* self, int wFlags) {
	self->setWindowFlags(static_cast<Qt::WindowFlags>(wFlags));
}

bool QGraphicsWidget_IsActiveWindow(const QGraphicsWidget* self) {
	return self->isActiveWindow();
}

void QGraphicsWidget_SetWindowTitle(QGraphicsWidget* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setWindowTitle(title_QString);
}

struct miqt_string QGraphicsWidget_WindowTitle(const QGraphicsWidget* self) {
	QString _ret = self->windowTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QGraphicsWidget_FocusPolicy(const QGraphicsWidget* self) {
	Qt::FocusPolicy _ret = self->focusPolicy();
	return static_cast<int>(_ret);
}

void QGraphicsWidget_SetFocusPolicy(QGraphicsWidget* self, int policy) {
	self->setFocusPolicy(static_cast<Qt::FocusPolicy>(policy));
}

void QGraphicsWidget_SetTabOrder(QGraphicsWidget* first, QGraphicsWidget* second) {
	QGraphicsWidget::setTabOrder(first, second);
}

QGraphicsWidget* QGraphicsWidget_FocusWidget(const QGraphicsWidget* self) {
	return self->focusWidget();
}

int QGraphicsWidget_GrabShortcut(QGraphicsWidget* self, QKeySequence* sequence) {
	return self->grabShortcut(*sequence);
}

void QGraphicsWidget_ReleaseShortcut(QGraphicsWidget* self, int id) {
	self->releaseShortcut(static_cast<int>(id));
}

void QGraphicsWidget_SetShortcutEnabled(QGraphicsWidget* self, int id) {
	self->setShortcutEnabled(static_cast<int>(id));
}

void QGraphicsWidget_SetShortcutAutoRepeat(QGraphicsWidget* self, int id) {
	self->setShortcutAutoRepeat(static_cast<int>(id));
}

void QGraphicsWidget_AddAction(QGraphicsWidget* self, QAction* action) {
	self->addAction(action);
}

void QGraphicsWidget_AddActions(QGraphicsWidget* self, struct miqt_array /* of QAction* */  actions) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	self->addActions(actions_QList);
}

void QGraphicsWidget_InsertActions(QGraphicsWidget* self, QAction* before, struct miqt_array /* of QAction* */  actions) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	self->insertActions(before, actions_QList);
}

void QGraphicsWidget_InsertAction(QGraphicsWidget* self, QAction* before, QAction* action) {
	self->insertAction(before, action);
}

void QGraphicsWidget_RemoveAction(QGraphicsWidget* self, QAction* action) {
	self->removeAction(action);
}

struct miqt_array /* of QAction* */  QGraphicsWidget_Actions(const QGraphicsWidget* self) {
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

void QGraphicsWidget_SetAttribute(QGraphicsWidget* self, int attribute) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(attribute));
}

bool QGraphicsWidget_TestAttribute(const QGraphicsWidget* self, int attribute) {
	return self->testAttribute(static_cast<Qt::WidgetAttribute>(attribute));
}

int QGraphicsWidget_Type(const QGraphicsWidget* self) {
	return self->type();
}

void QGraphicsWidget_Paint(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsWidget_PaintWindowFrame(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paintWindowFrame(painter, option, widget);
}

QRectF* QGraphicsWidget_BoundingRect(const QGraphicsWidget* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsWidget_Shape(const QGraphicsWidget* self) {
	return new QPainterPath(self->shape());
}

void QGraphicsWidget_GeometryChanged(QGraphicsWidget* self) {
	self->geometryChanged();
}

void QGraphicsWidget_connect_GeometryChanged(QGraphicsWidget* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget::connect(self, static_cast<void (QGraphicsWidget::*)()>(&QGraphicsWidget::geometryChanged), self, [=]() {
		miqt_exec_callback_QGraphicsWidget_GeometryChanged(slot);
	});
}

void QGraphicsWidget_LayoutChanged(QGraphicsWidget* self) {
	self->layoutChanged();
}

void QGraphicsWidget_connect_LayoutChanged(QGraphicsWidget* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget::connect(self, static_cast<void (QGraphicsWidget::*)()>(&QGraphicsWidget::layoutChanged), self, [=]() {
		miqt_exec_callback_QGraphicsWidget_LayoutChanged(slot);
	});
}

bool QGraphicsWidget_Close(QGraphicsWidget* self) {
	return self->close();
}

struct miqt_string QGraphicsWidget_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QGraphicsWidget_GrabShortcut2(QGraphicsWidget* self, QKeySequence* sequence, int context) {
	return self->grabShortcut(*sequence, static_cast<Qt::ShortcutContext>(context));
}

void QGraphicsWidget_SetShortcutEnabled2(QGraphicsWidget* self, int id, bool enabled) {
	self->setShortcutEnabled(static_cast<int>(id), enabled);
}

void QGraphicsWidget_SetShortcutAutoRepeat2(QGraphicsWidget* self, int id, bool enabled) {
	self->setShortcutAutoRepeat(static_cast<int>(id), enabled);
}

void QGraphicsWidget_SetAttribute2(QGraphicsWidget* self, int attribute, bool on) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(attribute), on);
}

void QGraphicsWidget_override_virtual_SetGeometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__SetGeometry = slot;
}

void QGraphicsWidget_virtualbase_SetGeometry(void* self, QRectF* rect) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_SetGeometry(rect);
}

void QGraphicsWidget_override_virtual_GetContentsMargins(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__GetContentsMargins = slot;
}

void QGraphicsWidget_virtualbase_GetContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_GetContentsMargins(left, top, right, bottom);
}

void QGraphicsWidget_override_virtual_Type(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__Type = slot;
}

int QGraphicsWidget_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_Type();
}

void QGraphicsWidget_override_virtual_Paint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__Paint = slot;
}

void QGraphicsWidget_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_Paint(painter, option, widget);
}

void QGraphicsWidget_override_virtual_PaintWindowFrame(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__PaintWindowFrame = slot;
}

void QGraphicsWidget_virtualbase_PaintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_PaintWindowFrame(painter, option, widget);
}

void QGraphicsWidget_override_virtual_BoundingRect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__BoundingRect = slot;
}

QRectF* QGraphicsWidget_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_BoundingRect();
}

void QGraphicsWidget_override_virtual_Shape(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__Shape = slot;
}

QPainterPath* QGraphicsWidget_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_Shape();
}

void QGraphicsWidget_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__InitStyleOption = slot;
}

void QGraphicsWidget_virtualbase_InitStyleOption(const void* self, QStyleOption* option) {
	( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_InitStyleOption(option);
}

void QGraphicsWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__SizeHint = slot;
}

QSizeF* QGraphicsWidget_virtualbase_SizeHint(const void* self, int which, QSizeF* constraint) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_SizeHint(which, constraint);
}

void QGraphicsWidget_override_virtual_UpdateGeometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__UpdateGeometry = slot;
}

void QGraphicsWidget_virtualbase_UpdateGeometry(void* self) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_UpdateGeometry();
}

void QGraphicsWidget_override_virtual_ItemChange(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__ItemChange = slot;
}

QVariant* QGraphicsWidget_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_ItemChange(change, value);
}

void QGraphicsWidget_override_virtual_PropertyChange(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__PropertyChange = slot;
}

QVariant* QGraphicsWidget_virtualbase_PropertyChange(void* self, struct miqt_string propertyName, QVariant* value) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_PropertyChange(propertyName, value);
}

void QGraphicsWidget_override_virtual_SceneEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__SceneEvent = slot;
}

bool QGraphicsWidget_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_SceneEvent(event);
}

void QGraphicsWidget_override_virtual_WindowFrameEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__WindowFrameEvent = slot;
}

bool QGraphicsWidget_virtualbase_WindowFrameEvent(void* self, QEvent* e) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_WindowFrameEvent(e);
}

void QGraphicsWidget_override_virtual_WindowFrameSectionAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__WindowFrameSectionAt = slot;
}

int QGraphicsWidget_virtualbase_WindowFrameSectionAt(const void* self, QPointF* pos) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_WindowFrameSectionAt(pos);
}

void QGraphicsWidget_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__Event = slot;
}

bool QGraphicsWidget_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_Event(event);
}

void QGraphicsWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__ChangeEvent = slot;
}

void QGraphicsWidget_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_ChangeEvent(event);
}

void QGraphicsWidget_override_virtual_CloseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__CloseEvent = slot;
}

void QGraphicsWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_CloseEvent(event);
}

void QGraphicsWidget_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__FocusInEvent = slot;
}

void QGraphicsWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_FocusInEvent(event);
}

void QGraphicsWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__FocusNextPrevChild = slot;
}

bool QGraphicsWidget_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_FocusNextPrevChild(next);
}

void QGraphicsWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__FocusOutEvent = slot;
}

void QGraphicsWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_FocusOutEvent(event);
}

void QGraphicsWidget_override_virtual_HideEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__HideEvent = slot;
}

void QGraphicsWidget_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_HideEvent(event);
}

void QGraphicsWidget_override_virtual_MoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__MoveEvent = slot;
}

void QGraphicsWidget_virtualbase_MoveEvent(void* self, QGraphicsSceneMoveEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_MoveEvent(event);
}

void QGraphicsWidget_override_virtual_PolishEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__PolishEvent = slot;
}

void QGraphicsWidget_virtualbase_PolishEvent(void* self) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_PolishEvent();
}

void QGraphicsWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__ResizeEvent = slot;
}

void QGraphicsWidget_virtualbase_ResizeEvent(void* self, QGraphicsSceneResizeEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_ResizeEvent(event);
}

void QGraphicsWidget_override_virtual_ShowEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__ShowEvent = slot;
}

void QGraphicsWidget_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_ShowEvent(event);
}

void QGraphicsWidget_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__HoverMoveEvent = slot;
}

void QGraphicsWidget_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_HoverMoveEvent(event);
}

void QGraphicsWidget_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__HoverLeaveEvent = slot;
}

void QGraphicsWidget_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_HoverLeaveEvent(event);
}

void QGraphicsWidget_override_virtual_GrabMouseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__GrabMouseEvent = slot;
}

void QGraphicsWidget_virtualbase_GrabMouseEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_GrabMouseEvent(event);
}

void QGraphicsWidget_override_virtual_UngrabMouseEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__UngrabMouseEvent = slot;
}

void QGraphicsWidget_virtualbase_UngrabMouseEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_UngrabMouseEvent(event);
}

void QGraphicsWidget_override_virtual_GrabKeyboardEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__GrabKeyboardEvent = slot;
}

void QGraphicsWidget_virtualbase_GrabKeyboardEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_GrabKeyboardEvent(event);
}

void QGraphicsWidget_override_virtual_UngrabKeyboardEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__UngrabKeyboardEvent = slot;
}

void QGraphicsWidget_virtualbase_UngrabKeyboardEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_UngrabKeyboardEvent(event);
}

void QGraphicsWidget_override_virtual_IsEmpty(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) )->handle__IsEmpty = slot;
}

bool QGraphicsWidget_virtualbase_IsEmpty(const void* self) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_IsEmpty();
}

void QGraphicsWidget_Delete(QGraphicsWidget* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGraphicsWidget*>( self );
	} else {
		delete self;
	}
}

