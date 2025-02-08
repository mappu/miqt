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

void miqt_exec_callback_QGraphicsWebView_loadStarted(intptr_t);
void miqt_exec_callback_QGraphicsWebView_loadFinished(intptr_t, bool);
void miqt_exec_callback_QGraphicsWebView_loadProgress(intptr_t, int);
void miqt_exec_callback_QGraphicsWebView_urlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QGraphicsWebView_titleChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QGraphicsWebView_iconChanged(intptr_t);
void miqt_exec_callback_QGraphicsWebView_statusBarMessage(intptr_t, struct miqt_string);
void miqt_exec_callback_QGraphicsWebView_linkClicked(intptr_t, QUrl*);
void miqt_exec_callback_QGraphicsWebView_setGeometry(QGraphicsWebView*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsWebView_updateGeometry(QGraphicsWebView*, intptr_t);
void miqt_exec_callback_QGraphicsWebView_paint(QGraphicsWebView*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
QVariant* miqt_exec_callback_QGraphicsWebView_itemChange(QGraphicsWebView*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsWebView_event(QGraphicsWebView*, intptr_t, QEvent*);
QSizeF* miqt_exec_callback_QGraphicsWebView_sizeHint(const QGraphicsWebView*, intptr_t, int, QSizeF*);
QVariant* miqt_exec_callback_QGraphicsWebView_inputMethodQuery(const QGraphicsWebView*, intptr_t, int);
void miqt_exec_callback_QGraphicsWebView_mousePressEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWebView_mouseDoubleClickEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWebView_mouseReleaseEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWebView_mouseMoveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWebView_hoverMoveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsWebView_hoverLeaveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsWebView_wheelEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsWebView_keyPressEvent(QGraphicsWebView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsWebView_keyReleaseEvent(QGraphicsWebView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsWebView_contextMenuEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsWebView_dragEnterEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWebView_dragLeaveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWebView_dragMoveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWebView_dropEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWebView_focusInEvent(QGraphicsWebView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsWebView_focusOutEvent(QGraphicsWebView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsWebView_inputMethodEvent(QGraphicsWebView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QGraphicsWebView_focusNextPrevChild(QGraphicsWebView*, intptr_t, bool);
bool miqt_exec_callback_QGraphicsWebView_sceneEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_getContentsMargins(const QGraphicsWebView*, intptr_t, double*, double*, double*, double*);
int miqt_exec_callback_QGraphicsWebView_type(const QGraphicsWebView*, intptr_t);
void miqt_exec_callback_QGraphicsWebView_paintWindowFrame(QGraphicsWebView*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
QRectF* miqt_exec_callback_QGraphicsWebView_boundingRect(const QGraphicsWebView*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsWebView_shape(const QGraphicsWebView*, intptr_t);
void miqt_exec_callback_QGraphicsWebView_initStyleOption(const QGraphicsWebView*, intptr_t, QStyleOption*);
QVariant* miqt_exec_callback_QGraphicsWebView_propertyChange(QGraphicsWebView*, intptr_t, struct miqt_string, QVariant*);
bool miqt_exec_callback_QGraphicsWebView_windowFrameEvent(QGraphicsWebView*, intptr_t, QEvent*);
int miqt_exec_callback_QGraphicsWebView_windowFrameSectionAt(const QGraphicsWebView*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsWebView_changeEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_closeEvent(QGraphicsWebView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QGraphicsWebView_hideEvent(QGraphicsWebView*, intptr_t, QHideEvent*);
void miqt_exec_callback_QGraphicsWebView_moveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneMoveEvent*);
void miqt_exec_callback_QGraphicsWebView_polishEvent(QGraphicsWebView*, intptr_t);
void miqt_exec_callback_QGraphicsWebView_resizeEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneResizeEvent*);
void miqt_exec_callback_QGraphicsWebView_showEvent(QGraphicsWebView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QGraphicsWebView_grabMouseEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_ungrabMouseEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_grabKeyboardEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_ungrabKeyboardEvent(QGraphicsWebView*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsWebView_eventFilter(QGraphicsWebView*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsWebView_timerEvent(QGraphicsWebView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsWebView_childEvent(QGraphicsWebView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsWebView_customEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_connectNotify(QGraphicsWebView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsWebView_disconnectNotify(QGraphicsWebView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsWebView_advance(QGraphicsWebView*, intptr_t, int);
bool miqt_exec_callback_QGraphicsWebView_contains(const QGraphicsWebView*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsWebView_collidesWithItem(const QGraphicsWebView*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsWebView_collidesWithPath(const QGraphicsWebView*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsWebView_isObscuredBy(const QGraphicsWebView*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsWebView_opaqueArea(const QGraphicsWebView*, intptr_t);
bool miqt_exec_callback_QGraphicsWebView_sceneEventFilter(QGraphicsWebView*, intptr_t, QGraphicsItem*, QEvent*);
void miqt_exec_callback_QGraphicsWebView_hoverEnterEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneHoverEvent*);
bool miqt_exec_callback_QGraphicsWebView_supportsExtension(const QGraphicsWebView*, intptr_t, int);
void miqt_exec_callback_QGraphicsWebView_setExtension(QGraphicsWebView*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsWebView_extension(const QGraphicsWebView*, intptr_t, QVariant*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsWebView final : public QGraphicsWebView {
public:

	MiqtVirtualQGraphicsWebView(): QGraphicsWebView() {};
	MiqtVirtualQGraphicsWebView(QGraphicsItem* parent): QGraphicsWebView(parent) {};

	virtual ~MiqtVirtualQGraphicsWebView() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (handle__setGeometry == 0) {
			QGraphicsWebView::setGeometry(rect);
			return;
		}
		
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);

		miqt_exec_callback_QGraphicsWebView_setGeometry(this, handle__setGeometry, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setGeometry(QRectF* rect) {

		QGraphicsWebView::setGeometry(*rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (handle__updateGeometry == 0) {
			QGraphicsWebView::updateGeometry();
			return;
		}
		

		miqt_exec_callback_QGraphicsWebView_updateGeometry(this, handle__updateGeometry);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_updateGeometry() {

		QGraphicsWebView::updateGeometry();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* param1, const QStyleOptionGraphicsItem* options, QWidget* widget) override {
		if (handle__paint == 0) {
			QGraphicsWebView::paint(param1, options, widget);
			return;
		}
		
		QPainter* sigval1 = param1;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) options;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsWebView_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paint(QPainter* param1, QStyleOptionGraphicsItem* options, QWidget* widget) {

		QGraphicsWebView::paint(param1, options, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QGraphicsWebView::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWebView_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_itemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsWebView::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QGraphicsWebView::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QGraphicsWebView::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (handle__sizeHint == 0) {
			return QGraphicsWebView::sizeHint(which, constraint);
		}
		
		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);

		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsWebView_sizeHint(this, handle__sizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSizeF* virtualbase_sizeHint(int which, QSizeF* constraint) const {

		return new QSizeF(QGraphicsWebView::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsWebView::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWebView_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QGraphicsWebView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* param1) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsWebView::mousePressEvent(param1);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* param1) {

		QGraphicsWebView::mousePressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* param1) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsWebView::mouseDoubleClickEvent(param1);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* param1) {

		QGraphicsWebView::mouseDoubleClickEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* param1) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsWebView::mouseReleaseEvent(param1);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* param1) {

		QGraphicsWebView::mouseReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* param1) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsWebView::mouseMoveEvent(param1);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* param1) {

		QGraphicsWebView::mouseMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* param1) override {
		if (handle__hoverMoveEvent == 0) {
			QGraphicsWebView::hoverMoveEvent(param1);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverMoveEvent(QGraphicsSceneHoverEvent* param1) {

		QGraphicsWebView::hoverMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* param1) override {
		if (handle__hoverLeaveEvent == 0) {
			QGraphicsWebView::hoverLeaveEvent(param1);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverLeaveEvent(QGraphicsSceneHoverEvent* param1) {

		QGraphicsWebView::hoverLeaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* param1) override {
		if (handle__wheelEvent == 0) {
			QGraphicsWebView::wheelEvent(param1);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* param1) {

		QGraphicsWebView::wheelEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsWebView::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* param1) {

		QGraphicsWebView::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsWebView::keyReleaseEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* param1) {

		QGraphicsWebView::keyReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* param1) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsWebView::contextMenuEvent(param1);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* param1) {

		QGraphicsWebView::contextMenuEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* param1) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsWebView::dragEnterEvent(param1);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* param1) {

		QGraphicsWebView::dragEnterEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* param1) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsWebView::dragLeaveEvent(param1);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* param1) {

		QGraphicsWebView::dragLeaveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* param1) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsWebView::dragMoveEvent(param1);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* param1) {

		QGraphicsWebView::dragMoveEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* param1) override {
		if (handle__dropEvent == 0) {
			QGraphicsWebView::dropEvent(param1);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* param1) {

		QGraphicsWebView::dropEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__focusInEvent == 0) {
			QGraphicsWebView::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* param1) {

		QGraphicsWebView::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsWebView::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* param1) {

		QGraphicsWebView::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsWebView::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QGraphicsWebView_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* param1) {

		QGraphicsWebView::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QGraphicsWebView::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_focusNextPrevChild(bool next) {

		return QGraphicsWebView::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* param1) override {
		if (handle__sceneEvent == 0) {
			return QGraphicsWebView::sceneEvent(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEvent(QEvent* param1) {

		return QGraphicsWebView::sceneEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__getContentsMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (handle__getContentsMargins == 0) {
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

		miqt_exec_callback_QGraphicsWebView_getContentsMargins(this, handle__getContentsMargins, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_getContentsMargins(double* left, double* top, double* right, double* bottom) const {

		QGraphicsWebView::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QGraphicsWebView::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsWebView_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_type() const {

		return QGraphicsWebView::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintWindowFrame = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paintWindowFrame == 0) {
			QGraphicsWebView::paintWindowFrame(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsWebView_paintWindowFrame(this, handle__paintWindowFrame, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paintWindowFrame(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsWebView::paintWindowFrame(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QGraphicsWebView::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsWebView_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRect() const {

		return new QRectF(QGraphicsWebView::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QGraphicsWebView::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsWebView_shape(this, handle__shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_shape() const {

		return new QPainterPath(QGraphicsWebView::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initStyleOption = 0;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOption* option) const override {
		if (handle__initStyleOption == 0) {
			QGraphicsWebView::initStyleOption(option);
			return;
		}
		
		QStyleOption* sigval1 = option;

		miqt_exec_callback_QGraphicsWebView_initStyleOption(this, handle__initStyleOption, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initStyleOption(QStyleOption* option) const {

		QGraphicsWebView::initStyleOption(option);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__propertyChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
		if (handle__propertyChange == 0) {
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

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWebView_propertyChange(this, handle__propertyChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_propertyChange(struct miqt_string propertyName, QVariant* value) {
		QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);

		return new QVariant(QGraphicsWebView::propertyChange(propertyName_QString, *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__windowFrameEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool windowFrameEvent(QEvent* e) override {
		if (handle__windowFrameEvent == 0) {
			return QGraphicsWebView::windowFrameEvent(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_windowFrameEvent(this, handle__windowFrameEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_windowFrameEvent(QEvent* e) {

		return QGraphicsWebView::windowFrameEvent(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__windowFrameSectionAt = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
		if (handle__windowFrameSectionAt == 0) {
			return QGraphicsWebView::windowFrameSectionAt(pos);
		}
		
		const QPointF& pos_ret = pos;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&pos_ret);

		int callback_return_value = miqt_exec_callback_QGraphicsWebView_windowFrameSectionAt(this, handle__windowFrameSectionAt, sigval1);

		return static_cast<Qt::WindowFrameSection>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_windowFrameSectionAt(QPointF* pos) const {

		Qt::WindowFrameSection _ret = QGraphicsWebView::windowFrameSectionAt(*pos);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (handle__changeEvent == 0) {
			QGraphicsWebView::changeEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_changeEvent(this, handle__changeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_changeEvent(QEvent* event) {

		QGraphicsWebView::changeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QGraphicsWebView::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_closeEvent(this, handle__closeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_closeEvent(QCloseEvent* event) {

		QGraphicsWebView::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QGraphicsWebView::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_hideEvent(this, handle__hideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hideEvent(QHideEvent* event) {

		QGraphicsWebView::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QGraphicsWebView::moveEvent(event);
			return;
		}
		
		QGraphicsSceneMoveEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_moveEvent(this, handle__moveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_moveEvent(QGraphicsSceneMoveEvent* event) {

		QGraphicsWebView::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__polishEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void polishEvent() override {
		if (handle__polishEvent == 0) {
			QGraphicsWebView::polishEvent();
			return;
		}
		

		miqt_exec_callback_QGraphicsWebView_polishEvent(this, handle__polishEvent);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_polishEvent() {

		QGraphicsWebView::polishEvent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QGraphicsWebView::resizeEvent(event);
			return;
		}
		
		QGraphicsSceneResizeEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_resizeEvent(this, handle__resizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resizeEvent(QGraphicsSceneResizeEvent* event) {

		QGraphicsWebView::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QGraphicsWebView::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_showEvent(this, handle__showEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_showEvent(QShowEvent* event) {

		QGraphicsWebView::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__grabMouseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void grabMouseEvent(QEvent* event) override {
		if (handle__grabMouseEvent == 0) {
			QGraphicsWebView::grabMouseEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_grabMouseEvent(this, handle__grabMouseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_grabMouseEvent(QEvent* event) {

		QGraphicsWebView::grabMouseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ungrabMouseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void ungrabMouseEvent(QEvent* event) override {
		if (handle__ungrabMouseEvent == 0) {
			QGraphicsWebView::ungrabMouseEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_ungrabMouseEvent(this, handle__ungrabMouseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ungrabMouseEvent(QEvent* event) {

		QGraphicsWebView::ungrabMouseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__grabKeyboardEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void grabKeyboardEvent(QEvent* event) override {
		if (handle__grabKeyboardEvent == 0) {
			QGraphicsWebView::grabKeyboardEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_grabKeyboardEvent(this, handle__grabKeyboardEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_grabKeyboardEvent(QEvent* event) {

		QGraphicsWebView::grabKeyboardEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ungrabKeyboardEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void ungrabKeyboardEvent(QEvent* event) override {
		if (handle__ungrabKeyboardEvent == 0) {
			QGraphicsWebView::ungrabKeyboardEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_ungrabKeyboardEvent(this, handle__ungrabKeyboardEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ungrabKeyboardEvent(QEvent* event) {

		QGraphicsWebView::ungrabKeyboardEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGraphicsWebView::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QGraphicsWebView::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGraphicsWebView::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QGraphicsWebView::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGraphicsWebView::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QGraphicsWebView::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGraphicsWebView::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QGraphicsWebView::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGraphicsWebView::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsWebView_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QGraphicsWebView::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGraphicsWebView::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsWebView_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QGraphicsWebView::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QGraphicsWebView::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsWebView_advance(this, handle__advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance(int phase) {

		QGraphicsWebView::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QGraphicsWebView::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_contains(QPointF* point) const {

		return QGraphicsWebView::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QGraphicsWebView::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsWebView::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QGraphicsWebView::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsWebView::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QGraphicsWebView::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isObscuredBy(QGraphicsItem* item) const {

		return QGraphicsWebView::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QGraphicsWebView::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsWebView_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_opaqueArea() const {

		return new QPainterPath(QGraphicsWebView::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QGraphicsWebView::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsWebView::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QGraphicsWebView::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsWebView_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsWebView::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QGraphicsWebView::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QGraphicsWebView::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QGraphicsWebView::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsWebView_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setExtension(int extension, QVariant* variant) {

		QGraphicsWebView::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QGraphicsWebView::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWebView_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(QVariant* variant) const {

		return new QVariant(QGraphicsWebView::extension(*variant));

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsWebView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGraphicsWebView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsWebView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsWebView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsWebView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend void QGraphicsWebView_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsWebView_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsWebView_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsWebView_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
	friend void QGraphicsWebView_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
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

QMetaObject* QGraphicsWebView_metaObject(const QGraphicsWebView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsWebView_metacast(QGraphicsWebView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsWebView_tr(const char* s) {
	QString _ret = QGraphicsWebView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWebView_trUtf8(const char* s) {
	QString _ret = QGraphicsWebView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebPage* QGraphicsWebView_page(const QGraphicsWebView* self) {
	return self->page();
}

void QGraphicsWebView_setPage(QGraphicsWebView* self, QWebPage* page) {
	self->setPage(page);
}

QUrl* QGraphicsWebView_url(const QGraphicsWebView* self) {
	return new QUrl(self->url());
}

void QGraphicsWebView_setUrl(QGraphicsWebView* self, QUrl* url) {
	self->setUrl(*url);
}

struct miqt_string QGraphicsWebView_title(const QGraphicsWebView* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIcon* QGraphicsWebView_icon(const QGraphicsWebView* self) {
	return new QIcon(self->icon());
}

double QGraphicsWebView_zoomFactor(const QGraphicsWebView* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

void QGraphicsWebView_setZoomFactor(QGraphicsWebView* self, double zoomFactor) {
	self->setZoomFactor(static_cast<qreal>(zoomFactor));
}

bool QGraphicsWebView_isModified(const QGraphicsWebView* self) {
	return self->isModified();
}

void QGraphicsWebView_load(QGraphicsWebView* self, QUrl* url) {
	self->load(*url);
}

void QGraphicsWebView_loadWithRequest(QGraphicsWebView* self, QNetworkRequest* request) {
	self->load(*request);
}

void QGraphicsWebView_setHtml(QGraphicsWebView* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

void QGraphicsWebView_setContent(QGraphicsWebView* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->setContent(data_QByteArray);
}

QWebHistory* QGraphicsWebView_history(const QGraphicsWebView* self) {
	return self->history();
}

QWebSettings* QGraphicsWebView_settings(const QGraphicsWebView* self) {
	return self->settings();
}

QAction* QGraphicsWebView_pageAction(const QGraphicsWebView* self, int action) {
	return self->pageAction(static_cast<QWebPage::WebAction>(action));
}

void QGraphicsWebView_triggerPageAction(QGraphicsWebView* self, int action) {
	self->triggerPageAction(static_cast<QWebPage::WebAction>(action));
}

bool QGraphicsWebView_findText(QGraphicsWebView* self, struct miqt_string subString) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return self->findText(subString_QString);
}

bool QGraphicsWebView_resizesToContents(const QGraphicsWebView* self) {
	return self->resizesToContents();
}

void QGraphicsWebView_setResizesToContents(QGraphicsWebView* self, bool enabled) {
	self->setResizesToContents(enabled);
}

bool QGraphicsWebView_isTiledBackingStoreFrozen(const QGraphicsWebView* self) {
	return self->isTiledBackingStoreFrozen();
}

void QGraphicsWebView_setTiledBackingStoreFrozen(QGraphicsWebView* self, bool frozen) {
	self->setTiledBackingStoreFrozen(frozen);
}

void QGraphicsWebView_setGeometry(QGraphicsWebView* self, QRectF* rect) {
	self->setGeometry(*rect);
}

void QGraphicsWebView_updateGeometry(QGraphicsWebView* self) {
	self->updateGeometry();
}

void QGraphicsWebView_paint(QGraphicsWebView* self, QPainter* param1, QStyleOptionGraphicsItem* options, QWidget* widget) {
	self->paint(param1, options, widget);
}

QVariant* QGraphicsWebView_itemChange(QGraphicsWebView* self, int change, QVariant* value) {
	return new QVariant(self->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

bool QGraphicsWebView_event(QGraphicsWebView* self, QEvent* param1) {
	return self->event(param1);
}

QSizeF* QGraphicsWebView_sizeHint(const QGraphicsWebView* self, int which, QSizeF* constraint) {
	return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

QVariant* QGraphicsWebView_inputMethodQuery(const QGraphicsWebView* self, int query) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

int QGraphicsWebView_renderHints(const QGraphicsWebView* self) {
	QPainter::RenderHints _ret = self->renderHints();
	return static_cast<int>(_ret);
}

void QGraphicsWebView_setRenderHints(QGraphicsWebView* self, int renderHints) {
	self->setRenderHints(static_cast<QPainter::RenderHints>(renderHints));
}

void QGraphicsWebView_setRenderHint(QGraphicsWebView* self, int param1) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(param1));
}

void QGraphicsWebView_stop(QGraphicsWebView* self) {
	self->stop();
}

void QGraphicsWebView_back(QGraphicsWebView* self) {
	self->back();
}

void QGraphicsWebView_forward(QGraphicsWebView* self) {
	self->forward();
}

void QGraphicsWebView_reload(QGraphicsWebView* self) {
	self->reload();
}

void QGraphicsWebView_loadStarted(QGraphicsWebView* self) {
	self->loadStarted();
}

void QGraphicsWebView_connect_loadStarted(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)()>(&QGraphicsWebView::loadStarted), self, [=]() {
		miqt_exec_callback_QGraphicsWebView_loadStarted(slot);
	});
}

void QGraphicsWebView_loadFinished(QGraphicsWebView* self, bool param1) {
	self->loadFinished(param1);
}

void QGraphicsWebView_connect_loadFinished(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(bool)>(&QGraphicsWebView::loadFinished), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_loadFinished(slot, sigval1);
	});
}

void QGraphicsWebView_loadProgress(QGraphicsWebView* self, int progress) {
	self->loadProgress(static_cast<int>(progress));
}

void QGraphicsWebView_connect_loadProgress(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(int)>(&QGraphicsWebView::loadProgress), self, [=](int progress) {
		int sigval1 = progress;
		miqt_exec_callback_QGraphicsWebView_loadProgress(slot, sigval1);
	});
}

void QGraphicsWebView_urlChanged(QGraphicsWebView* self, QUrl* param1) {
	self->urlChanged(*param1);
}

void QGraphicsWebView_connect_urlChanged(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(const QUrl&)>(&QGraphicsWebView::urlChanged), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QGraphicsWebView_urlChanged(slot, sigval1);
	});
}

void QGraphicsWebView_titleChanged(QGraphicsWebView* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->titleChanged(param1_QString);
}

void QGraphicsWebView_connect_titleChanged(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(const QString&)>(&QGraphicsWebView::titleChanged), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QGraphicsWebView_titleChanged(slot, sigval1);
	});
}

void QGraphicsWebView_iconChanged(QGraphicsWebView* self) {
	self->iconChanged();
}

void QGraphicsWebView_connect_iconChanged(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)()>(&QGraphicsWebView::iconChanged), self, [=]() {
		miqt_exec_callback_QGraphicsWebView_iconChanged(slot);
	});
}

void QGraphicsWebView_statusBarMessage(QGraphicsWebView* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->statusBarMessage(message_QString);
}

void QGraphicsWebView_connect_statusBarMessage(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(const QString&)>(&QGraphicsWebView::statusBarMessage), self, [=](const QString& message) {
		const QString message_ret = message;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray message_b = message_ret.toUtf8();
		struct miqt_string message_ms;
		message_ms.len = message_b.length();
		message_ms.data = static_cast<char*>(malloc(message_ms.len));
		memcpy(message_ms.data, message_b.data(), message_ms.len);
		struct miqt_string sigval1 = message_ms;
		miqt_exec_callback_QGraphicsWebView_statusBarMessage(slot, sigval1);
	});
}

void QGraphicsWebView_linkClicked(QGraphicsWebView* self, QUrl* param1) {
	self->linkClicked(*param1);
}

void QGraphicsWebView_connect_linkClicked(QGraphicsWebView* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(const QUrl&)>(&QGraphicsWebView::linkClicked), self, [=](const QUrl& param1) {
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QGraphicsWebView_linkClicked(slot, sigval1);
	});
}

struct miqt_string QGraphicsWebView_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsWebView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWebView_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsWebView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWebView_trUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsWebView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWebView_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsWebView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsWebView_load2(QGraphicsWebView* self, QNetworkRequest* request, int operation) {
	self->load(*request, static_cast<QNetworkAccessManager::Operation>(operation));
}

void QGraphicsWebView_load3(QGraphicsWebView* self, QNetworkRequest* request, int operation, struct miqt_string body) {
	QByteArray body_QByteArray(body.data, body.len);
	self->load(*request, static_cast<QNetworkAccessManager::Operation>(operation), body_QByteArray);
}

void QGraphicsWebView_setHtml2(QGraphicsWebView* self, struct miqt_string html, QUrl* baseUrl) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString, *baseUrl);
}

void QGraphicsWebView_setContent2(QGraphicsWebView* self, struct miqt_string data, struct miqt_string mimeType) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString);
}

void QGraphicsWebView_setContent3(QGraphicsWebView* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString, *baseUrl);
}

void QGraphicsWebView_triggerPageAction2(QGraphicsWebView* self, int action, bool checked) {
	self->triggerPageAction(static_cast<QWebPage::WebAction>(action), checked);
}

bool QGraphicsWebView_findText2(QGraphicsWebView* self, struct miqt_string subString, int options) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return self->findText(subString_QString, static_cast<QWebPage::FindFlags>(options));
}

void QGraphicsWebView_setRenderHint2(QGraphicsWebView* self, int param1, bool enabled) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(param1), enabled);
}

bool QGraphicsWebView_override_virtual_setGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setGeometry = slot;
	return true;
}

void QGraphicsWebView_virtualbase_setGeometry(void* self, QRectF* rect) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_setGeometry(rect);
}

bool QGraphicsWebView_override_virtual_updateGeometry(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__updateGeometry = slot;
	return true;
}

void QGraphicsWebView_virtualbase_updateGeometry(void* self) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_updateGeometry();
}

bool QGraphicsWebView_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

void QGraphicsWebView_virtualbase_paint(void* self, QPainter* param1, QStyleOptionGraphicsItem* options, QWidget* widget) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_paint(param1, options, widget);
}

bool QGraphicsWebView_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QGraphicsWebView_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_itemChange(change, value);
}

bool QGraphicsWebView_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_event(param1);
}

bool QGraphicsWebView_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSizeF* QGraphicsWebView_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_sizeHint(which, constraint);
}

bool QGraphicsWebView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsWebView_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QGraphicsWebView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_mousePressEvent(param1);
}

bool QGraphicsWebView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_mouseDoubleClickEvent(param1);
}

bool QGraphicsWebView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_mouseReleaseEvent(param1);
}

bool QGraphicsWebView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_mouseMoveEvent(param1);
}

bool QGraphicsWebView_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_hoverMoveEvent(param1);
}

bool QGraphicsWebView_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_hoverLeaveEvent(param1);
}

bool QGraphicsWebView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_wheelEvent(param1);
}

bool QGraphicsWebView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_keyPressEvent(param1);
}

bool QGraphicsWebView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_keyReleaseEvent(param1);
}

bool QGraphicsWebView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_contextMenuEvent(param1);
}

bool QGraphicsWebView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_dragEnterEvent(param1);
}

bool QGraphicsWebView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_dragLeaveEvent(param1);
}

bool QGraphicsWebView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_dragMoveEvent(param1);
}

bool QGraphicsWebView_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_dropEvent(param1);
}

bool QGraphicsWebView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_focusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_focusInEvent(param1);
}

bool QGraphicsWebView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_focusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_focusOutEvent(param1);
}

bool QGraphicsWebView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_inputMethodEvent(param1);
}

bool QGraphicsWebView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_focusNextPrevChild(next);
}

bool QGraphicsWebView_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_sceneEvent(void* self, QEvent* param1) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_sceneEvent(param1);
}

bool QGraphicsWebView_override_virtual_getContentsMargins(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__getContentsMargins = slot;
	return true;
}

void QGraphicsWebView_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_getContentsMargins(left, top, right, bottom);
}

bool QGraphicsWebView_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QGraphicsWebView_virtualbase_type(const void* self) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_type();
}

bool QGraphicsWebView_override_virtual_paintWindowFrame(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintWindowFrame = slot;
	return true;
}

void QGraphicsWebView_virtualbase_paintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_paintWindowFrame(painter, option, widget);
}

bool QGraphicsWebView_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QGraphicsWebView_virtualbase_boundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_boundingRect();
}

bool QGraphicsWebView_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QGraphicsWebView_virtualbase_shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_shape();
}

bool QGraphicsWebView_override_virtual_initStyleOption(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initStyleOption = slot;
	return true;
}

void QGraphicsWebView_virtualbase_initStyleOption(const void* self, QStyleOption* option) {
	( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_initStyleOption(option);
}

bool QGraphicsWebView_override_virtual_propertyChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__propertyChange = slot;
	return true;
}

QVariant* QGraphicsWebView_virtualbase_propertyChange(void* self, struct miqt_string propertyName, QVariant* value) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_propertyChange(propertyName, value);
}

bool QGraphicsWebView_override_virtual_windowFrameEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__windowFrameEvent = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_windowFrameEvent(void* self, QEvent* e) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_windowFrameEvent(e);
}

bool QGraphicsWebView_override_virtual_windowFrameSectionAt(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__windowFrameSectionAt = slot;
	return true;
}

int QGraphicsWebView_virtualbase_windowFrameSectionAt(const void* self, QPointF* pos) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_windowFrameSectionAt(pos);
}

bool QGraphicsWebView_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__changeEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_changeEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_changeEvent(event);
}

bool QGraphicsWebView_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__closeEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_closeEvent(event);
}

bool QGraphicsWebView_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hideEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_hideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_hideEvent(event);
}

bool QGraphicsWebView_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_moveEvent(void* self, QGraphicsSceneMoveEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_moveEvent(event);
}

bool QGraphicsWebView_override_virtual_polishEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__polishEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_polishEvent(void* self) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_polishEvent();
}

bool QGraphicsWebView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resizeEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_resizeEvent(void* self, QGraphicsSceneResizeEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_resizeEvent(event);
}

bool QGraphicsWebView_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__showEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_showEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_showEvent(event);
}

bool QGraphicsWebView_override_virtual_grabMouseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__grabMouseEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_grabMouseEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_grabMouseEvent(event);
}

bool QGraphicsWebView_override_virtual_ungrabMouseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ungrabMouseEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_ungrabMouseEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_ungrabMouseEvent(event);
}

bool QGraphicsWebView_override_virtual_grabKeyboardEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__grabKeyboardEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_grabKeyboardEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_grabKeyboardEvent(event);
}

bool QGraphicsWebView_override_virtual_ungrabKeyboardEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ungrabKeyboardEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_ungrabKeyboardEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_ungrabKeyboardEvent(event);
}

bool QGraphicsWebView_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QGraphicsWebView_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_timerEvent(event);
}

bool QGraphicsWebView_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_childEvent(event);
}

bool QGraphicsWebView_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_customEvent(event);
}

bool QGraphicsWebView_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QGraphicsWebView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_connectNotify(signal);
}

bool QGraphicsWebView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGraphicsWebView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_disconnectNotify(signal);
}

bool QGraphicsWebView_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QGraphicsWebView_virtualbase_advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_advance(phase);
}

bool QGraphicsWebView_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_contains(point);
}

bool QGraphicsWebView_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_collidesWithItem(other, mode);
}

bool QGraphicsWebView_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_collidesWithPath(path, mode);
}

bool QGraphicsWebView_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_isObscuredBy(item);
}

bool QGraphicsWebView_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsWebView_virtualbase_opaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_opaqueArea();
}

bool QGraphicsWebView_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_sceneEventFilter(watched, event);
}

bool QGraphicsWebView_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QGraphicsWebView_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_hoverEnterEvent(event);
}

bool QGraphicsWebView_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QGraphicsWebView_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_supportsExtension(extension);
}

bool QGraphicsWebView_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QGraphicsWebView_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_setExtension(extension, variant);
}

bool QGraphicsWebView_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QGraphicsWebView_virtualbase_extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsWebView*)(self) )->virtualbase_extension(variant);
}

void QGraphicsWebView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

QObject* QGraphicsWebView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QGraphicsWebView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QGraphicsWebView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QGraphicsWebView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QGraphicsWebView_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QGraphicsWebView_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QGraphicsWebView_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QGraphicsWebView_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setGraphicsItem(item);

}

void QGraphicsWebView_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOwnedByLayout(ownedByLayout);

}

void QGraphicsWebView_delete(QGraphicsWebView* self) {
	delete self;
}

