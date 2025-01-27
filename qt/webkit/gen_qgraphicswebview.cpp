#include <QAction>
#include <QByteArray>
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
#include <QGraphicsWebView>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkRequest>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
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
#include <QUrl>
#include <QVariant>
#include <QWebHistory>
#include <QWebPage>
#include <QWebSettings>
#include <QWidget>
#include <qgraphicswebview.h>
#include "gen_qgraphicswebview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGraphicsWebView_LoadStarted(intptr_t);
void miqt_exec_callback_QGraphicsWebView_LoadFinished(intptr_t, bool);
void miqt_exec_callback_QGraphicsWebView_LoadProgress(intptr_t, int);
void miqt_exec_callback_QGraphicsWebView_UrlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QGraphicsWebView_TitleChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QGraphicsWebView_IconChanged(intptr_t);
void miqt_exec_callback_QGraphicsWebView_StatusBarMessage(intptr_t, struct miqt_string);
void miqt_exec_callback_QGraphicsWebView_LinkClicked(intptr_t, QUrl*);
void miqt_exec_callback_QGraphicsWebView_SetGeometry(QGraphicsWebView*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsWebView_UpdateGeometry(QGraphicsWebView*, intptr_t);
void miqt_exec_callback_QGraphicsWebView_Paint(QGraphicsWebView*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
QVariant* miqt_exec_callback_QGraphicsWebView_ItemChange(QGraphicsWebView*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsWebView_Event(QGraphicsWebView*, intptr_t, QEvent*);
QSizeF* miqt_exec_callback_QGraphicsWebView_SizeHint(const QGraphicsWebView*, intptr_t, int, QSizeF*);
QVariant* miqt_exec_callback_QGraphicsWebView_InputMethodQuery(const QGraphicsWebView*, intptr_t, int);
void miqt_exec_callback_QGraphicsWebView_MousePressEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWebView_MouseDoubleClickEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWebView_MouseReleaseEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWebView_MouseMoveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWebView_HoverMoveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsWebView_HoverLeaveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsWebView_WheelEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsWebView_KeyPressEvent(QGraphicsWebView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsWebView_KeyReleaseEvent(QGraphicsWebView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsWebView_ContextMenuEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsWebView_DragEnterEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWebView_DragLeaveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWebView_DragMoveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWebView_DropEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWebView_FocusInEvent(QGraphicsWebView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsWebView_FocusOutEvent(QGraphicsWebView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsWebView_InputMethodEvent(QGraphicsWebView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QGraphicsWebView_FocusNextPrevChild(QGraphicsWebView*, intptr_t, bool);
bool miqt_exec_callback_QGraphicsWebView_SceneEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_GetContentsMargins(const QGraphicsWebView*, intptr_t, double*, double*, double*, double*);
int miqt_exec_callback_QGraphicsWebView_Type(const QGraphicsWebView*, intptr_t);
void miqt_exec_callback_QGraphicsWebView_PaintWindowFrame(QGraphicsWebView*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
QRectF* miqt_exec_callback_QGraphicsWebView_BoundingRect(const QGraphicsWebView*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsWebView_Shape(const QGraphicsWebView*, intptr_t);
void miqt_exec_callback_QGraphicsWebView_InitStyleOption(const QGraphicsWebView*, intptr_t, QStyleOption*);
QVariant* miqt_exec_callback_QGraphicsWebView_PropertyChange(QGraphicsWebView*, intptr_t, struct miqt_string, QVariant*);
bool miqt_exec_callback_QGraphicsWebView_WindowFrameEvent(QGraphicsWebView*, intptr_t, QEvent*);
int miqt_exec_callback_QGraphicsWebView_WindowFrameSectionAt(const QGraphicsWebView*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsWebView_ChangeEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_CloseEvent(QGraphicsWebView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QGraphicsWebView_HideEvent(QGraphicsWebView*, intptr_t, QHideEvent*);
void miqt_exec_callback_QGraphicsWebView_MoveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneMoveEvent*);
void miqt_exec_callback_QGraphicsWebView_PolishEvent(QGraphicsWebView*, intptr_t);
void miqt_exec_callback_QGraphicsWebView_ResizeEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneResizeEvent*);
void miqt_exec_callback_QGraphicsWebView_ShowEvent(QGraphicsWebView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QGraphicsWebView_GrabMouseEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_UngrabMouseEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_GrabKeyboardEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_UngrabKeyboardEvent(QGraphicsWebView*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsWebView_EventFilter(QGraphicsWebView*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsWebView_TimerEvent(QGraphicsWebView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsWebView_ChildEvent(QGraphicsWebView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsWebView_CustomEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_ConnectNotify(QGraphicsWebView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsWebView_DisconnectNotify(QGraphicsWebView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsWebView_Advance(QGraphicsWebView*, intptr_t, int);
bool miqt_exec_callback_QGraphicsWebView_Contains(const QGraphicsWebView*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsWebView_CollidesWithItem(const QGraphicsWebView*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsWebView_CollidesWithPath(const QGraphicsWebView*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsWebView_IsObscuredBy(const QGraphicsWebView*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsWebView_OpaqueArea(const QGraphicsWebView*, intptr_t);
bool miqt_exec_callback_QGraphicsWebView_SceneEventFilter(QGraphicsWebView*, intptr_t, QGraphicsItem*, QEvent*);
void miqt_exec_callback_QGraphicsWebView_HoverEnterEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneHoverEvent*);
bool miqt_exec_callback_QGraphicsWebView_SupportsExtension(const QGraphicsWebView*, intptr_t, int);
void miqt_exec_callback_QGraphicsWebView_SetExtension(QGraphicsWebView*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsWebView_Extension(const QGraphicsWebView*, intptr_t, QVariant*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsWebView final : public QGraphicsWebView {
public:

	MiqtVirtualQGraphicsWebView(): QGraphicsWebView() {};
	MiqtVirtualQGraphicsWebView(QGraphicsItem* parent): QGraphicsWebView(parent) {};

	virtual ~MiqtVirtualQGraphicsWebView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__SetGeometry == 0) {
			QGraphicsWebView::setGeometry(rect);
			return;
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsWebView_SetGeometry(this, handle__SetGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetGeometry(QRectF* rect) {

		QGraphicsWebView::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (handle__UpdateGeometry == 0) {
			QGraphicsWebView::updateGeometry();
			return;
		}
		

		miqt_exec_callback_QGraphicsWebView_UpdateGeometry(this, handle__UpdateGeometry);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateGeometry() {

		QGraphicsWebView::updateGeometry();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* param1, const QStyleOptionGraphicsItem* options, QWidget* widget) override {
		if (handle__Paint == 0) {
			QGraphicsWebView::paint(param1, options, widget);
			return;
		}
		
		QPainter* sigval1 = param1;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) options;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsWebView_Paint(this, handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* param1, QStyleOptionGraphicsItem* options, QWidget* widget) {

		QGraphicsWebView::paint(param1, options, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__ItemChange == 0) {
			return QGraphicsWebView::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWebView_ItemChange(this, handle__ItemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_ItemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsWebView::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QGraphicsWebView::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QGraphicsWebView::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__SizeHint == 0) {
			return QGraphicsWebView::sizeHint(which, constraint);
		}
		
		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);

		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsWebView_SizeHint(this, handle__SizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSizeF* virtualbase_SizeHint(int which, QSizeF* constraint) const {

		return new QSizeF(QGraphicsWebView::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__InputMethodQuery == 0) {
			return QGraphicsWebView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWebView_InputMethodQuery(this, handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int query) const {

		return new QVariant(QGraphicsWebView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* param1) override {
		if (handle__MousePressEvent == 0) {
			QGraphicsWebView::mousePressEvent(param1);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QGraphicsSceneMouseEvent* param1) {

		QGraphicsWebView::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* param1) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QGraphicsWebView::mouseDoubleClickEvent(param1);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QGraphicsSceneMouseEvent* param1) {

		QGraphicsWebView::mouseDoubleClickEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* param1) override {
		if (handle__MouseReleaseEvent == 0) {
			QGraphicsWebView::mouseReleaseEvent(param1);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QGraphicsSceneMouseEvent* param1) {

		QGraphicsWebView::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* param1) override {
		if (handle__MouseMoveEvent == 0) {
			QGraphicsWebView::mouseMoveEvent(param1);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QGraphicsSceneMouseEvent* param1) {

		QGraphicsWebView::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* param1) override {
		if (handle__HoverMoveEvent == 0) {
			QGraphicsWebView::hoverMoveEvent(param1);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_HoverMoveEvent(this, handle__HoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverMoveEvent(QGraphicsSceneHoverEvent* param1) {

		QGraphicsWebView::hoverMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* param1) override {
		if (handle__HoverLeaveEvent == 0) {
			QGraphicsWebView::hoverLeaveEvent(param1);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_HoverLeaveEvent(this, handle__HoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverLeaveEvent(QGraphicsSceneHoverEvent* param1) {

		QGraphicsWebView::hoverLeaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* param1) override {
		if (handle__WheelEvent == 0) {
			QGraphicsWebView::wheelEvent(param1);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QGraphicsSceneWheelEvent* param1) {

		QGraphicsWebView::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QGraphicsWebView::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QGraphicsWebView::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (handle__KeyReleaseEvent == 0) {
			QGraphicsWebView::keyReleaseEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* param1) {

		QGraphicsWebView::keyReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* param1) override {
		if (handle__ContextMenuEvent == 0) {
			QGraphicsWebView::contextMenuEvent(param1);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QGraphicsSceneContextMenuEvent* param1) {

		QGraphicsWebView::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* param1) override {
		if (handle__DragEnterEvent == 0) {
			QGraphicsWebView::dragEnterEvent(param1);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QGraphicsSceneDragDropEvent* param1) {

		QGraphicsWebView::dragEnterEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* param1) override {
		if (handle__DragLeaveEvent == 0) {
			QGraphicsWebView::dragLeaveEvent(param1);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QGraphicsSceneDragDropEvent* param1) {

		QGraphicsWebView::dragLeaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* param1) override {
		if (handle__DragMoveEvent == 0) {
			QGraphicsWebView::dragMoveEvent(param1);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QGraphicsSceneDragDropEvent* param1) {

		QGraphicsWebView::dragMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* param1) override {
		if (handle__DropEvent == 0) {
			QGraphicsWebView::dropEvent(param1);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QGraphicsSceneDragDropEvent* param1) {

		QGraphicsWebView::dropEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__FocusInEvent == 0) {
			QGraphicsWebView::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* param1) {

		QGraphicsWebView::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__FocusOutEvent == 0) {
			QGraphicsWebView::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* param1) {

		QGraphicsWebView::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QGraphicsWebView::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QGraphicsWebView::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QGraphicsWebView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QGraphicsWebView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* param1) override {
		if (handle__SceneEvent == 0) {
			return QGraphicsWebView::sceneEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_SceneEvent(this, handle__SceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEvent(QEvent* param1) {

		return QGraphicsWebView::sceneEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GetContentsMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (handle__GetContentsMargins == 0) {
			QGraphicsWebView::getContentsMargins(left, top, right, bottom);
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

		miqt_exec_callback_QGraphicsWebView_GetContentsMargins(this, handle__GetContentsMargins, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_GetContentsMargins(double* left, double* top, double* right, double* bottom) const {

		QGraphicsWebView::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__Type == 0) {
			return QGraphicsWebView::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsWebView_Type(this, handle__Type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Type() const {

		return QGraphicsWebView::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintWindowFrame = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__PaintWindowFrame == 0) {
			QGraphicsWebView::paintWindowFrame(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsWebView_PaintWindowFrame(this, handle__PaintWindowFrame, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintWindowFrame(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsWebView::paintWindowFrame(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__BoundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__BoundingRect == 0) {
			return QGraphicsWebView::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsWebView_BoundingRect(this, handle__BoundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_BoundingRect() const {

		return new QRectF(QGraphicsWebView::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__Shape == 0) {
			return QGraphicsWebView::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsWebView_Shape(this, handle__Shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_Shape() const {

		return new QPainterPath(QGraphicsWebView::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOption* option) const override {
		if (handle__InitStyleOption == 0) {
			QGraphicsWebView::initStyleOption(option);
			return;
		}
		
		QStyleOption* sigval1 = option;

		miqt_exec_callback_QGraphicsWebView_InitStyleOption(this, handle__InitStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitStyleOption(QStyleOption* option) const {

		QGraphicsWebView::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PropertyChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
		if (handle__PropertyChange == 0) {
			return QGraphicsWebView::propertyChange(propertyName, value);
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

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWebView_PropertyChange(this, handle__PropertyChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_PropertyChange(struct miqt_string propertyName, QVariant* value) {
		QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);

		return new QVariant(QGraphicsWebView::propertyChange(propertyName_QString, *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WindowFrameEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool windowFrameEvent(QEvent* e) override {
		if (handle__WindowFrameEvent == 0) {
			return QGraphicsWebView::windowFrameEvent(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_WindowFrameEvent(this, handle__WindowFrameEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_WindowFrameEvent(QEvent* e) {

		return QGraphicsWebView::windowFrameEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WindowFrameSectionAt = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
		if (handle__WindowFrameSectionAt == 0) {
			return QGraphicsWebView::windowFrameSectionAt(pos);
		}
		
		const QPointF& pos_ret = pos;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&pos_ret);

		int callback_return_value = miqt_exec_callback_QGraphicsWebView_WindowFrameSectionAt(this, handle__WindowFrameSectionAt, sigval1);

		return static_cast<Qt::WindowFrameSection>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_WindowFrameSectionAt(QPointF* pos) const {

		Qt::WindowFrameSection _ret = QGraphicsWebView::windowFrameSectionAt(*pos);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__ChangeEvent == 0) {
			QGraphicsWebView::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* event) {

		QGraphicsWebView::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QGraphicsWebView::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QGraphicsWebView::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QGraphicsWebView::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QGraphicsWebView::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QGraphicsWebView::moveEvent(event);
			return;
		}
		
		QGraphicsSceneMoveEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QGraphicsSceneMoveEvent* event) {

		QGraphicsWebView::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PolishEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void polishEvent() override {
		if (handle__PolishEvent == 0) {
			QGraphicsWebView::polishEvent();
			return;
		}
		

		miqt_exec_callback_QGraphicsWebView_PolishEvent(this, handle__PolishEvent);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PolishEvent() {

		QGraphicsWebView::polishEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QGraphicsWebView::resizeEvent(event);
			return;
		}
		
		QGraphicsSceneResizeEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QGraphicsSceneResizeEvent* event) {

		QGraphicsWebView::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QGraphicsWebView::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QGraphicsWebView::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GrabMouseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void grabMouseEvent(QEvent* event) override {
		if (handle__GrabMouseEvent == 0) {
			QGraphicsWebView::grabMouseEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_GrabMouseEvent(this, handle__GrabMouseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_GrabMouseEvent(QEvent* event) {

		QGraphicsWebView::grabMouseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UngrabMouseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void ungrabMouseEvent(QEvent* event) override {
		if (handle__UngrabMouseEvent == 0) {
			QGraphicsWebView::ungrabMouseEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_UngrabMouseEvent(this, handle__UngrabMouseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UngrabMouseEvent(QEvent* event) {

		QGraphicsWebView::ungrabMouseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__GrabKeyboardEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void grabKeyboardEvent(QEvent* event) override {
		if (handle__GrabKeyboardEvent == 0) {
			QGraphicsWebView::grabKeyboardEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_GrabKeyboardEvent(this, handle__GrabKeyboardEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_GrabKeyboardEvent(QEvent* event) {

		QGraphicsWebView::grabKeyboardEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UngrabKeyboardEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void ungrabKeyboardEvent(QEvent* event) override {
		if (handle__UngrabKeyboardEvent == 0) {
			QGraphicsWebView::ungrabKeyboardEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_UngrabKeyboardEvent(this, handle__UngrabKeyboardEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UngrabKeyboardEvent(QEvent* event) {

		QGraphicsWebView::ungrabKeyboardEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QGraphicsWebView::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QGraphicsWebView::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QGraphicsWebView::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QGraphicsWebView::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QGraphicsWebView::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QGraphicsWebView::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QGraphicsWebView::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QGraphicsWebView::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QGraphicsWebView::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsWebView_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QGraphicsWebView::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QGraphicsWebView::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsWebView_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QGraphicsWebView::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__Advance == 0) {
			QGraphicsWebView::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsWebView_Advance(this, handle__Advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Advance(int phase) {

		QGraphicsWebView::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__Contains == 0) {
			return QGraphicsWebView::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_Contains(this, handle__Contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Contains(QPointF* point) const {

		return QGraphicsWebView::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithItem == 0) {
			return QGraphicsWebView::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_CollidesWithItem(this, handle__CollidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsWebView::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CollidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__CollidesWithPath == 0) {
			return QGraphicsWebView::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_CollidesWithPath(this, handle__CollidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CollidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsWebView::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__IsObscuredBy == 0) {
			return QGraphicsWebView::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_IsObscuredBy(this, handle__IsObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsObscuredBy(QGraphicsItem* item) const {

		return QGraphicsWebView::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__OpaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__OpaqueArea == 0) {
			return QGraphicsWebView::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsWebView_OpaqueArea(this, handle__OpaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_OpaqueArea() const {

		return new QPainterPath(QGraphicsWebView::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__SceneEventFilter == 0) {
			return QGraphicsWebView::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_SceneEventFilter(this, handle__SceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsWebView::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__HoverEnterEvent == 0) {
			QGraphicsWebView::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_HoverEnterEvent(this, handle__HoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsWebView::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__SupportsExtension == 0) {
			return QGraphicsWebView::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_SupportsExtension(this, handle__SupportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SupportsExtension(int extension) const {

		return QGraphicsWebView::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__SetExtension == 0) {
			QGraphicsWebView::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsWebView_SetExtension(this, handle__SetExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetExtension(int extension, QVariant* variant) {

		QGraphicsWebView::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__Extension == 0) {
			return QGraphicsWebView::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWebView_Extension(this, handle__Extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Extension(QVariant* variant) const {

		return new QVariant(QGraphicsWebView::extension(*variant));

	}

};

QGraphicsWebView* QGraphicsWebView_new() {
	return new MiqtVirtualQGraphicsWebView();
}

QGraphicsWebView* QGraphicsWebView_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsWebView(parent);
}

void QGraphicsWebView_virtbase(QGraphicsWebView* src, QGraphicsWidget** outptr_QGraphicsWidget) {
	*outptr_QGraphicsWidget = static_cast<QGraphicsWidget*>(src);
}

QMetaObject* QGraphicsWebView_MetaObject(const QGraphicsWebView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsWebView_Metacast(QGraphicsWebView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsWebView_Tr(const char* s) {
	QString _ret = QGraphicsWebView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWebView_TrUtf8(const char* s) {
	QString _ret = QGraphicsWebView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebPage* QGraphicsWebView_Page(const QGraphicsWebView* self) {
	return self->page();
}

void QGraphicsWebView_SetPage(QGraphicsWebView* self, QWebPage* page) {
	self->setPage(page);
}

QUrl* QGraphicsWebView_Url(const QGraphicsWebView* self) {
	return new QUrl(self->url());
}

void QGraphicsWebView_SetUrl(QGraphicsWebView* self, QUrl* url) {
	self->setUrl(*url);
}

struct miqt_string QGraphicsWebView_Title(const QGraphicsWebView* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIcon* QGraphicsWebView_Icon(const QGraphicsWebView* self) {
	return new QIcon(self->icon());
}

double QGraphicsWebView_ZoomFactor(const QGraphicsWebView* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

void QGraphicsWebView_SetZoomFactor(QGraphicsWebView* self, double zoomFactor) {
	self->setZoomFactor(static_cast<qreal>(zoomFactor));
}

bool QGraphicsWebView_IsModified(const QGraphicsWebView* self) {
	return self->isModified();
}

void QGraphicsWebView_Load(QGraphicsWebView* self, QUrl* url) {
	self->load(*url);
}

void QGraphicsWebView_LoadWithRequest(QGraphicsWebView* self, QNetworkRequest* request) {
	self->load(*request);
}

void QGraphicsWebView_SetHtml(QGraphicsWebView* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

void QGraphicsWebView_SetContent(QGraphicsWebView* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->setContent(data_QByteArray);
}

QWebHistory* QGraphicsWebView_History(const QGraphicsWebView* self) {
	return self->history();
}

QWebSettings* QGraphicsWebView_Settings(const QGraphicsWebView* self) {
	return self->settings();
}

QAction* QGraphicsWebView_PageAction(const QGraphicsWebView* self, int action) {
	return self->pageAction(static_cast<QWebPage::WebAction>(action));
}

void QGraphicsWebView_TriggerPageAction(QGraphicsWebView* self, int action) {
	self->triggerPageAction(static_cast<QWebPage::WebAction>(action));
}

bool QGraphicsWebView_FindText(QGraphicsWebView* self, struct miqt_string subString) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return self->findText(subString_QString);
}

bool QGraphicsWebView_ResizesToContents(const QGraphicsWebView* self) {
	return self->resizesToContents();
}

void QGraphicsWebView_SetResizesToContents(QGraphicsWebView* self, bool enabled) {
	self->setResizesToContents(enabled);
}

bool QGraphicsWebView_IsTiledBackingStoreFrozen(const QGraphicsWebView* self) {
	return self->isTiledBackingStoreFrozen();
}

void QGraphicsWebView_SetTiledBackingStoreFrozen(QGraphicsWebView* self, bool frozen) {
	self->setTiledBackingStoreFrozen(frozen);
}

void QGraphicsWebView_SetGeometry(QGraphicsWebView* self, QRectF* rect) {
	self->setGeometry(*rect);
}

void QGraphicsWebView_UpdateGeometry(QGraphicsWebView* self) {
	self->updateGeometry();
}

void QGraphicsWebView_Paint(QGraphicsWebView* self, QPainter* param1, QStyleOptionGraphicsItem* options, QWidget* widget) {
	self->paint(param1, options, widget);
}

QVariant* QGraphicsWebView_ItemChange(QGraphicsWebView* self, int change, QVariant* value) {
	return new QVariant(self->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

bool QGraphicsWebView_Event(QGraphicsWebView* self, QEvent* param1) {
	return self->event(param1);
}

QSizeF* QGraphicsWebView_SizeHint(const QGraphicsWebView* self, int which, QSizeF* constraint) {
	return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

QVariant* QGraphicsWebView_InputMethodQuery(const QGraphicsWebView* self, int query) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

int QGraphicsWebView_RenderHints(const QGraphicsWebView* self) {
	QPainter::RenderHints _ret = self->renderHints();
	return static_cast<int>(_ret);
}

void QGraphicsWebView_SetRenderHints(QGraphicsWebView* self, int renderHints) {
	self->setRenderHints(static_cast<QPainter::RenderHints>(renderHints));
}

void QGraphicsWebView_SetRenderHint(QGraphicsWebView* self, int param1) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(param1));
}

void QGraphicsWebView_Stop(QGraphicsWebView* self) {
	self->stop();
}

void QGraphicsWebView_Back(QGraphicsWebView* self) {
	self->back();
}

void QGraphicsWebView_Forward(QGraphicsWebView* self) {
	self->forward();
}

void QGraphicsWebView_Reload(QGraphicsWebView* self) {
	self->reload();
}

void QGraphicsWebView_LoadStarted(QGraphicsWebView* self) {
	self->loadStarted();
}

void QGraphicsWebView_connect_LoadStarted(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)()>(&QGraphicsWebView::loadStarted), self, [=]() {
		miqt_exec_callback_QGraphicsWebView_LoadStarted(slot);
	});
}

void QGraphicsWebView_LoadFinished(QGraphicsWebView* self, bool param1) {
	self->loadFinished(param1);
}

void QGraphicsWebView_connect_LoadFinished(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(bool)>(&QGraphicsWebView::loadFinished), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_LoadFinished(slot, sigval1);
	});
}

void QGraphicsWebView_LoadProgress(QGraphicsWebView* self, int progress) {
	self->loadProgress(static_cast<int>(progress));
}

void QGraphicsWebView_connect_LoadProgress(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(int)>(&QGraphicsWebView::loadProgress), self, [=](int progress) {
		int sigval1 = progress;
		miqt_exec_callback_QGraphicsWebView_LoadProgress(slot, sigval1);
	});
}

void QGraphicsWebView_UrlChanged(QGraphicsWebView* self, QUrl* param1) {
	self->urlChanged(*param1);
}

void QGraphicsWebView_connect_UrlChanged(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(const QUrl&)>(&QGraphicsWebView::urlChanged), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QGraphicsWebView_UrlChanged(slot, sigval1);
	});
}

void QGraphicsWebView_TitleChanged(QGraphicsWebView* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->titleChanged(param1_QString);
}

void QGraphicsWebView_connect_TitleChanged(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(const QString&)>(&QGraphicsWebView::titleChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QGraphicsWebView_TitleChanged(slot, sigval1);
	});
}

void QGraphicsWebView_IconChanged(QGraphicsWebView* self) {
	self->iconChanged();
}

void QGraphicsWebView_connect_IconChanged(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)()>(&QGraphicsWebView::iconChanged), self, [=]() {
		miqt_exec_callback_QGraphicsWebView_IconChanged(slot);
	});
}

void QGraphicsWebView_StatusBarMessage(QGraphicsWebView* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->statusBarMessage(message_QString);
}

void QGraphicsWebView_connect_StatusBarMessage(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(const QString&)>(&QGraphicsWebView::statusBarMessage), self, [=](const QString& message) {
		const QString message_ret = message;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray message_b = message_ret.toUtf8();
		struct miqt_string message_ms;
		message_ms.len = message_b.length();
		message_ms.data = static_cast<char*>(malloc(message_ms.len));
		memcpy(message_ms.data, message_b.data(), message_ms.len);
		struct miqt_string sigval1 = message_ms;
		miqt_exec_callback_QGraphicsWebView_StatusBarMessage(slot, sigval1);
	});
}

void QGraphicsWebView_LinkClicked(QGraphicsWebView* self, QUrl* param1) {
	self->linkClicked(*param1);
}

void QGraphicsWebView_connect_LinkClicked(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(const QUrl&)>(&QGraphicsWebView::linkClicked), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QGraphicsWebView_LinkClicked(slot, sigval1);
	});
}

struct miqt_string QGraphicsWebView_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsWebView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWebView_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsWebView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWebView_TrUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsWebView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWebView_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsWebView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsWebView_Load2(QGraphicsWebView* self, QNetworkRequest* request, int operation) {
	self->load(*request, static_cast<QNetworkAccessManager::Operation>(operation));
}

void QGraphicsWebView_Load3(QGraphicsWebView* self, QNetworkRequest* request, int operation, struct miqt_string body) {
	QByteArray body_QByteArray(body.data, body.len);
	self->load(*request, static_cast<QNetworkAccessManager::Operation>(operation), body_QByteArray);
}

void QGraphicsWebView_SetHtml2(QGraphicsWebView* self, struct miqt_string html, QUrl* baseUrl) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString, *baseUrl);
}

void QGraphicsWebView_SetContent2(QGraphicsWebView* self, struct miqt_string data, struct miqt_string mimeType) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString);
}

void QGraphicsWebView_SetContent3(QGraphicsWebView* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString, *baseUrl);
}

void QGraphicsWebView_TriggerPageAction2(QGraphicsWebView* self, int action, bool checked) {
	self->triggerPageAction(static_cast<QWebPage::WebAction>(action), checked);
}

bool QGraphicsWebView_FindText2(QGraphicsWebView* self, struct miqt_string subString, int options) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return self->findText(subString_QString, static_cast<QWebPage::FindFlags>(options));
}

void QGraphicsWebView_SetRenderHint2(QGraphicsWebView* self, int param1, bool enabled) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(param1), enabled);
}

bool QGraphicsWebView_override_virtual_SetGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetGeometry = slot;
	return true;
}

void QGraphicsWebView_virtualbase_SetGeometry(void* self, QRectF* rect) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_SetGeometry(rect);
}

bool QGraphicsWebView_override_virtual_UpdateGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UpdateGeometry = slot;
	return true;
}

void QGraphicsWebView_virtualbase_UpdateGeometry(void* self) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_UpdateGeometry();
}

bool QGraphicsWebView_override_virtual_Paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Paint = slot;
	return true;
}

void QGraphicsWebView_virtualbase_Paint(void* self, QPainter* param1, QStyleOptionGraphicsItem* options, QWidget* widget) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_Paint(param1, options, widget);
}

bool QGraphicsWebView_override_virtual_ItemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemChange = slot;
	return true;
}

QVariant* QGraphicsWebView_virtualbase_ItemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_ItemChange(change, value);
}

bool QGraphicsWebView_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_Event(param1);
}

bool QGraphicsWebView_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSizeF* QGraphicsWebView_virtualbase_SizeHint(const void* self, int which, QSizeF* constraint) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_SizeHint(which, constraint);
}

bool QGraphicsWebView_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsWebView_virtualbase_InputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_InputMethodQuery(query);
}

bool QGraphicsWebView_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_MousePressEvent(param1);
}

bool QGraphicsWebView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_MouseDoubleClickEvent(param1);
}

bool QGraphicsWebView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_MouseReleaseEvent(param1);
}

bool QGraphicsWebView_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_MouseMoveEvent(param1);
}

bool QGraphicsWebView_override_virtual_HoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverMoveEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_HoverMoveEvent(param1);
}

bool QGraphicsWebView_override_virtual_HoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverLeaveEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_HoverLeaveEvent(param1);
}

bool QGraphicsWebView_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_WheelEvent(param1);
}

bool QGraphicsWebView_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QGraphicsWebView_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_KeyReleaseEvent(param1);
}

bool QGraphicsWebView_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_ContextMenuEvent(param1);
}

bool QGraphicsWebView_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_DragEnterEvent(param1);
}

bool QGraphicsWebView_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_DragLeaveEvent(param1);
}

bool QGraphicsWebView_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_DragMoveEvent(param1);
}

bool QGraphicsWebView_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_DropEvent(param1);
}

bool QGraphicsWebView_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_FocusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_FocusInEvent(param1);
}

bool QGraphicsWebView_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_FocusOutEvent(param1);
}

bool QGraphicsWebView_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QGraphicsWebView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QGraphicsWebView_override_virtual_SceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEvent = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_SceneEvent(void* self, QEvent* param1) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_SceneEvent(param1);
}

bool QGraphicsWebView_override_virtual_GetContentsMargins(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__GetContentsMargins = slot;
	return true;
}

void QGraphicsWebView_virtualbase_GetContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_GetContentsMargins(left, top, right, bottom);
}

bool QGraphicsWebView_override_virtual_Type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Type = slot;
	return true;
}

int QGraphicsWebView_virtualbase_Type(const void* self) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_Type();
}

bool QGraphicsWebView_override_virtual_PaintWindowFrame(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintWindowFrame = slot;
	return true;
}

void QGraphicsWebView_virtualbase_PaintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_PaintWindowFrame(painter, option, widget);
}

bool QGraphicsWebView_override_virtual_BoundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__BoundingRect = slot;
	return true;
}

QRectF* QGraphicsWebView_virtualbase_BoundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_BoundingRect();
}

bool QGraphicsWebView_override_virtual_Shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Shape = slot;
	return true;
}

QPainterPath* QGraphicsWebView_virtualbase_Shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_Shape();
}

bool QGraphicsWebView_override_virtual_InitStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitStyleOption = slot;
	return true;
}

void QGraphicsWebView_virtualbase_InitStyleOption(const void* self, QStyleOption* option) {
	( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_InitStyleOption(option);
}

bool QGraphicsWebView_override_virtual_PropertyChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PropertyChange = slot;
	return true;
}

QVariant* QGraphicsWebView_virtualbase_PropertyChange(void* self, struct miqt_string propertyName, QVariant* value) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_PropertyChange(propertyName, value);
}

bool QGraphicsWebView_override_virtual_WindowFrameEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WindowFrameEvent = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_WindowFrameEvent(void* self, QEvent* e) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_WindowFrameEvent(e);
}

bool QGraphicsWebView_override_virtual_WindowFrameSectionAt(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WindowFrameSectionAt = slot;
	return true;
}

int QGraphicsWebView_virtualbase_WindowFrameSectionAt(const void* self, QPointF* pos) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_WindowFrameSectionAt(pos);
}

bool QGraphicsWebView_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_ChangeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_ChangeEvent(event);
}

bool QGraphicsWebView_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_CloseEvent(event);
}

bool QGraphicsWebView_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_HideEvent(event);
}

bool QGraphicsWebView_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_MoveEvent(void* self, QGraphicsSceneMoveEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_MoveEvent(event);
}

bool QGraphicsWebView_override_virtual_PolishEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PolishEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_PolishEvent(void* self) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_PolishEvent();
}

bool QGraphicsWebView_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_ResizeEvent(void* self, QGraphicsSceneResizeEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_ResizeEvent(event);
}

bool QGraphicsWebView_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_ShowEvent(event);
}

bool QGraphicsWebView_override_virtual_GrabMouseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__GrabMouseEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_GrabMouseEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_GrabMouseEvent(event);
}

bool QGraphicsWebView_override_virtual_UngrabMouseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UngrabMouseEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_UngrabMouseEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_UngrabMouseEvent(event);
}

bool QGraphicsWebView_override_virtual_GrabKeyboardEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__GrabKeyboardEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_GrabKeyboardEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_GrabKeyboardEvent(event);
}

bool QGraphicsWebView_override_virtual_UngrabKeyboardEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__UngrabKeyboardEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_UngrabKeyboardEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_UngrabKeyboardEvent(event);
}

bool QGraphicsWebView_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QGraphicsWebView_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_TimerEvent(event);
}

bool QGraphicsWebView_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_ChildEvent(event);
}

bool QGraphicsWebView_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_CustomEvent(event);
}

bool QGraphicsWebView_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QGraphicsWebView_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QGraphicsWebView_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QGraphicsWebView_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_DisconnectNotify(signal);
}

bool QGraphicsWebView_override_virtual_Advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Advance = slot;
	return true;
}

void QGraphicsWebView_virtualbase_Advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_Advance(phase);
}

bool QGraphicsWebView_override_virtual_Contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Contains = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_Contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_Contains(point);
}

bool QGraphicsWebView_override_virtual_CollidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithItem = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_CollidesWithItem(other, mode);
}

bool QGraphicsWebView_override_virtual_CollidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CollidesWithPath = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_CollidesWithPath(path, mode);
}

bool QGraphicsWebView_override_virtual_IsObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsObscuredBy = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_IsObscuredBy(item);
}

bool QGraphicsWebView_override_virtual_OpaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__OpaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsWebView_virtualbase_OpaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_OpaqueArea();
}

bool QGraphicsWebView_override_virtual_SceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SceneEventFilter = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_SceneEventFilter(watched, event);
}

bool QGraphicsWebView_override_virtual_HoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HoverEnterEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_HoverEnterEvent(event);
}

bool QGraphicsWebView_override_virtual_SupportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportsExtension = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_SupportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_SupportsExtension(extension);
}

bool QGraphicsWebView_override_virtual_SetExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetExtension = slot;
	return true;
}

void QGraphicsWebView_virtualbase_SetExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_SetExtension(extension, variant);
}

bool QGraphicsWebView_override_virtual_Extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Extension = slot;
	return true;
}

QVariant* QGraphicsWebView_virtualbase_Extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_Extension(variant);
}

void QGraphicsWebView_Delete(QGraphicsWebView* self) {
	delete self;
}

