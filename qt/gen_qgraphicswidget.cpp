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

void miqt_exec_callback_QGraphicsWidget_GeometryChanged(intptr_t);
void miqt_exec_callback_QGraphicsWidget_LayoutChanged(intptr_t);
void miqt_exec_callback_QGraphicsWidget_SetGeometry(void*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsWidget_GetContentsMargins(void*, intptr_t, double*, double*, double*, double*);
int miqt_exec_callback_QGraphicsWidget_Type(void*, intptr_t);
void miqt_exec_callback_QGraphicsWidget_Paint(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
void miqt_exec_callback_QGraphicsWidget_PaintWindowFrame(void*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
QRectF* miqt_exec_callback_QGraphicsWidget_BoundingRect(void*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsWidget_Shape(void*, intptr_t);
void miqt_exec_callback_QGraphicsWidget_InitStyleOption(void*, intptr_t, QStyleOption*);
QSizeF* miqt_exec_callback_QGraphicsWidget_SizeHint(void*, intptr_t, int, QSizeF*);
void miqt_exec_callback_QGraphicsWidget_UpdateGeometry(void*, intptr_t);
QVariant* miqt_exec_callback_QGraphicsWidget_ItemChange(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsWidget_PropertyChange(void*, intptr_t, struct miqt_string, QVariant*);
bool miqt_exec_callback_QGraphicsWidget_SceneEvent(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsWidget_WindowFrameEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QGraphicsWidget_WindowFrameSectionAt(void*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsWidget_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_ChangeEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QGraphicsWidget_FocusInEvent(void*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QGraphicsWidget_FocusNextPrevChild(void*, intptr_t, bool);
void miqt_exec_callback_QGraphicsWidget_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsWidget_HideEvent(void*, intptr_t, QHideEvent*);
void miqt_exec_callback_QGraphicsWidget_MoveEvent(void*, intptr_t, QGraphicsSceneMoveEvent*);
void miqt_exec_callback_QGraphicsWidget_PolishEvent(void*, intptr_t);
void miqt_exec_callback_QGraphicsWidget_ResizeEvent(void*, intptr_t, QGraphicsSceneResizeEvent*);
void miqt_exec_callback_QGraphicsWidget_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QGraphicsWidget_HoverMoveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsWidget_HoverLeaveEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsWidget_GrabMouseEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_UngrabMouseEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_GrabKeyboardEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_UngrabKeyboardEvent(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsWidget_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsWidget_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsWidget_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsWidget_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsWidget_DisconnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsWidget_Advance(void*, intptr_t, int);
bool miqt_exec_callback_QGraphicsWidget_Contains(void*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsWidget_CollidesWithItem(void*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsWidget_CollidesWithPath(void*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsWidget_IsObscuredBy(void*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsWidget_OpaqueArea(void*, intptr_t);
bool miqt_exec_callback_QGraphicsWidget_SceneEventFilter(void*, intptr_t, QGraphicsItem*, QEvent*);
void miqt_exec_callback_QGraphicsWidget_ContextMenuEvent(void*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsWidget_DragEnterEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWidget_DragLeaveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWidget_DragMoveEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWidget_DropEvent(void*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWidget_HoverEnterEvent(void*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsWidget_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsWidget_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsWidget_MousePressEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWidget_MouseMoveEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWidget_MouseReleaseEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWidget_MouseDoubleClickEvent(void*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWidget_WheelEvent(void*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsWidget_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsWidget_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QGraphicsWidget_SupportsExtension(void*, intptr_t, int);
void miqt_exec_callback_QGraphicsWidget_SetExtension(void*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsWidget_Extension(void*, intptr_t, QVariant*);
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
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QGraphicsWidget::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QGraphicsWidget::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QGraphicsWidget::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QGraphicsWidget::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QGraphicsWidget::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QGraphicsWidget::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QGraphicsWidget::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QGraphicsWidget::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QGraphicsWidget::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsWidget_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QGraphicsWidget::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QGraphicsWidget::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsWidget_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QGraphicsWidget::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsWidget::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsWidget_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsWidget::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsWidget::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_Contains(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsWidget::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsWidget::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_CollidesWithItem(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsWidget::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsWidget::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_CollidesWithPath(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsWidget::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsWidget::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_IsObscuredBy(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsWidget::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsWidget::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsWidget_OpaqueArea(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsWidget::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsWidget::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsWidget::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsWidget::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsWidget::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsWidget::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsWidget::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsWidget::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsWidget::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsWidget::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsWidget::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QGraphicsWidget::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsWidget::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsWidget::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsWidget::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsWidget::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* event) {

		QGraphicsWidget::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsWidget::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* event) {

		QGraphicsWidget::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsWidget::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsWidget::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsWidget::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsWidget::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsWidget::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsWidget::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsWidget::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsWidget::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QGraphicsWidget::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsWidget::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsWidget::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWidget_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* event) {

		QGraphicsWidget::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsWidget::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWidget_InputMethodQuery(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsWidget::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_SupportsExtension(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsWidget::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsWidget::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsWidget_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsWidget::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsWidget::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWidget_Extension(const_cast<MiqtVirtualQGraphicsWidget*>(this), handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsWidget::extension(*variant));

	}

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

struct miqt_string QGraphicsWidget_TrUtf8(const char* s) {
	QString _ret = QGraphicsWidget::trUtf8(s);
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

struct miqt_string QGraphicsWidget_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWidget_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsWidget::trUtf8(s, c, static_cast<int>(n));
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

bool QGraphicsWidget_override_virtual_SetGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetGeometry = slot;
	return true;
}

void QGraphicsWidget_virtualbase_SetGeometry(void* self, QRectF* rect) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_SetGeometry(rect);
}

bool QGraphicsWidget_override_virtual_GetContentsMargins(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__GetContentsMargins = slot;
	return true;
}

void QGraphicsWidget_virtualbase_GetContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_GetContentsMargins(left, top, right, bottom);
}

bool QGraphicsWidget_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsWidget_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_Type();
}

bool QGraphicsWidget_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

void QGraphicsWidget_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_Paint(painter, option, widget);
}

bool QGraphicsWidget_override_virtual_PaintWindowFrame(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintWindowFrame = slot;
	return true;
}

void QGraphicsWidget_virtualbase_PaintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_PaintWindowFrame(painter, option, widget);
}

bool QGraphicsWidget_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

QRectF* QGraphicsWidget_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_BoundingRect();
}

bool QGraphicsWidget_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsWidget_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_Shape();
}

bool QGraphicsWidget_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QGraphicsWidget_virtualbase_InitStyleOption(const void* self, QStyleOption* option) {
	( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_InitStyleOption(option);
}

bool QGraphicsWidget_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSizeF* QGraphicsWidget_virtualbase_SizeHint(const void* self, int which, QSizeF* constraint) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_SizeHint(which, constraint);
}

bool QGraphicsWidget_override_virtual_UpdateGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateGeometry = slot;
	return true;
}

void QGraphicsWidget_virtualbase_UpdateGeometry(void* self) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_UpdateGeometry();
}

bool QGraphicsWidget_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsWidget_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_ItemChange(change, value);
}

bool QGraphicsWidget_override_virtual_PropertyChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PropertyChange = slot;
	return true;
}

QVariant* QGraphicsWidget_virtualbase_PropertyChange(void* self, struct miqt_string propertyName, QVariant* value) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_PropertyChange(propertyName, value);
}

bool QGraphicsWidget_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_SceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_SceneEvent(event);
}

bool QGraphicsWidget_override_virtual_WindowFrameEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WindowFrameEvent = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_WindowFrameEvent(void* self, QEvent* e) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_WindowFrameEvent(e);
}

bool QGraphicsWidget_override_virtual_WindowFrameSectionAt(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WindowFrameSectionAt = slot;
	return true;
}

int QGraphicsWidget_virtualbase_WindowFrameSectionAt(const void* self, QPointF* pos) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_WindowFrameSectionAt(pos);
}

bool QGraphicsWidget_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_Event(event);
}

bool QGraphicsWidget_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_ChangeEvent(event);
}

bool QGraphicsWidget_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_CloseEvent(event);
}

bool QGraphicsWidget_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_FocusInEvent(event);
}

bool QGraphicsWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QGraphicsWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QGraphicsWidget_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_HideEvent(event);
}

bool QGraphicsWidget_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_MoveEvent(void* self, QGraphicsSceneMoveEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_MoveEvent(event);
}

bool QGraphicsWidget_override_virtual_PolishEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PolishEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_PolishEvent(void* self) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_PolishEvent();
}

bool QGraphicsWidget_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_ResizeEvent(void* self, QGraphicsSceneResizeEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_ResizeEvent(event);
}

bool QGraphicsWidget_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_ShowEvent(event);
}

bool QGraphicsWidget_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_HoverMoveEvent(event);
}

bool QGraphicsWidget_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_HoverLeaveEvent(event);
}

bool QGraphicsWidget_override_virtual_GrabMouseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__GrabMouseEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_GrabMouseEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_GrabMouseEvent(event);
}

bool QGraphicsWidget_override_virtual_UngrabMouseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UngrabMouseEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_UngrabMouseEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_UngrabMouseEvent(event);
}

bool QGraphicsWidget_override_virtual_GrabKeyboardEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__GrabKeyboardEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_GrabKeyboardEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_GrabKeyboardEvent(event);
}

bool QGraphicsWidget_override_virtual_UngrabKeyboardEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UngrabKeyboardEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_UngrabKeyboardEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_UngrabKeyboardEvent(event);
}

bool QGraphicsWidget_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QGraphicsWidget_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_TimerEvent(event);
}

bool QGraphicsWidget_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_ChildEvent(event);
}

bool QGraphicsWidget_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_CustomEvent(event);
}

bool QGraphicsWidget_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QGraphicsWidget_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QGraphicsWidget_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QGraphicsWidget_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_DisconnectNotify(signal);
}

bool QGraphicsWidget_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QGraphicsWidget_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_Advance(phase);
}

bool QGraphicsWidget_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_Contains(point);
}

bool QGraphicsWidget_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QGraphicsWidget_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QGraphicsWidget_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QGraphicsWidget_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsWidget_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_OpaqueArea();
}

bool QGraphicsWidget_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QGraphicsWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QGraphicsWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QGraphicsWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QGraphicsWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QGraphicsWidget_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_DropEvent(event);
}

bool QGraphicsWidget_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_KeyPressEvent(event);
}

bool QGraphicsWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_KeyReleaseEvent(event);
}

bool QGraphicsWidget_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_MousePressEvent(event);
}

bool QGraphicsWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QGraphicsWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QGraphicsWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QGraphicsWidget_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_WheelEvent(event);
}

bool QGraphicsWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_InputMethodEvent(event);
}

bool QGraphicsWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsWidget_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsWidget_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QGraphicsWidget_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QGraphicsWidget_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QGraphicsWidget_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QGraphicsWidget_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QGraphicsWidget_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsWidget*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsWidget_Delete(QGraphicsWidget* self) {
	delete self;
}

